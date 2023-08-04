class fenwicktree {

    vector<int> tree; // items
    int n; //size 
public:
    fenwicktree(int size) {
        n = size;
        tree.resize(n+1, 0)l //init
    }

    int sum(int k) {
        int s = 0;
        while (k >= 1) {
            s += tree[k];
            k -= k&-k;
        }
        return s;
    }

    void add(int k, int x) {
        while(k<=n) {
            tree[k]+=x;
            k+= k&-k;
        }
    }
};
