/*Author:Matthew Scheer
Program: Biggest number
added code to determine what the biggest number is
2/6/18
*/
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  
  cout<<"Please enter a whole number:\n";
  int n1;
  cin>>n1;
  cout<<"Please enter another whole number:\n";
 int n2;
 cin>>n2;

 if(n1>=n2)
    {
  cout<<"Of those two numbers, the biggest is: " << n1<< endl;
    }
    else
    {
    cout<<"of those two numbers, the biggest is:" << n2<< endl;
    }
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
