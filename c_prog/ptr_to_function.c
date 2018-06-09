#include<stdio.h>
double getAvg(int *arr, int size);
void main(){
    int subject[10]={1,2,3,4,5,6,7,8,9,10};
    double avg;

    avg = getAvg(subject,10);
    printf("Average=%lf\n", avg);
}
double getAvg(int *arr, int size){
    int i, sum=0;
    double avg;

    for(i=0;i<size;i++){
        sum += arr[i];
    }
    avg = (float)(sum/size);
    return avg;
}
