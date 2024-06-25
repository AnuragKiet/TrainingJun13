#include<stdio.h>
#include<limits.h>
 int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<10;i++){
       if(arr[i]>max){
            max=arr[i]; 
          }
       if(arr[i]<min){
           min=arr[i];
          }
       }
     printf("minimum and maximum of the array is :\n %d\n %d\n",min,max);
  return 0;
}   
