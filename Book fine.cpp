#include<iostream>
using namespace std;
int main()
{
	 int no,Reg,day;
	 char book[20];
	 cout<<"Enter the register no";
	 cin>>Reg;
	 cout<<"Enter the Book id";
	 cin>>no;
	 cout<<"enter the Book name";
	 cin>>book;
	 cout<<"Enter the number of days";
	 cin>>day;
	 if(day<30){
	 	cout<<"NO fine";
	 	
	 }
	 else if(day>30 && day<40)
	 cout<<"Your fine is 10";
	 else
	 cout<<"Your fine is over 100";
	 return 0;
}
