#ifndef KERNEL_PINFO_H
#define KERNEL_PINFO_H

struct pinfo {
    int pid;
    int state; // enum procstate value from kernel/proc.h
    int level; // current MLFQ level, 0..3
    int runticks; // timer ticks this process was charged for
    int nsched; // times scheduler() switched to this process
    int ctime; // value of ticks when the process was created
    char name[16];
};

#endif // KERNEL_PINFO_H