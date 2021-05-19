#include <stdio.h>
#include <string.h>


int main()
{
    char a[101];
    char b[101];
    char c[101];

    scanf("%[^\n]%*c", a);

    scanf("%[^\n]%*c", b);

    scanf("%[^\n]%*c", c);

    int lena = strlen(a);
    int lenb = strlen(b);
    int lenc = strlen(c);

    int ca = 0;
    int cb = 0;
    int cc = 0;

    for(int i = 0; i < lena; i++)
    {
        if(a[i] == 'a' || a[i] == 'e' ||a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        ca++;
    }

    for(int i = 0; i < lenb; i++)
    {
        if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
        cb++;
    }

    for(int i = 0; i < lenc; i++)
    {
        if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
        cc++;
    }
    if(ca == 5 && cb == 7 && cc == 5)
    printf("YES");
    else
    printf("NO");

 }