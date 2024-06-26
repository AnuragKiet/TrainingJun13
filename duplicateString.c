#include<stdio.h>
#include<string.h>
int main(){
     char str[]="narayan";
     int n=sizeof(str)/sizeof(str[0]), j;
     int index=0;
     for(int i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(str[i]==str[j]){
                break;
                }
             }
           if(j==i){
               str[index++]=str[i];
               }
            }
       str[index]='\0';
   printf("after removing duplicates: %s\n",str);
return 0;
}
