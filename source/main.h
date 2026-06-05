#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#define MAXVAL 100

int node_count = 0;

typedef struct inode
{
    int id;
    char s_text[MAXVAL];
    struct inode *next;
} inode;





#endif