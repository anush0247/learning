#include<stdio.h>
#include<math.h>

int main(int argv, char ** argc){
	int n,c=0;
	printf("Enter your number :");
	scanf("%d",&n);
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i == 0) c++;
	}
	
	if(c == 0){
		printf("Number is prime");
	}
	else printf("Not prime");
}
