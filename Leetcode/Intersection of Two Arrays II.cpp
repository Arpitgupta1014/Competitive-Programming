class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_multiset<int> a;
        vector<int> v;
        int n=nums1.size();
        for(int i=0;i<n;++i){
            a.insert(nums1[i]);
        }
        n=nums2.size();
        for(int i=0;i<n;++i){
            auto it=a.find(nums2[i]);
            if(it!=a.end()){
                v.push_back(nums2[i]);
                a.erase(it);
            }
        }
        return v;
    }
};