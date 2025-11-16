#include <stdio.h>
#include <math.h>
//kiểm tra số nguyên tố
int isprime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
// bài tập 1: kiểm tra số nguyên tố x 
void bai1() {
    double x;
    printf( "nhap mot so thuc x: ");
    scanf ( "%lf", &x); 
    
    if (x== (int)x) {
        if (isprime((int)x)) {
            printf ("%d la so nguyen to.\n ", (int)x);
        } else {
            printf ("%d khong phai la so nguyen to.\n ", (int)x);
        }
    }else{        
            printf ("%.2lf khong phai la so nguyen, nen no khong phai la so nguyen to.\n ", x);
    }
        return;
    }
// bài 2: menu 4 chức năng 
void bai2() {
    int choice;
    do {
        printf("Menu:\n");
        printf("1. Tinh tong hai so\n");
        printf("2. Kiem tra so chan/le\n");
        printf("3. Thoat\n");
        printf("Chon chuc nang (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                double a,b;
                printf("Nhap hai so: ");
                scanf("%lf %lf", &a, &b);
                printf("Tong la:%.2lf\n",a+b);
                break;   
            }
            case 2: {
                int n;
                printf("Nhap mot so nguyen: ");
                scanf("%d", &n);
                if (n % 2 ==0)
                    printf("%d la so chan.\n", n);
                else
                    printf("%d la so le.\n", n);
                break;
            }
            case 3:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                    printf("Chon sai roi. chon lai di bro.\n");           
        }
    }while (choice != 3);
}
int main() {
    int chon;
    printf(" Chon bai tap :\n");
    printf("1. Kiem tra so nguyen to\n");
    printf("2. Menu 4 chuc nang\n");
    printf("Nhap lua chon: ");
    scanf("%d", &chon);
    
    if (chon == 1)
        bai1();
    else if (chon == 2)
        bai2();
    else
        printf(" Chon sai roi. chon lai di bro.\n");
    
    return 0;
}
