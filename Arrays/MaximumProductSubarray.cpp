//https://leetcode.com/problems/maximum-product-subarray/submissions/

class Solution {
public:
    int maxProduct(vector<int>& a) {
        
        int mx=a[0];
        int mn=a[0];
        int mxt=a[0];
        
        for(int i=1;i<a.size();i++){
            
           int temp=max({a[i],a[i]*mx,a[i]*mn});
           mn=min({a[i],a[i]*mx,a[i]*mn});
            mx=temp;
            mxt=max(mx,mxt);
        }
    return mxt;
    }
};
