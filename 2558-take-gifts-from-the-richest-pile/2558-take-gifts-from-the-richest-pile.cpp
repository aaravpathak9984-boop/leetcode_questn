class Solution {
public:
    long long pickGifts(vector<int>& g, int k) {

        priority_queue<int>pq;

        for(int x:g){
            pq.push(x);
        }

        for(int i=0;i<k;i++){
            int mx=pq.top();

            pq.pop();

            pq.push(sqrt(mx));
        }

        long long sum=0;

        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }


        return sum;      
    }
};