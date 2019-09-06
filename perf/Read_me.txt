Linux kernel config options
CONFIG_PROFILING=y
CONFIG_OPROFILE=y
CONFIG_KPROBES=y


perf sched record: To record execute below command 
********************************************************** 
root@Ti:/tmp# perf sched record -- sleep 1 
[ perf record: Woken up 1 times to write data ] 
[ perf record: Captured and wrote 0.335 MB perf.data (1779 samples) ] 
root@Ti:/tmp# 
**********************************************************


Perf record of application: 
Ctrl + c to exit the command 

**************************************
root@Ti:/tmp# perf record -e cpu-clock ls  ^C
[ perf record: Woken up 1 times to write data ] 
[ perf record: Captured and wrote 0.066 MB perf.data (868 samples) ] 
root@TimeProvider:/tmp#
*************************************

root@Ti:/tmp# perf report


perf timechart record
******************************************
Step1:
root@Ti:/tmp# perf timechart record -g ^C
[ perf record: Woken up 5 times to write data ] 
[ perf record: Captured and wrote 1.495 MB perf.data (9149 samples) ] 
root@TimeProvider:/tmp# 

Setp2: Below command will prepare the timechart image file output.svg. 
root@TimeProvider:/tmp# perf timechart Written 6.0 seconds of trace to output.svg. 

Step3:
copy the output.svg. file local machine see in Mozilla browser
******************************************


