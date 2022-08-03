#include<bits/stdc++.h>
// Keywords
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vll vector<ll>
#define vip vector<pair<int, int>>
#define all(x) (x).begin(), (x).end()
#define PI 3.1415926535897932384626433832
#define um unordered_map
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define endl "\n"
// Fast I/O
#define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
using namespace std;
// Incase I/O is from file to file
void online_judge() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

// Trie Node
struct TrieNode
{
    struct TrieNode *children[26];

    bool isEndOfWord;
};

// Get Node
struct TrieNode *getNode(void)
{
    struct TrieNode *pNode =  new TrieNode;
  
    pNode->isEndOfWord = false;
  
    for (int i = 0; i < 26; i++)
        pNode->children[i] = NULL;
  
    return pNode;
}

// Insert in Trie
void insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
  
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
  
        pCrawl = pCrawl->children[index];
    }
    pCrawl->isEndOfWord = true;
}

// Write solution here
void solve()
{
    string t;
    cin >> t;
    TrieNode *root;
    int n;
    cin >> n;

    um<string, int> col;
    um<int, int> ans;
    
    for(int i=0;i<n;i++){
        string p;
        cin >> p;
        col[p] = i;
        insert(root, p);
    }

    TrieNode *head = root;
    
    string st = "";
    
    for(int i=0; i < t.size(); i++){
        if(head->children[t[i]-'a'] != NULL){
            if(head->children[t[i]-'a']->isEndOfWord){
                st += t[i];
                ans[col[st]+1]++;
                head = root;
                st="";
            }
            else{
                st += t[i];
                head = head->children[t[i] - 'a'];
            }
        }
        else{
            head = root;
            st = "";
            i--;
        }
    }
    if(ans.size() == 0) cout << -1 << endl;
    else{
        cout << ans.size() << endl;
        for(auto i:ans){
            cout << i.first << " " << i.second << endl;
        }
    }

}

//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
int main(){
    fastio;
    // online_judge();
    ll _=1;
    cin >> _;
    while(_-->0)
        solve();
    return 0;
}
