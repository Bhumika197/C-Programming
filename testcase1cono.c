#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 3, 4, 3, 5, 2, 1, 3, 2};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0, mostFrequent;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Update most frequent number
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    printf("Most frequent number: %d (appeared %d times)\n", mostFrequent, maxCount);
    return 0;
}
