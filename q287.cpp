class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int slow = 0;
        int fast = 0;
        int count = 0;
        while ((count == 0) || (fast != slow)) {
            slow = nums[slow];
            fast = nums[fast];
            fast = nums[fast];
            count = 1;
        }
            int slow2 = 0 ;
            while(slow != slow2 ){
                slow = nums[slow];
                slow2 = nums[slow2];
            }
        return slow ;
    }
};
