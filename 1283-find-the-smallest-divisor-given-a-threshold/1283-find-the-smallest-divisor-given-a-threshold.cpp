class Solution {
public:
long long tv(long long d,const vector<int>&v){

    long long totval=0;
    for(int x:v){
        totval+=((1ll*x+d-1)/d);
    }
    return totval;
}
    int smallestDivisor(vector<int>& v, int t) {
        int maxi=INT_MIN;

        for(int x:v)maxi=max(x,maxi);

        int l=1,h=maxi,ans=maxi;

        while(l<=h){

            int m=l+(h-l)/2;

            if(tv(m,v)<=t)ans=m,h=m-1;
            else l=m+1;
        }
        return ans;
        
    }
};