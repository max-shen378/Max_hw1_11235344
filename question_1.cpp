#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int>& st, int element)
{
   
    if (st.empty()) {
        st.push(element); 
        return;
    }

    int topElement = st.top();
    st.pop();  
    insertAtBottom(st, element);
    st.push(topElement);
}

void reverseStack(stack<int>& st) 
{

    if (st.empty()) 
    {
        return;
    }
    int topElement = st.top();
    st.pop();  
    reverseStack(st);
    insertAtBottom(st, topElement);
}

void printStack(stack<int> st) 
{
  stack<int> tempStack;
    while (!st.empty()) 
    {
        tempStack.push(st.top());
        st.pop();
    }

    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;
}

int main() 
{
    stack<int> st;
    st.push(28);
    st.push(29);
    st.push(30);
    st.push(31);

    cout << "Original stack: ";
    printStack(st);  

    reverseStack(st);

    cout << "Reversed stack (top to bottom): ";
    printStack(st); 

    return 0;
}
