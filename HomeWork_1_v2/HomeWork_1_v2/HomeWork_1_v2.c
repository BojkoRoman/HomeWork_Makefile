#include <stdio.h>
#include <conio.h>
int main()
{
	int sum = 0;
	int i = 0;
	int mas[10] = {1,2,3,4,5,6,7,8,9,10}; 
	printf("Chisla : ");
	for ( i = 0; i < 10; i++){
		printf("%d", mas[i]);
		sum = sum + mas[i];
		}
	printf(" \n");
	printf("Suma chisel : ");
	printf("%d",sum);
	_getch();
 
	
	return 0;
}