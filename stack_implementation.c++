#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>

using namespace std;


class Stack{

public:

    int *arr;
    int size;
    int top;


    Stack(int size){
        this -> size = size;

        arr = new int[size];
        top = -1;
    }

    void push(int ele){

        if (top < size-1){
            top ++;
            arr[top] = ele;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }

    }


    void pop(){
        if (top >-1){
            top--;
        }

        else{
            cout<<"Stack Underflow"<<endl;
        }
    }


    int peak(){
        if (top>-1){
            return arr[top];
        }
        else{
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
    }


    bool isempty(){
        if (top ==-1){
            return true;
        }

        else{
            return false;
        }
    }

};




int main(){

    

    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<"The top element of this stack is "<<st.peak()<<endl;

    st.pop();
    st.pop();
    cout<<st.isempty()<<endl;
    cout<<"The top element of this stack is "<<st.peak()<<endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout<<"The top element of this stack is "<<st.peak()<<endl;
    cout<<st.isempty()<<endl;

    return 0;


}