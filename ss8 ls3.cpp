#include <stdio.h>
int main () {
	int arr[5];
	printf("nhap 5 so nguyen\n ");
	for(int i = 0; i <5 ; i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
    }
    printf("\ncac so chan:\n");
    int sochan=0;
    for(int i = 0; i <5 ; i++){
	if(arr[i] % 2 ==0 ) {
		printf("arr[%d]=%d",i,arr[i]);
		sochan=1;
    }
    }
	
	if (!sochan) {
    	printf("so le:\n");
	}		
	return 0;
}
