#include<stdio.h>
#include<string.h>

void fact(int n[],int m){

	int i;

	for(i=0; i<m;i++){
		
		printf("%d\t",n[i]);
	}

	}

int main(){

	int a [5] = {10,20,30,40,50};
	
	int size = sizeof(a)/sizeof(a[0]);
	fact(a,size);

	return 0;
}
