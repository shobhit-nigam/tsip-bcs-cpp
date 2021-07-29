#include<iostream>
using namespace std;

template <class T, class U>
class SampleX
{
public:
  T vara;
  U varb;
  SampleX(T la, U lb): vara{la}, varb{lb}
  {
  }
  void add()
    {
    cout << vara+varb << endl;
    return;
    }
};
int main()
{
  SampleX obja(11, 22.2);
  SampleX objb(11, 18);
  SampleX<int, float> objc(11.5, 22.2);
  obja.add();
  objb.add();
  objc.add();
  return 0;
}
