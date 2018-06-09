#include<stdio.h>
int ret_Integer();
float ret_Float();
int main(){

    float area;

    area = (ret_Float() * ret_Integer() * ret_Float());
    printf("Area=%.2f", area);
    return 0;
}
int ret_Integer(){
    return 3;
}
float ret_Float(){
    return 3.14;
}
