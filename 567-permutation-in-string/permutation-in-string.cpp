class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1Freq(26, 0);
        vector<int> WindowFreq(26, 0);

        int k = s1.size();

        if (s1.size() > s2.size()){
            return false;
        }

        for(int i = 0; i < k; i++){
            s1Freq[s1[i] - 'a']++;
            WindowFreq[s2[i] - 'a']++;
        }

        if (s1Freq == WindowFreq){
            return true;
        }

        for(int i = k; i < s2.size(); i++){
            WindowFreq[s2[i] - 'a']++;
            WindowFreq[s2[i - k] - 'a']--;

            if (WindowFreq == s1Freq){
                return true;
            }
        }

        return false;
    }
};