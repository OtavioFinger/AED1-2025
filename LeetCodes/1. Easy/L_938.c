
#include <stdio.h>
#include <stdlib.h>

  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
 };
 
struct TreeNode *NewNode( int val ) {

    struct TreeNode *newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
}
int main() {

    struct TreeNode *root = NewNode(10);
    root->left = NewNode(5);
    root->left->left = NewNode(3);
    root->left->right = NewNode(7);

    root->right = NewNode(15);
    root->right->right = NewNode(18);

    int sumTotal = rangeSumBST(root, 7, 15);
    printf("Output: %d", sumTotal);

    return 0;
}

int rangeSumBST(struct TreeNode* root, int low, int high) {
  
}