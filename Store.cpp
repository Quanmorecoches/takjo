#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <cstdlib>
using namespace std;

int main () {
store:
cout << "Vitejte v bababui obchodu \n\n";
cout << "1. nakup \n\n";
int random = rand();
// kosik
int kosik = 0;
int pocet = 0;
//zbozi
int Jablko = 30;
int Hruska = 25;
// nakup
int nakup = 1;
cin >> nakup;
int doplatby = 1;
switch (nakup) {
    nakupovani:

    case 1:
    int zbozi = 1;
    int more = 1;
    cout << "zbozi: \n\n";
    cout << "2. hruska: 25 Kc  \n\n";
    cout << "3. Jabko: 30 Kc  \n\n";
    cout << "4. prejit k platbe \n\n";
    cout << kosik << " Kc \n\n";
    cin >> zbozi;

    switch (zbozi) {
case 2: kosik += Hruska;
Sleep(2);
system("CLS");
goto nakupovani;
break;
case 3: kosik += Jablko;
Sleep(2);
system("CLS");
goto nakupovani;
break;
case 4:
    cout << "cislo uctenky: " << random << "\n\n";
        cout << kosik << " Kc \n\n";



    }// switch zbozi

break;

} // switch nakup


}// main

