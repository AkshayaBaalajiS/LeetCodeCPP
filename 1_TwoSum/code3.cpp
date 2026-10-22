class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indexLIst;
        indexLIst.resize(2);
        bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    indexLIst[0]=i;
                    indexLIst[1]=j;
                    flag =  true;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        return indexLIst;
    }
};