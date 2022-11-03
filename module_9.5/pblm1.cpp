#include<stdio.h>

int main(){
	unsigned int N;
	int i, arr[N];
	
	scanf("%d", &N);
	
	for(i=1;i<=N;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=N;i>=1;i--){
		printf("%d ",arr[i]);
	}
	return 0;
	
}
