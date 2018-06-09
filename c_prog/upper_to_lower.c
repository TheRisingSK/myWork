#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("Enter string in uppercase :");
    scanf("%[^\n]s",str);
    for(i=0;i<=strlen(str);i++){
        if(str[i]>=65 && str[i]<=90){
            str[i] = str[i]+32;
        }
    }
    printf("String after lowercase :%s\n",str);
    return 0;
}
