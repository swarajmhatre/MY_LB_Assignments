import java.util.*;

class ArrayX {
    int Arr[];
    int Brr[];

    ArrayX(int x, int y) {
        Arr = new int[x];
        Brr = new int[y];
    }

    public void Accept() {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the elements for first array: ");
        for (int i = 0; i < Arr.length; i++) {
            Arr[i] = sc.nextInt();
        }

        System.out.println("Enter the elements for second array: ");
        for (int i = 0; i < Brr.length; i++) {
            Brr[i] = sc.nextInt();
        }
        sc.close();
    }

    public void Display() {
        System.out.println("Elements of Array1: ");
        for (int i = 0; i < Arr.length; i++) {

            System.out.print(Arr[i] + "\t");

        }
        System.out.println();
        System.out.println("Elements of Array2: ");
        for (int i = 0; i < Brr.length; i++) {
            System.out.print(Brr[i] + "\t");
        }
    }

    public int DifferenceOfSum() {
        int iSum1 = 0;
        int iSum2 = 0;
        for (int i = 0; i < Arr.length; i++) {
            iSum1 += Arr[i];
        }
        for (int i = 0; i < Brr.length; i++) {
            iSum2 += Brr[i];
        }
        if (iSum1 > iSum2) {
            return iSum1 - iSum2;
        } else {
            return iSum2 - iSum1;
        }
    }
}

public class program43_1 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the number of elements in the first array: ");
        int iLength1 = sc.nextInt();

        System.out.println("Enter the number of elements in the second array: ");
        int iLength2 = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength1, iLength2);
        aObj.Accept();
        aObj.Display();
        
        int iRet = aObj.DifferenceOfSum();
        
        System.out.println();
        System.out.println(("The difference between the sum of elements of bothe array: " + iRet));

        sc.close();
    }
}