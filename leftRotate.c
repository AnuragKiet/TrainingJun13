#include <stdio.h>

int main() {
  
   printf("enter array size : ");
   int n;
   scanf("%d",&n);
   int arr[n];
   printf("\nenter array elements : ");
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int d;
   printf("\nenter number to rotate array");
   scanf("%d",&d);
   d=d%n;
   printf("printing array after rotation : ");
   for(int i=0;i<n;i++){
       printf("%d ",arr[(i+d)%n]);
   }
   printf("\n");
   return 0;
}
