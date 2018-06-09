#include<stdio.h>
typedef struct student
{
    char name[20];
    int rno;
    int m1,m2,total;
    float per;

}std;
std accept(std*,int);
void display(std*,int);
int main()
{
    FILE *fp;
    std s[30],f[30];
    int i=0,lenght,n;
    char ch;
    int r,rec;
    char name[40],fname[40]="xyz.dat";
    float p;
    fp=fopen(fname,"wb");
    printf("\nHow many record? ");
    scanf("%d",&rec);
    accept(s,rec);

    fwrite(s,sizeof(std),rec,fp);
    fclose(fp);

    fp=fopen("xyz.dat","rb");

     printf("\nFile Data:\n");

    r=fread(f,sizeof(std),rec,fp);

    printf("\n\nvalue returned by fread: %d",r);
    display(f,rec);


        fclose(fp);
        n= noOfRecordsInFile(fname);
        printf("\n\nNo. of records in file: %d",n);
}


std accept(std *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
         printf("\nEnter rno: ");
        scanf("%d",&s[i].rno);
        printf("\nEnter name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("\nEnter per: ");
        scanf("%f",&s[i].per);
    }

}
void display(std* s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nRno:%d",s[i].rno);
        printf("\nName: %s",s[i].name);
        printf("\nPer: %0.2f",s[i].per);
    }

}

int noOfRecordsInFile(char * str)
{
    FILE *fp;
    int pos,n,tot_size;
    fp=fopen(str,"rb");

    if(fp==NULL)
    {
        printf("\nfile cant open..");
        exit(0);
    }
    pos=ftell(fp);
    printf("\nCurrent position of fp at start: %d",pos);
    fseek(fp,0,SEEK_END);
     tot_size=ftell(fp);
    printf("\nCurrent position of fp at end: %d",tot_size);
    printf("\nSize of one record: %d",sizeof(std));
    n=tot_size/sizeof(std);
    rewind(fp);
      pos=ftell(fp);
    printf("\nCurrent position of fp after rewind: %d",pos);
    return n;

}
