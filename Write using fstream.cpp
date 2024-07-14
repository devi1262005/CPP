#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char str[100];
cout<<"Enter Name and Address: ";
cin.getline(str,100);
ofstream myfile ("abc.txt");
myfile<<str;
myfile.close();
cout<<"File write successful.";
}
