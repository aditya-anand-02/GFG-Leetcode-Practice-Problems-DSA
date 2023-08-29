//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node* reverse(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head==NULL)
        {
            return head;
        }
        Node *prev=NULL;
        Node *curr=head;
        Node *fwd=NULL;
        while(curr!=NULL)
        {
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        Node* newhead=reverse(head);
        int maxi=newhead->data;
        Node* temp=newhead;
        while(temp!=NULL && temp->next!=NULL)
        {
            if(temp->next->data<maxi)
            {
                temp->next=temp->next->next;
            }
            else
            {
                maxi=temp->next->data;
                temp=temp->next;
            }
        }
        return reverse(newhead);
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends