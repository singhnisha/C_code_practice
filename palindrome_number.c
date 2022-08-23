#include<stdio.h>
int main(){
	int num,sum=0,original_num;
	printf("Enter the number to check if its palindrome\n");
	scanf("%d",&n);
	printf("Number is %d\n",n);
	original_num=num;
	while(num){
		sum=sum*10+num%10;
		num=num/10;
	}
	if(original_num==sum){
		printf("Its palindrome\n");
	}else{
		printf("Its not palindrome\n");
	}
	return 0;
}
