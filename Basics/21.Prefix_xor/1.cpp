/*
    Prefix XOR

    The prefix XOR of an array is a technique where we precompute the XOR of all elements from the start up to each index.
    For an array arr[0..n-1], the prefix XOR array por[0..n-1] is defined as:
        por[0] = arr[0]
        por[i] = por[i-1] ^ arr[i]   for i > 0

    This allows us to efficiently compute the XOR of any subarray arr[a..b] in O(1) time:
        - If a == 0: result = por[b]
        - Else:      result = por[b] ^ por[a-1]

    This code reads an array and answers multiple queries of the form: "What is the XOR of elements from index a to b (1-based)?"
    It uses the prefix XOR technique for fast query resolution.
*/

// https://cses.fi/problemset/task/1650


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

const int MAXN = 100005;
vector<int> adj[MAXN];   
bool visited[MAXN];      

void dfs(int u){
    visited[u]=true;
    for(int v: adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}



void solve() {
   int n,k;
   cin>>n>>k;
   vector<int> arr(n),por(n,0);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   por[0]=arr[0];
   for(int i=1;i<n;i++){
    por[i]=por[i-1]^arr[i];
   }
   for(int i=0;i<k;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    if(a==0) cout<<por[b]<<endl;
    else{
        cout<<(por[b]^por[a-1])<<endl;
    }
   }

   
}




int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
