/*Print all nodes of a perfect binary tree in a specific order.
Given a perfect binary tree, print the values of alternating left and right nodes for each level in a topdown
and bottom-up manner.*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// iterative way
void BottomView(Node *root)
{
    if (root == NULL)
        return;

    map<int, vector<Node *>> mp; // A standard container made up of (key,value) pairs, which can be retrieved based on a key, in logarithmic time.
    queue<pair<Node *, int>> q;  // A standard container giving FIFO behavior.
    q.push({root, 0});

    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *curr = q.front().first;
            int verLevel = q.front().second;
            q.pop();
            mp[verLevel].push_back(curr);
            if (curr->left)
                q.push({curr->left, verLevel - 1});
            if (curr->right)
                q.push({curr->right, verLevel + 1});
        }
    }

    cout << endl;
    cout << "Bottom View of the tree" << endl;
    for (auto i : mp)
    {
        cout << i.second[i.second.size() - 1]->data << " "; // bottom view
    }
}

// Topview Function
void TopView(Node *root1)
{
    if (root1 == NULL)
        return;
    map<int, int> mp;
    queue<pair<Node *, int>> q;
    q.push({root1, 0});
    cout << "Top View of the tree" << endl;
    while (!q.empty())
    {

        Node *curr = q.front().first;
        int verLevel = q.front().second;
        q.pop();

        if (mp.find(verLevel) == mp.end())
        {
            cout << curr->data << " ";
            mp[verLevel] = curr->data;
        }

        if (curr->left)
            q.push({curr->left, verLevel - 1});
        if (curr->right)
            q.push({curr->right, verLevel + 1});
    }
}

// main body
int main()
{
    /*
                 1
                / \
             /      \
           /         \
          2           3
        /   \       /   \
       4      5     6      7
     /  \   /  \  /  \   /   \
   8    9  10  11 12 13 14   15

   Top view:1 2 3 4 7 8 15
   Bottom View:8 4 12 6 14 7 15
    */

    // root node
    struct Node *root = new Node(1);
    // child nodes start from here..
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right = new Node(5);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);
    root->right->right = new Node(7);
    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);
    TopView(root);    // call Topview
    BottomView(root); // call Bottomview
    return 0;
}