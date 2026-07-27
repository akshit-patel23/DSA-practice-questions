// Last updated: 7/27/2026, 3:01:52 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> occ;
        for(int i=0;i<arr.size();i++){
            occ[arr[i]]++;
        }
        set <int> unique;
        for(auto x:occ){
            int freq=x.second;
            if(unique.find(freq)!=unique.end()){
                return false;
            }
            unique.insert(freq);
        }
        return true;
    }
};