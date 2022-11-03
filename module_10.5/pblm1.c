#include<stdio.h>

int main(){
	unsigned int N;
	int  i, arr[N],sum=0;
	scanf("%d",&N);
	
	for(i=1;i<N;i++){
		arr[0]=0;
		sum=arr[i-1]+arr[i];
		arr[i]=sum;	
		printf("%d ",arr[i]);
		
	}
	return 0;
}
