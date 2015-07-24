ea = ScreenEA()
TotalFuc = 0
for function_ea in Functions(SegStart(ea),SegEnd(ea)):
	print hex(function_ea),GetFunctionName(function_ea)
	TotalFuc = TotalFuc + 1

print "Total Functions Number:",TotalFuc

instruction_dict = dict()
for seg_ea in Segments():
	#print hex(seg_ea)
	for head in Heads(seg_ea,SegEnd(seg_ea)):
		if isCode(GetFlags(head)):
			mnem = GetMnem(head)
			instruction_dict[mnem] = instruction_dict.get(mnem,0)+1

sorted_dict = map(lambda x:(x[1],x[0]),instruction_dict.items())
sorted_dict.sort()

for mnemonic,count in sorted_dict:
	print mnemonic,count