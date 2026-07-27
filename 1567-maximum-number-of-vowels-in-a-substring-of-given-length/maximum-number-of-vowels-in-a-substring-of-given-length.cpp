class Solution {
public:

    bool isVowel(char ch){
        return ch == 'a' || ch == 'i' || ch == 'o' || ch == 'e' || ch == 'u';
    }

    int maxVowels(string s, int k) {


        int count = 0;
        int max_count = 0;

        for(int i = 0; i < k; i++){
            if (isVowel(s[i])){
                count++;
            }
        }

        max_count = max(count, max_count);

        for(int i = k; i < s.size(); i++){
            if (isVowel(s[i])){
                count++;
            }

            if (isVowel(s[i - k])){
                count--;
            }

            max_count = max(count, max_count);
        }

        return max_count;
    }
};