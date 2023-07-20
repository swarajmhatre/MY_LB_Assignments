import java.util.*;

class ArrayX {
    int Arr[];
    int Brr[];
    int Crr[];
    int iCnt;
    int iTotal;

    public ArrayX(int x, int y) {
        Arr = new int[x];
        Brr = new int[y];
        iTotal = x + y;
        Crr = new int[iTotal];
    }

    public void Accept() {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the elements for Array1: ");
        for (int i = 0; i < Arr.length; i++) {
            Arr[i] = sc.nextInt();
        }
        System.out.println("\nEnter the elements for Array2: ");
        for (int i = 0; i < Brr.length; i++) {
            Brr[i] = sc.nextInt();
        }
        sc.close();
    }

    public int[] ArrayConcat() {
        iCnt = 0;
        for (int i = 0; i < Arr.length; i++, iCnt++) {
            Crr[iCnt] = Arr[i];
        }
        for (int i = 0; i < Brr.length; i++, iCnt++) {
            Crr[iCnt] = Brr[i];
        }
        return Crr;
    }

    public void Display(int[] Xrr) {
        System.out.println("Elements of Array: ");
        for (int i = 0; i < Xrr.length; i++) {

            System.out.print(Xrr[i] + "\t");

        }
    }
}

public class program42_4 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of elements in the first array: ");
        int iLength1 = sc.nextInt();
        System.out.println("Enter the number of elements in the Second array: ");
        int iLength2 = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength1, iLength2);
        aObj.Accept();
        int[] Xrr = aObj.ArrayConcat();
        aObj.Display(Xrr);
        sc.close();

    }
}
