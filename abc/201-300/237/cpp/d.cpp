#include <iostream>
#include <stack>

using namespace std;
using ui = unsigned int;

struct Node
{
  ui x;
  Node *left;
  Node *right;
};

int main()
{
  Node a = {0, NULL, NULL};
  Node *root = &a;

  ui n;
  cin >> n;

  bool root_comp = false;

  stack<Node *> ns;
  ns.push(root);

  for (ui i = 1; i <= n; i++)
  {
    char si;
    cin >> si;
    Node *nn = new Node({i, NULL, NULL});
    Node *prev = ns.top();
    ns.pop();

    if (si == 'R')
    {
      root_comp = true;
      nn->left = prev;
      if (prev->right != NULL)
      {
        prev->right->left = nn;
        nn->right = prev->right;
      }
      prev->right = nn;
    }
    else if (si == 'L')
    {
      nn->right = prev;
      if (prev->left != NULL)
      {
        nn->left = prev->left;
        prev->left->right = nn;
      }
      prev->left = nn;
      if (!root_comp)
      {
        root = nn;
      }
    }
    else
    {
      // noop
    }

    ns.push(nn);
  }

  Node *node = root;
  cout << node->x;

  node = node->right;
  while (true)
  {
    cout << " " << node->x;
    if (node->right == NULL)
    {
      break;
    }
    node = node->right;
  }
  cout << endl;

  return 0;
}