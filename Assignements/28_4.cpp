#include <iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iRet = 0;

    cout << "\nEnter the nummber: ";
    cin >> iValue;

    cout << "\nEnter the bit Position: (0 to 32)";
    cin >> iBit;

    iRet = ToggleBit(iValue, iBit);

    cout << "The modified number is: "<< iRet;

    return 0;
}