#include<iostream>
#include<stack>
using namespace std;
bool solve(string s)
{
    stack<char> a;
    for(int i = 0 ; i < s.size(); i++)
    {
        char c = s[i];
        if(c=='['||c=='('||c=='{') a.push(c);
        else
        {

            if(!a.empty()&& c==']' && a.top()== '[') a.pop();
            else if(!a.empty()&& c=='}' && a.top()== '{') a.pop();
            else if(!a.empty()&& c==')' && a.top()== '(') a.pop();
            else
                return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s ;
        cin>>s;
        if(solve(s)) cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
}
