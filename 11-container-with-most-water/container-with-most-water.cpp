class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right =height.size()-1;
        int length=0;
        //int breadth=0;
        int curArea=0;
       int maxArea=0;

        while(left<right){ 
            length=min(height[left], height[right]);
           int breadth= right-left;
             curArea=length*breadth;
            maxArea= max(maxArea, curArea);
             if( height[left]<height[right] ){
                left++;
             }
             else{
                right--;
             }
        }
        return maxArea;
    }
};