#include <stdio.h>
//This is the line causing issue in the conflict branch
//This is the second line causing issue in the <*master/conflict> branch


int main()
{
	int a,b,total;
	printf("Enter two numbers:");
	scanf("%i" "%i",&a,&b);
	
	total = a/b;
	printf("Add = %i\n",total);
	

	return 0;
}