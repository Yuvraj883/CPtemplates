///////////////////////////PRINT ALL NODES AT A DISTANCE OF K FROM A TARGET NODE/////////////////////

int PrintNodesAtDistanceK(node*root,node*target,int k){
    if(root== nullptr){
        return -1;
    }

    if(root==target){
        printAtK(target,k);
        return 0;
    }

    int dl= PrintNodesAtDistanceK(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout << root->data << " ";
        }
        else{
            printAtK(root->right,k-2-dl);

        }
        return dl+1;
    }
    int dr= PrintNodesAtDistanceK(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout << root->data << " ";
        }
        else{
            printAtK(root->left,k-2-dr);
        }
        return dr+1;
    }
    return -1;

}
