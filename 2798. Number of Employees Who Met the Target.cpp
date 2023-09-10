class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int x = 0;
        for (int y: hours)
        {
            if(y >= target) x++;
        }
        return x;
    }
};
