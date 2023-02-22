class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0;
        int j = height.size()-1;

        while(i<j){
            int h = min(height[i], height[j]);
            water = max(water, ((j-i)*h));
            while(i<j && height[i]<=h) i++;
            while(j>i && height[j]<=h) j--;
        }
        return water;
    }
};
