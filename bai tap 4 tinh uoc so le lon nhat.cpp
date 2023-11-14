#include<stdio.h>
#include<stdlib.h>
int main(){
	do{
		printf("\nTap\n");
		printf("1.in day so chia het cho 2 va giam dan(n>=so>=2)\n");
		printf("2.in cac so nho hon va tinh tong\n");
		printf("3.in ra cac uoc so chan cua n\n");
		printf("4.in ra cac uoc so le va so luong uoc so le cua n\n");
		printf("5.in ra uoc so le lon nhat cua n\n");
		printf("6.thoat\n");
		int number;
		printf("nhap vao so n\n");
		scanf("%d",&number);
		int choice;
		printf("nhap yeu cau cua ban\n");
		scanf("%d",&choice);
		int sum1=0;
	    int i1=0;
		switch(choice){
			case 1:
				if(number%2==0){
					while(number>=2){
					printf("%d",number);
					number=number-2;
		        }
				}else{
		        	number=number-1;
		        	while(number>=2){
		        		printf("%d ",number);
		        		number=number-2;
				}
	            }
	            break;
	        case 2:
	        	number=number-1;
	        	while(number>0){
	        		printf("%d ",number);
	        		sum1=sum1+number;
	        		number=number-1;
	        		}
	        		printf("\ntong cac so nho hon n la %d",sum1);
	            break;
	        case 3:
	        		for(int i=1;i<=number;i++){
	        			if(number%i==0){
	        				if(i%2==0){
	        					printf("%d ",i);
	                         }
	                         }
	                         }
	           break;
	        case 4:
	        	for(int i=1;i<=number;i++){
	        			if(number%i==0){
	        				if(i%2==1){
	        					printf("%d ",i);
	        					i1=i1+1;
	                         }
	                         }
	                         }
	                printf("/ntong cac uoc chan la %d",i1);
	            break;
	           case 5:
	           	printf("kkkkk");
	           		for(int i = number; i >= 1; i--){
	           			if(number%i==0){
		           			if(i%2==1){
		           				break;
		           			}
	           			}
	           		
	           			printf("uoc so le lon nhat cua n la %d",i);
	           		}
	           	break;
	           	case 6:
	           		exit(0);
	           	default:
	           		printf("vui long nhap lai tu1 den 6 ");
	           }}while(1==1);	        
}
	           
