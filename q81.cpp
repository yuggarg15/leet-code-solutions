class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size(); 
        int st = 0 ;
        int end = n - 1 ;
        while(st<=end){
            int mid = st + (end -st)/2 ;
            if(nums[0]==target){
                return true;
            }else if(target>nums[0]){
                if(nums[mid]==target){
                    return true;
                }else if(nums[mid]>target){
                    end = mid - 1;
                }else {
                    if(nums[mid]>nums[0]){
                        st = mid + 1 ;
                    }else if(nums[mid]<nums[0]){
                        end = mid - 1;
                    }else{
                        int j = mid;
                        while(j<n && nums[j] == nums[mid]){
                            j++;
                        }
                        if(j==n){
                            end = mid - 1;
                        }else{
                            st = mid + 1;
                        }
                    }
                }
            }else{
                if(nums[mid]==target){
                    return true ;
                }else if(nums[mid]<target){
                     st = mid + 1;
                }else{
                    if(nums[mid]>nums[0]){
                        st = mid + 1;
                    }else if(nums[mid]<nums[0]){
                        end = mid - 1 ;
                    }else{
                        int j = mid ;
                        while(j<n && nums[j]==nums[mid]){
                            j++;
                        }
                        if(j==n){
                            end = mid - 1;
                        }else{
                            st = mid + 1;
                        }
                    }
                }
            }
        }
        return false;
    }
};
