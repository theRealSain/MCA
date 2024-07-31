#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Invalid!");
        return 1;
    }
    
    int max = atoi(argv[1]);
    
    for(int i=2; i<argc; i++)
    {
        int num = atoi(argv[i]);
        if(num > max)
        {
            max = num;
        }
    }
    
    printf("%d, %s, %s, %s", argc, argv[0], argv[1], argv[2]);
    
    printf("\n\nLargest: %d\n", max);
    return 0;
}
