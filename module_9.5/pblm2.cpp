#include<stdio.h>

int main(){
	int N,j,i,v, Q;
	int arr[N];
	
	scanf("%d", &N);
	
	for(j=0;j<N;j++){
		scanf("%d",&arr[j]);
	}
	
	scanf("%d",&Q);
	
	for(j=0;j<Q;j++){
		scanf("%d%d", &i,&v);
		arr[i]+=v;
	}
	
	for(j=0;j<N;j++){
		printf("%d ",arr[j]);
	}
	
	return 0;
	
	
}
