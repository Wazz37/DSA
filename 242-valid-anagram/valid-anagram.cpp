class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26, 0);

        if (s.size() != t.size()){
            return false;
        }

        char ch = 'a';

        for(int i = 0; i < s.size(); i++){
            // std::cout << "ch : " << ch << std::endl;
            // std::cout << "s[i] : " << s[i] << std::endl;
            // std::cout << "diff : " << s[i] - ch << std::endl;
            freq[s[i] - ch]++;
        }

        for(int i = 0; i < t.size(); i++){
            freq[t[i] - ch]--;
        }

        for(int i = 0; i < freq.size(); i++){
            if (freq[i] != 0){
                return false;
            }
        }

        return true;
    }
};