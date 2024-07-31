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
    
    char ch, lowerCount=0, upperCount=0, spCount=0;
    
    while(fscanf(file, "%c", &ch) != EOF)
    {       
        if(ch >= 'A' && ch <= 'Z')
        {
            upperCount++;
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            lowerCount++;
        }
        else if((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
        {
            spCount++;
        }
    }

    fclose(file);    

    printf("Uppercase characters: %d\n", upperCount-1);
    printf("Lowercase characters: %d\n", lowerCount);
    printf("Special characters: %d\n", spCount);
    
    return 0;
}
