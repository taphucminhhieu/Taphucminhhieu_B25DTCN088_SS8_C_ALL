#include <stdio.h>
#include <math.h>

// Hàm ki?m tra s? nguyên t?
int isPrime(int n) {
    if (n < 2) return 0;  // S? nh? hon 2 không ph?i s? nguyên t?
    if (n == 2) return 1; // 2 là s? nguyên t?
    if (n % 2 == 0) return 0; // S? ch?n l?n hon 2 không ph?i s? nguyên t?
    
    // Ki?m tra các s? l? t? 3 d?n can b?c 2 c?a n
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter length of arr: ");
    scanf("%d", &n);
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang sau khi nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Cac so nguyen to trong mang la: ");
    int found = 0;
    
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong co so nguyen to nao");
    }
    printf("\n");
    
    return 0;
}
