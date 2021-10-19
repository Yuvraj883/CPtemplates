///helper function////
int finddistance(node*root,int a){
    node* temp=root;
    int noob=0;
    while (temp!= nullptr){
        if(temp->data>a){
            temp=temp->left;
            noob++;
        }
        else if(temp->data<a){
            temp=temp->right;
            noob++;
        }
        else
            break;
    }
    return noob;
}

int shortestDistance(node*root,int a ,int b){
    if(root==nullptr){
        return 0;
    }
    else if(root->data >a and root->data>b){
        return shortestDistance(root->left,a,b);
    }
    else if(root->data<a and root->data<b){
        return shortestDistance(root->right,a,b);
    }
    else{
        int rahul= finddistance(root,a);
        int rahul1= finddistance(root,b);
        return rahul+rahul1;
    }
}
