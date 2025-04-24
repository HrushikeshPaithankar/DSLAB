#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *make_node() {
    int ch;
    printf("enter ch: ");
    scanf("%d", &ch);
    struct node *nnode = (struct node *)malloc(sizeof(struct node));
    nnode->right = NULL;
    nnode->left = NULL;
    if (ch == -1) {
        return NULL;
    } else {
        nnode->data = ch;
        printf("enter left child of %d:\n", ch);
        nnode->left = make_node();
        printf("enter right child of %d:\n", ch);
        nnode->right = make_node();
        return nnode;
    }
}

int searchExcludingNode(struct node* root, int value, struct node* excludeNode) {
    if (root == NULL) {
        return 0;
    }
    if (root != excludeNode && root->data == value) {
        return 1;
    }
    return searchExcludingNode(root->left, value, excludeNode) || 
           searchExcludingNode(root->right, value, excludeNode);
}

int checkNodes(struct node* current, struct node* root, int target) {
    if (current == NULL) {
        return 0;
    }
    int complement = target - current->data;
    if (searchExcludingNode(root, complement, current)) {
        return 1;
    }
    return checkNodes(current->left, root, target) || 
           checkNodes(current->right, root, target);
}

int hasTwoSum(struct node* root, int target) {
    return checkNodes(root, root, target);
}

int main() {
    struct node* root = make_node();

    int target;
    printf("\nEnter target sum: ");
    scanf("%d", &target);

    if (hasTwoSum(root, target)) {
        printf("\nPair with sum %d exists.\n", target);
    } else {
        printf("\nNo such pair found.\n");
    }

    return 0;
}