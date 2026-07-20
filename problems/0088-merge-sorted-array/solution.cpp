class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     int right = 0;
    //     int left = m-1;
    //         while(left >= 0 && right < n){
    //             if(nums1[left] > nums2[right]){
    //         swap(nums1[left] , nums2[right]);
    //         left--;
    //         right++;
    //             }
    //             else{
    //                 break;
    //             }
    //     }
    //     sort(nums1.begin() , nums1.begin() + m);
    //     sort(nums2.begin() , nums2.begin() + n);

    //     for(int i = 0; i < n; i++) {
    //     nums1[m + i] = nums2[i];
    // }

    int len = n + m;
    int gap = (len/2) + (len%2);

    while(gap > 0){
        int left = 0;
        int right = gap;

        while(right < len){
            if(left < m && right >= n){
                if(nums1[left] > nums2[right - n])
                swap(nums1[left] , nums2[right - n]);
            }
            else if(left >= n){
                if(nums2[left - n] > nums2[right - n])
                swap(nums2[left - n] , nums2[right - n]);
            }
            else{
                if(nums1[left] > nums1[right])
                swap(nums1[left] , nums1[right]);
            }
            left++;
            right++;
        }
        if(gap == 1) break;
        gap = (gap/2) + (gap%2);
    }
    for(int i = 0; i<n; i++){
        nums1[i+m] = nums2[i];
    }
    }
};