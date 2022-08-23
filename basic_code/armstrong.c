#include<stdio.h>
#include<math.h>
int main(){
	int n,n1,r,c = 0,sum = 0;
	scanf("%d", &n);
	n1 = n;
	while(n){
		r = n % 10;
		n = n/10;
		c++;
	}
	//printf("%d", c);
	n = n1;
	while(n) {
		r  = n % 10;
		sum = sum + pow(r,c);
		printf("sum is %d\n",sum);
		n = n/10;
	}
	if(n1 == sum)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
