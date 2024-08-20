#include <stdio.h>

int main()
{
    int a, b, c;
    a = b = c = 0;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("result: %d\n", a+b+c);

    return 0;
}