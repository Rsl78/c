#include<stdio.h>

int main(){
	unsigned int n,m,i,dif,lim;
	scanf("%d%d", &n,&m);
	
	if(m>n){
		for(i=n;i<=m;i++){
			printf("%d ", i%24);
		}
	}
	
	else{
//		lim = 24-n+m;
	
		for(i=n;i<=24+m;i++){
			printf("%d ", i%24);
		}
	}
	
	return 0;
}
