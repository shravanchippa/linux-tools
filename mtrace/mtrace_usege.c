mtrace

mtrace is a component of glibc that traces calls to malloc(3), free(3), and related
functions, and identifies areas of memory not freed when the program exits. You
need to call the mtrace() function from within the program to begin tracing and
then at runtime, write a path name to the MALLOC_TRACE environment variable in
which the trace information is written



ftddev1@ftd:~/mtrace$ gcc -Wall -g mtrace_example.c -o mtrace_example
ftddev1@ftd:~/mtrace$
ftddev1@ftd:~/mtrace$
ftddev1@ftd:~/mtrace$
ftddev1@ftd:~/mtrace$
ftddev1@ftd:~/mtrace$ export MALLOC_TRACE=mtrace.log
ftddev1@ftd:~/mtrace$
ftddev1@ftd:~/mtrace$
ftddev1@ftd:~/mtrace$
ftddev1@ftd:~/mtrace$
ftddev1@ftd:~/mtrace$ ./mtrace_example
ftddev1@ftd:~/mtrace$
ftddev1@ftd:~/mtrace$
ftddev1@ftd:~/mtrace$
ftddev1@ftd:~/mtrace$ mtrace mtrace_example mtrace.log

Memory not freed:
-----------------
           Address     Size     Caller
0x0000000000d22450     0x64  at /home/ftddev1/mtrace/mtrace_example.c:8 (discriminator 3)
0x0000000000d224c0     0x64  at /home/ftddev1/mtrace/mtrace_example.c:8 (discriminator 3)
0x0000000000d22530    0x100  at /home/ftddev1/mtrace/mtrace_example.c:11

