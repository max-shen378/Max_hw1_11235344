#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void printNGE(vector<int> arr)
{
    stack<int> st; 
    vector<int> nge(arr.size(), -1);  

    for (int i = 0; i < arr.size(); i++)
    {
        while (!st.empty() && arr[i] > arr[st.top()]) 
        {
            int index = st.top();
            st.pop();
            nge[index] = arr[i]; 
        }
        st.push(i);
    }

    for (int i = 0; i < arr.size(); i++) 
    {
        cout << arr[i] << " -> " << nge[i] << endl;
    }
}

int main() 
{
    vector<int> arr = { 4, 5, 2, 25 };  
    printNGE(arr); 
    return 0;
}
