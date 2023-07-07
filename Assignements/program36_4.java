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
    public int CheckLastOcc(int iSearch){
        int iPos =-1;
        for(int i=0; i<Arr.length; i++){
            if(Arr[i] == iSearch){
                iPos = i;
            }
        }
        return iPos;
    }
    public void displayInRange(int iMin, int iMax){
        System.out.print("The number in the given range are: "  );

        for(int i=0; i< Arr.length; i++){
            if((Arr[i]>=iMin)&&(Arr[i]<=iMax)){
                System.out.print("\t"+ Arr[i]);
            }
        }
    }
}

public class program36_4 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array: ");
        int iSize = sc.nextInt();

        ArrayX arr = new ArrayX(iSize);
        arr.Accept();

        System.out.println("Enter the minimum boundary: ");
        int iMin = sc.nextInt();

        System.out.println("Enter the maximum boundary: ");
        int iMax = sc.nextInt();

        arr.displayInRange(iMin, iMax);
    }
}
