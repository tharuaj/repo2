#include <stdio.h>
#define add(num1,num2) num1 + num2 
// macros are replaced during preprocessor in the code before compilation

typedef struct 
{
    char name[10];
    int age;
    int roll_No ;
    int class;
    /* data */
} Student;

typedef struct{
    char name[10];
    int count;
} Group;


int main()
{
    int a, b, c;
    a = b = c = 0;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("result: %d\n", a+b+c);

    int sum = add(6,7);
    printf("sum: %d\n", sum);

    Student studs[2] = {
        {"Ajay", 15, 3, 9},
        {"John", 13, 7, 7}
    };
    
    printf("Student 1\n ");
    printf("Name: %s, Age: %d, RollNo.: %d, Class: %d\n", studs[0].name, studs[0].age, studs[0].roll_No, studs[0].class);
    printf("Student 2\n ");
    printf("Name: %s, Age: %d, RollNo.: %d, Class: %d\n", studs[1].name, studs[1].age, studs[1].roll_No, studs[1].class);
    

    return 0;
}