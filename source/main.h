#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#define MAXVAL 100

extern int node_count;

typedef struct inode
{
    int id;
    char s_text[MAXVAL];
    struct inode *next;
} inode;





#endif