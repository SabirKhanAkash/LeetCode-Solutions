class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>answer;
        vector<int>ans0,ans1;
        
        
        if(nums1.size() != 1 || nums2.size() != 1 || nums1[0]==nums2[0])
        {
            sort(nums1.begin(),nums1.end());
            sort(nums2.begin(),nums2.end());
            for(int i=1; i<nums1.size(); )
            {
                if(nums1[i] == nums1[i-1])
                    nums1.erase(nums1.begin()+(i-1));
                else
                    i++;
            }

            for(int i=1; i<nums2.size(); )
            {
                if(nums2[i] == nums2[i-1])
                    nums2.erase(nums2.begin()+(i-1));
                else
                    i++;
            }
        
        
            for(int i=0; i<nums1.size(); i++)
            {
                int flag = 0;
                for(int j=0; j<nums2.size(); j++)
                {
                    if(nums1[i] != nums2[j])
                        flag = 1;
                    else {
                        flag = 0;
                        break;
                    }
                }
                if(flag == 1){
                    ans0.push_back(nums1[i]);
                }
            }

            for(int i=0; i<nums2.size(); i++)
            {
                int flag = 0;
                for(int j=0; j<nums1.size(); j++)
                {
                    if(nums2[i] != nums1[j])
                        flag = 1;
                    else {
                        flag = 0;
                        break;
                    }
                }
                if(flag == 1) {
                    ans1.push_back(nums2[i]);

                }
            }
            answer.push_back(ans0);
            answer.push_back(ans1);
            return answer;
        }
        
        if(nums1.size() == 1)
            ans0.push_back(nums1[0]);
        if(nums2.size() == 1)
            ans1.push_back(nums2[0] );
        answer.push_back(ans0);
        answer.push_back(ans1);
        return answer;
        
    }
};