class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int c[26] = {0};

        for (char x : magazine){
            c[x - 'a']++;
        }

        for (char x : ransomNote){
            c[x - 'a']--;

            if (c[x - 'a'] < 0){
                return false;
            }
        }
        return true;
    }
};