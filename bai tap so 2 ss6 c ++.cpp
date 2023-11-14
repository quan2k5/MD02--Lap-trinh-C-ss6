#include <stdio.h>
#include <stdlib.h>
int main (){
	do{
		printf ("\n    caculator   ");
		printf ("\n1.tong hai so");
		printf ("\n2.hieu hai so");
		printf ("\n3.tich hai so");
		printf ("\n4.thuong hai so");
		printf ("\n5.so du trong phep chia");
		printf ("\n6.uoc chung lon nhat cua hai so");
		printf ("\n7.boi chung nho nhat cua hai so");
		printf ("\n8.thoat");	
     int number1,number2;
     printf("\nnhap vao 2 so nguyen bat ky ");
     scanf("%d %d",&number1,&number2);
     int ordinal_number;
     printf ("\n nhap vao so thu tu de thuc hien phep tinh ");
     scanf("%d",&ordinal_number);
     switch (ordinal_number){
     case 1:
	 	printf ("\ntong cua 2 so la %d",number1+number2);
	 	break;
	 case 2:
	 	if(number1>=number2){
	 		printf ("\nhieu cua 2 so la %d",number1-number2);
	 		}else{
	 	    printf ("\nhieu cua 2 so la %d",number2-number1);	
			 }
		break;
	 case 3:
	 	printf ("\ntich cua 2 so la %d",number1*number2);
	 	break;
	 case 4:
	 	if(number1>=number2){
	    printf ("\nthuong cua 2 so la %d",number1/number2);
	    }else{
	    printf("\n thuong cua 2 so la %d",number2/number1);
		}
		break;
	 case 5:
	 	if(number1>number2){
	 	printf ("\nso du trong phep chia %d",number1%number2);
	 	}else{
	 	printf ("\nso du trong phep chia %d",number2%number1);
	 	}
	    break;
	 case 6:
	 	if(number1>=0 && number2>=0){
	 		if(number1==0 && number2==0){
	 			printf("khong co uoc chung lon nhat");
	 		}else if(number1==0 && number2!=0){
	 			printf ("uoc chung lon nhat la %d",number2);
	 		}else if (number1!=0 && number2==0){
	 			printf ("uoc chung lon nhat la %d",number1);
	 		}else{
	 		while (number2!=0){
	 			int x=number2;
	 			number2=number1%number2;
	 			number1=x;
	 			}
	 			printf ("uoc so chung lon nhat la %d",number1);
	 			}
	 			}
	 			break;
	 case 7:
	 	if(number1>=0 && number2>=0){
	 		if(number1==0 && number2==0){
	 			printf("khong co boi chung nho nhat");
	 		}else if (number1==0&&number2!=0){
	 			printf ("khong co boi chung nho nhat");
	 		}else if (number1!=0 && number2==0){
	 			printf ("khong co boi chung nho nhat");
	 		}else{
	 			int n12=number1*number2;
	 		while (number2!=0){
	 			int x=number2;
	 			number2=number1%number2;
	 			number1=x;
	 			}
	 			printf ("boi so chung nho nhat la %d",n12/number1);
	 			}
	 			}
	 			break;
	 	
	 case 8:
	 	exit (0);
	 	default:
	 		printf ("nhap lai cac so tu 1 den 8\n");
	 	}
		 }while(8==8);
}
