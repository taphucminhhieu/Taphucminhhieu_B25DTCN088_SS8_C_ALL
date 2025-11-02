#include <stdio.h>
int main () {
	int arr[5];
		printf("nhap 5 so nguyen\n ");
	for(int i = 0; i <5 ; i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
		
	printf("Mang ban dau: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            arr[i] += 3;
        } else {
            arr[i] += 2;
        }
    }
    
    printf("Mang sau khi thay doi: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;

}
}
