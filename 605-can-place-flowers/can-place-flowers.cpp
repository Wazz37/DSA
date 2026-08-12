class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool left = false;
        bool right = false;
        bool current = false;

        for(int i = 0; i < flowerbed.size(); i++){
            left = (i == 0 || flowerbed[i - 1] == 0);
            right = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);
            current = (flowerbed[i] == 0);

            // std::cout << "left : " << left << "right : " << right << "current : " << current << std::endl;

            if (left & right & current && n > 0){
                flowerbed[i] = 1;
                n--;
            }
        }
        if (n == 0){
            return true;
        } 
        
        return false;

    }
};