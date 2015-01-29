#include <stdio.h>


int main()
{
	int a,b, average;
	int max;
	int min = 1;
	int total = 0;
	
	printf("Enter number of entries\n");
	scanf("%i",&max);
	
	if (max<=5 && min>=1){
		for(int i=0; i<max; i++){
		printf("Enter two numbers:");
		scanf("%i" "%i",&a,&b);
		total = total+(a+b);
		}
	}else printf("Not in range\n");
	
	average = total/max;
	
	printf("Add = %i\n",total);
	printf("Average = %i\n",average);
	

	return 0;
}