#include <stdio.h>
#include <string.h>
#include "main.h"
#include "comm.h"

char argsbuffer[MAXVAL];

char head_node_text[MAXVAL] = "head_node";

int node_count = 0;

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

            inode *head_node = addnode(head_node_text);

            switch(arg)
            {
                case 'a':
                if(head_node->next == NULL)
                {
                    head_node->next = addnode(text);
                } else{
                    head_node->next = addnode(text);
                    printf("Node id: %d\n", node_count);    
                }
                break;

                case 'g':
                getnode(text, head_node);
                break;

                default:
                printf("Such command doesn't exist");
                break;
            }
        }
    }
    return 0;
}
