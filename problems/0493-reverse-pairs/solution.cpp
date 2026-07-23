class Solution {
public:
        int cnt = 0;
    void reversepairs(vector<int>& arr, int low, int mid, int high, int n){
        int right = mid + 1;
        for(int i = 0;i <= mid; i++){
            while(right <= high && (arr[i] > arr[right]*2)){
                right++;
            } 
            cnt += (right - (mid + 1));
        }
    }

    void merge(vector<int>& arr, int low, int mid, int high){
        vector<int> temp;
        int n = arr.size();
        int left = low, right = mid+1;
        while(right <= high && left <= mid){
            if(arr[left] >= arr[right]){
                temp.push_back(arr[right]);
                right++;
            }
            else{
                temp.push_back(arr[left]);
                left++;
            }
        }
        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }

        while(right <= high){
            temp.push_back(arr[right]);
            right++;   
        }

        for(int i = low;i<high ;i++){
            arr[i] = temp[i - low];
        }
    }

    void mergesort(vector<int>& arr, int low, int high){
        if(low >= high) return;
        int mid = low + (high - low)/2;
        mergesort(arr,low, mid);
        mergesort(arr, mid+1, high);
        int n = arr.size();
        reversepairs(arr, low, mid, high, n);
        merge(arr, low, mid, high);
    }

    int reversePairs(vector<int>& arr) {
        int n = arr.size();
        // for(int i = 0;i<n;i++){
        //     for(int j = i+1; j<n;j++){
        //         if(nums[i] > nums[j]*2) cnt++;
        //     }
        // }
        // return cnt;
        int low = 0;
        int high = n-1;
        mergesort(arr, low, high);
        return cnt;
    }
};