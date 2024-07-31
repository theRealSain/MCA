#include <stdio.h>
int main()
{
    FILE *file;
    
    file = fopen("count.txt", "r");
    if(file == NULL)
    {
        printf("Error!");
        return 1;
    }
    
    char ch, inWord=0, charCount=0, lineCount=0, wordCount=0;
    
    while(fscanf(file, "%c", &ch) != EOF)
    {
            charCount++;
            
            if(ch == '\n')
            {
                lineCount++;
            }
            
            if(ch == ' ' || ch == '\n' || ch == '\t')
            {
                inWord = 0;
            }
            else if(inWord == 0)
            {
                inWord = 1;
                wordCount++;
            }                                      
    }

    fclose(file);
    
    if(charCount > 0 && ch != '\n')
    {
        lineCount++;
    }

    printf("Character Count: %d\n", charCount-1);
    printf("Word Count: %d\n", wordCount);
    printf("Line Count: %d\n", lineCount);
    
    return 0;
}
