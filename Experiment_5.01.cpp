#include <iostream>
#include <string>

class Student {
  char Name[100];
  int Roll_No;
  char Gender;

public:
  void Student_Details();
  void display_Student_Details();
};

Student :: Student_Details() {
  std::cout<<"Enter Name"<<std::endl;
  gets(Name);
  std::cout<<"Enter Roll Number"<<std::endl;
  cin>>Roll_No;
  std::cout<<"Enter Gender"<<std::endl;
  cin>>Gender;
}


Student :: display_Student_Details() {
  
}
}
