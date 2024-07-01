#include <vector>
#include <cmath>

using namespace std;


class segment_tree {
private:
    vector<int> the_segtree;
    int size;
public:
    segment_tree(const vector<int>& v): size{1 << (ceil(log(v.size())) + 1)}, the_segtree(size, 0) {
        int n = v.size();
        for (int i=0; i<n; ++i) the_segtree[size + i] = v[i];
        for (int i=size-1; i>=0; --i) the_segtree[i] = the_segtree[2 * i] + the_segtree[2 * i + 1];
    }
    int query(int left, int right) {
        return
    }
};

int main() {
    vector<int> a;
    for (int i=0; i<100; ++i) a.push_back(i);
    segment_tree s(a);

}
