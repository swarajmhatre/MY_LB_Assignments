#include <iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 0X4000;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    UINT iValue = 0;
    bool bRet = false;
    cout << "Enter the number: \n";
    cin >> iValue;

    bRet = CheckBit(iValue);

    if (bRet)
    {
        cout << "15th Bit is ON.\n";
    }
    else
        cout << "15th Bit is OFF.\n";
        return 0;
}