class Solution {
public:
    string removeOuterParentheses(string s) {
         int count = 0 ;
         string res = "";

         for (char x:s){
            if (x == '('){
                if (count > 0){
                    res += x;
                }
            count++;
            }

            else{
                count--;
                if(count>0){
                    res+=x;
                }
            }
         }
         return res;
    }
};