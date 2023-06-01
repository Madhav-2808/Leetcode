class Solution {
public:
    vector<double> convertTemperature(double celsius) {        
        vector<double> ans;
        ans.push_back(273.15+celsius);        
        ans.push_back(9*celsius/5+32);
        
        return ans;
    }
};
