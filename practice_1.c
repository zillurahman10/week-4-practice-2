#include<stdio.h>

int my_abs(int x)
{
    if(x < 0)
    {
        x = x * (-1);
    }

    printf("%d", x);
}
int main()
{
    int n; 
    scanf("%d", &n);
    my_abs(n);
    return 0;
}