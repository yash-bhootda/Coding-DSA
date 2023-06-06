
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node *buildtree(node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for the left of :" << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter the data for the right of :" << data << endl;
    root->right = buildtree(root->right);
    return root;
}
void bfs(node *root)
{
    queue<node *> q;
    stack<node*> st;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            st.push(NULL);
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            st.push(temp);
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    while(!st.empty())
    {
        if(st.top()==NULL)
        {
            cout<<endl;
        }
        else
        {
            cout<<st.top()->data<<" ";
        }
        st.pop();
    }
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1  5 17 -1 -1 -1
    cout << "BFS" << endl;
    bfs(root);
    return 0;
}