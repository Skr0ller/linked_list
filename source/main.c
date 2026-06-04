#include <stdio.h>
#include "main.h"
#include "comm.h"

int node_count = 0;

char argsbuffer[MAXVAL];

int main()
{
    while(1)
    {
        if(fgets(argsbuffer, sizeof(argsbuffer), stdin) != NULL)
        {
            /* flag */
            char arg;
            /* node's number */
            int number;

            scanc(argsbuffer, &arg, &number);

            switch(arg)
            {
                case 'g':
                getnode(number); 
                break;

                case 'a':
                addnode(number);
                break;

                default:
                printf("Such command doesn't exist");
                break;
            }
        }
    }

    return 0;
}
