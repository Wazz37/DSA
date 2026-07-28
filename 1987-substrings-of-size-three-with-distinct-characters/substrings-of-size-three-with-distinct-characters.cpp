class Solution {
public:
    int countGoodSubstrings(string s) {

        unordered_map<char, int> mp;
        int count = 0;

        for(int i = 0; i < 3; i++){
            mp[s[i]]++;
        }

        // std::cout << mp.size() << std::endl;
        if (s.size() < 3) return 0;

        if (mp.size() == 3) count++;

        // std::cout << "count : " << count << std::endl;

        for(int i = 3; i < s.size(); i++){
            mp[s[i]]++;
            mp[s[i - 3]]--;

            if (mp[s[i - 3]] == 0) mp.erase(s[i - 3]);
            if (mp.size() == 3) count++;
        }

        return count;


        // for(auto it : mp){
        //     std::cout << "first : " << it.first << "second : " << it.second << std::endl;
        // }

        return -1;
    }
};