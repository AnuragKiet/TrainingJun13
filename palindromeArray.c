#include <stdio.h>
#include<stdbool.h>
int main() {
  
   int n;
   printf("enter size of the array: ");
   scanf("%d",&n);
   int arr[n];
   printf("enter array elements: ");
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int s=0;
   int e=n-1;
   bool flag=true;
   while(e>s){
       if(arr[s]!=arr[e]){
           flag=false;
       }
       s++;
       e--;
   }
   if(!flag){
       printf("array is not palindrome");
   }
   else{
       printf("array is palindrome");
   }
   
   return 0;
}
