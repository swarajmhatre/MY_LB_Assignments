#include <iostream>
using namespace std;
typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
    UINT iCnt = 1;

    UINT iBuffer = iNo1 & iNo2;

    while (iMask != 0)
    {
        iResult = iBuffer & iMask;
        if (iResult)
        {
            cout << iCnt << "\t";
        }
            iCnt++;
        iMask = iMask << 1;
    }

}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    UINT iRet = 0;

    cout << "\nEnter first nummber: ";
    cin >> iValue1;
    cout << "\nEnter second nummber: ";
    cin >> iValue2;

 CommonBits(iValue1, iValue2);


    return 0;
}