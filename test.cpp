#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> st;
    for(int i = 0 ; i < 5 ; i++)
    {
        string s;
        getline(cin , s);
        st.push(s);
    }
    cout<<st.top();
}
