#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool freeze_C(int x);
bool freeze_F(int x);
void is_Freezing(bool(*check)(int));

int add(int x, int y);
int subtract(int x, int y);
int(*select_operation()) (int, int);

int main()
{
    printf("Check freezing in Celsius.\n");
    is_Freezing(freeze_C);
    printf("\n");
    printf("Check freezing in Fahrenheit.\n");
    is_Freezing(freeze_F);
    printf("\n");

    int(*operation) (int,int) = select_operation();
    if (operation != NULL)
    {
        printf("Enter two numbers.\n");
        int num1, num2;
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        printf("Result: %d\n", operation(num1, num2));
    }

    return 0;
}


int(*select_operation()) (int, int)
{
    printf("Select your operation.\n");
    printf("1. Addition\n2. Subtraction\n");
    int choice;
    scanf("%d", &choice);
    if (choice == 1) return add;
    else if (choice == 2) return subtract;
    else return NULL;

}

bool freeze_C(int x)
{
    if (x <= 0) return true;
    else return false;
}
bool freeze_F(int x)
{
    if (x <= 32) return true;
    else return false;
}
void is_Freezing(bool(*check)(int))
{
    int temperature;
    printf("Enter the temperature in degree\n");
    scanf("%d", &temperature);
    
    if (check(temperature)) printf ("its freezing.\n");
    else printf("It's NOT freezing.\n");
}

int add(int x, int y)
{
    return x + y;
}
int subtract(int x, int y)
{
    return x - y;
}