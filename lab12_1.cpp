#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    cout << "Press Enter 3 times to reveal your future." ;
    cin.get();
    cin.get();
    cin.get();
    
    srand(time(0)) ;
    int num = rand() % 9 ;
    string G ;
    if(num == 0) G = "A" ;
    else if(num == 1) G = "B+" ;
    else if(num == 2) G = "B" ;
    else if(num == 3) G = "C+" ;
    else if(num == 4) G = "C" ;
    else if(num == 5) G = "D+" ;
    else if(num == 6) G = "D" ;
    else if(num == 7) G = "F" ;
    else if(num == 8) G = "W" ;
    cout << "You will get " << G << " in this 261102." ;
    return 0 ;
}