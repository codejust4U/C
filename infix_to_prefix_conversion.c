#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define size 100
char stack[size];
int top = -1;
void push(char item)
{
    if (top >= size - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}

char pop()
{
    char item;
    if (top < 0)
    {
        printf("stack undeflow : invalid infix expresion");
        // underflow might occur
        // where ( and ) are not matched
        getchar();
        exit(1);
    }
    else
    {
        item = stack[top];
        top = top - 1;
        return (item);
    }
}

int is_operator(char symbol)
{
    if (symbol == '^' || symbol == "*" || symbol == '/' || symbol == '+' || symbol == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int precedence(char symbol)
{
    if (symbol == '^')
    {
        return (3);
    }
    else if (symbol == '*' || symbol == '/')
    {
        return (2);
    }
    else if (symbol == '+' || symbol == '-')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

void InfixToPostfix(char infix_exp[], char postfix_exp[])
{
    int i, j;
    char item;
    char x;
    push('(');              // push '(' into stack
    strcat(infix_exp, ")"); // add ')' to infix expression
    i = 0;
    j = 0;
    item = infix_exp[i];
    while (item != '\0')
    {
        if (item == '(')
        {
            push(item);
        }
        else if (isdigit(item) || isalpha(item))
        {
            postfix_exp[j] = item; // add operand to postfix
            j++;
        }
        else if (is_operator(item) == 1) // means symbol is operator
        {
            x = pop();
            while (is_operator(x) == 1 && precedence(x) >= precedence(item))
            {
                postfix_exp[j] = x; // pop higher precedence
                j++;
                x = pop();
            }
            push(x);
            push(item); // push current operator into stack
        }
        else if (item == ')')
        {
            x = pop();
            while (x != '(')
            {
                postfix_exp[j] = x;
                j++;
                x = pop();
            }
        }
        else
        {
            printf("\n Invalid infix expression.\n");
            getchar();
            exit(1);
        }
        i++;
        item = infix_exp[i];
    }
    if (top > 0)
    {
        printf("\nInvalid infix expression.\n");
        getchar();
        exit(1);
    }
    if (top > 0)
    {
        printf("\nInvalid infix expression.\n");
        getchar();
        exit(1);
    }
    postfix_exp[j] = '\0';
}
int main()
{
    system("cls");
    char infix[size], postfix[size];
    printf("Rule to mind: The infix expression contains single letter variables and single digit constant only.\n");
    printf("\nEnter infix expression : ");
    gets(infix);

    InfixToPostfix(infix, postfix);
    printf("Postfix Expression: ");
    puts(postfix);

    return 0;
}
