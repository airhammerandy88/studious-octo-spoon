#include <iostream>
#include <string>

using namespace std;

class Test:
{
  private:
    string testIn;
    string testers[] = {"a1","a2","a3","a4", "a5"};
    int i = 0;

public:
  SetTester(string testIn);
  void GetTester();
  void Print();
  void Remove(testIn);

}
