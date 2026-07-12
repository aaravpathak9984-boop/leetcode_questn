class Solution {
public:
    int totalFruit(vector<int>& v) {
        

        int l=0,r=0,maxlen=0,n=v.size();
        unordered_map<int,int>mp;

        while(r<n){

            mp[v[r]]++;

            if(mp.size()>2){

                mp[v[l]]--;

                if(mp[v[l]]==0)mp.erase(v[l]);
                l++;

            }

            maxlen=max(maxlen,r-l+1);

            r++;


        }
        return maxlen;
    }
};