#include <stdio.h>
#include <math.h>

void inputArray(int x[10], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &x[i]);
    }
}
void showArray(int x[10], int n) {
    printf("Mang vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}
int elementOddArray(int x[10], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 != 0) count++;
    }
    return count;
}
int elementEvenArray(int x[10], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 == 0) count++;
    }
    return count;
}
int elementOddTotalArray(int x[10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 != 0) sum += x[i];
    }
    return sum;
}
int elementEvenTotalArray(int x[10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 == 0) sum += x[i];
    }
    return sum;
}
int laSoNT(int x) {
    if (x < 2) return 0;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}
int laSoCP(float x) {
    if (x < 0) return 0;
    int n = (int)x;
    int can = (int)sqrt(n);
    return (can * can == n);
}
int main() {
    int a[10], n;
    do {
        printf("Nhap so phan tu (toi da 10): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 10);

    inputArray(a, n);
    showArray(a, n);

    printf("Cac phan tu chia het cho 3: ");
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    int soChan = elementEvenArray(a, n);
    int soLe = elementOddArray(a, n);
    printf("So luong phan tu chan: %d\n", soChan);
    printf("So luong phan tu le: %d\n", soLe);
    int tongChan = elementEvenTotalArray(a, n);
    int tongLe = elementOddTotalArray(a, n);
    printf("Tong cac phan tu chan: %d\n", tongChan);
    printf("Tong cac phan tu le: %d\n", tongLe);

    return 0;
}