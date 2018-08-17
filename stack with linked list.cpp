#include<iostream>
using namespace std;
struct node{
	node *next;
	int data;
};
class stack{
	node *top;
	public:
		stack(){
			top=NULL;
		}
		void push(int num){
			node *temp=new node;
            temp->data=num;
            temp->next=NULL;
			if(top==NULL){
				top=temp;
			}
			else{
				temp->next=top;
				top=temp;
		}
		}
		void pop(){
			node *temp;
			if(top==NULL){
				cout<<"underflow"<<endl;
			}
			else{
				temp=top;
				top=top->next;
				cout<<"deleted data:"<<temp->data<<endl;
				delete temp;
			}
		}
		void display(){
			node *ptr;
			ptr=top;
			if(ptr==NULL){
				cout<<"empty stack"<<endl;
			}
			else{
				while(ptr!=NULL){
					cout<<ptr->data;
					ptr=ptr->next;
				}
			}
		}
};
int main(){
	stack s;
	int n,choice;
	cout<<"1 for insert\n 2 for delete\n 3 for display\n -1 for exit"<<endl;
	while(choice!=-1){
		cout<<"enter your choice"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"enter a number"<<endl;
			cin>>n;
			s.push(n);
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.display();
			break;
		default:
			cout<<"invalid choice"<<endl;
	}
		}
	return 0;
}
