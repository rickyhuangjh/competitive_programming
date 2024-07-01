#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int solve(vector<vector<int>>& persons) {
    int m = persons.size();
    unordered_map<int, int> end_idxs;
    vector<int> all_points;
    for (int i=0; i<m; ++i) {
        int a = persons[i][0];
        int b = persons[i][1];
        all_points.push_back(a);
        all_points.push_back(b);
        end_idxs[b] = i;
    }
    sort(all_points.begin(), all_points.end());
    for (int i=0; i<2*m; ++i) {
        if (contained.contains(all_points[i])) contains.erase(all_points[i]);
        else contains.insert(all_points[i]);
        if ()
    }

}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; ++i) {
        int n;
        cin >> n;
        vector<vector<int>> persons;
        for (int j=0; j<n; ++j) {
            int a, b;
            cin >> a >> b;
            persons.push_back(vector<int>{a, b});
            cout << solve(a, b) << endl;
        }
    }

}
