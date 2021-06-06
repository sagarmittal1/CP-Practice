class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        return s;
    }
};

// another solution

class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'A' and s[i] <= 'Z') {
                s[i] += 32;
            }
        }
        return s;
    }
};