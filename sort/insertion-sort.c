#include <stdio.h>

int main() {
	int n, i, j, k, key;
	scanf("%d", &n);
	int list[n];
	for(i = 0; i < n; i++)
		scanf("%d", &list[i]);
	
	for(i = 1; i < n; i++) {
		key = list[i];
		for(j = i-1; j >= 0 && list[j] > key; j--)
			list[j+1] = list[j];
		
		list[j+1] = key;
//		for(k = 0; k < n; k++) printf("%d ", list[k]);
//		puts("");
	}
	
	for(i = 0; i < n; i++) printf("%d ", list[i]);
	
	return 0;
}
