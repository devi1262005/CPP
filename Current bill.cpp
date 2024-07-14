#include <iostream>

using namespace std;

class ele{
    private:
        char name[30];
        int unit=0,i=0;
        float amt=0;
    public:
        void get(){
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter the units used: ";
            cin>>unit;
        }
        void cal(){
            if(unit<=100){
                amt=unit*1.5;
            }
            else if(unit>100&&unit<=300){
                i=unit-100;
                amt=i*2;
                amt=amt+150;
            }
            else if(unit>300){
                i=unit-300;
                amt=i*3;
                amt=amt+(550);
            }
            if(amt>250){
                amt=amt+(amt*15)/100;
            }
            amt+=500;
        }
        void disp(){
            cout<<"Name: "<<name<<". Bill amount: "<<amt;
        }
};

int main()
{
    ele e;
    e.get();
    e.cal();
    e.disp();
    return 0;
}

