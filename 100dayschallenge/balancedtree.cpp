#include<iostream>
using namespace std;

int height(Node* root){

    if(root==NULL)
        return 0;

    int lh=height(root->left);//pass left
    int rh=height(root->right); //pass right
    return max(lh,rh)+1;
}

bool isBalanced(Node* root){
    if (root==NUL){
        return true;
    }
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1) //abs, absolute
    {
        return true;
    }
    else{
        return false;
    }
}