//PROGRAM TO COMPARE AGES OF 3 STUDENTS AND RETURN THE ELDEST
//STEPS
//1.Ask user for age one two and three
#include <iostream>
using namespace std;

int main(){
	int age1, age2, age3, end1;
	cout<< "ENTER AGE 1" <<end1;
	cin>> age1;
	
	cout<<"ENTER AGE 2"<<end1;
	cin>>age2;
	
	cout<<"ENTER AGE 3"<<end1;
	cin>>age3;
	
	 int oldest = age1;
	 if (age2>oldest) oldest = age2;
	 if	(age3>oldest) oldest =age3;
	
	 cout<<"OLDEST AGE: "<<oldest<<end1;
 return 0;
}