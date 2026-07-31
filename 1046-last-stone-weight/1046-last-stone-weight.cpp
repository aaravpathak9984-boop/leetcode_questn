class Solution {
public:
    int lastStoneWeight(vector<int>& v) {

        while(v.size()>1){
        

        sort(v.rbegin(),v.rend());

        int st1=v[0],st2=v[1];

        if(st1!=st2)v.push_back(st1-st2);

       
            v.erase(v.begin());
            v.erase(v.begin());

        
       
}
if(v.size()==0)return 0;
return v[0];

    }
};