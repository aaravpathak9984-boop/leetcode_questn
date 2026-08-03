class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& v, int k) {

        int n=v.size();
        int m=v[0].size();

        map<int,vector<int>>mp;

        for(int i=0;i<n;i++){
            int s=0;
            for(int j=0;j<m;j++){
                if(v[i][j]==1){
                    s++;
                }
            }
            mp[s].push_back(i);
        }
        
        vector<int>res;

        for(auto &x:mp){
            
            vector<int> rows=x.second;

            for(int r:rows){
                if(res.size()==k)return res;
                res.push_back(r);
            }
        }
return res;

    }
};