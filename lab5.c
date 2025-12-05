#include <stdio.h>
#include <math.h>

void nhapSoNguyen(int *n) {
    printf("Nhap mot so nguyen: ");
    scanf("%d", n);
}

void nhapSoThapPhan(float *x) {
    printf("Nhap mot so thap phan: ");
    scanf("%f", x);
}

int laSoNguyen(float x) {
    if (x == (int)x) {
        return 1;
    }
    return 0;
}

int laSoCP(float x) {
    if (!laSoNguyen(x) || x < 0) {
        return 0;
    }
    int n = (int)x;
    int can = (int)sqrt(n);
    if (can * can == n) {
        return 1;
    }
    return 0;
}

int laSoNT(float x) {
    if (!laSoNguyen(x)) {
        return 0;
    }
    int n = (int)x;
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    float x;

    nhapSoNguyen(&n);
    nhapSoThapPhan(&x);

    printf("\nKet qua kiem tra voi so nguyen %d:\n", n);
    printf("La so chinh phuong? %s\n", laSoCP(n) ? "Co" : "Khong");
    printf("La so nguyen to? %s\n", laSoNT(n) ? "Co" : "Khong");

    printf("\nKet qua kiem tra voi so thap phan %.2f:\n", x);
    printf("La so nguyen? %s\n", laSoNguyen(x) ? "Co" : "Khong");
    printf("La so chinh phuong? %s\n", laSoCP(x) ? "Co" : "Khong");
    printf("La so nguyen to? %s\n", laSoNT(x) ? "Co" : "Khong");

    return 0;
}