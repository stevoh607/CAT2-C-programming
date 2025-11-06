/*
Name:Stephen Ndungu
Reg no:CT101/G/26448/25
*/


#include<stdio.h> 
int main(){
	
	int hours;
	float wage,gross_pay,net_pay,tax;
	
	printf("enter hours worked in that week\n");
	scanf("%d",&hours);
	
	printf("enter hourly wage\n");
	scanf("%f",&wage);
	
	//calculate gross pay
	if(hours>40){
		gross_pay=40*wage+(hours-40)*1.5*wage;
	}
	
	else{
		gross_pay=hours*wage;
	}
	//tax
	
	if(gross_pay<=600){
	tax=0.15*gross_pay;
	}
	
	else{
	tax=0.15*600+(gross_pay-600)*0.2;
	}
	
	net_pay=gross_pay-tax;
	
	
	printf("net_pay is %.2f",net_pay);
	
	
	
	
	
	return 0;
	}