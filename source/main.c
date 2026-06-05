#include <stdio.h>
#include <string.h>
#include "main.h"
#include "comm.h"

char argsbuffer[MAXVAL];

char haead_node_text[MAXVAL] = "head_node"

Node *head_node = addnode(haead_node_text);

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
                case 'a':
                if(head_node->next == NULL)
                {
                    head_node->next = addnode(text);
                } else{
                    
                }
                head_node->next = addnode(text);
                printf("Node id: %d\n", node_count); 
                break;

                case 'g':
                getnode(text);
                break;

                default:
                printf("Such command doesn't exist");
                break;
            }
        }
    }

    return 0;
}
