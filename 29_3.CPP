#include <iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask1 = 0X00000100;
    UINT iMask2 = 0X00000800;
    UINT iResult9 = 0;
    UINT iResult12 = 0;

    iResult9 = iNo & iMask1;
    iResult12 = iNo & iMask2;

    if(iResult9 | iResult12){
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
        cout << "One of them bits are ON.\n";
    }
    else
        cout << "One of them bits are OFF.\n";
        return 0;
}