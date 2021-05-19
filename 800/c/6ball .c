#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cur = 1;
    for(int i = 1; i < n ; i++)
    {
        cur = (cur + i) % n;
        if(cur == 0)
        {
            cur = n;
        }
        printf("%d ", cur);
    }
    return 0;
}