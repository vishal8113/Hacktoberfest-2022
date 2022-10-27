int longestCycle(vector<int>& edges) {
    int n = edges.size(), ans = -1;
    vector<int> idx(n);
    for (int i = 0, k = 1; i < n; i++) {
        int j = i, curk = k;
        while (j != -1 && !idx[j]) {
            idx[j] = k++;
            j = edges[j];
        }
        if (j != -1 && idx[j] >= curk)
            ans = max(ans, k - idx[j]);
    }
    return ans;
}
