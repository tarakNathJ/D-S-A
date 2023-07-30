#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> arr, int n)
{

    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        // answer is top in stack
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> arr, int n)
{

    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        // answer is top in stack
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> &height)
{

    int n = height.size();
    vector<int> next(n);
    next = nextSmallerElement(height, n);
    vector<int> prev(n);

    prev = prevSmallerElement(height, n);
    int area = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = height[i];
        int b = next[i] - prev[i] - 1;
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}

int main()
{

    vector<int> arra;
    arra.push_back(2);
    arra.push_back(1);
    arra.push_back(5);
    arra.push_back(6);
    arra.push_back(2);
    arra.push_back(3);

    largestRectangleArea(arra);
}
