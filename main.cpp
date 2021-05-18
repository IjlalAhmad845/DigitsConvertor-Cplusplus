#include <iostream>
#include<windows.h>
#include<math.h>
using namespace std;

class national///================================****FOR NATIONAL SYSTEM*******
{public:long long num,x;//===============================declared variable for conversion
long long m;
void logic1()
{
         if(num>=10000000000000000000)  m=10000000000000000000;
    else if(num>=100000000000000000)    m=100000000000000000;
    else if(num>=1000000000000000)      m=1000000000000000;
    else if(num>=10000000000000)        m=10000000000000;
    else if(num>=100000000000)          m=100000000000;
    else if(num>=1000000000)            m=1000000000;
    else if(num>=10000000)              m=10000000;
    else if(num>=100000)                m=100000;
    else if(num>=1000)                  m=1000;

    if(num<m*10)ones(num/m);
    else if(num>=10*m && num<20*m)extra(num/m);
    else tens(num/m);

         if(num>=10000000000000000000)  cout<<" mahashank ";
    else if(num>=100000000000000000)    cout<<" shank ";
    else if(num>=1000000000000000)      cout<<" padma ";
    else if(num>=10000000000000)        cout<<" neel ";
    else if(num>=100000000000)          cout<<" kharab ";
    else if(num>=1000000000)            cout<<" arab ";
    else if(num>=10000000)              cout<<" crore ";
    else if(num>=100000)                cout<<" lakh ";
    else if(num>=1000)                  cout<<" thousand ";

    num%=m;
    calc1();
}

    void calc1()
    {if(num<=10)///-----------------------------------------------------------------------checking for less than 10
        ones(num);

        else if(num>=11 && num<20)///---------------------------------------------for special numbers less than 20
            extra(num);

        else if(num>=20 && num<100)///--------------------------------------------------------numbers b/w 20 to 100
            tens(num);

        else if(num>=100 && num<1000)///------------------------------------------------------numbers b/w 100 to 1000
            {ones(num/100);//-----------------------------thousand's place sent to ones
            cout<<" hundred ";//----------------------------placed 'thousand keyword'
            num%=100;//---------------then reduced it to two digits
            calc1();//---------------------rest can automatically calculated
            }
            else if(num>=1000)
            {logic1();}
    }


    void ones(int n)///=====================================================******CHECKING ONES********
    {switch(n)
    {case 1:{cout<<"one";   break;}       case 2: {cout<<"two";   break;}
     case 3:{cout<<"three"; break;}       case 4: {cout<<"four";  break;}
     case 5:{cout<<"five";  break;}       case 6: {cout<<"six";   break;}
     case 7:{cout<<"seven"; break;}       case 8: {cout<<"eight"; break;}
     case 9:{cout<<"nine";  break;}       case 10:{cout<<"ten";   break;}
    }

    }

    void extra(int n)///=====================================================******CHECKING EXTRAS********
    {switch(n)
     {case 11:{cout<<"eleven";    break;}    case 12:{cout<<"twelve";   break;}
      case 13:{cout<<"thirteen";  break;}    case 14:{cout<<"fourteen"; break;}
      case 15:{cout<<"fifteen";   break;}    case 16:{cout<<"sixteen";  break;}
      case 17:{cout<<"seventeen"; break;}    case 18:{cout<<"eighteen"; break;}
      case 19:{cout<<"nineteen";  break;}    case 10:{cout<<"ten";      break;}//extra case if number is b/w 10s to 11s
     }

    }

    void tens(int n)///=====================================================******CHECKING HUNDREDS********
    {        if(n>=20 && n<=29)cout<<"twenty ";
        else if(n>=30 && n<=39)cout<<"thirty ";
        else if(n>=40 && n<=49)cout<<"forty ";
        else if(n>=50 && n<=59)cout<<"fifty ";
        else if(n>=60 && n<=69)cout<<"sixty ";
        else if(n>=70 && n<=79)cout<<"seventy ";
        else if(n>=80 && n<=89)cout<<"eighty ";
        else if(n>=90 && n<=99)cout<<"ninety ";
    ones(n%10);//------------converted to ones
    }


};
class international:public national
{public:
    void input()
    {cout<<"\nEnter system->>";cin>>num;
    if(num==1)
    {cout<<"Enter number=";cin>>num;
        cout<<"\n\nNATIONAL SYSTEM-->>>\n";calc1();//--------------------------------------called national calculation function
    }
    else if(num==2)
        {cout<<"Enter number=";cin>>num;
            cout<<"\n\nINTERNATIONAL SYSTEM-->>>\n";calc2();//--------------------------------------called international calculation function
        }

    else if(num==21 || num==12)
        {cout<<"Enter number=";cin>>num;x=num;
        cout<<"\n\nNATIONAL SYSTEM-->>>\n";calc1();num=x;
        cout<<"\n\nINTERNATIONAL SYSTEM-->>>\n";calc2();//--------------------------------------called international calculation function
        }

    else cout<<"INVALID SYSTEM";
}
    void hundred(int n)
    {ones(n/100);if(n/100!=0)cout<<" hundred ";
        n%=100;
        if(n<=10)ones(n);
    else if(n>10 && n<20)extra(n);
    else if(n>=20 && n<100)tens(n);
        }
        void logic2()
        {
             if(num>=1000000000000000000)       m=1000000000000000000;//assign value in accordance to number
        else if(num>=1000000000000000)          m=1000000000000000;
        else if(num>=1000000000000)             m=1000000000000;
        else if(num>=1000000000)                m=1000000000;
        else if(num>=1000000)                   m=1000000;
        else if(num>=1000)                      m=1000;

         hundred(num/m);

                if(num>=1000000000000000000)      cout<<" quintillion ";
           else if(num>=1000000000000000)         cout<<" quadrillion ";
           else if(num>=1000000000000)            cout<<" trillion ";
           else if(num>=1000000000)               cout<<" billion ";
           else if(num>=1000000)                  cout<<" million ";
           else if(num>=1000)                     cout<<" thousand ";
            num%=m;
            calc2();
        }

    void calc2()
    {if(num<=10)ones(num);
    else if(num>10 && num<20)extra(num);
    else if(num>=20 && num<100)tens(num);
    else if(num>=100 && num<1000)
    {hundred(num);}
    else if(num>=1000)
    {logic2();}

   }

};
int main()
{international ob;
cout<<"\t\t\t\tWELCOME TO NUMBER CONVERTOR";
cout<<"\n\n\t\t\t'1' for national and '2' for international system";
cout<<"\n\n\t\t\tIn which system do you like to convert";
cout<<"\n\n\t\t\tyou can choose both by pressing '12' or '21'";
ob.input();
cout<<endl;
system("pause");
}
