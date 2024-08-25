#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
}Point;

int main()
{   Point p1;
    p1.x = 10;
    p1.y = 20;

    printf("p1.x: %d, p1.y:%d\n",p1.x, p1.y);

    Point *ptr;
    ptr = &p1;
    ptr-> x= 76;
    ptr-> y = 99; 

    printf("p1.x: %d, p1.y:%d\n",p1.x, p1.y);
    
    printf("ptr->x: %d, ptr->y: %d\n",ptr->x, ptr->y);

    return 0;
}