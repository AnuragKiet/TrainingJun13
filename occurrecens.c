#include<stdio.h>
#include<string.h>
int main(){
    int arr1[10]={2,3,5,2,2,3,4,5,4,6};
    int fr[100];
    memset(fr,0,sizeof(fr));
    for(int i=0;i<10;i++){
         fr[arr1[i]]++;
        }
    for(int j=0;j<100;j++){
            if(fr[j]==0){
             continue;
            }
           printf("%d is occuering  %d times \n",j,fr[j]);
       }
     return 0;
}
     





