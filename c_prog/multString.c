#include<stdio.h>


void main()
{
    char *name[4],temp[30];
    int i,j,len;
    accept(name,4);
    display(name,4);

}

void accept(char *name[],int num)
{
    int i,len;
    char temp[30];
    for(i=0;i<4;i++)
    {
        printf("\nEnter name of student%d: ",i+1);
        gets(temp);
        len=strlen(temp);
        name[i]=(char*)malloc(len+1);
        strcpy(name[i],temp);

    }
}
void display(char *name[],int num)
{
    int i;
     printf("\n\nStudents Name: \n");
    for(i=0;i<4;i++)
    {
        puts(name[i]);
    }


}


