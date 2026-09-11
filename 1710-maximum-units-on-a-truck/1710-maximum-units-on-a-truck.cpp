class Solution {
public:
    int maximumUnits(vector<vector<int>>& bt, int ts) {

        sort(bt.begin(), bt.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
        });

        int tu = 0;

        for (const auto& b : bt) {
            int nb = b[0];
            int nu = b[1];

            int take = min(ts, nb);
            tu += take * nu;  

            ts -= take;       

            if (ts == 0) break;
        }

        return tu;
    }
};