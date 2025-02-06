//Electricity bill
#include <stdio.h>
int main(){
	int customer_id, units_consumed,charges;
	char customer_name;
	printf("enter customer id: ");
	scanf("%d",&customer_id);
	
	printf("enter customer name: ");
	scanf("%s",&customer_name);
	
	printf("enter units consumed: ");
	scanf("%d",&units_consumed)
	;
	
	if (units_consumed>=1 && units_consumed<=199){
		charges = units_consumed *1.20;
	}
	else if (units_consumed>=200 && units_consumed<400){
		charges = units_consumed *1.50;
	}
	else if (units_consumed>=400 && units_consumed<600){
		charges = units_consumed *1.80;
	}
	else if (units_consumed>=600){
		charges = units_consumed *2.00;
	}
	printf("Dear customer ID:%d",customer_id);
	printf("The total billing is:%d \n",charges );
	
	return 0;
}