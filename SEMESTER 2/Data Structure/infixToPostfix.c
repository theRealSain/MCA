#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int isoperator(char ch) 
{
    return (ch=='+'||ch=='-'||ch=='*'||ch=='/' || ch=='^');
}

int prec(char ch) 
{
    switch(ch) 
    {
    	case '^':
    		return 3;
    		
    	case '*':
        case '/':
            return 2;
            	
        case '+':
        case '-':
            return 1;
            	
        default:
            return 0;
    }
}

void convert(char infix[], char postfix[]) 
{
    char stack[SIZE];
    int top = -1;
    int i, j;
    
    for (i=0, j=0; infix[i]!='\0'; i++) 
    {
        if(isalnum(infix[i])) 
        {
            postfix[j++] = infix[i];
        } 
        else if(isoperator(infix[i])) 
        {
            while(top>=0 && prec(stack[top]) >= prec(infix[i])) 
            {
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        } 
        else if(infix[i] == '(') 
        {
            stack[++top] = infix[i];
        } 
        else if(infix[i] == ')') 
        {
            while(top>=0 && stack[top]!='(') 
            {
                postfix[j++] = stack[top--];
            }
            stack[top--];
        }
    }
    
    while(top>=0)
    {
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
}

int main() 
{
    char infix[SIZE];
    char postfix[SIZE];
    int len = 0;
    printf("Enter infix expression: ");
    scanf("%s", infix);
    convert(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}



