#include <stdio.h>
#include<math.h>
#include<string.h>
void thongtin(){
	char mss[50];
	float diem;
			
}
int tinhTongSoLe(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i += 2) {
        tong += i;      
    }
    return tong;
}
void tongsole(){
	int n;
	 do {
        printf("Nhap so nguyen duong n (>10): ");
        scanf("%d", &n);
    } while (n <= 10);

    int tong = tinhTongSoLe(n);
    printf("Tong cac so le tu 1 den %d la: %d\n", n, tong);
	}

int main(){
	int luachon;
	do{
		printf ("========= MENU========== \n");
		printf ("1. thong tin sinh vien: \n");
		printf ("2. liet ke cac so chia het cho 3: \n");
		printf ("3. thong tin lop hoc: \n");
		printf ("0. thoat chuong trinh: \n");
		printf ("moi nhap lua chon (0 - 3) \n");
		scanf ("%d",&luachon);
		
		switch (luachon){
			case 1:
				thongtin();
				break;
			case 2:
				tongsole();
				break;
		}
				
		}
		while(luachon != 0);
			return 0;
	}
