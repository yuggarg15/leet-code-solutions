class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0; 
        int lp = 0; 
        int rp = height.size() - 1; 
        int currentw = 0;

        while(lp < rp) {
            int w = rp - lp;
            int h = min(height[lp], height[rp]);
            currentw = h * w;

            maxwater = max(currentw, maxwater);

            if (height[lp] < height[rp]) {
                lp++;
            } else {
                rp--;
            }
        }
        return maxwater; 
    } 
};
