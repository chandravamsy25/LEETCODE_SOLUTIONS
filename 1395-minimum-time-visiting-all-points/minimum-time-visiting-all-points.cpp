
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) 
    {
        int result = 0, diff1, diff2;
        
        for(int i = 1; i < points.size(); i++)
        {
            diff1 = abs(points[i][0] - points[i - 1][0]);
            diff2 = abs(points[i][1] - points[i - 1][1]);
            result = result + max(diff1, diff2);
        }
        return result;
    }
};