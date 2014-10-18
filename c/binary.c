#include<stdio.h>

void swap(int *a, int i, int j){
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

int main(int argv, char **argc){
	
	int n,i,j,low,high,mid,index,key;
	
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
	
	printf("\nEnter your key :");
	scanf("%d",&key);
	
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
	
	index = -1;
	low = 0;
	high = n-1;
	while(low < high ){
		mid = (low+high)/2;
		printf("\n--Mid : %d",mid);
		if(arr[mid] == key){
			index = mid;
			break;
		}
		else if(arr[mid] > key) {
			high = mid;
		}
		else if(arr[mid] < key) {
			low = mid+1;
		}	
	}
	
	printf("Index is : %d", index);
	
}



