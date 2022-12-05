#include <iostream>
#include "lett.h"
using namespace std;


int main(){
    char a;
    cin >> a;

    if(lettera(a)) {
        cout << a << endl;
    } else
    {
        cout << "errore" << endl;
    }
    return 0;
}
