#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		for(int j = n; j >= i; j--){
			printf("%d ",n+1-i);
			//printf("i=%d j=%d\n",i,j);
		}
		printf("\n");
	}
	return 0;
}
