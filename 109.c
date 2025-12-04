#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    int maxSum = 0;
    for (int i = 0; i < k; i++)
        maxSum += arr[i];

    int currSum = maxSum;
    for (int i = k; i < n; i++) {
        currSum += arr[i] - arr[i - k];
        if (currSum > maxSum)
            maxSum = currSum;
    }

    printf("Maximum sum of subarray of size %d: %d\n", k, maxSum);
    return 0;
}
