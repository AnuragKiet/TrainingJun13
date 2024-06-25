#include<stdio.h>
   int main(){
       int arr[10]={1,2,3,4,5,6,7,8,9,10};
       int s=5;
       for(int i=0;i<10;i++){
         if(arr[i]==s){
               printf("element %d\n found on index:  %d\n",s,i);
           }
      }
    
       printf("element not found");
     

  return 0;
}




    


