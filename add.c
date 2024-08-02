#include "header.h"
extern int cnt;

DATABASE* add(DATABASE *p)
{
   p = realloc(p,(cnt+1)*sizeof(DATABASE));
   printf("Enter name:");
   scanf("%s",p[cnt].name);
   printf("Enter phone number:");
   scanf("%s",p[cnt].phone);
   printf("Enter email id:");
   scanf("%s",p[cnt].email);
   cnt++;
   return p;
}