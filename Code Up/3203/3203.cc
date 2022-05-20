#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }

typedef struct node *treePointer;
typedef struct node
{
    char data;
    treePointer leftChild, rightChild;
} node;
void preorder(treePointer ptr)
{
    if (ptr)
    {
        cout << ptr->data;
        preorder(ptr->leftChild);
        preorder(ptr->rightChild);
    }
}
void inorder(treePointer ptr)
{
    if (ptr)
    {
        inorder(ptr->leftChild);
        cout << ptr->data;
        inorder(ptr->rightChild);
    }
}
void postorder(treePointer ptr)
{
    if (ptr)
    {
        postorder(ptr->leftChild);
        postorder(ptr->rightChild);
        cout << ptr->data;
    }
}
int main()
{
    string s;
    cin >> s;
    node nodes[s.length() + 1];
    rep(i, 0, s.length() - 1)
    {
        nodes[i + 1].data = s[i];
        nodes[i + 1].leftChild = NULL;
        nodes[i + 1].rightChild = NULL;
    }
    rep(i, 1, s.length())
    {
        if ((i) % 2 == 0)
        {
            nodes[i / 2].leftChild = &nodes[i];
        }
        else
        {
            nodes[i / 2].rightChild = &nodes[i];
        }
    }
    /*
    rep(i, 1, s.length()){
        cout
            << nodes[i].data<<" ";
        if(nodes[i].data=='a'||nodes[i].data=='b'||nodes[i].data=='c')
            cout<< nodes[i].leftChild->data << " " << nodes[i].rightChild->data << endl;
    }
    */
    postorder(&nodes[1]);
    cout << endl;
    return 0;
}