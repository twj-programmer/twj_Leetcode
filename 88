void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if (m == 0) {
        for (int i = 0; i < n; i++) {
            nums1[i] = nums2[i];
        }
        return;
    }

    int i = m - 1, j = n - 1;
    int cur = m + n - 1;

    while (j >= 0) {
        if (i >= 0 && nums1[i] > nums2[j]) {
            nums1[cur--] = nums1[i--];
        } else {
            if (cur >= 0) {
                nums1[cur--] = nums2[j--];
            } else {
                break;
            }
        }
    }
}
