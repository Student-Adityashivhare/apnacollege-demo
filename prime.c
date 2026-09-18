#include <stdio.h>
int main(){
    int n, f=0, i=2;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(i<n/2){
        if(n%i==0){
            f=1;
            break;
        }
        i++;
    }
    if(f==0){
        printf("prime number");
    }
    else{
        printf("not prime number");
    }
    
}