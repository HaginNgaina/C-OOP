//SIMPLE INTEREST
#include<iostream>
using namespace std;

int main(){
	int salary, servicetime;
	double bonus, net_salary;
	
	cout<<"Enter in this order:"<<endl<<"SALARY: "<<endl<<"YEARS OF SERVICE"<<endl;
	cin>>salary>>servicetime;
 
	 if(servicetime>10) {
	 bonus = 0.1 ;
	 }
	 else if(servicetime>=6 && servicetime<=10){ 
	 bonus =0.08;
	 }
	 else if(servicetime<6){ 
	 bonus =0.05;
	 }
	 net_salary = (bonus* salary) + salary;
	 
	 cout<<" your net salary is :"<<net_salary<<endl;
	 
	return 0;
}