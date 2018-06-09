#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch, res;

    printf("Enter a char :");
    scanf("%c", &ch);
    res = (ch>=65 && ch<=90 || ch>=90 && ch<=122) ? printf("Charactor is aplhabet !\n") : printf("Charactor not alphabet\n");
    printf("res=%d", res);
    return 0;
}
