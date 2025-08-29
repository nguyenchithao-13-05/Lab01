#include <stdio.h>
#include <math.h>
int main(){
	int choice;
	do{
		printf("------ MENU -------\n");
		printf("1. chuc nang 1: \n");
		printf("2. chuc nang 2: \n");
		printf("3. chuc nang 3: \n");
		printf("4. chuc nang 4: \n");
		printf("5. chuc nang 5: \n");
		printf("6. chuc nang 6: \n");
		printf("7. chuc nang 7: \n");
		printf("8. chuc nang 8: \n");
		printf("9. chuc nang 9: \n");
		printf("10. chuc nang 10: \n");
		printf("0. Thoat chuong trinh: \n");
		printf("chon chuc nang (0-10): ");
		scanf("%d",&choice);
		
		switch (choice){
			case 1: {
				int x;
				printf ("nha vao x: ");
				scanf ("%f",&x);
				if (x %1 == 0){
					printf ("%d x la so nguyen.\n", x );
				}
			
			}
		}
	}while (choice != 0);
	return 0;
}
