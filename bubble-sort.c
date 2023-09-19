#include <stdio.h>

int main() {
	int n, i, j, k, tmp;
	scanf("%d", &n);
	int list[n];
	for(i = 0; i < n; i++)
		scanf("%d", &list[i]);
	
	
	for(i = n-1; i > 0; i--) {
		for(j = 0; j < i; j++) {
			if(list[j]>list[j+1]) {
				tmp = list[j];
				list[j] = list[j+1];
				list[j+1] = tmp;
			}
		}
//		for(k = 0; k < n; k++) printf("%d ", list[k]);
//		puts("");
	}
	
	for(i = 0; i < n; i++) printf("%d ", list[i]);
	
	return 0;
}
