#include <stdio.h>
int main()
{
    FILE *file;
    
    file = fopen("file.txt", "r");
    if(file == NULL)
    {
        printf("Error!");
        return 1;
    }
    
    char ch, openCount=0, closeCount=0;
    
    while(fscanf(file, "%c", &ch) != EOF)
    {
        if(ch == '{')
            openCount++;
        else if(ch == '}')
            closeCount++;
    }

    fclose(file);
    
    if(openCount == closeCount)
    {
        printf("No mismatch found!\n");
    }
    else
    {
        printf("Mismatch found!\n");
    }
    
    
    return 0;
}
