#include <stdio.h>

//This is the second line causing issue in the master branch
//This is the line causing issue in the conflict branch
//This is the second line causing issue in the conflict branch

<<<<<<< HEAD




=======
>>>>>>> conflict

int main()
{
	int a,b,total;
	printf("Enter two numbers:");
	scanf("%i" "%i",&a,&b);
	
	total = a/b;
	printf("Add = %i\n",total);
	

	return 0;
}