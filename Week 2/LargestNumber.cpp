class Solution {
    struct compare{
        bool operator() (int a, int b){
            string comb1 = to_string(a) + to_string(b);
            string comb2 = to_string(b) + to_string(a);
            return comb1 > comb2;
        }
    } comp;
public:
    string largestNumber(vector<int>& nums) {
        sort(begin(nums), end(nums), comp);
        if(nums[0]==0) return "0";
        string res = "";
        for(auto n : nums){
            res = res + to_string(n);
        }
        return res;
    }
};
