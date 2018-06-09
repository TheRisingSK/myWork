#include<stdio.h>
void main(){
    FILE *fp;
    char c;
    fp = fopen(__FILE__, "r");

    while((c=fgetc(fp))!=EOF){

            printf("%c", c);
    }
    fclose(fp);
}
