
#include<stdio.h>

int main()
{
    FILE *fp;
    char ch,str[30],str1[30];
    int num,rno,rno1;
    float per,per1;
    fp=fopen("xyz.txt","w");

    printf("enter the data: ");

   /* while((ch=getchar())!='#')
    {
        printf("%c",ch);
        fputc(ch,fp);

    }
    fclose(fp);
    fp=fopen("xyz.txt","r");
    if(fp==NULL)
    {
        puts("cannot found file");
        exit(1);
        }

         printf("\nFile Data:\n");
        while((ch=fgetc(fp))!=EOF)
        {

            printf("%c",ch);

        */
   /* while(strlen(gets(str))!=0)
    {
        fputs(str,fp);

    }
    fclose(fp);
    fp=fopen("xyz.txt","r");
    if(fp==NULL)
    {
        puts("cannot found file");
        exit(1);
    }

         printf("\nFile Data:\n");
        while((fgets(str,20,fp)))
        {
            printf("%s",str);

        }*/

    printf("\nEnter rno: ");
    scanf("%d",&rno);
    printf("\nEnter name: ");
    fflush(stdin);
    gets(str);
    printf("\nEnter per: ");
    scanf("%f",&per);
    fprintf(fp,"%d\t%s\t%f",rno,str,per);


    fclose(fp);
    fp=fopen("xyz.txt","r");
    if(fp==NULL)
    {
        puts("cannot found file");
        exit(1);
    }

         printf("\nFile Data:\n");
        fscanf(fp,"%d\t%s\t%f",&rno1,str1,&per1);
        printf("\nRno:%d",rno1);
    printf("\nName: %s",str1);
    printf("\nPer: %0.2f",per1);


        fclose(fp);
}
