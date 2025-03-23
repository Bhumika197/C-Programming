// test case of comparision of numbers 
#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of array
    int mostfrequent = arr[0];  // Assume first element is most frequent
    int maxFrequency = 0;  // Store the highest frequency

    for (int i = 0; i < n; i++) {
        int count = 0;  // Reset count for each element

        // Count occurrences of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Update most frequent element if higher frequency found
        if (count > maxFrequency) {
            maxFrequency = count;
            mostfrequent = arr[i];
        }
    }

    printf("Most frequent element: %d (Frequency: %d)\n", mostfrequent, maxFrequency);
    return 0;
}
