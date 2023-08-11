/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {

  public:

    void nodes(struct Node*root,int &a){

        if(root==NULL){

            return ;

        }

        a++;

        nodes(root->left,a) ;

        nodes(root->right,a) ;

 

    }  

   bool cbt(struct Node*root,int size,int index){

        if(root==NULL){

            return true;

        }

        if(index>=size){

            return false;

        }

        bool left=cbt(root->left,size,2*index+1); 

        bool right=cbt(root->right,size,2*index+2);

        

        if(left&&right)

        return true;

        else 

        return false ;

        

    } 

    bool isMaxOrder(struct Node*root){

        if(root==NULL){

            return true;

        }

       if((root->left != NULL&&root->data<root->left->data)||(root->right != NULL&&root->data<root->right->data)){

           return false;

       }

       bool left = isMaxOrder(root->left) ;

       bool right= isMaxOrder(root->right);

       return (left&&right);

    }

    bool isHeap(struct Node* tree) {

       int a =0;

       nodes(tree,a) ; 

       bool cb = cbt(tree,a,0);

       bool maxOrder=isMaxOrder(tree) ;

       return (cb&&maxOrder);

    }

};