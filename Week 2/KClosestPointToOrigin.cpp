class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        //Using maxheap
        vector<vector<int>> ans(k);
        //Initiliaizing the maxheap
        priority_queue<vector<int>> heap;
        //setting up the maxheap
        for(auto& p:points){
            int x = p[0], y = p[1];
            heap.push({x*x + y*y, x, y});
            if(heap.size() > k){
                heap.pop();
            }
        }

        for(int i=0; i<k; ++i){
            vector<int> top = heap.top();
            heap.pop();
            ans[i] = {top[1], top[2]};
        }
    return ans;
    }
};
