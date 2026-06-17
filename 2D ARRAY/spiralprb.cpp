#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    if (matrix.empty()) return ans;

    int row = matrix.size();
    int col = matrix[0].size();
    int top = 0, bottom = row - 1, left = 0, right = col - 1;

    while (left <= right && top <= bottom) {
        // Print top row
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // Print right column
        for (int j = top; j <= bottom; j++) {
            ans.push_back(matrix[j][right]);
        }
        right--;

        // Print bottom row (if still valid)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Print left column (if still valid)
        if (left <= right) {
            for (int j = bottom; j >= top; j--) {
                ans.push_back(matrix[j][left]);
            }
            left++;
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral order: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
