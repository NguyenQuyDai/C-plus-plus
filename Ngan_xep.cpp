/*#include<iostream>
#include<stack>
#include<sstream>
using namespace std;
bool solve(string str)
{
    //string s;
    stack<char> s;
	for(int i=0; i<str.length(); i++) {
		char c = str[i];
		if(c == '(' || c == '{' || c == '[') s.push(c);
		else {
			if(!s.empty() && c == ']' && s.top() == '[')
			    s.pop();
			else if(!s.empty() && c == '}' && s.top() == '{')
			    s.pop();
			else if(!s.empty() && c == ')' && s.top() == '(')
			    s.pop();
			else return 0;
		}
	}
	return 1;}

int main()
{
    // kiem tra dau ngoac
    int t; cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if(solve(str)) cout<< "yes";
        else cout<< "no";
    }
}
*/
/* Chuyen doi co so
#include<iostream>
#include<stack>
#include<sstream>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cout<< "Nhap vao so n:";
    cin>>n;
    while(n!=0)
    {
        st.push(n%2);
        n/=2;
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}*/

//  Cai dat ngan xep su dung mang
/*#include<iostream>
#include<stack>
using namespace std;
bool solve(string s)
{
    stack<char> st;
    for(int i=0; i < s.length();i++)
    {
        char c = s[i];
        if(c=='('||c=='{'||c=='[') st.push(c);
        else
        {
            if(!st.empty() && c==']' && st.top()=='[')
                st.pop();
            else if(!st.empty() && c=='}' && st.top()=='{')
                st.pop();
            else if(!st.empty() && c==')' && st.top()=='(')
                st.pop();
            else return 0;
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
        string str;
        cin>>str;

        if(solve(str)) cout<< "Yes"<<endl;
        else {cout<< "No"<<endl;}
    }
}*/
/*#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int> st;
    while(n!=0)
    {
        int d = n%2;
        st.push(d);
        n/=2;
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}*/

// C++ program to evaluate value of a postfix expression
/*#include <iostream>
#include <string.h>

using namespace std;

// Stack type
struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

// Stack Operations
struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));

    if (!stack) return NULL;

    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));

    if (!stack->array) return NULL;

    return stack;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}

char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}

char pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}

void push(struct Stack* stack, char op)
{
    stack->array[++stack->top] = op;
}


// The main function that returns value of a given postfix expression
int evaluatePostfix(char* exp)
{
    // Create a stack of capacity equal to expression size
    struct Stack* stack = createStack(strlen(exp));
    int i;

    // See if stack was created successfully
    if (!stack) return -1;

    // Scan all characters one by one
    for (i = 0; exp[i]; ++i)
    {
        // If the scanned character is an operand (number here),
        // push it to the stack.
        if (isdigit(exp[i]))
            push(stack, exp[i] - '0');

        // If the scanned character is an operator, pop two
        // elements from stack apply the operator
        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i])
            {
            case '+': push(stack, val2 + val1); break;
            case '-': push(stack, val2 - val1); break;
            case '*': push(stack, val2 * val1); break;
            case '/': push(stack, val2/val1); break;
            }
        }
    }
    return pop(stack);
}

// Driver program to test above functions
int main()
{
    char exp[] = "45+12+-3/";
    cout<<"postfix evaluation: "<< evaluatePostfix(exp);
    return 0;
}*/
