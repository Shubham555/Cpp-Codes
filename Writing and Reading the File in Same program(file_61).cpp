/*********************** Writing and Reading the File in Same program ********************************/

#include<bits/stdc++.h>
using namespace std;

int main(){
  //connecting our file with hout stream
  ofstream hout("sample60.txt");//----------------------------------------> Writing in a File.

  //creating a name string and filling it with the string entered by the user 
  string name;
  cout<<"Enter your name"<<endl;
  cin>>name;
  //writing a string to the file  
  hout<<name+" is my name";
  hout.close();//-----------------------------------> close function to disconnect the link between file and program

  ifstream hin("sample60.txt");//----------------------------------------> reading the File.
  string content;
 // hin>>content;
  getline(hin,content);
  cout<<"the content of this file is "<<content;
  hin.close();
 return 0;
}
