#include<stdio.h>

/*AMAC: Klavyeden 0 ile 1000 arasinda girilen tam sayiyi
 yazi ile ifade eder*/

int main()
{
	int a;
	do {
		printf("Sayi giriniz (1-999):\n");
		scanf("%d",&a);
		if(a>999 || a<0)
			printf("0 ile 1000 arasinda bir sayi giriniz.\n");
		else
			break;	
	}while(1);
		switch (a/100){
			case 9: printf("dokuzyuz "); break;
			case 8: printf("sekisyuz "); break;
			case 7: printf("yediyuz "); break;
			case 6: printf("altiyuz "); break;
			case 5: printf("besyuz "); break;
			case 4: printf("dortyuz "); break;
			case 3: printf("ucyuz "); break;
			case 2: printf("ikiyuz "); break;
			case 1: printf("yuz "); break;
		}
		switch ((a%100)/10){
			case 9: printf("doksan "); break;
			case 8: printf("seksen "); break;
			case 7: printf("yetmis "); break;
			case 6: printf("altmis "); break;
			case 5: printf("elli "); break;
			case 4: printf("kirk "); break;
			case 3: printf("otuz "); break;
			case 2: printf("yirmi "); break;
			case 1: printf("on "); break;
		}
		switch (a%10){
			case 9: printf("dokuz"); break;
			case 8: printf("sekiz"); break;
			case 7: printf("yedi"); break;
			case 6: printf("alti"); break;
			case 5: printf("bes"); break;
			case 4: printf("dort"); break;
			case 3: printf("uc"); break;
			case 2: printf("iki"); break;
			case 1: printf("bir"); break;
		}
		return 0;
}
