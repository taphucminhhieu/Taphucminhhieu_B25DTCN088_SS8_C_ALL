#include <stdio.h>

int main() {
    int hang,cot;
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);
    int arr[hang][cot];
    printf("\nNhap cac phan tu cho mang:\n");
    for(int i = 0; i < hang; i++) {
        for(int j = 0; j < cot; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n=== MA TRAN %dx%d ===\n", hang, cot);
    for(int i = 0; i < hang; i++) {
        printf("| ");
        for(int j = 0; j < cot; j++) {
            printf("%3d ", arr[i][j]);  
        }
        printf("|\n");
    }

    return 0;
}
