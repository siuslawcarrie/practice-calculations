#include <iostream>

using namespace std;

void testDefault(int a, int b = 7, char z = '*'){
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"z: "<<z<<endl;
}
int main() {
//    testDefault(0, 0, '?');
//    int R66Y = 0;
//    int STOP! = 9;

int x = 17;
int y = 15;
int z;
double w, t;
 x = x+y/4;
 z= x %3+4;
 w = 17/3 + 6.5;
 t = x/4.0+15%4-3.5;

 cout<<"x= "<<x<<endl<<"y= "<<y<<endl<<"z= "<<z<<endl<<"w= "<<w<<endl<<"t= "<<t;

 //x=8, y = 15; z = 6; s = 11.5; t = 12.0


    return 0;
}
