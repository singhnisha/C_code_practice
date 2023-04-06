#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i = 2; i <= n; i++){
        if(n % i == 0)
            break;
    }
    if(n == i) {
        printf("Yes it is\n");
    } else {
        printf("No its not\n");
    }
    return 0;
}