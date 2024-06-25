#include<stdio.h>
int main()
      {
        int a1[5]={0,1,2,3,4};
        int a2[5]={5,6,7,8,9};
        int i=0;
        int j=0;
        int k=0;
        int s1=5;
        int s2=5;
        int s3=10;
        int a3[10];
        while(i<s1){
              a3[k++]=a1[i++];
              }
         while(j<s2){
              a3[k++]=a2[j++];
              }
      for(i=0;i<10;i++){
        printf("%d\n",a3[i]);
        }
    return 0;
}         
             
           
