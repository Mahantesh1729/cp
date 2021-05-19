#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= 500; i++)
    {
        if(n == (i * (i + 1)) / 2)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}