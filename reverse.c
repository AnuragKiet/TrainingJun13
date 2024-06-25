#include<stdio.h>
int main(){
     int arr[10]={1,2,3,4,5,6,7,8,9};
     int a=0;
     int b=9;
     while(b>a){
         int temp=arr[a];
          arr[a]=arr[b];
          arr[b]=temp;
        a++;
        b--;
      }
    for(int i=0;i<10;i++){
      printf("%d\n",arr[i]);
    }
  return 0;
}
