// Last updated: 7/27/2026, 3:03:02 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char , bool> visited;
        int i=0;
        int j=0;
        int maxlength=0;
        for(int itr=0;itr<s.size();itr++){
            visited[s[itr]]=false;
        }
        while(j<s.size()){
            if(visited[s[j]]==false){
                visited[s[j]]=true;
                j++;
            }
            else{
                while(visited[s[j]]==true){
                    visited[s[i]]=false;
                    i++;
                }
            }
            maxlength=max(maxlength,(j-i));
        }
        return maxlength;
    }
    
};