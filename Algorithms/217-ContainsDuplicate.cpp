class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> myHashMap;
        if(nums.size() == 0) return false;
        
        myHashMap[nums[0]] = true;
        for(int pos=1;pos<nums.size();++pos)
        {
            if(myHashMap[nums[pos]] == true) return true;
            myHashMap[nums[pos]] = true;
        }
        return false;
    }
};