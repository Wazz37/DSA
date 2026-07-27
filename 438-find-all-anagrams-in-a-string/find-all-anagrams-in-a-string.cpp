class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> pString(26, 0);
        vector<int> sString(26, 0);
        vector<int> ans;

        int k = p.size();
        char ch = 'a';

        if (p.size() > s.size()){
            return {};
        }

        for(int i = 0; i < k; i++){
            sString[s[i] - ch]++;
            pString[p[i] - ch]++;
        }

        if (sString == pString){
            ans.push_back(0);
        }

        for(int i = k; i < s.size(); i++){
            sString[s[i] - ch]++;
            sString[s[i - k] - ch]--;

            if (sString == pString){
                ans.push_back(i - k + 1);
            }
        }

        return ans;

    }
};