#include<stdio.h>
int main(){
	int number;
	 printf("nhap vao 1 so tu 1 den 9");
	    scanf ("%d",&number);
	    if(number>0 && number<10){
		printf ("bang cuu chuong cua %d la\n",number);
		for(int i=1;i<10;i++){
			printf("%d*%d=%d\n",number,i,number*i);
			}
        }else{
        	printf("khong hop le");
		}
}
