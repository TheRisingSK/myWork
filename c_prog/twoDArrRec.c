#include<stdio.h>
void accept(int arr[],int );
void display(int arr[],int r,int c);


void accept2DArr(int arr[][3],int,int );
void display2DArr(int arr[][3],int r,int c);
void display2DArr1(int arr[][3],int sr1,int sc1,int r,int c);
void main()
{
    int arr[10],ptr[3][3];
    //accept(arr,3);     //read 1D array elements using recursion
    //display(arr,0,3);  //display 1D array elements using recursion

    accept2DArr(ptr,3,3);  //read 2D array elements using recursion
    printf("\n\nMatrix elements in reverse order: \n");
    display2DArr(ptr,3,3);  //display 2D array elements using recursion

    printf("\n\nMatrix elements: \n");
    display2DArr1(ptr,0,0,3,3);
}

//read 1D array elements using recursion

void accept(int arr[],int n)
{
    if(n<=0 )
        return;

    printf("\nEnter elements%d : ",n-1);
    scanf("%d",&arr[n-1]);
    accept(arr,n-1);


}

//Display 1D array elements using recursion
void display(int arr[],int s,int n)
{
    if(s==n)
        return;

    printf("\nElements%d : %d",s+1,arr[s]);

    display(arr,s+1,n);

}

//read 2D array elements using recursion

void accept2DArr(int arr[][3],int r,int c)
{
    if(r!=0)
    {
        if(c-1>=0)
        {
            printf("\nEnter elements for %d row: ",r-1);
            scanf("%d",&arr[r-1][c-1]);
            accept2DArr(arr,r,c-1);
        }
        else
        {
            accept2DArr(arr,r-1,3);
        }
    }

}
//display 2D array elements using recursion

void display2DArr(int arr[][3],int r,int c)
{
    if(r!=0)
    {
        if(c-1>=0)
        {

            printf("%d\t",arr[r-1][c-1]);
            display2DArr(arr,r,c-1);
        }
        else
        {
            printf("Elements for %d row: ",r-1);
            printf("\n");
            display2DArr(arr,r-1,3);
        }
    }
}
void display2DArr1(int arr[][3],int sr,int sc,int r,int c)
{
    if(sr<r)
    {
        if(sc<c)
        {

            printf("%d\t",arr[sr][sc]);
            display2DArr1(arr,sr,sc+1,r,c);
        }
        else
        {
            printf("Elements for %d row: ",sr+1);
            printf("\n");
            display2DArr1(arr,sr+1,0,r,c);
        }
    }
}
