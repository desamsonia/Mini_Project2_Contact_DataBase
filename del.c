#include "header.h"
extern int cnt;
DATABASE* delete(DATABASE *p)
{
    char *DB=0;
    if(cnt==0) printf("your database list is empty!!");
    else
    {
    int i;
    printf("Enter name to delete:");
    DB = malloc(20);
    scanf("%s",DB);
    for(i=0;i<cnt;i++)
    {
       if(strcmp(DB,p[i].name)==0)
       {
         memmove(p+i,p+i+1,(cnt-i-1)*sizeof(DATABASE));
         cnt--;
         p = realloc(p,cnt*sizeof(DATABASE));
         return p;
       }
    }
    }
printf("%s is not found\n",DB);
}