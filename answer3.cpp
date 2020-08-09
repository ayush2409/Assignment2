#include<iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
public:
    Date()
    {   int a,b,c;
        cout<<"Enter the date,month and year";
        cin>>a>>b>>c;
        day=a;
        month=b;
        year=c;
        if(month<1||month>12)
        month=1;
    }
   int setday()
   {
       int d;
       cout<<"Enter the date";
      cin>>d;
       day=d;
   return 0;
   }
   int getmonth()
   {   int e;
       cout<<"Enter the month";
       cin>>e;
       month=e;
       return 0;
   }
   int getyear()
   {   int f;
       cout<<"Enter the year";
       cin>>f;
       year=f;
       return 0;
   }
    int displayDate()
    {
       cout<<"the date is:";
        cout<<month<<"/"<<day<<"/"<<year;
        return 0;
    }
};
int main()
{
    Date ob;
    ob.setday();
    ob.getmonth();
    ob.getyear();
    ob.displayDate();
    return 0;
}
