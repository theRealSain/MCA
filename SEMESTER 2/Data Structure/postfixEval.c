#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 50
int isOperator(char ch) 
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}
int calc(int operand1, int operand2, char operator) 
{
    switch (operator) 
    {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
    }
}
int evaluate(char postfix[]) 
{
    int stack[MAX_SIZE];
    int top = -1;

    for (int i = 0; postfix[i] != '\0'; i++) 
	{
        if (isdigit(postfix[i]))
        {		
            stack[++top] = postfix[i]-'0';
        }
        else if (isOperator(postfix[i])) 
        {
            int operand2 = stack[top--];
            int operand1 = stack[top--];
            int result = calc(operand1, operand2, postfix[i]);
            stack[++top] = result;
        }
    }
    return stack[top];
}
int main() 
{
    char postfix[MAX_SIZE];
    printf("Enter postfix expression: ");
    scanf("%s", postfix);
    int result = evaluate(postfix);
    printf("Result: %d\n", result);
    return 0;
}
