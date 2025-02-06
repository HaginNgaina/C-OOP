#include <iostream>
using namespace std;

int main(){
	int age1, age2, age3, end1;
	cout<<"Enter ages of  the 3 students"<<end1;
	cin>>age1>>age2>>age3;
	 
	 int oldest = age1;
	 if (age2>oldest) oldest = age2;
	 if	(age3>oldest) oldest =age3;
	
	 cout<<"OLDEST AGE: "<<oldest<<end1;
 
	return 0;
}