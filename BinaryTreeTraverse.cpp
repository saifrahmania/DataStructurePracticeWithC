#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

void preoder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preoder(root->left);
    preoder(root->right);
}

void postorder(struct Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int search(int inorder[], int start, int end, int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}


void inorder(struct Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* buildTree( int preorder[],int inorder[], int start, int end){
    static int idx = 0;
    int curr = preorder[idx];
    Node *node = new Node(curr);
    idx++;
    if(start==end){
        return node;
    }
    int pos = -1;
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            pos = i;
            break;
        }
    }
    node->left = buildTree(preorder,inorder,start,pos-1);
    node->right = buildTree(preorder,inorder,pos+1,end);
    return node;
}

void inorderPrint(Node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){
    // Node* root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    // preoder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    // inorder(root);
    // return 0;
    int preorder[] = {1,2,4,3,5};
    int inorder []= {4,2,1,5,3};
    Node* root = buildTree(preorder,inorder,0,4);
    inorderPrint(root);

    return 0;

}