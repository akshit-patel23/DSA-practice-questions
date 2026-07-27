// Last updated: 7/27/2026, 3:02:19 PM
class Solution {
public:
    void reversearr(vector<int>&nums,int start,int end){
        while(start<=end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
            k=k%n;
            cout<<k;
            reversearr(nums,0,n-1);
            reversearr(nums,0,k-1);
            reversearr(nums,k,n-1);
            
        
    }
};