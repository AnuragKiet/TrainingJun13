#include <stdio.h>

int main() {
 
  int n,count=0;
  printf("enter number of elements in the array: ");
  scanf("%d",&n);
  int arr[n],temp[n];
  printf("\nenter elements in the array: ");
  for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
      int j;
      for(j=0;j<count;j++){
          if(arr[i]==temp[j]){
              break;
          }
      }
      if(j==count){
          temp[count]=arr[i];
          count++;
      }
  }
  printf("\narray after removing duplicates");
  for(int i=0;i<count;i++){
      printf("\n%d",temp[i]);
  }
 
    return 0;
}
