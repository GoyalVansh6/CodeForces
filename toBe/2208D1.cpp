#include <bits/stdc++.h>
using namespace std;

// void fxn(){
//     int n;
//     cin >> n;
//     vector<vector<bool>> adj(n, vector<bool>(n, false));
//     vector<int> indegree(n, 0);
//     vector<int> outdegree(n, 0);
//     vector<string> s(n);

//     for(int i = 0; i < n; i++){
//         cin >> s[i];
//         for(int j = 0; j < n; j++){
//             if(i == j) continue;
//             if(s[i][j] == '1'){
//                 adj[i][j] = true;
//                 indegree[j]++;
//                 outdegree[i]++;
//             }
//         }
//     }
   
//     // for(int i = 0; i < n; i++){
//     //     for(int j = 0; j < n; j++){
//     //         cout << adj[i][j];
//     //     }
//     //     cout << endl;
//     // }

//     // for(int i = 0; i < n; i++){
//     //     cout << indegree[i] << " ";
//     // }
//     // cout << endl;

//     queue<int> pq;
//     for(int i = 0; i < n; i++){
//         if(indegree[i] == 0) pq.push(i);
//     }

//     vector<pair<int, int>> ans;

//     while(!pq.empty()){
//         int u = pq.front();
//         pq.pop();
//         for(int v = 0; v < n; v++){
//             if(u == v) continue;
//             if(adj[u][v]){
//                 indegree[v]--;
//                 if(indegree[v] == 0){
//                     pq.push(v);
//                     ans.push_back({u, v});
//                 }
//             }
//         }
//     }

//     if(ans.size() != (n - 1)){
//         cout << "NO\n";
//         return;
//     }

//     // vector<vector<int>> tree_adj(n);
//     // vector<vector<int>> undir_adj(n);
//     // for(auto edge : ans){
//     //     tree_adj[edge.first].push_back(edge.second);
//     //     undir_adj[edge.first].push_back(edge.second);
//     //     undir_adj[edge.second].push_back(edge.first);
//     // }

//     // vector<bool> vis(n, false);
//     // queue<int> q;
//     // q.push(0);
//     // vis[0] = true;
//     // int nodes_visited = 0;
//     // while(!q.empty()){
//     //     int u = q.front();
//     //     q.pop();
//     //     nodes_visited++;
//     //     for(int v : undir_adj[u]){
//     //         if(!vis[v]){
//     //             vis[v] = true;
//     //             q.push(v);
//     //         }
//     //     }
//     // }
//     // if(nodes_visited != n){
//     //     // cout << "NO\n";
//     //     return;
//     // }

//     // for(int i = 0; i < n; i++){
//     //     vector<bool> rvis(n, false);
//     //     queue<int> rq;
//     //     rq.push(i);
//     //     rvis[i] = true;
//     //     while(!rq.empty()){
//     //         int u = rq.front();
//     //         rq.pop();
//     //         for(int v : tree_adj[u]){
//     //             if(!rvis[v]){
//     //                 rvis[v] = true;
//     //                 rq.push(v);
//     //             }
//     //         }
//     //     }
//     //     for(int j = 0; j < n; j++){
//     //         bool expected = (orig_s[i][j] == '1');
//     //         if(rvis[j] != expected){
//     //             // cout << "NO\n";
//     //             return;
//     //         }
//     //     }
//     // }

//     cout << "YES\n";
//     for(int i = 0; i < n - 1; i++){
//         cout << ans[i].first + 1 << " " << ans[i].second + 1 << "\n";
//     }
// }


void fxn(){
    int n;
    cin >> n;

    vector<string> s(n);

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    vector<pair<int,int>> edges;

    for(int u = 0; u < n; u++){
        for(int v = 0; v < n; v++){
            if(u == v) continue;
            if(s[u][v] == '0') continue;

            bool direct = true;

            for(int w = 0; w < n; w++){
                if(w == u || w == v) continue;

                if(s[u][w] == '1' && s[w][v] == '1'){
                    direct = false;
                    break;
                }
            }

            if(direct){
                edges.push_back({u, v});
            }
        }
    }

    if(edges.size() != n - 1){
        cout << "No\n";
        return;
    }

    vector<vector<int>> adj(n);
    vector<vector<int>> undir_adj(n);
    for(auto edge : edges){
        adj[edge.first].push_back(edge.second);
        undir_adj[edge.first].push_back(edge.second);
        undir_adj[edge.second].push_back(edge.first);
    }

    for(int i = 0; i < n; i++){
        vector<bool> vis(n, false);
        queue<int> q;
        q.push(i);
        vis[i] = true;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int v : adj[u]){
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        for(int j = 0; j < n; j++){
            if(vis[j] != (s[i][j] == '1')){
                cout << "No\n";
                return;
            }
        }
    }

    cout << "Yes\n";
    for(int i = 0; i < n - 1; i++) cout << edges[i].first + 1 << " " << edges[i].second + 1 << "\n";
}


int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}