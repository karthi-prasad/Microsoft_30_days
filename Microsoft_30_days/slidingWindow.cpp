class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt[] = {0,0,0},i=0,ans=0;
        for(int j=0;j<s.size();j++)
        {
            ++cnt[s[j]-'a'];
            while(cnt[0] && cnt[1] && cnt[2])
            {
                --cnt[s[i++]-'a'];
            }
            ans+=i;
        }
        return ans;
    
    }
};