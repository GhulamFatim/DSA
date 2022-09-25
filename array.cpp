#include <iostream>
using namespace std;
class Array{
	
	private:
	    int *ar,length;
        const int CAPACITY;
    public:
    	
        Array(int capacity) : CAPACITY(capacity) {
            ar=new int[CAPACITY];
            length=0;
            for(inti=0;i<CAPACITY; i++)ar[i]=-9999;
		}
            
        int getLength(){return length;}
        
        bool isEmpty(){return(getLength()==0);}
        
        void print(){
		    if(isEmpty())cout<<"No data is inserted"<<endl;
            else{for(int i=0;i<getLength();i++)cout<<ar[i]<<" ";
            cout<<endl;}
		}
            
        int getCapacity(){return CAPACITY;}
        
        bool isFull(){return(length==getCapacity());}
        
        void shiftRight(int pos){
            int index=pos-1;
            for(int i=getLength();i>=index;i--)ar[i]=ar[i-1];
            ar[index]=-9999;
		}

        bool insertElementAtPosition(int pos, int element){
	        if(isFull())return false;
            if(ar[pos-1]!=-9999)shiftRight(pos);
            ar[pos-1]=element;
            length++;
            return true;
		}
            
        int getElementAtPosition(int pos){
		    if(!isEmpty())return ar[pos-1];
            return -9999;
		}
            
        void shiftLeft(int pos){
            int index=pos-1;
            for(int i=index;i<getLength();i++){
                ar[i]=ar[i+1];}
            ar[getLength()]=-9999;
		}
			
        bool removeElementAtPosition(int pos){
	        int index=pos-1;
	        if  (ar[index]!=-9999){
                shiftLeft(pos);
                length--;
                return true;
			}
		}
};
int  main(){
	Array a(100);
//	a.print();
	cout<<a.insertElementAtPosition(100,25)<<endl;
	cout<<a.getElementAtPosition(100)<<endl;
	cout<<a.getLength()<<endl;
	cout<<a.removeElementAtPosition(100)<<endl;
	cout<<a.getElementAtPosition(100)<<endl;
		cout<<a.getLength()<<endl;
//	a.print();
//	cout<<a.isFull()<<endl;
	return 0;
}
/*class Stack{
	Array a;
public:	
bool push(int val){return(a.insertElementAtPosition(a.getLength(),val));}
bool pop(){return(a.removeElementAtPosition(a.getLength()));}
int atTop(){return(a.getElementAtPosition(a.getLength()));}
bool isEmpty(){return (a.isEmpty());}
bool isFull(){return (a.isFull());}
void display(){a.print();}
};
class Qeuue{
	Array arr;
public:
bool enqueue(int val){return(arr.insertElementAtPosition(arr.getLength(),val));}
bool dequeue(){return(arr.removeElementAtPosition(0));}
void display(){arr.print();}
int atFront(){return(arr.getElementAtPosition(0));}
bool IsEmpty(){return (arr.isEmpty());}
bool isFull(){return (arr.isFull());}
};*/