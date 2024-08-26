#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int x;
    int y;
}Point;

//union is similar to struct but difference is 
//that it can have only one member at a time
//rest of the data will be a garbage  value
typedef union{
    int i;
    double j;
    char name[20];
}Extra;

typedef struct {
    int type;
    union{
        char p[64];
        int q[64];
        float r[64];
    }Buffer;
}Info;

typedef struct {
    char  name[20];
    bool isrobot;
    union{
        char personality[50];
        double version;
    }tags;
} Character;

void print_character(Character *c){
    printf("Character  Name: %s\n", c->name);
    if(c ->  isrobot)
    {
        printf("Character is a Robot.\n");
        printf("Firmware Version: %f\n", c->tags.version);
    }
    else
    {
        printf("Character is a Human.\n");
        printf("Personality: %s\n", c->tags.personality);
    }
    printf("\n");
}

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
    printf("\n");

    Extra e1;
    e1.i = 57;
    e1.j = 659.129;
    strcpy(e1.name,"Bikram");
    printf("e1.i: %d\n", e1.i);
    printf("e1.j: %f\n", e1.j);
    printf("e1.name:  %s\n",e1.name);
    printf("\n");

    Extra e2;
    e2.i = 57;
    printf("e1.i: %d\n", e2.i);
    e2.j = 659.129;
    printf("e1.j: %f\n", e2.j);
    strcpy(e2.name,"Nishan Rai");
    printf("e1.name:  %s\n",e2.name);

    printf("Size of e1: %d\n", sizeof(e1));
    printf("Size of e2: %d\n", sizeof(e2));
    printf("Size of double:  %d\n", sizeof(double));

    Info info;
    info.type = 0;
    memset(info.Buffer.p,'a',64);

    if(info.type == 0)
    {
        for (int i = 0; i < 64; i++)
        {
            printf("Buffer in p[%d]: %c\n", i, info.Buffer.p[i]);
        }
        printf("\n");
    }

    Character player1;
    strcpy(player1.name, "Johnny");
    player1.isrobot = false;
    strcpy(player1.tags.personality, "Funny cute guy.");

    Character player2;
    strcpy(player2.name, "Terminator");
    player2.isrobot = true;
    player2.tags.version = 2.0;
    

    print_character(&player1);
    
    print_character(&player2);


    return 0;
}