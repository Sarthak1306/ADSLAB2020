#include <iostream>


class Line
{
public:
  void setLength(double len);
  double getLength(void);
  Line();  // Default Constructor
private:
  double length;
};
Line::Line(){   // Definition
  std::cout<<"Object is being created";
  std::cout<<std::endl;
}
void Line::setLength(double len)
{
  length=len;
}
double Line::getLength()
{
  return length;
}

int main()
{
  Line line;
  line.setLength(6.0);
  std::cout<<"Length of Line ";
  std::cout<<line.getLength()<<std::endl;
  return 0;
}
