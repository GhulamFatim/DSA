#include<iostream>
using namespace std;
class Node{
	private:
		int data;
		Node* next;
	public:
		Node(int val):next(NULL){
			setData(val);
		}
		int getData(){
			return data;
		}
		Node* getNext(){
			return next;
		}
		void setData(int val){
			this->data=val;
		}	    
		void setNext(Node* next){
			this->next=next;
		}
};
class LinkedList{
	private:
		Node* head;
	public:
	    bool isEmpty(){
	    	return(head==NULL);
		}
		void display(){
			if(!isEmpty()){
				Node* temp=head;
				while(temp!=NULL){
					cout<<temp->getData()<<"--";
					temp=temp->getNext();
				}
				cout<<"NULL";
			}
		}
		int getLength(){
			if(isEmpty())return 0;
			Node* temp=head;
			int count=0;
			while(temp!=NULL){
				temp=temp->getNext();
				count++;
			}		
			return count;
		}	
		bool insertAtBeginning(int val){
			if(isEmpty()){
				this->head=new Node(val);
				return true;
			}
			else{
				Node* temp=new Node(val);
				temp->setNext(head);
				head=temp;
			}
		}
};