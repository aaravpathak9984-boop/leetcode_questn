class Solution {
public:
    int atmost(const vector<int>&v,int g){

         int n=v.size(),cnt=0,l=0,r=0,sum=0;

        while(r<n){

            if(g<0)return 0;

            sum+=v[r];

            while(sum>g){
                sum-=v[l];
                l++;
            }
            cnt+=(r-l+1);

            r++;
        }
        return cnt;


    }
    int numSubarraysWithSum(vector<int>& v, int g) {
 
        return atmost(v,g)-atmost(v,g-1);
    }
};