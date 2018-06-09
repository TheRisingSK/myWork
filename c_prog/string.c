#include<stdio.h>
#include<string.h>

lenStr(char str[]);
void main()
{
    char str[4][20];
    int len=0,num,i;
   // printf("\nEnter number:");
   // scanf("%d",&num);
   for(i=0;i<4;i++)
   {
        printf("\nEnter name%d: ",i+1);
        fflush(stdin);
    //scanf("%[^\n]s",str);
   // scanf("%[ABCD]s",str);

        gets(str[i]);
   }

   for(i=0;i<4;i++)
   {
        printf("\n\n Name%d: ",i+1);
        fflush(stdin);
    //scanf("%[^\n]s",str);
   // scanf("%[ABCD]s",str);

        puts(str[i]);
   }




}

lenStr(char str[])
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}

lenStrByPtr(char *str)
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}

lenStrByPtr1(char *str)
{
    int len=0;
    while(*str!='\0')
    {
        len++;
        str++;
    }
    return len;
}
