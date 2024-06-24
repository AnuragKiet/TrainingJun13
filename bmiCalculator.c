#include <stdio.h>

int main() {
 
   float w,h;
   printf("enter weight and hight in meter: \n");
   scanf("%f %f",&w,&h);
   float BMI=w/(h*h);
   if(BMI<18.5){
       printf("Underweight\n");
   }
   else if(BMI<25 && BMI>18.5){
       printf("Normal weight\n");
   }
   else if(BMI<30 && BMI>25){
       printf("Over weight\n");
   }
   else{
       printf("obese");
   }
 
    return 0;
}
