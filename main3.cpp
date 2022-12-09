#include <iostream>
using namespace std ;
int main() {
    char a ;
    cout <<"Enter click the icon :"<<endl ;
    cin>> a;
    switch (a) {
        case ' ':
            cout<<"Number 1 ";
            break;
        case 'A':
        case 'a':
        case 'B':
        case 'b':
        case 'c':
        case 'C':
            cout<<"Number 2 ";
            break;
        case 'd':
        case 'e':
        case 'f':
        case 'D':
        case 'E':
        case 'F':
            cout<<"Number 3 ";
            break;
        case 'G':
        case 'H':
        case 'I':
        case 'g':
        case 'h':
        case 'i':
            cout<<"Number 4 ";
            break;
        case 'J':
        case 'K':
        case 'L':
        case 'j':
        case 'k':
        case 'l':
            cout<<"Number 5 ";
            break;
        case 'M':
        case 'N':
        case 'O':
        case 'm':
        case 'n':
        case 'o':
            cout<<"Number 6 ";
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'p':
        case 'q':
        case 'r':
        case 'S':
        case 's':    
            cout<<"Number 7";
            break;
        case 'T':
        case 'U':
        case 'V':
        case 't':
        case 'u':
        case 'v':
            cout<<"Number 8 ";
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            cout<<"Number 9 ";
            break;

            default:
            cout<< "0/*/#";


    }
            return 0;
}
