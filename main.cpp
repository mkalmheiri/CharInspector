//Author:
#include<iostream>

using namespace std;

int main()
{

char L;


  cout<<"What character do you want to know about?\n";

cin>>L;

if (L>='A' && L<='Z'){
  //when user's entry is between A-Z...
  cout<<L<<" is an upper case letter!\n";
}


else if(L>='a' && L<='z'){
  //when user's entry is between a-z...
  cout<<L<<" is a lower case letter!\n";
}


else{
  //in all other cases...
  cout<<L<<"?! Pssh. What are you talking about?\n";
  }


  //no matter what they enter...
  cout<<"The ASCII value is: "<<(int)L<<endl;

  return 0;
}
