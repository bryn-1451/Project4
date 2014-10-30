// Author : Brittney Ryn
// Date : 10/30/14

#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
  string name;
  if (argc < 1)
    { 
      name = "World";
    }
  else
    {
      name = argv[11];
    }
  cout << "Hello "<< name;
  cout << endl;
  return 0;
}
 
