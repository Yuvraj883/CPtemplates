////////////////////CHECK IF A GIVEN TREE IS BST OR NOT//////////////////////////////////
bool isBST1(node*root,node*min,node*max) {

    if (root == nullptr) {
        return true;
    }
    if (min != nullptr and root->data <= min->data) {
        return false;
    }
    if (max != nullptr and root->data >= max->data) {
        return false;
    }
    bool left = isBST1(root->left, min, root);
    bool right = isBST1(root->right, root, max);
    return left and right;

}

bool isBST(node*root){
    node*min=nullptr;
    node*max=nullptr;
    if(isBST1(root,min,max)){
        return true;
    }
    else
        return false;
}
