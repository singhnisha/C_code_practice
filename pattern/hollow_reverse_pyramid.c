#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		for(int k = 1; k <= i-1; k++){
			printf("1");
		}
		for(int j = 1; j <= 2*n; j++){
			//if(j==((n*2) - (2*i)))
			//	printf("%d ",(n*2)-(2*i));
			//if(i==1 || i==j || j==((n*2)-(2*i)))
			if(i==1)
				printf("*");
			//else
			//	printf(" ");
			if(i==j)
				printf("2");
			if(j==n*2-2*i)
				printf("3");
			//else
			//	printf(" ");
		}
		printf("\n");
	}
return 0;
}
