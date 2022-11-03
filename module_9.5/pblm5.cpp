#include<stdio.h>

int main(){
	unsigned int N;
	int arr[N],target,i,j;
	
	scanf("%d",&N);
	
	for(i=0; i<N;i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &target);
	
	int flag=0;
	
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(arr[i]+arr[j]==target){
				flag=1;
				break;
			}	
		}
	}
	if(flag==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
