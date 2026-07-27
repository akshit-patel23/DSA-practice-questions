// Last updated: 7/27/2026, 3:02:37 PM
class Solution {
public:
    int firstocc(vector<int>&nums,int target){
        int start=0;
        int end= nums.size()-1;
        
        int ans=-1;
        while(start<=end){
           int mid=(start+end)/2;
           if(nums[mid]<target){
            start=mid+1;
           }
           else if(nums[mid]>target){
            end=mid-1;
           }
           else if(nums[mid]==target){
            ans=mid;
            end=mid-1;
           }
        }
        return ans;
    }
    int lastocc(vector<int>&nums,int target){
        int start=0;
        int end= nums.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else if(nums[mid]==target){
                ans=mid;
                start=mid+1;

            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
    int first= firstocc(nums, target);
    int last=lastocc(nums,target);
    vector<int> ans;
    ans.push_back(first);
    ans.push_back(last);

    return ans;
    }
};