#include <iostream>
using namespace std;
class Stack{
int arr[100],size,top;
public:
	Stack():size(100),top(-1){}     //size(0)
	bool isEmpty(){return (top<0);}                    //(size==0);
	void display() {if (isEmpty()) cout<<"Stack is empty"<<endl;
       else{cout<<"Stack elements are : ";
	   for(int i=top; i>=0; i--) cout<<arr[i]<<" ";
       cout<<endl;}}         
    bool isFull(){return (top>=size-1);}                       //return (size==99);
    bool push(int val){                                       
      if(isFull()) return false;
	  top++;                                              //         top++; size++;
      arr[top]=val;                                      //          arr[size]=val;
      return true; }                                               
    bool pop() {if(isEmpty()) return false;
	  top--;                                       //         top--;  size--;	
      return true;  }  
    int atTop(){if(isEmpty())return -1;                     
       return arr[top];	}	
};
int main(){
Stack S;
	S.display();
  //  cout<<S.atTop()<<endl;
    S.push(25);
	S.push(26);
	S.push(27);
//	cout<<S.atTop()<<endl;
	S.display();
	S.pop();
	S.pop();
	S.pop();
	cout<<S.pop()<<endl;
	S.display();
return 0;
}