#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){
        this -> size = size;
        top=-1;
        arr = new int[size];
    }

    void push(int element){

        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else
        cout<<"stack is overflow" << endl;
    }

    void pop(){

        if(top>=0){
            top--;
        }
        else
        cout<< "stack is underflow" << endl;
    }

    int peek(){

        if(top>=0){
            return arr[top];
        }
        else{
            cout<< "stack is empty" <<endl;
        }
    }

    bool isempty(){

        if(top==-1){
            return true;
        }
        else
        return false;
    }

};



int main(){


    stack st(5);
    st.push(88);
    st.push(2);
    st.push(4);
    st.push(44);
    st.push(6);
   
    
}