class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         vector<int> ans;
        vector<int> m(26,0);
        vector<int> mp(26,0);
        int n = p.size();
        int len = s.size();
        if(len<n)
            return ans;
        int left = 0,right = 0;
        while(right<n)
        {
            mp[p[right]-'a'] +=1;
            m[s[right++]-'a'] +=1;
        }
        right -=1;
        while(right<len)
        {
            if(mp == m)
                ans.push_back(left);
            right+=1;
            if(right!=len)
                m[s[right]-'a'] +=1;
            m[s[left]-'a'] -=1;
            left+=1;
        }
        return ans;
    }
};