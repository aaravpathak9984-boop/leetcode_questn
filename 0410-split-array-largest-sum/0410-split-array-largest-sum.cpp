class Solution {
public:

bool isPoss(const vector<int>&v,int k,int ms){

    int partn=1,sum=0;

    for(int x:v){
        if(x>ms)return false;

        if(sum+x>ms){
            partn++;
            sum=x;
        }
        else sum+=x;
    }

    return partn<=k;

}
    int splitArray(vector<int>& v, int k) {
        int mini=INT_MAX,sum=0;

        for(int x:v)mini=min(x,mini),sum+=x;

        int l=mini,h=sum,ans=0;

        while(l<=h){

            int m=l+(h-l)/2;

            if(isPoss(v,k,m))ans=m,h=m-1;
            else l=m+1;
        }

        return ans;


        
    }
};