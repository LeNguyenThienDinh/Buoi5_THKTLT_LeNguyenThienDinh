#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int sumEven(int a[], int n);
bool binarySearch(int a[], int x, int left, int right);
int maxEven(int a[], int n);
int sumOdd(int a[], int n);
void printOddIndexElements(int a[], int n);
//=====================Xu ly ham========================
int sumEven(int a[], int n) 
{
	if (n <= 0) 
	{
		return 0;
	}
	int sum = (a[n - 1] % 2 == 0) ? a[n - 1] : 0;
	return sum + sumEven(a, n - 1);
}

bool binarySearch(int a[], int x, int left, int right) 
{
	if (left > right) 
	{
		return false;
	}
	int mid = left + (right - left) / 2;
	if (a[mid] == x)
	{
		return true;
	}
	else if (a[mid] > x) 
	{
		return binarySearch(a, x, left, mid - 1);
	}
	else {
		return binarySearch(a, x, mid + 1, right);
	}
}


//======================Xu ly main======================

int main() 
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int chon;
	printf("Moi nhap chuc nang \n");
	printf("1. Tinh tong chan cua a: \n");
	printf("2. Tim x tren a dua vao tim kiem nhi phan theo de quy");
	scanf("%d", &chon);

	switch (chon)
	{
	case 1:
		printf("Tong chan la: %d\n", sumEven(arr, size));
		break;
	case 2:
	{
			  int x;
			  printf("Nhap vao so muon tim: ");
			  scanf("%d", &x);
			  bool found = binarySearch(arr, x, 0, size - 1);
			  printf("so %d %s tim thay trong mang.\n", x, found ? "duoc" : "khong duoc");
	}
		break;
	
	default:
		printf("moi nhap lai.\n");
		break;
	}

	printf("Nhan nut bat ky de tiep tuc . . .");
	getchar(); 
	getchar();
	return 0;
}
