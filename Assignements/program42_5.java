import java.util.*;

class ArrayX {
    int Arr[];
    int Brr[];
    int iSum;

    public ArrayX(int x, int y) {
        Arr = new int[x];
        Brr = new int[y];
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

    public void SumArray() {
        iSum = 0;
        System.out.println("Sum of Elements of Array1: ");
        for (int i = 0; i < Arr.length; i++) {
            iSum += Arr[i];
        }
        System.out.println("Sum of Elements of Array1: " + iSum);
        iSum = 0;
        for (int i = 0; i < Brr.length; i++) {
            iSum += Brr[i];
        }
        System.out.println("Sum of Elements of Array2: " + iSum);
    }

}

public class program42_5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of elements in the first array: ");
        int iLength1 = sc.nextInt();
        System.out.println("Enter the number of elements in the Second array: ");
        int iLength2 = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength1, iLength2);
        aObj.Accept();
        aObj.SumArray();
        sc.close();

    }
}
