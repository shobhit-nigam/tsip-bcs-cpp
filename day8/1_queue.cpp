#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> st;
    st.push(100);
    st.push(200);
    st.push(150);
    st.push(300);

    cout << "size = " << st.size() << endl;

    cout << "top = " << st.front() << endl;
    st.pop();
    cout << "top = " << st.front() << endl;
    st.pop();
    cout << "top = " << st.front() << endl;

    cout << "size = " << st.size() << endl;

    return 0;
}