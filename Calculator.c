#include <stdio.h>

int main() {
   char op;
   int f,s;
   scanf("%c",&op);
   scanf("%d %d",&f,&s);
   switch(op){
        case '+':
          printf("%d + %d = %d",f,s,f+s);
          break;
        case '-':
           printf("%d - %d = %d",f,s,f-s);
           break;
        case '*':
           printf("%d * %d = %d",f,s,f*s);
           break;
        case '/':
           printf("%d / %d = %d",f,s,f/s); 
           break;
        case '&':
           printf("%d & %d = %d",f,s,f&s); 
           break;
        case '|':
           printf("%d | %d = %d",f,s,f|s); 
           break;
        case '^':
           printf("%d ^ %d = %d",f,s,f^s); 
           break;
        case '%':
           printf("%d %% %d = %d",f,s,f%s); 
           break;   
   }
    return 0;
}
