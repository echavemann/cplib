//assumes we have an adjacency list named adj
void dfs(int s) {
    if (visited[s]) {
        return;
    }
    visited[s] = true;
    for (auto u : adj[s]) {
        dfs[u];
    }
}
