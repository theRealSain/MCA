#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *source, *destination;
    char ch;
    
    if(argc != 3)
    {
        printf("Invalid!");
        return 1;
    }
    
    source = fopen(argv[1], "r");
    if(source == NULL)
    {
        printf("Error!");
        return 1;
    }
    
    destination = fopen(argv[2], "w");
    if(destination == NULL)
    {
        printf("Error!");
        fclose(source);
        return 1;
    }
    
    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }
    
    fclose(source);
    fclose(destination);
    
    printf("Success!");
    
    return 0;
}

