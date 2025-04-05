#include <stdio.h>
int multab(int a);
int onetantable();
int fac(int n);
int sumdig(int num);
int baj(int a);

int main() {
//	task1
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	multab(num);


// 	task2
	onetantable();

// 	task3
	int n = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Factorial of your number is %d \n", fac(n));
	
// 	task4
	int dignum = 0;
	printf("Enter a number: ");
	scanf("%d", &dignum);
	printf("The sum of digits of your number is %d \n", sumdig(dignum));
	
//	task5
	int number = 1;
	baj(number);	




	return 0;
}
