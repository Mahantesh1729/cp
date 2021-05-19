#include <stdio.h>
#include  <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isvowel(char s);

int main()
{

    char s[101];
    scanf("%[^\n]%*c", s);
   int i = strlen(s) - 1;
    while(s[i] == 32 || s[i] == '?')
    {
        i--;
        if(isvowel(s[i]))
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}
bool isvowel(char s)
{
    s = toupper(s);
    if(s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U' || s == 'Y')
    {
        return true;
    }
    return false;
}