#include<iostream>
#include<stack>
using namespace std;

void reverseword(string str){
    if(str.length()==0){
        return;
    }
    string ros = str.substr(1);
    reverseword(ros);

    cout<< str[0];
}
void reversesent(string str){
     stack<string> st;

    for(int i=0;i<str.length();i++){
        string word="";

    while(str[i]!=' ' && i<str.length()){
        word+=str[i];
        i++;
    }
    st.push(word);
    }

    while(!st.empty()){
        cout<< st.top()<< " ";
        st.pop();
    }
}
int main(){
    string str = "My Name is Kinjal";

   reversesent(str);
   cout<<"\n"<<endl; 
   reverseword(str);
}