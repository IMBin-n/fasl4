#include <iostream>
using namespace std ;
int year , day ;
string month;
 int leap;
void info_year(){
    cout << "Hello, enter year:" << endl;
    cin>>year;
    cout<<"enter month:"<<endl;
    cin>>month;
    cout<<"enter day:"<<endl;
    cin>>day;
}

int leap_year() {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
           leap = 29;
        }
    } else if (year % 4 == 0) {
        leap = 29;
    } else {
         leap = 28;
    }
    return (leap);
}

int main() {
    const int a=31,b=30;
    info_year();
    leap_year();
   if(month =="January"){
       cout<<"Day:"<<day<<endl;
   }else if(month=="February"){
       cout<<"Day:"<<day+a-1<<endl;
   }else if(month=="March"){
       cout<<"Day:"<<day+leap+a-1<<endl;
   }else if(month=="April"){
       cout<<"Day:"<<day+leap+(2*a)-1<<endl;
   }else if(month=="May"){
       cout<<"Day:"<<day+leap+(2*a)+b-1<<endl;
   }else if(month=="June"){
       cout<<"Day:"<<day+leap+(3*a)+b-1<<endl;
   }else if(month=="July"){
       cout<<"Day:"<<day+leap+(4*a)+b-1<<endl;
   }else if(month=="August"){
       cout<<"Day:"<<day+leap+(5*a)+b-1<<endl;
   }else if(month=="September"){
       cout<<"Day:"<<day+leap+(6*a)+b-1<<endl;
   }else if(month=="October"){
       cout<<"Day:"<<day+leap+(6*a)+(2*b)-1<<endl;
   }else if(month=="November"){
       cout<<"Day:"<<day+leap+(7*a)+(2*b)-1<<endl;
   }else if(month=="December"){
       cout<<"Day:"<<day+leap+(7*a)+(3*b)-1<<endl;
   }else cout<<"enetr correct date!"<<endl;

   return 0;
}
