#include<stdio.h>

int max_min(int n)
{
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = 1;
    int min = 1;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] > max)
        {
            max = ar[i];
        }
        if (ar[i] < min)
        {
            min = ar[i];
        }

    }
    printf("%d %d", min, max);
}
int main()
{
    int n;
    scanf("%d", &n);
    max_min(n);
    return 0;
}
