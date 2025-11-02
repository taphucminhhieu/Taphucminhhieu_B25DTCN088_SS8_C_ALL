#include <stdio.h>


int main() {
    int n;
    int arr[100];
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if(n > 100 || n <= 0) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    
    printf("Nhap cac phan tu cho mang (phai la so le):\n");

    for(int i = 0; i < n; i++) {
        int dieu_kien = 0;
        
        while(dieu_kien != 0) {
            printf("arr[%d] = ", i);
            scanf("%d", &arr[i]);

            if(arr[i] % 2 != 0) {
                dieu_kien = 1; 
            } else {
                printf("So chan! Vui long nhap lai (phai la so le).\n");
            }
        }
    }
    printf("\nMang sau khi nhap: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
