#include <stdio.h>

int main() {
    int hang, cot;
    
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);
    
    int arr[hang][cot];
    printf("\nNhap cac phan tu cho mang:\n");
    for(int i = 0; i < hang; i++) {
        for(int j = 0; j < cot; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMang sau khi nhap la:\n");
    for(int i = 0; i < hang; i++) {
        for(int j = 0; j < cot; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nCac phan tu nam tren duong bien:\n");
    for(int i = 0; i < hang; i++) {
        for(int j = 0; j < cot; j++) {
            if(i == 0 || i == hang-1) {
                printf("%d ", arr[i][j]);
            } else if(j == 0 || j == cot-1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
