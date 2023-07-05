import java.util.*;
class Digits{
    public int iNo;
    public Digits(int iValue){
        if(iValue<0){
            iNo = -iValue;
        }
        iNo = iValue;
    }

    public int CountEven(){
        int iCount=0;
        int iDigit =0;
        int iTemp = iNo;
        while (iTemp>0) {
            iDigit =iTemp%10;
            if((iDigit%2)==0){
                iCount++;
            }
            iTemp /= 10;
        }
        return iCount;
    }
    public int CountOdd(){
        int iCount=0;
        int iDigit =0;
        int iTemp = iNo;
        while (iTemp>0) {
            iDigit =iTemp%10;
            if((iDigit%2)!=0){
                iCount++;
            }
            iTemp /= 10;
        }
        return iCount;
    }
    public int CountBetween(){
        int iCount=0;
        int iDigit =0;
        int iTemp = iNo;
        while (iTemp>0) {
            iDigit =iTemp%10;
            if((iDigit>3)&&(iDigit<7)){
                iCount++;
            }
            iTemp /= 10;
        }
        return iCount;
    }
    public int Multiply(){
        int iResult=1;
        int iDigit =0;
        int iTemp = iNo;
        while (iTemp>0) {
            iDigit =iTemp%10;
            if (iDigit!=0) {
                iResult *= iDigit;
            }
            
            iTemp /= 10;
        }
        return iResult;
    }

}
public class program35_4 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the numbers: ");
        int iNo = sc.nextInt();

       Digits nObj = new Digits(iNo);

       int iRet = nObj.Multiply();

       System.out.println("The Product of all digits in the given number is: "+ iRet);
    }
}
