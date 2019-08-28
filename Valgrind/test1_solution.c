==== install valgrind ====
ftddev1@ftddev1-recovary:~/$ sudo apt-get install valgrind

===== compiling binary with -Wall option ======
gcc -Wall -g test1.c






=============== checking mem leak ==============

ftddev1@ftddev1-recovary:~/shravan/persanal/linux-tools/Valgrind$ valgrind  --leak-check=full ./a.out
==23477== Memcheck, a memory error detector
==23477== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==23477== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==23477== Command: ./a.out
==23477==

 ptr = [Linux]

 ptr = [ainux]
==23477==
==23477== HEAP SUMMARY:
==23477==     in use at exit: 10 bytes in 1 blocks
==23477==   total heap usage: 2 allocs, 1 frees, 1,034 bytes allocated
==23477==
==23477== 10 bytes in 1 blocks are definitely lost in loss record 1 of 1
==23477==    at 0x4C2DB8F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==23477==    by 0x4005C7: main (test1.c:7)
==23477==
==23477== LEAK SUMMARY:
==23477==    definitely lost: 10 bytes in 1 blocks
==23477==    indirectly lost: 0 bytes in 0 blocks
==23477==      possibly lost: 0 bytes in 0 blocks
==23477==    still reachable: 0 bytes in 0 blocks
==23477==         suppressed: 0 bytes in 0 blocks
==23477==
==23477== For counts of detected and suppressed errors, rerun with: -v
==23477== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)



================== test1.c is added with free(prt) at end now no mem leak ================
ftddev1@ftddev1-recovary:~/shravan/persanal/linux-tools/Valgrind$ valgrind  --leak-check=full ./a.out
==23589== Memcheck, a memory error detector
==23589== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==23589== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==23589== Command: ./a.out
==23589==

 ptr = [Linux]

 ptr = [ainux]
==23589==
==23589== HEAP SUMMARY:
==23589==     in use at exit: 0 bytes in 0 blocks
==23589==   total heap usage: 2 allocs, 2 frees, 1,034 bytes allocated
==23589==
==23589== All heap blocks were freed -- no leaks are possible
==23589==
==23589== For counts of detected and suppressed errors, rerun with: -v
==23589== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

