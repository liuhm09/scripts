  1 /*
  2  *  arch/arm/include/asm/unistd.h
  3  *
  4  *  Copyright (C) 2001-2005 Russell King
  5  *
  6  * This program is free software; you can redistribute it and/or modify
  7  * it under the terms of the GNU General Public License version 2 as
  8  * published by the Free Software Foundation.
  9  *
 10  * Please forward _all_ changes to this file to rmk@arm.linux.org.uk,
 11  * no matter what the change is.  Thanks!
 12  */
 13 #ifndef __ASM_ARM_UNISTD_H
 14 #define __ASM_ARM_UNISTD_H
 15 
 16 #define __NR_OABI_SYSCALL_BASE  0x900000
 17 
 18 #if defined(__thumb__) || defined(__ARM_EABI__)
 19 #define __NR_SYSCALL_BASE       0
 20 #else
 21 #define __NR_SYSCALL_BASE       __NR_OABI_SYSCALL_BASE
 22 #endif
 23 
 24 /*
 25  * This file contains the system call numbers.
 26  */
 27 
 28 #define __NR_restart_syscall            (__NR_SYSCALL_BASE+  0)
 29 #define __NR_exit                       (__NR_SYSCALL_BASE+  1)
 30 #define __NR_fork                       (__NR_SYSCALL_BASE+  2)
 31 #define __NR_read                       (__NR_SYSCALL_BASE+  3)
 32 #define __NR_write                      (__NR_SYSCALL_BASE+  4)
 33 #define __NR_open                       (__NR_SYSCALL_BASE+  5)
 34 #define __NR_close                      (__NR_SYSCALL_BASE+  6)
 35                                         /* 7 was sys_waitpid */
 36 #define __NR_creat                      (__NR_SYSCALL_BASE+  8)
 37 #define __NR_link                       (__NR_SYSCALL_BASE+  9)
 38 #define __NR_unlink                     (__NR_SYSCALL_BASE+ 10)
 39 #define __NR_execve                     (__NR_SYSCALL_BASE+ 11)
 40 #define __NR_chdir                      (__NR_SYSCALL_BASE+ 12)
 41 #define __NR_time                       (__NR_SYSCALL_BASE+ 13)
 42 #define __NR_mknod                      (__NR_SYSCALL_BASE+ 14)
 43 #define __NR_chmod                      (__NR_SYSCALL_BASE+ 15)
 44 #define __NR_lchown                     (__NR_SYSCALL_BASE+ 16)
 45                                         /* 17 was sys_break */
 46                                         /* 18 was sys_stat */
 47 #define __NR_lseek                      (__NR_SYSCALL_BASE+ 19)
 48 #define __NR_getpid                     (__NR_SYSCALL_BASE+ 20)
 49 #define __NR_mount                      (__NR_SYSCALL_BASE+ 21)
 50 #define __NR_umount                     (__NR_SYSCALL_BASE+ 22)
 51 #define __NR_setuid                     (__NR_SYSCALL_BASE+ 23)
 52 #define __NR_getuid                     (__NR_SYSCALL_BASE+ 24)
 53 #define __NR_stime                      (__NR_SYSCALL_BASE+ 25)
 54 #define __NR_ptrace                     (__NR_SYSCALL_BASE+ 26)
 55 #define __NR_alarm                      (__NR_SYSCALL_BASE+ 27)
 56                                         /* 28 was sys_fstat */
 57 #define __NR_pause                      (__NR_SYSCALL_BASE+ 29)
 58 #define __NR_utime                      (__NR_SYSCALL_BASE+ 30)
 59                                         /* 31 was sys_stty */
 60                                         /* 32 was sys_gtty */
 61 #define __NR_access                     (__NR_SYSCALL_BASE+ 33)
 62 #define __NR_nice                       (__NR_SYSCALL_BASE+ 34)
 63                                         /* 35 was sys_ftime */
 64 #define __NR_sync                       (__NR_SYSCALL_BASE+ 36)
 65 #define __NR_kill                       (__NR_SYSCALL_BASE+ 37)
 66 #define __NR_rename                     (__NR_SYSCALL_BASE+ 38)
 67 #define __NR_mkdir                      (__NR_SYSCALL_BASE+ 39)
 68 #define __NR_rmdir                      (__NR_SYSCALL_BASE+ 40)
 69 #define __NR_dup                        (__NR_SYSCALL_BASE+ 41)
 70 #define __NR_pipe                       (__NR_SYSCALL_BASE+ 42)
 71 #define __NR_times                      (__NR_SYSCALL_BASE+ 43)
 72                                         /* 44 was sys_prof */
 73 #define __NR_brk                        (__NR_SYSCALL_BASE+ 45)
 74 #define __NR_setgid                     (__NR_SYSCALL_BASE+ 46)
 75 #define __NR_getgid                     (__NR_SYSCALL_BASE+ 47)
 76                                         /* 48 was sys_signal */
 77 #define __NR_geteuid                    (__NR_SYSCALL_BASE+ 49)
 78 #define __NR_getegid                    (__NR_SYSCALL_BASE+ 50)
 79 #define __NR_acct                       (__NR_SYSCALL_BASE+ 51)
 80 #define __NR_umount2                    (__NR_SYSCALL_BASE+ 52)
 81                                         /* 53 was sys_lock */
 82 #define __NR_ioctl                      (__NR_SYSCALL_BASE+ 54)
 83 #define __NR_fcntl                      (__NR_SYSCALL_BASE+ 55)
 84                                         /* 56 was sys_mpx */
 85 #define __NR_setpgid                    (__NR_SYSCALL_BASE+ 57)
 86                                         /* 58 was sys_ulimit */
 87                                         /* 59 was sys_olduname */
 88 #define __NR_umask                      (__NR_SYSCALL_BASE+ 60)
 89 #define __NR_chroot                     (__NR_SYSCALL_BASE+ 61)
 90 #define __NR_ustat                      (__NR_SYSCALL_BASE+ 62)
 91 #define __NR_dup2                       (__NR_SYSCALL_BASE+ 63)
 92 #define __NR_getppid                    (__NR_SYSCALL_BASE+ 64)
 93 #define __NR_getpgrp                    (__NR_SYSCALL_BASE+ 65)
 94 #define __NR_setsid                     (__NR_SYSCALL_BASE+ 66)
 95 #define __NR_sigaction                  (__NR_SYSCALL_BASE+ 67)
 96                                         /* 68 was sys_sgetmask */
 97                                         /* 69 was sys_ssetmask */
 98 #define __NR_setreuid                   (__NR_SYSCALL_BASE+ 70)
 99 #define __NR_setregid                   (__NR_SYSCALL_BASE+ 71)
100 #define __NR_sigsuspend                 (__NR_SYSCALL_BASE+ 72)
101 #define __NR_sigpending                 (__NR_SYSCALL_BASE+ 73)
102 #define __NR_sethostname                (__NR_SYSCALL_BASE+ 74)
103 #define __NR_setrlimit                  (__NR_SYSCALL_BASE+ 75)
104 #define __NR_getrlimit                  (__NR_SYSCALL_BASE+ 76) /* Back compat 2GB limited rlimit */
105 #define __NR_getrusage                  (__NR_SYSCALL_BASE+ 77)
106 #define __NR_gettimeofday               (__NR_SYSCALL_BASE+ 78)
107 #define __NR_settimeofday               (__NR_SYSCALL_BASE+ 79)
108 #define __NR_getgroups                  (__NR_SYSCALL_BASE+ 80)
109 #define __NR_setgroups                  (__NR_SYSCALL_BASE+ 81)
110 #define __NR_select                     (__NR_SYSCALL_BASE+ 82)
111 #define __NR_symlink                    (__NR_SYSCALL_BASE+ 83)
112                                         /* 84 was sys_lstat */
113 #define __NR_readlink                   (__NR_SYSCALL_BASE+ 85)
114 #define __NR_uselib                     (__NR_SYSCALL_BASE+ 86)
115 #define __NR_swapon                     (__NR_SYSCALL_BASE+ 87)
116 #define __NR_reboot                     (__NR_SYSCALL_BASE+ 88)
117 #define __NR_readdir                    (__NR_SYSCALL_BASE+ 89)
118 #define __NR_mmap                       (__NR_SYSCALL_BASE+ 90)
119 #define __NR_munmap                     (__NR_SYSCALL_BASE+ 91)
120 #define __NR_truncate                   (__NR_SYSCALL_BASE+ 92)
121 #define __NR_ftruncate                  (__NR_SYSCALL_BASE+ 93)
122 #define __NR_fchmod                     (__NR_SYSCALL_BASE+ 94)
123 #define __NR_fchown                     (__NR_SYSCALL_BASE+ 95)
124 #define __NR_getpriority                (__NR_SYSCALL_BASE+ 96)
125 #define __NR_setpriority                (__NR_SYSCALL_BASE+ 97)
126                                         /* 98 was sys_profil */
127 #define __NR_statfs                     (__NR_SYSCALL_BASE+ 99)
128 #define __NR_fstatfs                    (__NR_SYSCALL_BASE+100)
129                                         /* 101 was sys_ioperm */
130 #define __NR_socketcall                 (__NR_SYSCALL_BASE+102)
131 #define __NR_syslog                     (__NR_SYSCALL_BASE+103)
132 #define __NR_setitimer                  (__NR_SYSCALL_BASE+104)
133 #define __NR_getitimer                  (__NR_SYSCALL_BASE+105)
134 #define __NR_stat                       (__NR_SYSCALL_BASE+106)
135 #define __NR_lstat                      (__NR_SYSCALL_BASE+107)
136 #define __NR_fstat                      (__NR_SYSCALL_BASE+108)
137                                         /* 109 was sys_uname */
138                                         /* 110 was sys_iopl */
139 #define __NR_vhangup                    (__NR_SYSCALL_BASE+111)
140                                         /* 112 was sys_idle */
141 #define __NR_syscall                    (__NR_SYSCALL_BASE+113) /* syscall to call a syscall! */
142 #define __NR_wait4                      (__NR_SYSCALL_BASE+114)
143 #define __NR_swapoff                    (__NR_SYSCALL_BASE+115)
144 #define __NR_sysinfo                    (__NR_SYSCALL_BASE+116)
145 #define __NR_ipc                        (__NR_SYSCALL_BASE+117)
146 #define __NR_fsync                      (__NR_SYSCALL_BASE+118)
147 #define __NR_sigreturn                  (__NR_SYSCALL_BASE+119)
148 #define __NR_clone                      (__NR_SYSCALL_BASE+120)
149 #define __NR_setdomainname              (__NR_SYSCALL_BASE+121)
150 #define __NR_uname                      (__NR_SYSCALL_BASE+122)
151                                         /* 123 was sys_modify_ldt */
152 #define __NR_adjtimex                   (__NR_SYSCALL_BASE+124)
153 #define __NR_mprotect                   (__NR_SYSCALL_BASE+125)
154 #define __NR_sigprocmask                (__NR_SYSCALL_BASE+126)
155                                         /* 127 was sys_create_module */
156 #define __NR_init_module                (__NR_SYSCALL_BASE+128)
157 #define __NR_delete_module              (__NR_SYSCALL_BASE+129)
158                                         /* 130 was sys_get_kernel_syms */
159 #define __NR_quotactl                   (__NR_SYSCALL_BASE+131)
160 #define __NR_getpgid                    (__NR_SYSCALL_BASE+132)
161 #define __NR_fchdir                     (__NR_SYSCALL_BASE+133)
162 #define __NR_bdflush                    (__NR_SYSCALL_BASE+134)
163 #define __NR_sysfs                      (__NR_SYSCALL_BASE+135)
164 #define __NR_personality                (__NR_SYSCALL_BASE+136)
165                                         /* 137 was sys_afs_syscall */
166 #define __NR_setfsuid                   (__NR_SYSCALL_BASE+138)
167 #define __NR_setfsgid                   (__NR_SYSCALL_BASE+139)
168 #define __NR__llseek                    (__NR_SYSCALL_BASE+140)
169 #define __NR_getdents                   (__NR_SYSCALL_BASE+141)
170 #define __NR__newselect                 (__NR_SYSCALL_BASE+142)
171 #define __NR_flock                      (__NR_SYSCALL_BASE+143)
172 #define __NR_msync                      (__NR_SYSCALL_BASE+144)
173 #define __NR_readv                      (__NR_SYSCALL_BASE+145)
174 #define __NR_writev                     (__NR_SYSCALL_BASE+146)
175 #define __NR_getsid                     (__NR_SYSCALL_BASE+147)
176 #define __NR_fdatasync                  (__NR_SYSCALL_BASE+148)
177 #define __NR__sysctl                    (__NR_SYSCALL_BASE+149)
178 #define __NR_mlock                      (__NR_SYSCALL_BASE+150)
179 #define __NR_munlock                    (__NR_SYSCALL_BASE+151)
180 #define __NR_mlockall                   (__NR_SYSCALL_BASE+152)
181 #define __NR_munlockall                 (__NR_SYSCALL_BASE+153)
182 #define __NR_sched_setparam             (__NR_SYSCALL_BASE+154)
183 #define __NR_sched_getparam             (__NR_SYSCALL_BASE+155)
184 #define __NR_sched_setscheduler         (__NR_SYSCALL_BASE+156)
185 #define __NR_sched_getscheduler         (__NR_SYSCALL_BASE+157)
186 #define __NR_sched_yield                (__NR_SYSCALL_BASE+158)
187 #define __NR_sched_get_priority_max     (__NR_SYSCALL_BASE+159)
188 #define __NR_sched_get_priority_min     (__NR_SYSCALL_BASE+160)
189 #define __NR_sched_rr_get_interval      (__NR_SYSCALL_BASE+161)
190 #define __NR_nanosleep                  (__NR_SYSCALL_BASE+162)
191 #define __NR_mremap                     (__NR_SYSCALL_BASE+163)
192 #define __NR_setresuid                  (__NR_SYSCALL_BASE+164)
193 #define __NR_getresuid                  (__NR_SYSCALL_BASE+165)
194                                         /* 166 was sys_vm86 */
195                                         /* 167 was sys_query_module */
196 #define __NR_poll                       (__NR_SYSCALL_BASE+168)
197 #define __NR_nfsservctl                 (__NR_SYSCALL_BASE+169)
198 #define __NR_setresgid                  (__NR_SYSCALL_BASE+170)
199 #define __NR_getresgid                  (__NR_SYSCALL_BASE+171)
200 #define __NR_prctl                      (__NR_SYSCALL_BASE+172)
201 #define __NR_rt_sigreturn               (__NR_SYSCALL_BASE+173)
202 #define __NR_rt_sigaction               (__NR_SYSCALL_BASE+174)
203 #define __NR_rt_sigprocmask             (__NR_SYSCALL_BASE+175)
204 #define __NR_rt_sigpending              (__NR_SYSCALL_BASE+176)
205 #define __NR_rt_sigtimedwait            (__NR_SYSCALL_BASE+177)
206 #define __NR_rt_sigqueueinfo            (__NR_SYSCALL_BASE+178)
207 #define __NR_rt_sigsuspend              (__NR_SYSCALL_BASE+179)
208 #define __NR_pread64                    (__NR_SYSCALL_BASE+180)
209 #define __NR_pwrite64                   (__NR_SYSCALL_BASE+181)
210 #define __NR_chown                      (__NR_SYSCALL_BASE+182)
211 #define __NR_getcwd                     (__NR_SYSCALL_BASE+183)
212 #define __NR_capget                     (__NR_SYSCALL_BASE+184)
213 #define __NR_capset                     (__NR_SYSCALL_BASE+185)
214 #define __NR_sigaltstack                (__NR_SYSCALL_BASE+186)
215 #define __NR_sendfile                   (__NR_SYSCALL_BASE+187)
216                                         /* 188 reserved */
217                                         /* 189 reserved */
218 #define __NR_vfork                      (__NR_SYSCALL_BASE+190)
219 #define __NR_ugetrlimit                 (__NR_SYSCALL_BASE+191) /* SuS compliant getrlimit */
220 #define __NR_mmap2                      (__NR_SYSCALL_BASE+192)
221 #define __NR_truncate64                 (__NR_SYSCALL_BASE+193)
222 #define __NR_ftruncate64                (__NR_SYSCALL_BASE+194)
223 #define __NR_stat64                     (__NR_SYSCALL_BASE+195)
224 #define __NR_lstat64                    (__NR_SYSCALL_BASE+196)
225 #define __NR_fstat64                    (__NR_SYSCALL_BASE+197)
226 #define __NR_lchown32                   (__NR_SYSCALL_BASE+198)
227 #define __NR_getuid32                   (__NR_SYSCALL_BASE+199)
228 #define __NR_getgid32                   (__NR_SYSCALL_BASE+200)
229 #define __NR_geteuid32                  (__NR_SYSCALL_BASE+201)
230 #define __NR_getegid32                  (__NR_SYSCALL_BASE+202)
231 #define __NR_setreuid32                 (__NR_SYSCALL_BASE+203)
232 #define __NR_setregid32                 (__NR_SYSCALL_BASE+204)
233 #define __NR_getgroups32                (__NR_SYSCALL_BASE+205)
234 #define __NR_setgroups32                (__NR_SYSCALL_BASE+206)
235 #define __NR_fchown32                   (__NR_SYSCALL_BASE+207)
236 #define __NR_setresuid32                (__NR_SYSCALL_BASE+208)
237 #define __NR_getresuid32                (__NR_SYSCALL_BASE+209)
238 #define __NR_setresgid32                (__NR_SYSCALL_BASE+210)
239 #define __NR_getresgid32                (__NR_SYSCALL_BASE+211)
240 #define __NR_chown32                    (__NR_SYSCALL_BASE+212)
241 #define __NR_setuid32                   (__NR_SYSCALL_BASE+213)
242 #define __NR_setgid32                   (__NR_SYSCALL_BASE+214)
243 #define __NR_setfsuid32                 (__NR_SYSCALL_BASE+215)
244 #define __NR_setfsgid32                 (__NR_SYSCALL_BASE+216)
245 #define __NR_getdents64                 (__NR_SYSCALL_BASE+217)
246 #define __NR_pivot_root                 (__NR_SYSCALL_BASE+218)
247 #define __NR_mincore                    (__NR_SYSCALL_BASE+219)
248 #define __NR_madvise                    (__NR_SYSCALL_BASE+220)
249 #define __NR_fcntl64                    (__NR_SYSCALL_BASE+221)
250                                         /* 222 for tux */
251                                         /* 223 is unused */
252 #define __NR_gettid                     (__NR_SYSCALL_BASE+224)
253 #define __NR_readahead                  (__NR_SYSCALL_BASE+225)
254 #define __NR_setxattr                   (__NR_SYSCALL_BASE+226)
255 #define __NR_lsetxattr                  (__NR_SYSCALL_BASE+227)
256 #define __NR_fsetxattr                  (__NR_SYSCALL_BASE+228)
257 #define __NR_getxattr                   (__NR_SYSCALL_BASE+229)
258 #define __NR_lgetxattr                  (__NR_SYSCALL_BASE+230)
259 #define __NR_fgetxattr                  (__NR_SYSCALL_BASE+231)
260 #define __NR_listxattr                  (__NR_SYSCALL_BASE+232)
261 #define __NR_llistxattr                 (__NR_SYSCALL_BASE+233)
262 #define __NR_flistxattr                 (__NR_SYSCALL_BASE+234)
263 #define __NR_removexattr                (__NR_SYSCALL_BASE+235)
264 #define __NR_lremovexattr               (__NR_SYSCALL_BASE+236)
265 #define __NR_fremovexattr               (__NR_SYSCALL_BASE+237)
266 #define __NR_tkill                      (__NR_SYSCALL_BASE+238)
267 #define __NR_sendfile64                 (__NR_SYSCALL_BASE+239)
268 #define __NR_futex                      (__NR_SYSCALL_BASE+240)
269 #define __NR_sched_setaffinity          (__NR_SYSCALL_BASE+241)
270 #define __NR_sched_getaffinity          (__NR_SYSCALL_BASE+242)
271 #define __NR_io_setup                   (__NR_SYSCALL_BASE+243)
272 #define __NR_io_destroy                 (__NR_SYSCALL_BASE+244)
273 #define __NR_io_getevents               (__NR_SYSCALL_BASE+245)
274 #define __NR_io_submit                  (__NR_SYSCALL_BASE+246)
275 #define __NR_io_cancel                  (__NR_SYSCALL_BASE+247)
276 #define __NR_exit_group                 (__NR_SYSCALL_BASE+248)
277 #define __NR_lookup_dcookie             (__NR_SYSCALL_BASE+249)
278 #define __NR_epoll_create               (__NR_SYSCALL_BASE+250)
279 #define __NR_epoll_ctl                  (__NR_SYSCALL_BASE+251)
280 #define __NR_epoll_wait                 (__NR_SYSCALL_BASE+252)
281 #define __NR_remap_file_pages           (__NR_SYSCALL_BASE+253)
282                                         /* 254 for set_thread_area */
283                                         /* 255 for get_thread_area */
284 #define __NR_set_tid_address            (__NR_SYSCALL_BASE+256)
285 #define __NR_timer_create               (__NR_SYSCALL_BASE+257)
286 #define __NR_timer_settime              (__NR_SYSCALL_BASE+258)
287 #define __NR_timer_gettime              (__NR_SYSCALL_BASE+259)
288 #define __NR_timer_getoverrun           (__NR_SYSCALL_BASE+260)
289 #define __NR_timer_delete               (__NR_SYSCALL_BASE+261)
290 #define __NR_clock_settime              (__NR_SYSCALL_BASE+262)
291 #define __NR_clock_gettime              (__NR_SYSCALL_BASE+263)
292 #define __NR_clock_getres               (__NR_SYSCALL_BASE+264)
293 #define __NR_clock_nanosleep            (__NR_SYSCALL_BASE+265)
294 #define __NR_statfs64                   (__NR_SYSCALL_BASE+266)
295 #define __NR_fstatfs64                  (__NR_SYSCALL_BASE+267)
296 #define __NR_tgkill                     (__NR_SYSCALL_BASE+268)
297 #define __NR_utimes                     (__NR_SYSCALL_BASE+269)
298 #define __NR_arm_fadvise64_64           (__NR_SYSCALL_BASE+270)
299 #define __NR_pciconfig_iobase           (__NR_SYSCALL_BASE+271)
300 #define __NR_pciconfig_read             (__NR_SYSCALL_BASE+272)
301 #define __NR_pciconfig_write            (__NR_SYSCALL_BASE+273)
302 #define __NR_mq_open                    (__NR_SYSCALL_BASE+274)
303 #define __NR_mq_unlink                  (__NR_SYSCALL_BASE+275)
304 #define __NR_mq_timedsend               (__NR_SYSCALL_BASE+276)
305 #define __NR_mq_timedreceive            (__NR_SYSCALL_BASE+277)
306 #define __NR_mq_notify                  (__NR_SYSCALL_BASE+278)
307 #define __NR_mq_getsetattr              (__NR_SYSCALL_BASE+279)
308 #define __NR_waitid                     (__NR_SYSCALL_BASE+280)
309 #define __NR_socket                     (__NR_SYSCALL_BASE+281)
310 #define __NR_bind                       (__NR_SYSCALL_BASE+282)
311 #define __NR_connect                    (__NR_SYSCALL_BASE+283)
312 #define __NR_listen                     (__NR_SYSCALL_BASE+284)
313 #define __NR_accept                     (__NR_SYSCALL_BASE+285)
314 #define __NR_getsockname                (__NR_SYSCALL_BASE+286)
315 #define __NR_getpeername                (__NR_SYSCALL_BASE+287)
316 #define __NR_socketpair                 (__NR_SYSCALL_BASE+288)
317 #define __NR_send                       (__NR_SYSCALL_BASE+289)
318 #define __NR_sendto                     (__NR_SYSCALL_BASE+290)
319 #define __NR_recv                       (__NR_SYSCALL_BASE+291)
320 #define __NR_recvfrom                   (__NR_SYSCALL_BASE+292)
321 #define __NR_shutdown                   (__NR_SYSCALL_BASE+293)
322 #define __NR_setsockopt                 (__NR_SYSCALL_BASE+294)
323 #define __NR_getsockopt                 (__NR_SYSCALL_BASE+295)
324 #define __NR_sendmsg                    (__NR_SYSCALL_BASE+296)
325 #define __NR_recvmsg                    (__NR_SYSCALL_BASE+297)
326 #define __NR_semop                      (__NR_SYSCALL_BASE+298)
327 #define __NR_semget                     (__NR_SYSCALL_BASE+299)
328 #define __NR_semctl                     (__NR_SYSCALL_BASE+300)
329 #define __NR_msgsnd                     (__NR_SYSCALL_BASE+301)
330 #define __NR_msgrcv                     (__NR_SYSCALL_BASE+302)
331 #define __NR_msgget                     (__NR_SYSCALL_BASE+303)
332 #define __NR_msgctl                     (__NR_SYSCALL_BASE+304)
333 #define __NR_shmat                      (__NR_SYSCALL_BASE+305)
334 #define __NR_shmdt                      (__NR_SYSCALL_BASE+306)
335 #define __NR_shmget                     (__NR_SYSCALL_BASE+307)
336 #define __NR_shmctl                     (__NR_SYSCALL_BASE+308)
337 #define __NR_add_key                    (__NR_SYSCALL_BASE+309)
338 #define __NR_request_key                (__NR_SYSCALL_BASE+310)
339 #define __NR_keyctl                     (__NR_SYSCALL_BASE+311)
340 #define __NR_semtimedop                 (__NR_SYSCALL_BASE+312)
341 #define __NR_vserver                    (__NR_SYSCALL_BASE+313)
342 #define __NR_ioprio_set                 (__NR_SYSCALL_BASE+314)
343 #define __NR_ioprio_get                 (__NR_SYSCALL_BASE+315)
344 #define __NR_inotify_init               (__NR_SYSCALL_BASE+316)
345 #define __NR_inotify_add_watch          (__NR_SYSCALL_BASE+317)
346 #define __NR_inotify_rm_watch           (__NR_SYSCALL_BASE+318)
347 #define __NR_mbind                      (__NR_SYSCALL_BASE+319)
348 #define __NR_get_mempolicy              (__NR_SYSCALL_BASE+320)
349 #define __NR_set_mempolicy              (__NR_SYSCALL_BASE+321)
350 #define __NR_openat                     (__NR_SYSCALL_BASE+322)
351 #define __NR_mkdirat                    (__NR_SYSCALL_BASE+323)
352 #define __NR_mknodat                    (__NR_SYSCALL_BASE+324)
353 #define __NR_fchownat                   (__NR_SYSCALL_BASE+325)
354 #define __NR_futimesat                  (__NR_SYSCALL_BASE+326)
355 #define __NR_fstatat64                  (__NR_SYSCALL_BASE+327)
356 #define __NR_unlinkat                   (__NR_SYSCALL_BASE+328)
357 #define __NR_renameat                   (__NR_SYSCALL_BASE+329)
358 #define __NR_linkat                     (__NR_SYSCALL_BASE+330)
359 #define __NR_symlinkat                  (__NR_SYSCALL_BASE+331)
360 #define __NR_readlinkat                 (__NR_SYSCALL_BASE+332)
361 #define __NR_fchmodat                   (__NR_SYSCALL_BASE+333)
362 #define __NR_faccessat                  (__NR_SYSCALL_BASE+334)
363 #define __NR_pselect6                   (__NR_SYSCALL_BASE+335)
364 #define __NR_ppoll                      (__NR_SYSCALL_BASE+336)
365 #define __NR_unshare                    (__NR_SYSCALL_BASE+337)
366 #define __NR_set_robust_list            (__NR_SYSCALL_BASE+338)
367 #define __NR_get_robust_list            (__NR_SYSCALL_BASE+339)
368 #define __NR_splice                     (__NR_SYSCALL_BASE+340)
369 #define __NR_arm_sync_file_range        (__NR_SYSCALL_BASE+341)
370 #define __NR_sync_file_range2           __NR_arm_sync_file_range
371 #define __NR_tee                        (__NR_SYSCALL_BASE+342)
372 #define __NR_vmsplice                   (__NR_SYSCALL_BASE+343)
373 #define __NR_move_pages                 (__NR_SYSCALL_BASE+344)
374 #define __NR_getcpu                     (__NR_SYSCALL_BASE+345)
375 #define __NR_epoll_pwait                (__NR_SYSCALL_BASE+346)
376 #define __NR_kexec_load                 (__NR_SYSCALL_BASE+347)
377 #define __NR_utimensat                  (__NR_SYSCALL_BASE+348)
378 #define __NR_signalfd                   (__NR_SYSCALL_BASE+349)
379 #define __NR_timerfd_create             (__NR_SYSCALL_BASE+350)
380 #define __NR_eventfd                    (__NR_SYSCALL_BASE+351)
381 #define __NR_fallocate                  (__NR_SYSCALL_BASE+352)
382 #define __NR_timerfd_settime            (__NR_SYSCALL_BASE+353)
383 #define __NR_timerfd_gettime            (__NR_SYSCALL_BASE+354)
384 #define __NR_signalfd4                  (__NR_SYSCALL_BASE+355)
385 #define __NR_eventfd2                   (__NR_SYSCALL_BASE+356)
386 #define __NR_epoll_create1              (__NR_SYSCALL_BASE+357)
387 #define __NR_dup3                       (__NR_SYSCALL_BASE+358)
388 #define __NR_pipe2                      (__NR_SYSCALL_BASE+359)
389 #define __NR_inotify_init1              (__NR_SYSCALL_BASE+360)
390 #define __NR_preadv                     (__NR_SYSCALL_BASE+361)
391 #define __NR_pwritev                    (__NR_SYSCALL_BASE+362)
392 #define __NR_rt_tgsigqueueinfo          (__NR_SYSCALL_BASE+363)
393 #define __NR_perf_event_open            (__NR_SYSCALL_BASE+364)
394 
395 /*
396  * The following SWIs are ARM private.
397  */
398 #define __ARM_NR_BASE                   (__NR_SYSCALL_BASE+0x0f0000)
399 #define __ARM_NR_breakpoint             (__ARM_NR_BASE+1)
400 #define __ARM_NR_cacheflush             (__ARM_NR_BASE+2)
401 #define __ARM_NR_usr26                  (__ARM_NR_BASE+3)
402 #define __ARM_NR_usr32                  (__ARM_NR_BASE+4)
403 #define __ARM_NR_set_tls                (__ARM_NR_BASE+5)
404 
405 /*
406  * *NOTE*: This is a ghost syscall private to the kernel.  Only the
407  * __kuser_cmpxchg code in entry-armv.S should be aware of its
408  * existence.  Don't ever use this from user code.
409  */
410 #ifdef __KERNEL__
411 #define __ARM_NR_cmpxchg                (__ARM_NR_BASE+0x00fff0)
412 #endif
413 
414 /*
415  * The following syscalls are obsolete and no longer available for EABI.
416  */
417 #if defined(__ARM_EABI__) && !defined(__KERNEL__)
418 #undef __NR_time
419 #undef __NR_umount
420 #undef __NR_stime
421 #undef __NR_alarm
422 #undef __NR_utime
423 #undef __NR_getrlimit
424 #undef __NR_select
425 #undef __NR_readdir
426 #undef __NR_mmap
427 #undef __NR_socketcall
428 #undef __NR_syscall
429 #undef __NR_ipc
430 #endif
431 
432 #ifdef __KERNEL__
433 
434 #define __ARCH_WANT_IPC_PARSE_VERSION
435 #define __ARCH_WANT_STAT64
436 #define __ARCH_WANT_SYS_GETHOSTNAME
437 #define __ARCH_WANT_SYS_PAUSE
438 #define __ARCH_WANT_SYS_GETPGRP
439 #define __ARCH_WANT_SYS_LLSEEK
440 #define __ARCH_WANT_SYS_NICE
441 #define __ARCH_WANT_SYS_SIGPENDING
442 #define __ARCH_WANT_SYS_SIGPROCMASK
443 #define __ARCH_WANT_SYS_RT_SIGACTION
444 #define __ARCH_WANT_SYS_RT_SIGSUSPEND
445 
446 #if !defined(CONFIG_AEABI) || defined(CONFIG_OABI_COMPAT)
447 #define __ARCH_WANT_SYS_TIME
448 #define __ARCH_WANT_SYS_OLDUMOUNT
449 #define __ARCH_WANT_SYS_ALARM
450 #define __ARCH_WANT_SYS_UTIME
451 #define __ARCH_WANT_SYS_OLD_GETRLIMIT
452 #define __ARCH_WANT_OLD_READDIR
453 #define __ARCH_WANT_SYS_SOCKETCALL
454 #endif
455 
456 /*
457  * "Conditional" syscalls
458  *
459  * What we want is __attribute__((weak,alias("sys_ni_syscall"))),
460  * but it doesn't work on all toolchains, so we just do it by hand
461  */
462 #define cond_syscall(x) asm(".weak\t" #x "\n\t.set\t" #x ",sys_ni_syscall")
463 
464 /*
465  * Unimplemented (or alternatively implemented) syscalls
466  */
467 #define __IGNORE_fadvise64_64           1
468 #define __IGNORE_migrate_pages          1
469 
470 #endif /* __KERNEL__ */
471 #endif /* __ASM_ARM_UNISTD_H */
472 