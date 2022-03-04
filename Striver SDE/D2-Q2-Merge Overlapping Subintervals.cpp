/* Explaination :
First sort the given vector.
Then set the initial interval = first interval of given vector
Then check if end time of next interval is lesser or equal.
If yes, then set the end time of the last interval of merge array = max(initial, end time of next interval)
if not then add the next interval to the merge array.
Time Complexity: O(NlogN) + O(N) (O(NlogN) for sorting and O(N) for traversing through the array.)
*/

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &v)
    {

        vector<vector<int>> rt;

        if (v.size() == 0)
        {
            return rt;
        }

        sort(v.begin(), v.end());

        rt = {v[0]};

        int prt = 0;

        for (int i = 1; i < v.size(); i++)
        {
            if (v[i][0] <= rt[prt][1])
            {
                rt[prt][1] = max(rt[prt][1], v[i][1]);
            }
            else
            {
                rt.push_back({v[i][0], v[i][1]});
                prt++;
            }
        }
        return rt;
    }
};