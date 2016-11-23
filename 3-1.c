#include <stdio.h>

int binsearch(int, int [], int);

int main() {
	int x, arr[50], n, i, loc;
	scanf("%d%d",&n,&x);
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	loc = binsearch(x, arr, n);
	printf("%d\n", loc+1);
	return 0;
}

int binsearch(int x, int arr[], int n) {
	int low, high, mid;
	low = 0;
	high = n - 1;
	mid = (low + high) / 2;
	while (low <= high && x != arr[mid]) {
		mid = (low + high) / 2;
		if (x < arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	if (x != arr[mid])
		return -1;
	else
		return mid;
}
