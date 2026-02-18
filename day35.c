#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);

    if(n <= 0 || n > 1000) {
        printf("Invalid size");
        return 0;
    }

    int arr[1000];
    int temp[1000];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;

    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for(int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
