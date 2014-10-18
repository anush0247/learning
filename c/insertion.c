#include<stdio.h>

void swap(int *a, int i, int j){
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

int main(int argv, char **argc){
	
	int n,i,j;
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
	
	for(j=1;j<n;j++){
		int key = arr[j];
		i = j-1;
		while(i >= 0 && arr[i] >= key){
			arr[i+1] = arr[i];
			i = i-1;
		}
		arr[i+1] = key;
	}
	
	printf("\n");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
}



