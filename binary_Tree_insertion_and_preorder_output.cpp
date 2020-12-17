#include<bits/stdc++.h>
using namespace std;

class TreeNode
{  public:
   int data;
   TreeNode*left;
   TreeNode*right;
   TreeNode(int d)
   {
       data=d;
       left=NULL;
       right=NULL;
   }
};
void preorder(TreeNode* root)
{
    if(root==NULL) 
        return;
   cout<<root->data<<"->";
   preorder(root->left);
   preorder(root->right);
}
void Insert(TreeNode*& root)
{  
    queue<TreeNode*>q;
    int d;
    cin>>d;
    root=new TreeNode(d);
    q.push(root);
    TreeNode*temp=NULL;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        cout<<"enter children of -->"<<temp->data<<"\n";
        int l,r;
        cin>>l>>r;
        if(l!=-1){
        root->left=new TreeNode(l);
        q.push(root->left);
        }
        if(r!=-1){
        root->right=new TreeNode(r);
        q.push(root->right);
        }
    }
}
int main()
{
TreeNode *root=NULL;
cout<<"enter Root\n";
Insert(root);
preorder(root);
cout<<"\n";
}