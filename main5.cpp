#include <iostream>
#include <cmath>
using namespace std;
float weight,height;
void info_BMI(){
    cout<<"Enter your weight(kg):"<<endl;
    cin>>weight;
    cout<<"Enter your height(m):"<<endl;
    cin>>height;
}
int main() {
    double BMI;
    std::cout << "Hello, wlc to BMI system!" << std::endl;
    info_BMI();
    BMI=weight/ pow(height,2);
    if (BMI<18.5){
        cout<<"Your BMI is :"<<BMI<<endl;
        cout<<"You are underweight"<<endl;
    } else if (18.5<=BMI<24.9) {
        cout << "Your BMI is :" << BMI << endl;
        cout << "You are Normal" << endl;
    }else if (25<=BMI<29.9) {
        cout << "Your BMI is :" << BMI << endl;
        cout << "You are Overweight" << endl;
    }else if (30<=BMI) {
        cout << "Your BMI is :" << BMI << endl;
        cout << "You are Obese" << endl;
    } else cout<<"answer correct !!!"<<endl;

    return 0;
}
