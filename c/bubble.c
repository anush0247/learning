#include<stdio.h>

void swap(int *a, int i, int j){
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

int main(int argv, char **argc){
	
	int n,i,j,k;
	printf("Enter your length :");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	
	printf(" ------------------ \n");
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(arr[i] < arr[j]) swap(arr,i,j);
			
			printf("\n");
			for(k=0;k<n;k++){
				printf(" %d ",arr[k]);
			}
		}
	}
	printf(" ------------------ \n");
	printf("\n");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
}

