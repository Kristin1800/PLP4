#include <iostream>
#include <string>
#include <list>
#include <array>
using namespace std;
int main() {
    int i = 13;
    int y = 25;
    int x = 50;
    int w = 10;
    int d = 5;
    int s = 2;
    string spr = "**********************************";

cout<<spr<<endl;
    if (i == 13)
    {
        if (i < 15)
            cout<<"i is smaller than 15"<<endl;
        if(i > 10)
            cout<<"i is bigger than 10"<<endl;
    }
    cout<<spr<<endl;
    if (x == 50 && y == 25)
    {
        if (y > 20 && x < 60)
            cout<<"Y is half of X"<<endl;
    }
    cout<<spr<<endl;
    while( w < 20 ) {
        cout << "value of w: " << w << endl;
        w++;

    }
    cout<<"W is bigger than 20 now, therefore the while loop is over."<<endl;
    cout<<spr<<endl;
    for(int a = 10; a < 15; a = a + 2)
    {
        cout<<"The value of a: "<<a<<endl;
    }
    cout<<spr<<endl;
    // do loop execution
    do {
        cout << "value of d: " << d << endl;
        d = d + 1;
    } while( d < 11 );
    cout<<"\nThe value of d is equal or more to 11, therefore the loop is over."<<endl;
    cout<<spr<<endl;
    switch (s)
    {
        case 1: printf("Choice is 1");
            break;
        case 2: printf("Choice is 2");
        //this is an example of a break, which when entered, exits the loop immediately, a continue statement would do
        //the exact opposite and when entered would force the loop to continue even without the condition being met
        break;
        case 3: printf("Choice is 3");
            break;
        default: printf("Choice other than 1, 2 and 3");
            break;
    }
    cout<<""<<endl;
    cout<<spr<<endl;


    return 0;
}