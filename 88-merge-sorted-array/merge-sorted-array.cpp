class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int k = 0;

        vector<int> num3(m + n);

        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                num3[k] = nums1[i];
                i++;
                k++;
            }
            else {
                num3[k] = nums2[j];
                j++;
                k++;
            }
        }

        while (i < m) {
            num3[k] = nums1[i];
            i++;
            k++;
        }

        while (j < n) {
            num3[k] = nums2[j];
            j++;
            k++;
        }

        nums1 = num3;
    }
};