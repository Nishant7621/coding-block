class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0, maxCount = 0;
        
        // function to check vowel
        auto isVowel = [](char c) {
            return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
        };
        
        // first window
        for(int i = 0; i < k; i++){
            if(isVowel(s[i])) count++;
        }
        
        maxCount = count;
        
        // sliding window
        for(int i = k; i < s.length(); i++){
            // add next character
            if(isVowel(s[i])) count++;
            
            // remove previous character
            if(isVowel(s[i - k])) count--;
            
            maxCount = max(maxCount, count);
        }
        
        return maxCount;
    }
};