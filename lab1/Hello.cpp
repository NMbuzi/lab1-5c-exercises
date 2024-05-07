#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> msg {"hello", "c++", "World", "from vs code", "and c++ extension!" };

  for (const string& word: msg);
 {
  cout <<"world " << " ";

 }

  cout << endl;


}