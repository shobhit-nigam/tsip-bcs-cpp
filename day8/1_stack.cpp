#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> st;
    st.push(100);
    st.push(200);
    st.push(150);
    st.push(300);

    cout << "size = " << st.size() << endl;

    cout << "top = " << st.top() << endl;
    st.pop();
    cout << "top = " << st.top() << endl;
    st.pop();
    cout << "top = " << st.top() << endl;

    cout << "size = " << st.size() << endl;

    return 0;
}