#include<stdio.h>
int main(){
  float arr[10]={1,2,3,4,5,6,7,8,9};
  float sum=0;
  float average;
  for(int i=0;i<10;i++){
       sum=sum+arr[i];
       }
    average=sum/10;
  printf("sum and avarage of all array elements are : \n %f %f\n",sum,average);
 return 0;
}


