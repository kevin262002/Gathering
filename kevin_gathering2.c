#include<stdio.h>

int sum(int a[],int n){

	int i,sum=0;

	 for(i=0; i<n; i++){
	 	
        sum = sum+a[i];
    }
		return sum;
}

int main(){


    int a[100],i,n;

    printf("Enter size of the array : ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
    	
    	printf("The value of [%d] : ",i);
        scanf("%d",&a[i]);
    }
    
     printf("sum of array is : %d",sum(a,n));
     
     return 0;
}
