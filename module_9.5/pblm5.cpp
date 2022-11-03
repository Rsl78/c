#include<stdio.h>

int main(){
	unsigned int N;
	int arr[N],target,i,j;
	
	scanf("%d",&N);
	
	for(i=0; i<N;i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &target);
	
	for(i=0;i<N-1;i++){
//		for(j=0;j<N;j++){
//			if(arr[i]+arr[j]==target){
//				printf("YES ");
//				break;
//			}
//			else{
//				continue;
//			}
//			printf("No");
//		}
	
		if(arr[i]+arr[i+1]==target){
			printf("YES");
			break;
		}
		else{
			printf("NO");
		}
	}
}
