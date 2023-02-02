class Solution {
public:
    unordered_map<char,int> mp;
    bool compare(string s1,string s2){
        int n=s1.length();
        int m=s2.length();
        for(int i=0;i<min(n,m);i++){
            if(mp[s1[i]]<mp[s2[i]]) return true;
            else if(mp[s1[i]]>mp[s2[i]]) return false;
        }
        if(m>=n) return true;
        return false;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        int n=order.length();
       for(int i=0;i<n;i++){
           mp[order[i]] =i;
       }
       for(int i=0;i<words.size()-1;i++){
           if(!compare(words[i],words[i+1])) return false;
       }
        return true;
    }
};