#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[])
{
    if(argc < 4)
    {
        fprintf(stderr, "Did not add progress and size arguements to program call");
        exit(EXIT_FAILURE);
    }
    int size = atoi(args[1]);
    float progress = atof(args[2]);
    int strike_zone = atoi(args[3]);
    
    printf("|");
    for(int i = 0; i < size; i++)
    {
        if(i >= (size / 2) - (strike_zone / 2) & i <= (size / 2) - (strike_zone / 2))
        {
            if(i == (size / 2) - (strike_zone / 2))
                printf("[");
            elif
        }
        if(i < size * progress)
        {
            printf("=");
        }
        else
            printf(" ");
    }
    printf("|");
}