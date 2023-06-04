class Solution {
public:
    int minimumSum(int num) {
        vector<int> ans;
        while(num>0){
            ans.emplace_back(num%10);
            num/=10;
        }
        sort(ans.begin(),ans.end());
   
        int m=ans[0]*10+ans[3];
        int n=ans[1]*10+ans[2];
    
        return m+n;
        
    }
};
