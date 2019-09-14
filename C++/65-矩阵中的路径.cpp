class Solution
{
public:
    bool hasPath(char *matrix, int rows, int cols, char *str)
    {
        bool visit[rows * cols];
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                visit[i * cols + j] = false;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (helper(matrix, rows, cols, str, i, j, 0, visit))
                    return true;
        return false;
    }

    bool helper(char *mat, int &r, int &c, char *s, int i, int j, int k, bool visit[])
    {
        int idx = i * c + j;
        if (i < 0 || j < 0 || i >= r || j >= c || visit[idx] || mat[idx] != s[k])
            return false;
        if (k == strlen(s) - 1)
            return true;
        visit[idx] = true;
        if (helper(mat, r, c, s, i - 1, j, k + 1, visit))
            return true;
        if (helper(mat, r, c, s, i + 1, j, k + 1, visit))
            return true;
        if (helper(mat, r, c, s, i, j - 1, k + 1, visit))
            return true;
        if (helper(mat, r, c, s, i, j + 1, k + 1, visit))
            return true;
        visit[idx] = false;
        return false;
    }
};