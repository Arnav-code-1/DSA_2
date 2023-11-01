class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
         int len = words.front().size();

    vector<int> res;
    for (int i = 0; i < len; i++) {
        unordered_map<string, int> counter;
        for (const string& s: words) counter[s]++;

        for (int l = i, r = i + len; r <= s.size(); r += len) {
            const string& str = s.substr(r - len, len);
            while (counter[str] == 0 && l < r - len) {
                counter[s.substr(l, len)]++;
                l += len;
            }

            if (counter[str] == 0) {
                l += len;
                continue;
            }

            counter[str]--;

            if (r - l == words.size() * len) {
                res.push_back(l);
            }
        }
    }

    return res;
    }
};