#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grid;
int n;
vector<vector<vector<int>>> dp;

int solve(int r, int c, int k)
{
    if (dp[r][c][k] != -1)
        return dp[r][c][k];
    if (grid[r - 1][c - 1] == 0)
        return 0;
    dp[r][c][k] = 0;
    if (k == 0)
    {
        dp[r][c][k] = max(solve(r, c + 1, 0), solve(r, c + 1, 2)) + 1;
    }
    else if (k == 1)
    {
        dp[r][c][k] = max(solve(r, c - 1, 1), solve(r, c - 1, 2)) + 1;
    }
    else
    {
        dp[r][c][k] = max(solve(r - 1, c, 2), max(solve(r - 1, c, 0), solve(r - 1, c, 1))) + 1;
    }
    return dp[r][c][k];
}

int main()
{
    cin >> n;
    grid = vector<vector<int>>(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            if (x == '*')
                grid[i][j] = 1;
        }
    }

    dp = vector<vector<vector<int>>>(n + 2, vector<vector<int>>(n + 2, vector<int>(3, -1)));
    for (int i = 0; i < n + 2; i++)
        dp[0][i][0] = dp[0][i][1] = dp[0][i][2] = 0;
    for (int j = 0; j < n + 2; j++)
    {
        dp[j][0][0] = dp[j][0][1] = dp[j][0][2] = 0;
        dp[j][n + 1][0] = dp[j][n + 1][1] = dp[j][n + 1][2] = 0;
    }
    int ans = 0;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, solve(j, i, 0));
            ans = max(ans, solve(j, i, 1));
            ans = max(ans, solve(j, i, 2));
        }
    }
    cout << ans << endl;
    return 0;
}