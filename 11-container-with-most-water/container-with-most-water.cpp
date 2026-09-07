class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = INT_MIN;
        int low = 0 ;
         int high =  height.size()-1;
         while(low < high){
            int m = min(height[low],height[high]);
            int ar = m * (high - low);
            if(ar > mx){
                mx = ar;
            }
            if(height[low] < height[high]){
                low++;
            }else{
                high--;
            } 
         }
         return mx;
    }
};