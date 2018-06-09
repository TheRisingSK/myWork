#include<stdio.h>
void main(){
    char *names[]={"Kapil Ghodeswar", "Santosh Kshirsagar", "Baba Jumbad", "Arun Katkar","Rahul Deshpande"};
    int i;

    printf("Names are Chutiya people on earth:\n");
    printf("----------------------------------\n");
    for(i=0;i<5;i++){
        printf("%s\n", names[i]);
    }
}
