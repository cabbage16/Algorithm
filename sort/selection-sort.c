#include <stdio.h>

int main() {
	int n, i, j, k, tmp, min;
	scanf("%d", &n);
	int list[n];
	for(i = 0; i < n; i++)
		scanf("%d", &list[i]);
	
	for(i = 0; i < n-1; i++) {
		min = i;
		for(j = i+1; j < n; j++)
			if(list[j]<list[min]) min = j;
			
		tmp = list[i];
		list[i] = list[min];
		list[min] = tmp;
		
//		for(k = 0; k < n; k++) printf("%d ", list[k]);
//		puts("");
	}
	
	for(i = 0; i < n; i++) printf("%d ", list[i]);
	
	return 0;
}
