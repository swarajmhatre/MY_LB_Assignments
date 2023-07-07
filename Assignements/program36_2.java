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
    public int CheckOcc(int iSearch){
        int iPos =-1;
        for(int i=0; i<Arr.length; i++){
            if(Arr[i] == iSearch){
                iPos = i;
                break;
            }
        }
        return iPos;
    }
}

public class program36_2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array: ");
        int iSize = sc.nextInt();

        ArrayX arr = new ArrayX(iSize);
        arr.Accept();

        System.out.println("Enter the number you want to search: ");
        int iSearch = sc.nextInt();

        int iRet = arr.CheckOcc(iSearch);
        if (iRet >=0) {
            System.out.println("The number is present in the array at position: "+ iRet);
        } else {
            System.out.println("The number is not present in the array.");
        }
    }
}
