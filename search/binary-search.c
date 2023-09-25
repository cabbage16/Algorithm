#include <stdio.h>

int list[] = {2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47};

int key, cnt = 0, result;

int binary_search(int low, int high) {
    int middle = (low+high) / 2;
    if(low <= high) {
        cnt++;
        if(list[middle] == key) return middle;
        else if(list[middle] > key) return binary_search(low, middle-1);
        else return binary_search(middle+1, high);
    }
    return -1;
}

int main() {
    int n = sizeof(list)/sizeof(int);
    scanf("%d", &key);
    result = binary_search(0, n-1);

    if(result == -1) printf("Å½»ö ½ÇÆÐ");
    else printf("Å½»ö ¼º°ø Å½»ö È½¼ö: %d", cnt);

    return 0;
}
