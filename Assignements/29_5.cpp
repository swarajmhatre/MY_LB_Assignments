#include <iostream>
using namespace std;

typedef unsigned int UINT;
UINT CheckBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask = 0X00000001;
    int iRes = 0;
    int iCnt = iPos1;
    int iTemp = 0;

    while (iCnt <= iPos2)
    {
        iTemp = iMask << (iCnt - 1);
        iRes = iRes | iTemp;
        iCnt++;
    }
    return iNo ^ iRes;
}
int main()
{
    UINT iValue = 0;
    UINT iBit1 = 0;
    UINT iBit2 = 0;
    UINT iRet = 0;
    cout << "Enter the number: \n";
    cin >> iValue;
    cout << "Enter the first bit position: \n";
    cin >> iBit1;
    cout << "Enter the last bit position: \n";
    cin >> iBit2;

    iRet = CheckBit(iValue, iBit1, iBit2);
    cout << "\nThe modified number is: " << iRet;
    return 0;
}