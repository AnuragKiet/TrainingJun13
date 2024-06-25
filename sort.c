#include<stdio.h>
int main(){
    int arr[10]={2,4,5,3,1,9,7,8,6,0};
     for(int i=0;i<10;i++){
       for(int j=i+1;j<10;j++){
          if(arr[j]<arr[i]){
                int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                 }
              }
            }
     for(int k=0;k<10;k++){
        printf("%d\n",arr[k]);
      }
return 0;
}   
