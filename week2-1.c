#include<stdio.h>
int main(){
    printf("Enter number : ");
    int n;
    scanf("%d",&n); //input

    printf("Countdown! : ");
    for(int x=0;x<n;x++){
        printf("%d",n-x);
    }
}