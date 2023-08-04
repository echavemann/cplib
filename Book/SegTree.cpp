#include <vector>

class SegmentTree {
private:
    std::vector<int> tree;
    int n;

    void build(const std::vector<int>& nums, int node, int start, int end) {
        if (start == end) {
            tree[node] = nums[start];
            return;
        }

        int mid = (start + end) / 2;
        build(nums, 2 * node + 1, start, mid);
        build(nums, 2 * node + 2, mid + 1, end);
        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }

    int query(int node, int start, int end, int left, int right) {
        if (left > end || right < start) {
            return 0; // Return the neutral element (e.g., 0 for sum)
        }

        if (left <= start && right >= end) {
            return tree[node];
        }

        int mid = (start + end) / 2;
        int sumLeft = query(2 * node + 1, start, mid, left, right);
        int sumRight = query(2 * node + 2, mid + 1, end, left, right);
        return sumLeft + sumRight;
    }

public:
    SegmentTree(const std::vector<int>& nums) {
        n = nums.size();
        tree.resize(4 * n); // We can adjust this size based on the maximum number of nodes in the tree.
        build(nums, 0, 0, n - 1);
    }

    int queryRange(int left, int right) {
        return query(0, 0, n - 1, left, right);
    }
};
