#include<stdio.h>

void swap_it(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    swap_it(&num1, &num2);

    printf("%d %d", num1, num2);
    return 0;
}