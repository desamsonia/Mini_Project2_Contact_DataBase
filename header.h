//header files inclusion
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//variable declrations
int cnt;

//structure declaration
typedef struct dataBase
{
    char name[20];
    char phone[10];
    char email[30];

}DATABASE;

//Prototypes
DATABASE* add(DATABASE *);
DATABASE* delete(DATABASE *);
void view(DATABASE *);
void sort(DATABASE *);
