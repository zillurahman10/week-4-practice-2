#include<stdio.h>

int my_len(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);
}
int main()
{
    char str[100000];
    scanf("%s", &str);
    my_len(str);
    return 0;
}