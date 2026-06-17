#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n), right(n);
        stack<int> st;

        // Right boundary (next smaller element)
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        // Remaining elements
        while (!st.empty()) {
            right[st.top()] = n;
            st.pop();
        }

        // Left boundary (previous smaller element)
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while (!st.empty()) {
            left[st.top()] = -1;
            st.pop();
        }

        // Calculate max area
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, heights[i] * (right[i] - left[i] - 1));
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> heights = {2, 1, 5, 6, 2, 3};

    int result = obj.largestRectangleArea(heights);
    cout << "Largest Rectangle Area: " << result << endl;

    return 0;
}