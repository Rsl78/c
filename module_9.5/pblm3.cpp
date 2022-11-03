#include<stdio.h>

int main(){
	unsigned int N;
	int arr[N],i;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N-1;i++){
		if(arr[i]==arr[i+1]){
			
			if(i==(N-2)){
				printf("Yes \n");
			}
			continue;
					
		}
		else{
			printf("No\n");
			break;
		}
			
		
	}
	
	return 0;
}
