#include<stdio.h>

int count_odd(int ar[], int n)
{
    ar[n];
    int odd = 0;
    for (int i=0;i<n;i++) {
        if(ar[i] % 2 != 0)
        {
            odd++;
        }
    }
    printf("%d", odd);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    count_odd(ar, n);
    return 0;
}