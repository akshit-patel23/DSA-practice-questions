// Last updated: 7/27/2026, 3:02:55 PM
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int left=0;
        
        int maxlength=0;
        Set<Character> sub= new HashSet<>();
        for(int right=0;right<s.length();right++){
            char ch= s.charAt(right);

            while(sub.contains(ch)){
                sub.remove(s.charAt(left));
                left++;
            }
            sub.add(ch);
            maxlength= Math.max(maxlength, right- left+1);

        }
        return maxlength;
    }
}