#include<iostream>
using namespace std;

class demo
{
private:
  int x,y;

public:
    demo(int x1, int y1)
     {
       x = x1;
       y = y1;
     }


    demo(const demo &d2)
    {

      x = d2.x;
      y = d2.y;
     }

    int getX()
      {
          return x;
         }
    int getY()
      {
         return y;
        }
};

int main()
{
    demo d1(10, 15);
    demo d2 = d1;

    cout << "d1.x = " << d1.getX() << ", d1.y = " << d1.getY();
    cout << "\nd2.x = " << d2.getX() << ", d2.y = " << d2.getY();

    return 0;
}
