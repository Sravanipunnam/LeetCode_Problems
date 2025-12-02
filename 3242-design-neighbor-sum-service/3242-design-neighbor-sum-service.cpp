class NeighborSum {
public:
    vector<vector<int>> grid;

    NeighborSum(vector<vector<int>>& grid) {
        this->grid = grid;
    }

    int adjacentSum(int value) {
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == value) {
                    int sum = 0;
                    if (i > 0) sum += grid[i-1][j];        // up
                    if (i < n - 1) sum += grid[i+1][j];    // down
                    if (j > 0) sum += grid[i][j-1];        // left
                    if (j < m - 1) sum += grid[i][j+1];    // right
                    return sum;
                }
            }
        }
        return 0;
    }

    int diagonalSum(int value) {
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == value) {
                    int sum = 0;
                    if (i > 0 && j > 0) sum += grid[i-1][j-1];            // top-left
                    if (i > 0 && j < m-1) sum += grid[i-1][j+1];          // top-right
                    if (i < n-1 && j > 0) sum += grid[i+1][j-1];          // bottom-left
                    if (i < n-1 && j < m-1) sum += grid[i+1][j+1];        // bottom-right
                    return sum;
                }
            }
        }
        return 0;
    }
};
