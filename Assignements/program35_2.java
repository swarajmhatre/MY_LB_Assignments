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

}
public class program35_2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the numbers: ");
        int iNo = sc.nextInt();

       Digits nObj = new Digits(iNo);

       int iRet = nObj.CountOdd();

       System.out.println("The count of odd digits in the given number is: "+ iRet);
    }
}
