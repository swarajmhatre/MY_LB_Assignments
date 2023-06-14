#include <iostream>
using namespace std;
typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
    UINT iCnt = 0;
    while (iMask != 0)
    {
        iResult = iNo & iMask;
        if (iResult)
        {
            iCnt++;
        }
        iMask = iMask << 1;
    }

    return iCnt;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout << "\nEnter the nummber: ";
    cin >> iValue;

    iRet = CountOne(iValue);

    cout << "The count of 1's in the number is: " << iRet;

    return 0;
}