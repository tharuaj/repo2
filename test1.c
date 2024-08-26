#include <stdio.h>
#define formel(x) x*x +1
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


int main()
{
    
    int x, b, c;
    x = b = c = 0;
    printf("Enter the first number : ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("result: %d\n", x+b+c);

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
    
   int a = 2; 
   int z = formel(a+1);
   printf("result z: %d\n", z);



    return 0;
}