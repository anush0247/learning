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
	
	//printf(" ------------------ \n");
	
	for(i=0;i<n;i++){
		int min = i;
		int min_val = arr[min];
		for(j=min;j<n;j++){
			if(arr[j] < min_val) min = j;
		}
		swap(arr,i,min);
	}
	//printf(" ------------------ \n");
	printf("\n");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
}


