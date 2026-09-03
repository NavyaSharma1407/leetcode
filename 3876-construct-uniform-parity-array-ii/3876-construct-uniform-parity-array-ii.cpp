class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        set<int>s;
        for(int it : nums1){
            if(it % 2 != 0) s.insert(it);
        }
        if(s.empty()) return true;
        if(s.size() == nums1.size()) return true;
        for(auto it : nums1){
            if(it % 2 == 0){
                bool found = false;
                for(auto el : s){
                    if(it - el >= 1){
                        found = true;
                        break;
                    }
                }
                if(found == false) return false;
            }
        }
        return true;
    }
};