#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int danhSach[MAX];
int soLuong = 0;

int themPhanTu() {
    int viTri, giaTri;
    
    if (soLuong >= MAX) {
        printf("Danh sach da day! Khong the them phan tu moi.\n");
        return 0;
    }
    
    printf("Nhap vi tri can them (0 - %d): ", soLuong);
    scanf("%d", &viTri);
    
    if (viTri < 0 || viTri > soLuong) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }
    
    printf("Nhap gia tri can them: ");
    scanf("%d", &giaTri);
    
    for (int i = soLuong; i > viTri; i--) {
        danhSach[i] = danhSach[i - 1];
    }
    
    danhSach[viTri] = giaTri;
    soLuong++;
    printf("Them phan tu thanh cong!\n");
    return 1;
}

int xoaPhanTu() {
    int viTri;
    
    if (soLuong == 0) {
        printf("Danh sach rong! Khong co phan tu de xoa.\n");
        return 0;
    }
    
    printf("Nhap vi tri can xoa (0 - %d): ", soLuong - 1);
    scanf("%d", &viTri);
    
    if (viTri < 0 || viTri >= soLuong) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }
    
    for (int i = viTri; i < soLuong - 1; i++) {
        danhSach[i] = danhSach[i + 1];
    }
    
    soLuong--;
    printf("Xoa phan tu thanh cong!\n");
    return 1;
}

int capNhatPhanTu() {
    int viTri, giaTri;
    
    if (soLuong == 0) {
        printf("Danh sach rong! Khong co phan tu de cap nhat.\n");
        return 0;
    }
    
    printf("Nhap vi tri can cap nhat (0 - %d): ", soLuong - 1);
    scanf("%d", &viTri);
    
    if (viTri < 0 || viTri >= soLuong) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }
    
    printf("Nhap gia tri moi: ");
    scanf("%d", &giaTri);
    
    danhSach[viTri] = giaTri;
    printf("Cap nhat phan tu thanh cong!\n");
    return 1;
}

int timKiemPhanTu() {
    int giaTri, found = 0;
    
    if (soLuong == 0) {
        printf("Danh sach rong! Khong co phan tu de tim kiem.\n");
        return 0;
    }
    
    printf("Nhap gia tri can tim: ");
    scanf("%d", &giaTri);
    
    printf("Cac phan tu co gia tri %d o vi tri: ", giaTri);
    for (int i = 0; i < soLuong; i++) {
        if (danhSach[i] == giaTri) {
            printf("%d ", i);
            found = 1;
        }
    }
    
    if (!found) {
        printf("Khong tim thay!");
        return 0;
    }
    printf("\n");
    return 1;
}

int hienThiDanhSach() {
    if (soLuong == 0) {
        printf("Danh sach rong!\n");
        return 0;
    }
    
    printf("Danh sach hien tai (%d phan tu): ", soLuong);
    for (int i = 0; i < soLuong; i++) {
        printf("%d ", danhSach[i]);
    }
    printf("\n");
    return 1;
}

int main() {
    int luaChon;
    int ketQua;
    
    printf("QUAN LY DANH SACH SO NGUYEN\n");
    
    do {
        printf("\nMENU:\n");
        printf("1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu o vi tri bat ky\n");
        printf("3. Cap nhat gia tri tai vi tri bat ky\n");
        printf("4. Tim kiem phan tu trong mang\n");
        printf("5. Hien thi mang\n");
        printf("6. Thoat chuong trinh\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        
        switch (luaChon) {
            case 1:
                ketQua = themPhanTu();
                break;
            case 2:
                ketQua = xoaPhanTu();
                break;
            case 3:
                ketQua = capNhatPhanTu();
                break;
            case 4:
                ketQua = timKiemPhanTu();
                break;
            case 5:
                ketQua = hienThiDanhSach();
                break;
            case 6:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon tu 1-6.\n");
                ketQua = 0;
        }
        
    } while (luaChon != 6);
    
    return 0;
}
