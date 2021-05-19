#include <stdio.h>
#include <string.h>
#define MAX 101
void push(char s);
char pop();
char stck[MAX];
int top = -1;

int main()
{
    char str1[MAX];
    scanf("%s", str1);
    char str2[MAX];
    scanf("%s", str2);

    for(int i = 0; i < strlen(str1); i++)
    {
        push(str1[i]);
    }
    for(int i = 0; i < strlen(str1); i++)
    {
        str1[i] = pop();
    }
    if(strcmp(str1,str2) == 0)
    {
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}
void push(char s)
{
    if(top == MAX)
    {
        printf("Overflow\n");
    }
    stck[++top] = s;
}
char pop()
{
    return stck[top--];
}
