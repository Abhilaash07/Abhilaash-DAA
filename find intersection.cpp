#include <stdio.h>
#include <stdlib.h>
void findIntersection(int nums1[], int m, int nums2[], int n) {
    int hash[1001] = {0};
    for (int i = 0; i < m; i++) {
        hash[nums1[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (hash[nums2[i]] > 0) {
            printf("%d ", nums2[i]);
            hash[nums2[i]]--;
        }
    }
}
int main() {
    int nums1[] = {1, 2, 2, 1};
    int nums2[] = {2, 2};
    int m = sizeof(nums1) / sizeof(nums1[0]);
    int n = sizeof(nums2) / sizeof(nums2[0]);
    findIntersection(nums1, m, nums2, n);
    return 0;
}
