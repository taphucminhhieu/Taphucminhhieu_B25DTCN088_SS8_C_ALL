#include<stdio.h>
#include<limits.h>
int main() {
	int n,i;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	
	int a[n];
	for( i=0;i<n;i++) {
			printf("nhap: []%d]",i);
			scanf("%d",&a[i]);
			if (a[1] % 2 !=0){
			break;
		  }
		 else {
			printf("gia tri vua nhap khong ton tai:,nhap lai.");
		 }
		}
	printf("\nmang so le: ");
	for(i=0;i>n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;

}
