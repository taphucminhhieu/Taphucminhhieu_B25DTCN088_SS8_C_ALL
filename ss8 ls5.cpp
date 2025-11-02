#include <stdio.h>
int main () {
	int arr[5];
	printf("nhap so: ");
	scanf("%d",&arr[5]);
	
	int so_lon_nhat=arr[0];
	int so_nho_nhat=arr[0];
	for(int i =0 ; i<5;i++){
		if(arr[1]> so_lon_nhat){
		so_lon_nhat = arr[1];
	    }
	    if(arr[1]< so_nho_nhat) {
		so_nho_nhat =arr[1];
		}
	}
	 printf("nhap so lon nhat: %d\n",so_lon_nhat);
	 printf("nhap so nho nhat: %d\n",so_nho_nhat);


return 0;
}
