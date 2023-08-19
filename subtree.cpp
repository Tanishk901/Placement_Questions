 
#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
vector<int> g[N];
int subtreeSum[N];
int evenCount[N];

void dfs(int v, int par = 0) {
    if(v%2 == 0)
    evenCount[v]++;
    subtreeSum[v]+=v;

    for(int child:g[v]){
        if(child == par)
        continue;
        dfsTreeSum[v] += subtreeSum[child];
        evenCount[v] += evenCount[child];

}
}

int main() {
    int n,1;
    cin>>n;
    for(i=1;i<=n;i++) {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    for(i=1;i<n;i++) {
        cout<<subtree_sum[i]<<" "<<even_ct[i]<<endl;
}
return 0;
}
    
