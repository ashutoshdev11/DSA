
class Solution {
public:
    int romanToInt(string s) {
        int total = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'I') {
                total += 1;
            }
            else if (s[i] == 'V') {
                total += 5;
            }
            else if (s[i] == 'X') {
                total += 10;
            }
            else if (s[i] == 'L') {
                total += 50;
            }
            else if (s[i] == 'C') {
                total += 100;
            }
            else if (s[i] == 'D') {
                total += 500;
            }
            else if (s[i] == 'M') {
                total += 1000;
            }

            if (i > 0) {
                if (s[i] == 'V' && s[i - 1] == 'I')
                    total -= 2;
                else if (s[i] == 'X' && s[i - 1] == 'I')
                    total -= 2;
                else if (s[i] == 'L' && s[i - 1] == 'X')
                    total -= 20;
                else if (s[i] == 'C' && s[i - 1] == 'X')
                    total -= 20;
                else if (s[i] == 'D' && s[i - 1] == 'C')
                    total -= 200;
                else if (s[i] == 'M' && s[i - 1] == 'C')
                    total -= 200;
            }
        }

        return total;
    }
};
