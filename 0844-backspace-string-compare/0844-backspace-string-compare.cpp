class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> sv;
        vector<char> tv;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                if (!sv.empty())
                    sv.pop_back();
            } else {
                sv.push_back(s[i]);
            }
        }

        for (int i = 0; i < t.size(); i++) {
            if (t[i] == '#') {
                if (!tv.empty())
                    tv.pop_back();
            } else {
                tv.push_back(t[i]);
            }
        }

        if (sv.size() != tv.size())
            return false;

        for (int i = 0; i < sv.size(); i++) {
            if (sv[i] != tv[i])
                return false;
        }

        return true;
    }
};