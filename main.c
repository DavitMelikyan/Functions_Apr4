#include <stdio.h>
void multab(int a);
void onetantable();
int fac(int n);
int sumdig(int num);
void baj(int a);
int power(int num, int exp);
int rev(int a);
void hex(int num, char* arr,const int size);
int fibo(int n);
void bin(int num);
int parztvgum(int num);
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
	
//	task6
	int numpar = 12;	
	printf("%d \n", parztvgum(numpar));

// 	task7
	int nump = 3;
	int exp = 4;
	printf("%d to the power of %d is %d \n", nump, exp, power(nump, exp));

// 	task8
	int numrev = 5479;
	printf("Reversed number of %d is %d \n", numrev, rev(numrev));

// 	task9
	int hexnum = 111234;
	const int size = 5;
	char arr[size] = {};
	hex(hexnum, arr, size);

//	task10
	int nfib = 5;
	printf("Your number is %d \n", fibo(nfib));
	
//	task11
	int nbin = 213;
	bin(nbin);

	return 0;
}
