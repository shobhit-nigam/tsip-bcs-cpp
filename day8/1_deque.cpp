#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> st{70, 400, 33, 12, 350};
    cout << "size = " << st.size() << endl;
    for(auto it = st.begin(); it != st.end(); ++it)
    {
        cout << *it << "\t";
    }
    cout << endl;
/*
70, 400, 33, 12, 350
100, 70, 400, 33, 12, 350
200, 100 70, 400, 33, 12, 350
200, 100 70, 400, 33, 12, 350, 150
200, 100 70, 400, 33, 12, 350, 150, 300
*/



    st.push_front(100);
    st.push_front(200);
    st.push_back(150);
    st.push_back(300);

    cout << "size = " << st.size() << endl;
    for(auto it = st.begin(); it != st.end(); ++it)
    {
        cout << *it << "\t";
    }
    cout << endl;
    return 0;
}