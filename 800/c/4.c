#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n - 1];

    for(int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a, b;

    scanf("%d %d", &a, &b);

    int years = 0;
    for(int i = a; i <b; i++)
    {
        years += arr[i - 1];
    }
    printf("%d", years);
}