#include <iostream>
using namespace std;

typedef unsigned int UINT;
UINT ONBit(UINT iNo)
{
    UINT iMask = 0XF;
    UINT iResult = 0;

    iResult = iNo | iMask;
    return iResult;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout << "Enter the number: \n";
    cin >> iValue;

    iRet = ONBit(iValue);
    cout << "THe modified number is: " << iRet;
    return 0;
}