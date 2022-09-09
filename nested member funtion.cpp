#include<iostream>
#include<conio.h>
using namespace std;

class Greater
{
   public:
        int a , b;

    void get ()
    {
        cin>>a>>b;
    }
    int logic()
    {
        if (a>b)
            return a;
        else
            return b;
    }
    void display()
    {
        cout <<logic();
    }

};
    int main ()
    {
      Greater ob;
      ob.get();
      ob.logic();
      ob.display();
      getch();
    }
