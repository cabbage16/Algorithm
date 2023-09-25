#include <stdio.h>

void insertionsort(int list[], int first, int last, int gap);

int main() {
	int n, i, j, tmp, gap;
	scanf("%d", &n);
	int list[n];
	for(i = 0; i < n; i++)
		scanf("%d", &list[i]);
	
	for(gap = n/2; gap > 0; gap /= 2) {
		if(!(gap%2)) gap++;
		for(i = 0; i < gap; i++)
			insertionsort(list, i, n-1, gap);
		
//		for(int k = 0; k < n; k++) printf("%d ", list[k]);
//		puts("");
	}
	
	for(i = 0; i < n; i++) printf("%d ", list[i]);
	
	return 0;
}

void insertionsort(int list[], int first, int last, int gap) {
	int i, j, key;
	for(i = first+gap; i <= last; i += gap) {
		key = list[i];
		for(j = i-gap; j >= first && list[j] > key; j-=gap)
			list[j+gap] = list[j];
		
		list[j+gap] = key;
	}
}
