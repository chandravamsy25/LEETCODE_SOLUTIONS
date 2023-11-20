class Solution {
public:
    bool contains(char z, string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == z)
                return true;
        }
        return false;
    }
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {
        int n = garbage.size(), m = travel.size();

        for (int i = 1; i < m; i++)
            travel[i] += travel[i - 1];

        int time = 0;
        int M = 0, P = 0, G = 0;

        for (int i = 0; i < n; i++)
        {
            if (contains('M', garbage[i]))
                M = i;

            if (contains('P', garbage[i]))
                P = i;

            if (contains('G', garbage[i]))
                G = i;

            time += garbage[i].size();
        }

        if (M != 0)
            time += travel[M - 1];
        if (P != 0)
            time += travel[P - 1];
        if (G != 0)
            time += travel[G - 1];

        return time;
    }
};