#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls,rs)+1;
}

/*bool isBalanced(Node* root){ //time complexity O(n^2)
    if(root==NULL){
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right)){
        return true;
    }
    return false;
}*/
bool isBalanced(Node* root, int* height){ //time complexity O(n)
    if(root==NULL){
        return true;
    }
    int lh=0,rh=0;
    if(isBalanced(root->left,&lh) && isBalanced(root->right,&rh)){
        *height=max(lh,rh)+1;
        if(abs(lh-rh)<=1){
            return true;
        }
    }
    return false;
}


int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);    
    root -> right -> right = new Node(7);
    int height = 0;
    if(isBalanced(root,&height)){
        cout<<"Balanced"<<<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;
    
}