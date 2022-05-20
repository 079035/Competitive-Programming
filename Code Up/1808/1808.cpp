#include <iostream>
#include <string>
using namespace std;

void song(){
  string first_1=" bottles of beer on the wall, ";
  string first_2=" bottles of beer. ";
  string second_1="Take one down and pass it around, ";
  string second_2=" bottles of beer on the wall. ";
  for(int i=99;i>=3;i--){
    cout<<i<<first_1<<i<<first_2<<endl;
    cout<<second_1<<i-1<<second_2<<endl;
  }
  cout<<"2 bottles of beer on the wall, 2 bottles of beer. "<<endl;
  cout<<"Take one down and pass it around, 1 bottle of beer on the wall. "<<endl;
  cout<<"1 bottle of beer on the wall, 1 bottle of beer. "<<endl;
  cout<<"Take one down and pass it around, no more bottles of beer on the wall. "<<endl;
  cout<<"No more bottles of beer on the wall, no more bottles of beer. "<<endl;
  cout<<"Go to the store and buy some more, 99 bottles of beer on the wall. ";
  return;
}

int main() {
  string command;
  getline(cin,command);
  for(int i=0;i<command.length();i++){
    if(command[i]=='H')cout<<"Hello, world! ";
    else if(command[i]=='Q')cout<<command<<" ";
    else if(command[i]=='9')song();
    else continue;
  }
}
