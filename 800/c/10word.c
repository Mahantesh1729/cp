#include  <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char c[101];
    scanf("%s", c);

    int len = strlen(c);
    int lo = 0, up = 0;

    for(int i = 0; i < len; i++)
    {
        if(islower(c[i]) != 0)
        {
            lo++;
        }
        else
        up++;
    }
    if(lo < up)
    {
        for(int i = 0; i < len; i++)
        {
            printf("%c",toupper(c[i]));
        }
    }
    else{

        for(int i = 0; i < len; i++)
        {
            printf("%c",tolower(c[i]));
        }

    }

}