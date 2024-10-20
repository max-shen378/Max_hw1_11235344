#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void PrintFNI(vector<int> arr, int k) 
{
    queue<int> negatives;  
    int n = arr.size();  

    for (int i = 0; i < k; i++) 
    {
        if (arr[i] < 0) {
            negatives.push(i); 
        }
    }

    for (int i = k; i <= n; i++) 
    { 
        if (!negatives.empty()) {
            cout << arr[negatives.front()] << " ";
        }
        else 
        {
      
        }
        if (!negatives.empty() && negatives.front() <= i - k)
        {
            negatives.pop();
        }
        if (i < n && arr[i] < 0) 
        {
            negatives.push(i);
        }
    }
    cout << endl;
}

int main() 
{
    vector<int> arr = { -8, 2, 3, -6, 10 };  
    int k = 2; 

    PrintFNI(arr, k);  

    return 0;
}
