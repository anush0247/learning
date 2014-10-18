#include<stdio.h>

int fac(int num);

int main(int argv, char **argc){
	int n; long int m;
	printf("Enter your number :");
	scanf("%d",&n);
	m = fac(n);
	printf("%d! --> %ld",n,m);
}

int fac(int num){
	if(num == 0 ) 
		return 1;
	else 
		return num*fac(num-1);
}
