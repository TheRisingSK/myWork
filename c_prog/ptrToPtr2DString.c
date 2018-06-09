#include<stdio.h>

char** accept(char **name,int *num);
void display(char **name,int num);
void main()
{
    char **name,temp[30];
    int num;
    name=accept(name,&num);
    display(name,num);

}

char** accept(char **name,int *num)
{
    int i,len;
    char temp[30],**ptr;
    printf("\nHow many students: ");
    scanf("%d",num);

    name=(char**)malloc(*num*sizeof(char*));
    ptr=name;
    for(i=0;i<*num;i++)
    {
        printf("\nEnter name of student%d: ",i+1);
        fflush(stdin);
        gets(temp);
        len=strlen(temp);
        /*name[i]=(char*)malloc(len+1);
        strcpy(name[i],temp);*/

        *name=(char*)malloc(len+1);
        strcpy(*name,temp);
        name++;

    }
    return ptr;
}
void display(char **name,int num)
{
    int i;
     printf("\n\nStudents Name: \n");
    for(i=0;i<num;i++)
    {
        puts(name[i]);
    }


}



