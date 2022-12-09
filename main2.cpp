#include <iostream>
using namespace std ;
double rate , gro  ;
int hours;
double gross_pay(){
    cout<<"Hi! Enter ur hours : \n";
    cin>>hours;
    cout<<"Enter your rate :\n";
    cin>>rate;
    if(hours>40) {
        gro = (40 * rate) + ((hours % 40) * (1.5 * rate));
        cout << "Gross pay :" << gro<<endl;
    }else {
        gro=rate* hours;
        cout <<"Gross pay :"<<gro<<endl;
        }
    return (gro);
}


double net_pay(){
    double net ;
    const int TENM=10000000,OM=1500000 ;
    if (gro>TENM){
        net=gro-OM;
        cout<<"Net pay :"<<net<<endl;
    } else{
        net=gro;
        cout<<"Net pay :"<<net<<endl;

    }

    return (net) ;
}
int main() {
    gross_pay();
    net_pay();
    return 0;
}
