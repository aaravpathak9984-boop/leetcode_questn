class Solution {
public:
    int lastStoneWeight(vector<int>& v) {

      priority_queue<int> pq;

      for(int x:v){
        pq.push(x);

      }

      int n=v.size();

      while(pq.size()>1){
        int st1=pq.top();
        pq.pop();

        int st2=pq.top();

        pq.pop();


        if(st1!=st2)pq.push(st1-st2);
      }
    if(pq.size()==0)return 0;
     return pq.top();

    }
};