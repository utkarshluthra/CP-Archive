int maxArea(vector<int>& height) {
    int ans = 0;
    int a = 0;
    int b = height.size()-1;
    while (a < b) {
        int h = min(height[a], height[b]);
        ans = max(ans, (b - a) * h);
        while (height[a] <= h && a < b) {
            a++;
        }
        while (height[b] <= h && a < b) {
            b--;
        }
    }
    return ans;
}