#include<stdio.h>

int main(){
	unsigned int N;
	int arr[N], i,j;
	scanf("%d", &N);
	
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<N;i++){
		printf("%d - ", arr[i]);
		
		for(j=0;j<N;j++){
			if(j!=i){
				printf("%d ",arr[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
