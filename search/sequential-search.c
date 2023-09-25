#include <stdio.h>

int list[] = {9, 5, 8, 3, 7};

int search(int low, int high, int key) {
    for(int i = 0; i < n; i++)
        if(key == list[i]) return i+1;

    return -1;
}

int main() {
    int n, result, key;
    n = sizeof(list)/sizeof(int);
    scanf("%d", &key);
    result = search(0, n, key);

    if(result == -1) printf("탐색 실패");
    else printf("탐색 성공 탐색 횟수: %d", result);

    return 0;
}
