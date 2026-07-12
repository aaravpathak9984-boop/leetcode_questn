class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n=v.size();


        int ls=0,rs=0,sum=0,ri=n-1;

        for(int i=0;i<k;i++)ls+=v[i];

        int maxsum=ls;

        for(int i=k-1;i>=0;i--){
            ls-=v[i];
            rs+=v[ri];

            maxsum=max(maxsum,ls+rs);
            ri--;
        }

        return maxsum;

        
    }
};