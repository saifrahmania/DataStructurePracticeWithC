#include<bits/stdc++.h>
#include<vector>
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

int catalan(int n){
    if(n<=1){
        return 1;
    }
    int res = 0;
    for(int i=0;i<n;i++){
        res += catalan(i)*catalan(n-i-1);
    }
    return res;
}

vector<Node*> constructTrees(int start, int end){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++){
        vector<Node*> leftSubtree = constructTrees(start, i-1);
        vector<Node*> rightSubtree = constructTrees(i+1, end);
        for(int j=0;j<leftSubtree.size();j++){
            Node* left = leftSubtree[j];
            for(int k=0;k<rightSubtree.size();k++){
                Node* right = rightSubtree[k];
                Node* node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    
    vector<Node*> totalTreesFrom1toN = constructTrees(1, 3);
    for(int i=0;i<totalTreesFrom1toN.size();i++){
       cout<<i <<preorder(totalTreesFrom1toN[i])<<" ";
        cout<<endl;
    }

   

    return 0;
}