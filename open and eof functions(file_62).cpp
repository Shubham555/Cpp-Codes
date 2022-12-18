/***************** open() and eof() functions ***************/
#include<bits/stdc++.h>
using namespace std;

int main(){
 ofstream out;
 out.open("sample60.txt");

 out<<"This is me\n";
 out<<"This is also me\n";
 out<<"This is me also \n";
 out<<"This is alsi me";
 out.close();

 ifstream in;
 in.open("sample60b.txt");

 string content;
 in>>content;
// getline(in,count);
 cout<<content;
 while(in.eof()==0){
     getline(in,content);
     cout<<content<<endl;
 }
 in.close();
 return 0;
}
