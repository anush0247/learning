#include<stdio.h>
int main(int argv, char **argc){
	int a1=0,a2=1,a3=0,n;
	printf("Enter your number :");
	scanf("%d",&n);
	printf(" %d  %d ", a1,a2);
	while(n>=0){
		
		a3 = a1 + a2;
		printf(" %d ",a3);
		a1 = a2;
		a2 = a3;
		n--;
	}
}
