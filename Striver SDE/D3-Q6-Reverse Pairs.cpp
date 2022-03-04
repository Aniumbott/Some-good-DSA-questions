/*Explaination :
We are doing the same as we did in D2-Q6
We are using merge sort to cut down the Time Complexity to O(n*log(n)) from O(n^2).

*/


class Solution {
public:
    
    int merge(vector<int>&v, int low, int mid, int high){
        int ct = 0;
        int j = mid+1;
        for(int i=low; i<=mid; i++){
            while(j<=high && v[i] > (2LL*v[j])) j++;
            ct += (j - (mid+1));
        }
        
        vector<int> tp;
        int left = low, right = mid+1;
        while(left <= mid && right <= high){
            if(v[left] <= v[right])
                tp.push_back(v[left++]);
            else
                tp.push_back(v[right++]);
        }
        
        while(left<=mid)
            tp.push_back(v[left++]);
        while(right<=high)
            tp.push_back(v[right++]);
        
        for(int i=low; i<=high; i++){
            v[i] = tp[i-low];
        }
        return ct;
    }
    
    int merge_Sort(vector<int> &v, int low, int high)
    {
        if(low>=high) return 0;
        int mid = (low+high)/2;
        int ct = merge_Sort(v, low, mid);
        ct += merge_Sort(v, mid+1, high);
        ct += merge(v, low, mid, high);
        return ct;
    }

    int reversePairs(vector<int>& v) {
        return merge_Sort(v, 0, v.size()-1);
    }
};














