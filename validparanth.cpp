#include<iostream>
#include<stack>
using namespace std;
int main(){

    string expression = "[{(]}]";
    int n = expression.length();
    stack<char> st;
    for(int i=0;i<n;i++){
        char ch = expression[i];

        // firstly if openning brack then push into stack
        // if closing brack then get top element and pop
        // lastly if stack empty then true else false;

            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{

                if(!st.empty()){
                    char top = st.top();

                    if((top=='(' && ch==')') || (top=='{' && ch=='}') || (top=='[' && ch==']')) {
                        st.pop();
                    }
                }
                else{
                    cout<<"Invalid Parathesis" <<endl;
                }
            }
        
    }

    if(st.empty()){
        cout<< "Valid Paranthesis" << endl;
    }
    else{
        cout<< "Invalid Paranthesis" <<endl;
    }

}
