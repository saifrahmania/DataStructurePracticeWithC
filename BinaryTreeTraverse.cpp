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

void printLevelOrder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->data<<" ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}

int sumtAthK(Node* root, int K){
    if(root==NULL){
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            if(level==K){
                sum+=node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1+countNodes(root->left)+countNodes(root->right);
}

int sumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return root->data+sumNodes(root->left)+sumNodes(root->right);
}

int countLeafNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return countLeafNodes(root->left)+countLeafNodes(root->right);
}



int height(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}

int calcHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);
    return 1+max(lheight,rheight);
}

int calcDiameter(Node* root, int* height){
    if(root==NULL){
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int ld = calcDiameter(root->left,&lh);
    int rd = calcDiameter(root->right,&rh);
    int currDiameter = lh+rh+1;
    *height = max(lh,rh)+1;
    return max(currDiameter,max(ld,rd));

}

int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    int currDiameter = lheight+rheight+1;
    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);
    return max(currDiameter,max(ldiameter,rdiameter));
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
    // int preorder[] = {1,2,4,3,5};
    // int inorder []= {4,2,1,5,3};
    // Node* root = buildTree(preorder,inorder,0,4);
    // inorderPrint(root);

    return 0;

}