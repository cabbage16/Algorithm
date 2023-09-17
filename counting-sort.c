#include <stdio.h>

int main() {
	int n, t, arr[100000] = {};
	int min = 4500000, max = 0;
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d", &t);
		arr[t]++;
		if(t > max) max = t;
		if(t < min) min = t; 
	}
	
	for(int i = min; i <= max; i++) {
		for(int j = 0; j < arr[i]; j++)
			printf("%d ", i);
	}
	
	return 0;
}
