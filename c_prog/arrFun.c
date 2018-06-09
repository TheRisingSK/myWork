#include<stdio.h>
int accept(int m);
void display(int m);

void accept1(int num,int ptr[]);
void display1(int num,int ptr[]);

void accept2(int num,int *ptr);
void display2(int num,int *ptr);

void accept3(int num,int *ptr);
void display3(int num,int *ptr);

void accept4(int num,int *ptr);
void display4(int num,int *ptr);
void main()
{
    int num,arr[10],i;
    printf("\nEnter how many no.of elements: ");
    scanf("%d",&num);
    printf("\nEnter %d elements: \n",num);

   /* //passing individual ele. of an array to function
    for(i=0;i<num;i++)
        arr[i]=accept(arr[i]);
     printf("\nArray elements are: \n");
    for(i=0;i<num;i++)
        display(arr[i]);*/

      //passing entire Array to function
      accept4(num,arr);
      display4(num,arr);


}

int accept(int m)
{
    scanf("%d",&m);
    return m;
}
void display(int m)
{
     printf("\nArray elements are: \n");
    printf("%d\t",m);

}

//using subscript notation and accessing entire array
 void accept1(int num,int ptr[])
 {
     int i;
     for(i=0;i<num;i++)
        scanf("%d",&ptr[i]);
 }
 void display1(int num,int ptr[])
 {
     int i;
      printf("\nArray elements are: \n");
     for(i=0;i<num;i++)
        printf("%d\t",ptr[i]);
 }

 //using pointer notation and accessing entire array
 void accept2(int num,int *ptr)
 {
     int i;
     for(i=0;i<num;i++)
        scanf("%d",&ptr[i]);
 }
 void display2(int num,int *ptr)
 {
     int i;
      printf("\nArray elements are: \n");
     for(i=0;i<num;i++)
        printf("%d\t",ptr[i]);
 }

 //using pointer notation and accessing entire array
 void accept3(int num,int *ptr)
 {
     int i;
     for(i=0;i<num;i++)
        scanf("%d",(ptr+i));
 }
 void display3(int num,int *ptr)
 {
     int i;
      printf("\nArray elements are: \n");
     for(i=0;i<num;i++)
        printf("%d\t",*(ptr+i));
 }

 //using pointer notation and accessing entire array
 void accept4(int num,int *ptr)
 {
     int i;
     for(i=0;i<num;i++)
     {
          scanf("%d",ptr);
          ptr++;
     }

 }
 void display4(int num,int *ptr)
 {
     int i;
      printf("\nArray elements are: \n");
     for(i=0;i<num;i++)
     {
          printf("%d\t",*ptr);
          ptr++;
     }

 }
