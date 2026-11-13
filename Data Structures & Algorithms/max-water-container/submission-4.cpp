class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxArea = 0;
        while(right>left){
            int currH = min(height[left],height[right]);
            int currW = right - left;
            int currArea = currH * currW;
            maxArea = max(currArea,maxArea);
            if(height[left]>height[right])right--;
            else if(height[left]<height[right] or height[right] == height[left])left++;
        }
        return maxArea;
    }
};
