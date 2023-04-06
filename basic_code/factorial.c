#include<stdio.h>
int factorial(int num){
    if(num == 0)
        return 1;
    return (num * factorial(num - 1));
}
int main(){
    int n;
    printf("Enter number \n");
    scanf("%d",n);
    printf("Fact is %d",factorial(n));
    return 0;
}