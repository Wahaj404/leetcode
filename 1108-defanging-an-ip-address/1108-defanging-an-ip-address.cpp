class Solution {
public:
    string defangIPaddr(string address) {
        string ret;
        for (auto i : address) {
            if (i == '.') {
                ret.append("[.]");
            }
            else {
                ret.push_back(i);
            }
        }
        return ret;
    }
};