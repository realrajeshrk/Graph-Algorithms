#include<bits/stdc++.h>
#define pb push_back

using namespace std;

int main()
{
    vector<int>v[9];
    vector<int>::iterator it;
    // Explicitly building a graph...
    v[1].pb(2);
    v[1].pb(4);
    v[1].pb(7);
    v[2].pb(1);
    v[2].pb(5);
    v[2].pb(6);
    v[3].pb(8);
    v[3].pb(6);
    v[4].pb(1);
    v[4].pb(6);
    v[5].pb(2);
    v[5].pb(7);
    v[6].pb(2);
    v[6].pb(3);
    v[6].pb(4);
    v[7].pb(1);
    v[7].pb(5);
    v[8].pb(3);
    // Doing DFS using explicit stack...
    bool vis[9];
    fill_n(vis,9,false);
    int t;
    stack<int>s;
    s.push(1);
    while(!s.empty()){
        t=s.top();
        s.pop();
        if(vis[t])continue;
        cout<<t<<" ";
        vis[t]=true;
        for(int i=0;i<v[t].size();i++){
            if(!vis[v[t][i]]){
                s.push(v[t][i]);
            }
        }
    }
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                