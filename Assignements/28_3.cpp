#include <iostream>
using namespace std;

typedef unsigned int UINT;
UINT OnBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    if ((iPos < 1) || (iPos > 32))
    {
        cout << "\nInvalid input.";
        return false;
    }

    iMask = iMask << (iPos - 1);
    iResult = iNo | iMask;

    return iResult;
}
int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iRet = 0;
    cout << "Enter the number: \n";
    cin >> iValue;

    cout << "Enter the bit position: (Range should be 1 to 32)\n";
    cin >> iBit;

    iRet = OnBit(iValue, iBit);
    cout << "The modified number is: " << iRet;

    return 0;
}