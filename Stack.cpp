#include <iostream>
#define SIZE 10
using namespace std;
class stack{
    int data[SIZE];
    int top;
   
    public:
    stack(){
        top=-1;
    }
    void push(int element){
        if(isFull()==1)
        cout<<"Stack if full..";
        else
        data[++top]=element;
        data[++top]=element;
    }
    int pop()
    {
        if(isEmpty()==1)
            return -1;
        else
            return data[top--];
       
    }
    int isEmpty()
    {
        if(top==-1)
        return 1;
        else
        return 0;
       
    }
    int isFull(){
        if(top==SIZE-1)
        return 1;
        else
        return 0;
       
    }
    int peek(){
        if(isEmpty()==1)
        return -1;
        else
        return data[top];
    }
   
   
};
   
   


int main()
{
   cout<<"atstic implementation of satck";
   stack st;
   st.push(10);
   st.push(20);
   cout<<"Stack is empty?"<<st.isEmpty();
   
   cout<<"Stack is full?"<<st.isFull();
   
   
   cout<<"\nElement at the top position:"<<st.peek();
   cout<<"\nElement removed from Stack:"<<st.pop();
   cout<<"\nElement removed from Stack:"<<st.pop();
   cout<<"\nElement removed from Stack:"<<st.pop();
   
   return 0;
   
}
