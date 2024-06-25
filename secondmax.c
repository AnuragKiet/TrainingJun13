#include <stdio.h>

int main() {
 
    int arr[10]={1,5,14,2,8,2,15,5,12,3};
    int fmax;
    int smax;
    if(arr[0]>arr[1]){
        fmax=arr[0];
        smax=arr[1];
    }
    else{
        fmax=arr[1];
        smax=arr[0];
    }
    for(int i=2;i<10;i++){
        if(arr[i]>fmax){
            smax=fmax;
            fmax=arr[i];
        }
        else if(arr[i]>smax && arr[i]!=fmax){
            smax=arr[i];
        }
    }
    printf("\n%d",smax);
 
    return 0;
}
