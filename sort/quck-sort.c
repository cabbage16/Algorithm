#include <stdio.h>
#define SWAP(a, b) {int tmp = a; a = b; b = tmp;}

int partition(int list[], int left, int right);
void quicksort(int list[], int left, int right);

int main() {
	int n, i;
	scanf("%d", &n);
	int list[n];
	for(i = 0; i < n; i++)
		scanf("%d", &list[i]);
		
	quicksort(list, 0, n-1);
	
	for(i = 0; i < n; i++)
		printf("%d ", list[i]);
		
	return 0;
}

void quicksort(int list[], int left, int right) {
	int q;
	int n = sizeof(list) / sizeof(int);
	if(left < right) {
		q = partition(list, left, right);
		quicksort(list, left, q-1);
		quicksort(list, q+1, right);
	}
//	for(int i = 0; i < 9; i++)
//		printf("%d ", list[i]);
//	puts("");
}

int partition(int list[], int left, int right) {
	int pivot, low, high;
	low = left;
	high = right+1;
	pivot = list[left];
	do {
		do {
			low++;
		} while(pivot > list[low]);
		do {
			high--;
		} while(pivot < list[high]);
		if(low < high)
			SWAP(list[low], list[high]);
	} while(low < high);
	SWAP(list[left], list[high]);
	
	return high;
}
