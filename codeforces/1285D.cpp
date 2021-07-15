#include<bits/stdc++.h>
using namespace std;

struct Trie {
  Trie* next[2]  ;
  Trie() {
      next[0] = nullptr;
      next[1] = nullptr;
  }
};


int solve(Trie* root, int bit) {
    if(!bit) return 0;
    if(root->next[0] && root->next[1]) {
        return bit + min(solve(root->next[0], bit >> 1), solve(root->next[1], bit >> 1));
    } else if(root->next[0]) {
        return solve(root->next[0], bit >> 1);
    } else {
        return solve(root->next[1], bit >> 1);
    }
}


void insert(Trie* root, int num) {
    Trie* p = root;
    for(int i=30;i>=0;i--) {
        int v = (num >> i) & 1;
        if(!p->next[v]) {
            p->next[v] = new Trie();
        }
        p = p->next[v];
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x: a) cin>>x;
    Trie* root = new Trie();
    for(auto& x: a) insert(root, x);
    cout << solve(root, 1 << 30) << endl;
    
}
