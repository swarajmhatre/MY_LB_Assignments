import java.util.*;

class ArrayX {
    public int Arr[];

    public ArrayX(int iSize) {
        Arr = new int[iSize];
    }

    public void Accept() {
        System.out.println("Enter the numbers: ");
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < Arr.length; i++) {
            Arr[i] = sc.nextInt();
        }
    }

    public boolean check(int iSearch) {
        boolean bRet = false;
        for (int i = 0; i < Arr.length; i++) {
            if (Arr[i] == iSearch) {
                bRet = true;
            }
        }
        return bRet;
    }

    public int CheckOcc(int iSearch) {
        int iPos = -1;
        for (int i = 0; i < Arr.length; i++) {
            if (Arr[i] == iSearch) {
                iPos = i;
                break;
            }
        }
        return iPos;
    }

    public int CheckLastOcc(int iSearch) {
        int iPos = -1;
        for (int i = 0; i < Arr.length; i++) {
            if (Arr[i] == iSearch) {
                iPos = i;
            }
        }
        return iPos;
    }

    public void displayInRange(int iMin, int iMax) {
        System.out.print("The number in the given range are: ");

        for (int i = 0; i < Arr.length; i++) {
            if ((Arr[i] >= iMin) && (Arr[i] <= iMax)) {
                System.out.print("\t" + Arr[i]);
            }
        }
    }

    public int Product() {
        int iRet = 1;
        int iCnt =0;
        for (int i = 0; i < Arr.length; i++) {
            if ((Arr[i] % 2) != 0) {
                iRet *= Arr[i];
                iCnt++;
            }
        }
        if(iCnt ==0){
            iRet =0;
        }
        return iRet;
    }
}

public class program36_5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array: ");
        int iSize = sc.nextInt();

        ArrayX arr = new ArrayX(iSize);
        arr.Accept();

        int iRet = arr.Product();
        System.out.println("The product of all the odd elements in the array is: " + iRet);
    }
}
