
#include "lib.h"

using namespace std;

bool lettera (char &a)
{
    if(((a>=65)&&(a<=90))||((a>=97)&&(a<=122)))
    {
        if ((a >= 65) && (a <= 90)) {
            a = (a + 32);
        } else if ((a >= 97) && (a <= 122)) {
            a = (a - 32);
        } return true;
    }
    else
        return false;
}
