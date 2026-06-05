#include <stdio.h>
#include <string.h>
#include "main.h"
#include "comm.h"

void getnode(int nid)
{
    printf()
}

*inode addnode(char *node_text)
{
    inode* newnode = (*inode)malloc(sizeof(inode));

    if(newnode == NULL)
    {
        printf("Memory allocation error");
        exit(1);
    }

    node_count++;

    newnode->id = node_count;
    strcpy(newnode->s_text, node_text);
    newnode->next = NULL;

    return newnode;
}

void scanc(char *arr, char *flag, char *text)
{
    while(*arr++ == ' ')
    ;

    while(*arr != '\0')
    {
        if(*arr == '-')
        {
            *flag = *++arr;
            *arr++;
        } else{
            printf("Error: Enter correct command");
            return;
        }

        if(*arr == ' ')
        {
            while(*arr != '\0')
            {
                *text++ = *arr++;
                if(*arr == '\0')
                {
                    *text = '\0';
                    return;
                }
            }
        }
    }
}