#include <stdio.h>

int main() {
 
   int number;
   scanf("%d",&number);
   if(number>=90 && number<=100){
       printf("A\n");
   }
   else if(number>=80 && number <90){
       printf("B\n");
   }
   else if(number>=70 && number <80){
       printf("C\n");
   }
   else if(number>=60 && number <70){
       printf("D\n");
   }
   else if(number<0 || number>100){
       printf("invalid number ");
   }
   else{
       printf("F\n");
   }
 
    return 0;
}
