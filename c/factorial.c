#include<stdio.h>

int main(int argv, char **argc){
	long int fac = 1;
	int n,m;
	printf("Enter your number :");
	scanf("%d",&n);
	m = n;
	while(n>=1){
		fac *= n;
		n--;
	}
	printf("%d! --> %ld",m,fac);
}
