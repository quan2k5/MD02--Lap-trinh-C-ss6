#include<stdio.h>
#include<stdlib.h>
int main(){
	do{
		printf ("\ncaculator\n");
		printf("1.tong cua 3 so nguyen\n");
		printf("2.trung binh cong cua 3 so nguyen\n");
		printf("3.so lon nhat va so nho nhat cua 3 so\n");
		printf("4.thoat\n");
		int n1,n2,n3;
		printf("nhap vao 3 so nguyen n1,n2,n3 lan luot la\n");
		scanf ("%d %d %d",&n1,&n2,&n3);
		int choice;
		printf("nhap vao lua chon cua ban\n");
		scanf("%d",&choice);
		int max=n1;
		int min=n1;
		switch (choice){
			case 1:
				printf ("tong cua 3 so nguyen la %d\n",n1+n2+n3);
				break;
			case 2:
				printf ("trung binh cong cua 3 so nguyen la%.2f\n",(float)(n1+n2+n3)/3);
				break;
			case 3:	
				max= max>n2?max:n2;
				max= max>n3?max:n3;
				printf("so lon nhat la %d",max);
				min= min<n2?min:n2;
				min= min<n3?min:n3;
				printf("\nso nho nhat la %d",min);
				break;
			case 4:
				exit(0);
			default:
				printf("vui long chon tu 1 den 4");
	}
	}while(1==1);
}
