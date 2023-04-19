#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			printf(" ");
		for(int k = 1; k <= i; k++)
			printf("%d",i);
		printf("\n");
	}
	for(int i = 1; i <=n ; i++){
		for(int j = 1; j <=n; j++)
			printf(" ");
		for(int k = n-1; k >= i; k--)
			printf("%d",n-i);
		printf("\n");
	}
return 0;
}
