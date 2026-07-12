class Solution {
public:
    int characterReplacement(string v, int k) {

        int l=0,r=0,maxlen=0,maxfreq=0,n=v.size();

        unordered_map<char,int>mp;

            set<int>s;
        while(r<n){

            mp[v[r]]++;

            maxfreq=max(maxfreq,mp[v[r]]);

            int len=r-l+1;

            if(len-maxfreq>k){
                 mp[v[l]]--;
                 l++;
            }

            maxlen=max(maxlen,r-l+1);
            r++;

        }
        return maxlen;
        
    }
};