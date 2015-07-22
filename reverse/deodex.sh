#!/bin/bash
#lhm
#convert odexed apk&odex to classes.dex/smali-code/res-dir
BAKSMALI_CMD="/Users/ming/software/smali/baksmali"
SMALI_CMD="java -jar /Users/ming/software/smali/smali-2.0.3.jar"
APKTOOL_CMD="/Users/ming/software/apktool-install-macosx-r05-ibot/apktool"


if [[ -a $1.odex ]] && [[ -a $1.apk ]]; then
	#statements
	echo "deodex-ing..."
	$BAKSMALI_CMD -a 19 -x $1.odex -d ../../framework_jar/
	echo "smali-ing..."
	$SMALI_CMD -a 19 ./out -o classes.dex
	echo "baksmali-ing..."
	$APKTOOL_CMD d --no-src -f $1.apk
else
	echo "Please input the right name of apk&odex file(the two name must be the same)"
	echo "example: ./deodex.sh test"
fi
