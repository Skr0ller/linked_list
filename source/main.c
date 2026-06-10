#include <stdio.h>
#include <string.h>
#include "include/main.h"
#include "include/comm.h"

char argsbuffer[MAXVAL];

char head_node_text[MAXVAL] = "head_node";

inode *current = NULL;

int node_count = 0;

int main()
{
    inode *head_node = addnode(head_node_text);

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
                case 'a':
                if(head_node->next == NULL)
                {
                    head_node->next = addnode(text);
                    current = head_node->next;
                } else{
                    current->next = addnode(text);
                    current = current->next;   
                }
                printf("Node has been creatd!\nNode id: %d\n", node_count);
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
