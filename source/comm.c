#include <stdio.h>
#include "comm.h"

void getnode(int nid)
{

}

void addnode(int node_number)
{
    
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
                *text++ == *arr++;
                if(*arr == '\0')
                {
                    *text = '\0';
                    return;
                }
            }
        }
    }
}