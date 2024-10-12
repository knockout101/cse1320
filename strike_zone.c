#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    
    int start = round((size / 2.0) - (strike_zone / 2.0));
    int stop = round((size / 2.0) + (strike_zone / 2.0));

    printf("|");
    for(int i = 0; i < size; i++)
    {
        if(i == start)
            printf("[");
        if(i == stop)
            printf("]");
        if(i < round(size * progress))
        {
            printf("=");
        }
        else
            printf(" ");
    }
    printf("|");
}