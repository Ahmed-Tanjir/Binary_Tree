#include <iostream>
using namespace std;

int node = 16;

void preorder(int tree[], int root)
{

    if (tree[root] == -1 || root >= node)
        return;

    cout << tree[root] << " ";

    preorder(tree, 2 * root + 1);
    preorder(tree, 2 * root + 2);
}

void inorder(int tree[], int root)
{

    if (tree[root] == -1 || root >= node)
        return;

    preorder(tree, 2 * root + 1);

    cout << tree[root] << " ";

    preorder(tree, 2 * root + 2);
}

void postorder(int tree[], int root)
{

    if (tree[root] == -1 || root >= node)
        return;

    preorder(tree, 2 * root + 1);
    preorder(tree, 2 * root + 2);

    cout << tree[root] << " ";
}

int main()
{

    int tree[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    preorder(tree, 0);
    cout << endl;

    inorder(tree, 0);
    cout << endl;

    postorder(tree, 0);
    cout << endl;

    return 0;
}