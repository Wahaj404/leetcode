class ThroneInheritance {
    unordered_map<string, vector<string>> children;
    unordered_set<string> alive;
    string king;
    
    void getInheritanceOrder(string cur, vector<string> &ret) {
        if (alive.count(cur) != 0) {
            ret.push_back(cur);
        }
        for (string next : children[cur]) {
            getInheritanceOrder(next, ret);
        }
    }
public:
    ThroneInheritance(string kingName) : king(kingName) {
        alive.insert(king);
    }
    
    void birth(string pname, string cname) {
        children[pname].push_back(cname);
        alive.insert(cname);
    }
    
    void death(string name) {
        alive.erase(name);
    }
    
    vector<string> getInheritanceOrder() {
        vector<string> ret;
        getInheritanceOrder(king, ret);
        return ret;
    }
};

/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */