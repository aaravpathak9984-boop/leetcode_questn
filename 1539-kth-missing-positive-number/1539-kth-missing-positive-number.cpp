class Solution {
public:
    int findKthPositive(vector<int>& v, int k) {
        int n=v.size();
        int l=0,h=n-1,ans=0;

        while(l<=h){
            int m=l+(h-l)/2;

            int misn=v[m]-(m+1);
            if(misn<k)l=m+1;
            else h=m-1;

        }

        return l+k;
        
    }
};