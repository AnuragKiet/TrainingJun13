#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#define NO_OF_CHARS 256
int main() {
   char str1[]="narayan";
   char str2[]="rayanan";
   int count1[NO_OF_CHARS]={0};
   int count2[NO_OF_CHARS]={0};
   bool isAna=true;
   int i=0;
   for(i=0; str1[i]&&str2[i];i++){
       count1[str1[i]]++;
       count2[str2[i]]++;
   }
   if (str1[i] || str2[i]){
       isAna=false;
   }
   for (i = 0; i < NO_OF_CHARS; i++){
        if (count1[i] != count2[i]){
            isAna=false;
        }
   }
   if(isAna){
      printf("anagram\n");
   }
   else{
       printf("Not anagram");
   }
   return 0;
}
