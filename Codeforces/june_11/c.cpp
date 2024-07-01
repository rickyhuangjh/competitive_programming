#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <algorithm>

using namespace std;

void solve(vector<int>& nums) {
    int m = nums.size();
    int res = 0;
    unordered_map<long long, int> sums;
    long long cur_sum = 0;
    for (int i=0; i<m; ++i) {
        cur_sum += nums[i];
    }
    for (int i=m-1; i>=0; --i) {
        ++sums[cur_sum];
        if (sums[2 * nums[i]]) {
            res += sums[2 * nums[i]];
            sums[2 * nums[i]] = 0;
        }
        cur_sum -= nums[i];
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; ++i) {
        int n;
        cin >> n;
        vector<int> nums;
        int a;
        for (int j=0; j<n; ++j) {
            cin >> a;
            nums.push_back(a);
        }

        solve(nums);
    }
    
}

