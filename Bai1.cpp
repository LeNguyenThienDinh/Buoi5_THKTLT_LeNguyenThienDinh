#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int sumEven(int a[], int n);
bool binarySearch(int a[], int x, int left, int right);
int maxEven(int a[], int n);
int sumOdd(int a[], int n);
void printOddIndexElements(int a[], int n);
//=====================Xu ly ham========================
int sumEven(int a[], int n) {
	if (n <= 0) {
		return 0;
	}
	int sum = (a[n - 1] % 2 == 0) ? a[n - 1] : 0;
	return sum + sumEven(a, n - 1);
}


//======================Xu ly main======================

int main() 
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int chon;
	printf("Moi nhap chuc nang \n ");
	printf("1. Tinh tong chan cua a: \n");
	scanf("%d", &chon);

	switch (chon)
	{
	case 1:
		printf("Sum of even numbers: %d\n", sumEven(arr, size));
		break;
	
	default:
		printf("Invalid operation.\n");
		break;
	}
	printf("Press any key to continue . . .");
	getchar(); 
	getchar();
	return 0;
}
