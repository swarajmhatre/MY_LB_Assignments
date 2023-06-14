#include <iostream>
using namespace std;

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X240;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if (iResult == 0)
    {
        iResult = iNo | 0X240;
    }
    else if (iResult == 64)
    {
        iResult = iNo | 0X200;
        iResult = iNo & 0XFFFFFFBF;
    }
    else if (iResult == 1024)
    {
        iResult = iNo | 0X40;
        iResult = iNo & 0XFFFFFDFF;
    }
    else if (iResult == 1088)
    {
        iResult = iNo & 0XFFFFFDBF;
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