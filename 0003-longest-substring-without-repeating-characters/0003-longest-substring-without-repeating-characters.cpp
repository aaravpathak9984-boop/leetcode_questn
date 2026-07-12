class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),maxlen=0;

        int l=0,r=0;

          vector<int>hash(256,-1);
        while(r<n){

          

          if(hash[s[r]]!=-1){
            //left maxm h

            l=max(hash[s[r]]+1,l);

          }

          int len=r-l+1;

          maxlen=max(maxlen,len);

          hash[s[r]]=r;

          r++;

        }

        return maxlen;
        
    }
};