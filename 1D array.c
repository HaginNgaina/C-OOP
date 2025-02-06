//arrays
#include <stdio.h>

int main()
{
	int sum=0;
	int marks[7] = {50,69,70,47,57,90,82};
	int i;
	printf("the side of the array is %d"),sizeof(marks);
	for(i=0;i<7;i++){
		printf("marks[%d} is %d\n", i, marks[i]);
	sum=sum + marks[i];	}
	
	printf("sum is %d",sum);
	
	return 0;
}