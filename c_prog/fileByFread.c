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
    int i=0,lenght;
    char ch;
    int r,rec;
    char name[40];
    float p;
    fp=fopen("xyz.dat","wb");
    printf("\nHow many record? ");
    scanf("%d",&rec);
    accept(s,rec);
    /*for(i=0;i<rec;i++)
        fprintf(fp,"%d\t%s\t%f",s[i].rno,s[i].name,s[i].per);*/

   /* for(i=0;i<rec;i++)
        fwrite(&s[i],sizeof(std),1,fp);
        */

       fwrite(s,sizeof(std),rec,fp);
    fclose(fp);

    fp=fopen("xyz.dat","rb");
     printf("\nFile Data:\n");
  /*  for(i=0;i<rec;i++)
    {

         r=fread(&f[i],sizeof(std),1,fp);

          printf("\n\nvalue returned by fread: %d",r);
    }*/
    printf("\nFile Data:\n");
    r=fread(f,sizeof(std),rec,fp);

          printf("\n\nvalue returned by fread: %d",r);
    display(f,rec);


/*lenght=fscanf(fp,"%d\t%s\t%f",&s1.rno,s1.name,&s1.per);
printf("\n\nvalue returned by fscanf: %d",lenght);

 while(fscanf(fp,"%d\t%s\t%f",s1.rno,s1.name,&s1.per)==3)
 {
        printf("\nRno:%d",s1.rno);
        printf("\nName: %s",s1.name);
        printf("\nPer: %0.2f",s1.per);

 }*/

        fclose(fp);
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
