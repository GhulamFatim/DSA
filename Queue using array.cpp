#include <iostream>
using namespace std;
class Queue{
	int arr[100],front , back , size;
	public:
	Queue():front(-1),back(-1),size(100){}                  //size(0)
	bool isEmpty(){ return (front == - 1 || front > back);}  //(size==0 || front > back)
	void Display() { if (isEmpty()) cout<<"Queue is empty"<<endl;
        else {cout<<"Queue elements are : ";
        for (int i = front; i <= back; i++)cout<<arr[i]<<" ";
        cout<<endl;} }
	bool isFull(){return (back>=size-1);}  //(size==99)
	bool enqueue(int val) { if (back == size - 1)return false;  //(size==99)
        if (front == - 1)front++;
        back++;               //	back++;  size++;
        arr[back] = val;
        return true;}
    bool dequeue(){ if(isEmpty())return false;
	    front++;
        return true; } 
        int atFront(){if (isEmpty()) return -1; 
	    return arr[front];}
};
int main(){
Queue Q;
Q.Display();
Q.enqueue(25);
Q.enqueue(26);
Q.enqueue(27);
cout<<Q.atFront()<<endl;
Q.Display();
Q.dequeue();
Q.dequeue();
Q.dequeue();
Q.Display();
return 0;
}