class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        unordered_map<int,int> mp;

        int left = 0;
        int ans = 0;

        for(int right = 0; right < answerKey.size(); right++){
            mp[answerKey[right]]++;

            int windowSize = right - left + 1;

            if (windowSize - max(mp['T'], mp['F']) > k){
                mp[answerKey[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};