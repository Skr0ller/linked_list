#include <stdio.h>
#include <string.h>
#include "main.h"
#include "comm.h"

char argsbuffer[MAXVAL];

char haeadnode[MAXVAL] = "head_node"

Node *head_node = addnode(haeadnode);

int main()
{
    while(1)
    {
        if(fgets(argsbuffer, sizeof(argsbuffer), stdin) != NULL)
        {
            /* flag */
            char arg;
            /* a text that a node will contain */
            char text[MAXVAL];

            scanc(argsbuffer, &arg, text);

            switch(arg)
            {
                case 'g':
                getnode(text); 
                break;

                case 'a':
                addnode(text);
                break;

                default:
                printf("Such command doesn't exist");
                break;
            }
        }
    }

    return 0;
}
