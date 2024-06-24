#include <stdio.h>

int main() {
 
    int n=1111;
    int decimal=0;
    int base=1;
    int temp=n;
    while(temp){
        int ld=temp%10;
        temp=temp/10;
        decimal=decimal+ld*base;
        base=base*2;
    }
    printf("%d\n:",decimal);
 
    return 0;
}
