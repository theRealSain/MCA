#include <stdio.h>
int main()
{
    FILE *input, *odd, *even;
    int n, num;
    
    printf("Enter number of items: ");
    scanf("%d", &n);
    
    input = fopen("num.txt", "w");
    if(input == NULL)
    {
            printf("Error!");
            return 1;
    }
    
    printf("Enter the numbers: ");
    for(int i =0; i<n; i++)
    {
        scanf("%d", &num);
        fprintf(input, "%d\n", num);
    }
        
    fclose(input);
        
    input = fopen("num.txt", "r");
    if(input == NULL)
    {
            printf("Error!");
            return 1;
    }
    
    input = fopen("odd.txt", "w");
    input = fopen("even.txt", "w");
    
    if(odd == NULL || even == NULL)
    {
            printf("Error!");
            return 1;
    }
    
    while(fscanf(input, "%d", &num) == 1)
    {
        if(num % 2 == 0)
        {
            fprintf(even, "%d\n", num);
        }
        else
        {
            fprintf(odd, "%d\n", num);                     
        }
    }
    
    fclose(input);
    fclose(odd);
    fclose(even);
    
    printf("Success!");
    
    return 0;
}

