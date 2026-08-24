#include<iostream>
#include<string>

using namespace std;
int main()
{
  int id1, id2,id3;
  string title1, title2, title3;

//Book 1
cout<<"Enter book 1 id1";
cin>>id1;

  cin.ignore();
  cout<<"Enter Book 1 title1:";
  getline(cin,title1);
  
//Book 2
cout<<"Enter book 2 id2";
cin>>id2;

  cin.ignore();
  cout<<"Enter book 2 title2:";
  getline(cin, title2);

//Book 3
cout<<"Enter book 3 id3";
cin>>id3;

  cin.ignore();
  cout<<"Enter book 3 title3:"; 
  getline(cin, title3);

  cout<<"\n==== LIBRARY BOOKS ====\n";

  cout<<"\nbook id: "<<id1;
  cout<<"\nbook title:" <<title1;

  cout<<"\nbook id: "<<id2;
  cout<<"\nbook title:" <<title2;

  cout<<"\nbook id: "<<id3;
  cout<<"\nbook title:" <<title3 <<endl;
  return 0;
