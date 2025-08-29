#include <stdio.h>
#include <math.h>
void bai1() {
    int a, b;
    printf("Nhap a: ");
	scanf("%d", &a);
    printf("Nhap b: ");
	scanf("%d", &b);

    if (a == 0) {
        if (b == 0) printf("Phuong trinh co vo so nghiem\n");
        else printf("Phuong trinh vo nghiem\n");
    } else {
        double x = -(double)b / a;
        printf("Nghiem: x = %.6f\n", x);
    }
}
void bai2() {
    int a, b, c;
    printf("Nhap a: ");
	scanf("%d", &a);
    printf("Nhap b: ");
	scanf("%d", &b);
    printf("Nhap c: ");
	scanf("%d", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) printf("Phuong trinh co vo so nghiem\n");
            else printf("Phuong trinh vo nghiem\n");
        } else {
            double x = -(double)c / b;
            printf("Phuong trinh bac nhat, nghiem: x = %.6f\n", x);
        }
    } else {
        double delta = b*b - 4.0*a*c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem\n");
        } else if (delta == 0) {
            double x = - (double)b / (2*a);
            printf("Phuong trinh co nghiem kep: x = %.6f\n", x);
        } else {
            double x1 = (-b + sqrt(delta)) / (2*a);
            double x2 = (-b - sqrt(delta)) / (2*a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.6f\n", x1);
            printf("x2 = %.6f\n", x2);
        }
    }
}
void bai3() {
    int sodien;
    printf("Nhap so dien tieu thu: ");
    scanf("%d", &sodien);

    long tien;
    if (sodien <= 100) {
        tien = sodien * 1000;
    } else {
        tien = 100 * 1000 + (sodien - 100) * 1500;
    }

    printf("So tien phai tra: %ld VND\n", tien);
}

int main() {
    int chon;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Bai 1\n");
        printf("2. Bai 2\n");
        printf("3. Bai 3\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &chon);

        switch(chon) {
            case 1: bai1();
			break;
            case 2: bai2();
			break;
            case 3: bai3();
			break;
            case 0: printf("Thoat chuong trinh\n");
			break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (chon != 0);
}
