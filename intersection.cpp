#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 1000
void findIntersection(int nums1[], int m, int nums2[], int n) {
    bool hashSet[MAX_SIZE] = {false};
    for (int i = 0; i < m; i++) {
        hashSet[nums1[i]] = true;
    }
    printf("Intersection: ");
    for (int i = 0; i < n; i++) {
        if (hashSet[nums2[i]]) {
            printf("%d ", nums2[i]);
            hashSet[nums2[i]] = false;
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
