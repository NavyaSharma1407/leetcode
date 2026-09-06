class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
        for(char c : s){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A'
            || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                v.push_back(c);
            }
        }
        int i = v.size() - 1;
        for(char &c : s){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A'
            || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                c = v[i--];
            }
        }
        return s;
    }
};