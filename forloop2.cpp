//for loop
#include <iostream>
using namespace std;//cout,cin

int main(){
	int i, sum=0;
	//start(initialization); stop(condition); step(increament or decreament)
	for(i=100; i>=1; i--){
		cout<<i<<endl;
		sum=sum+i;
	}
	cout<<"the sum is "<<sum<<endl;
	return 0;
}