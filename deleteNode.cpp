#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() 
{
  list <int> nums (0);
  cout << "Enter element in list";
 for ( int i = 0; i < 4; i++)
 {
    int x;
    cin >> x;
    nums.push_back(x);
 }
 int c;
 cout << "Enter the number you want to delete ";
 cin >> c;
 for (auto it = nums.begin(); it != nums.end(); it++) 
    {
        if (*it == c)
        continue;
        else
        cout << *it << " ";
    }

    return 0;
}
