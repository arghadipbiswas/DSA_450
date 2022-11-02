#include <bits/stdc++.h>
using namespace std;
int first(int arr[], int low, int high, int x, int n)
{
	if (low <= high) {
		int mid = (high + low) / 2;
		if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
			return mid;
		else if (x > arr[mid])
			return first(arr, (mid + 1), high, x, n);
		else
			return first(arr, low, (mid - 1), x, n);
	}
	return -1;
}
int last(int arr[], int low, int high, int x, int n)
{
	if (low <= high) {
		int mid = (high + low) / 2;
		if ((mid == n - 1 || x < arr[mid + 1])
			&& arr[mid] == x)
			return mid;
		else if (x < arr[mid])
			return last(arr, low, (mid - 1), x, n);
		else
			return last(arr, (mid + 1), high, x, n);
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 5;
	printf("First Occurrence = %d\t",
		first(arr, 0, n - 1, x, n));
	printf("\nLast Occurrence = %d\n",
		last(arr, 0, n - 1, x, n));
	return 0;
}