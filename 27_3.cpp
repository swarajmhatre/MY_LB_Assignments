#include <iostream>
using namespace std;

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X40;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if (iResult == 0)
    {
        iResult = iNo | 0X40;
    }
    else
    {
        iResult = iNo & 0XFFFFFFBF;
    }
    return iResult;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout << "Enter the number: \n";
    cin >> iValue;

    iRet = ToggleBit(iValue);
    cout << "THe modified number is: " << iRet;
    return 0;
}