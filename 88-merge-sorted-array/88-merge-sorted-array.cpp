class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=(m+n)-1;
        
        for(; i>=0 && j>=0; )
        {
            if(nums1[i] < nums2[j])
            {
                // cout<<"1st: n1: "<<i<<" "<<nums1[i]<<" n2: "<<j<<" "<<nums2[j]<<" n: "<<nums1[i]<<endl;
                nums1[k--] = nums2[j];
                j--;
            }
            else
            {
                // cout<<"2nd: n1: "<<i<<" "<<nums1[i]<<" n2: "<<j<<" "<<nums2[j]<<" n: "<<nums2[j]<<endl;
                nums1[k--] = nums1[i];
                i--;
            }
        }
        while(j>=0)
        {
            nums1[k--] = nums2[j];
            j--;
        }
    }
};