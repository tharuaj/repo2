#include <stdio.h>
#include <stdlib.h>

int add(int a, int b){
    return a + b;
}

int main(void){
    
/*
    int x = 4;
    int *pX = &x;
    *pX = 9;
    int y = *pX;
    printf("pX1: %d\n",*pX);
    y= 14;
    *pX = 50;
    printf("x: %d\n",x);
    
    printf("y: %d\n",y);
    printf("pX2: %d\n",*pX);
*/
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int *a = malloc(sizeof(int)*size);
    for(int i = 0; i < size; i++){
        a[i]= i*i;
    }
    for(int i = 0; i < size; i++){
        printf("a[%d]: %d\n", i, a[i]);
    }
    printf("\n");

    a = realloc(a,sizeof(int)*(size+7));
    for(int i = size; i < (size+7); i++){
        a[i]= i*i;
    }
    for(int i = 0; i < (size+7); i++){
        printf("new a[%d]: %d\n", i, a[i]);
    }
    printf("\n");
    free(a);
    return 0;

}