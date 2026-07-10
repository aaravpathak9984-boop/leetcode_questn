class Solution {
public:

long long cnt(const vector<int>&v,long long c){
    long long cntc=0,cntd=1;
    for(int x:v){
        if(cntc+x>c){
            cntd++;
            cntc=x;
        }
        else cntc+=x;
        
    }
    return cntd;
}
    int shipWithinDays(vector<int>& v, int d) {
        int sum=0,maxi=0;

        for(int x:v)sum+=x,maxi=max(maxi,x);

        int l=maxi,h=sum,ans=sum;

        while(l<=h){
            int m=l+(h-l)/2;

            if(cnt(v,m)<=d){

                ans=m;
                h=m-1;

            }
            else l=m+1;
        }
        return ans;


        
    }
};