#include <stdio.h>
#include "table.h"
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
                
            }
        }
    }
}
