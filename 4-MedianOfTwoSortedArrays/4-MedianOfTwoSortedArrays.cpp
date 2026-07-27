// Last updated: 7/27/2026, 3:03:01 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int> mergearr(nums1.size()+nums2.size());
      merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),mergearr.begin());
      sort(mergearr.begin(),mergearr.end());
      int mid=mergearr.size()/2;
      double median=0.00;
      if(mergearr.size()%2==0){
        double x=mergearr[mid-1]+mergearr[mid];
        median=x/2;
      }
      else{
          median=mergearr[mid];
        
      }
      return median;
    }
};