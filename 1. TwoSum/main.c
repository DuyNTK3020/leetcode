#include <stdio.h>

#define FILE_NAME "input_2.txt"

int main() {
    freopen(FILE_NAME, "r", stdin);

    int size;
    int target;

    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d,%d]\n", i, j);
            }
        }
    }

    fclose(stdin);

    return 0;
}
