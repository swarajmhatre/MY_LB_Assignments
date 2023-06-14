#include <iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask = 0X00000001;
    UINT iResult1 = 0;
    UINT iResult2 = 0;

    UINT iMask1 = iMask << (iPos1 - 1);
    UINT iMask2 = iMask << (iPos2 - 1);

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if (iResult1 | iResult2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT iValue = 0;
    UINT iBit1 = 0;
    UINT iBit2 = 0;
    bool bRet = false;
    cout << "Enter the number: \n";
    cin >> iValue;
    cout << "Enter the first bit position: \n";
    cin >> iBit1;
    cout << "Enter the second bit position: \n";
    cin >> iBit2;

    bRet = CheckBit(iValue, iBit1, iBit2);

    if (bRet)
    {
        cout << "One of them bits are ON.\n";
    }
    else
        cout << "One of them bits are OFF.\n";
    return 0;
}