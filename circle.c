#include <stdio.h>
#define PI 3.141
int main() {
    
    double r,area;
    scanf("%lf",&r);
    area=PI * r * r;
    printf("%lf\n",area);
    double circumf=2*PI*r;
    printf("%lf\n",circumf);
    printf("\n");

    return 0;
}
