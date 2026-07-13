class Solution {
public:

int mostSub(const vector<int>&v,int k){

    int n=v.size(),l=0,r=0,cnt=0,sum=0;

    while(r<n){
        if(k<0)return 0;
        sum+=(v[r]%2);

        while((sum)>k){
            sum-=(v[l]%2);
            l++;
        }
        cnt+=(r-l+1);

        r++;
    }
    return cnt;

}
    int numberOfSubarrays(vector<int>& v, int k) {

return mostSub(v,k)-mostSub(v,k-1);

        
    }
};