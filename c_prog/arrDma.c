#include<stdio.h>
char * accept(char *name);
void main()
{
    char *name;

    name=accept(name);
    display(name);

}

char * accept(char *name)
{
    int i,len;
    char temp[30];

        printf("\nEnter name of student: ");
        gets(temp);
        len=strlen(temp);
        name=(char*)malloc(len+1);
        strcpy(name,temp);
        return name;


}
void display(char *name)
{

     printf("\n\nStudents Name: \n");

        puts(name);



}


