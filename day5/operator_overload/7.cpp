#include<iostream>
using namespace std;

class Figure3D {
  int x, y , z;
public:
  Figure3D()
  {
    x = y = z = 0;
  }
  Figure3D(int lx, int ly, int lz) : x(lx), y(ly), z(lz)
  {
  }
  void display()
  {
    cout << "x = " << x << "\ny = " << y << "\nz = " << z << endl;
    return;
  }
  friend Figure3D operator+ (const Figure3D& opa , const Figure3D& opb );

};

Figure3D operator+ (const Figure3D& opa , const Figure3D& opb )
{
  Figure3D temp;
  temp.x = opa.x + opb.x;
  temp.y = opa.y + opb.y;
  temp.z = opa.z + opb.z;
  return temp;
}

int main()
{
  Figure3D obja{2, 4, 5};
  Figure3D objb {8, 8, 8};
  Figure3D objc;
  objc.display();
  objc = obja + objb;
  cout << "-----" << endl;
  objc.display();
  return 0;

}
