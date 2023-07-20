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
        System.out.println();

    }

    public void DisplayMin() {
        int iMin1 = Arr[0];
        int iMin2 = Brr[0];
        for (int i = 0; i < Arr.length; i++) {
            if (iMin1 > Arr[i]) {
                iMin1 = Arr[i];
            }
        }
        for (int i = 0; i < Brr.length; i++) {
            if (iMin2 > Brr[i]) {
                iMin2 = Brr[i];
            }
        }
        System.out.println("The minimum element from Array 1 is: " + iMin1);
        System.out.println("The minimum element from Array 2 is: " + iMin2);
    }
}

public class program43_2 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of elements in the first array: ");
        int iLength1 = sc.nextInt();

        System.out.println("Enter the number of elements in the second array: ");
        int iLength2 = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength1, iLength2);
        aObj.Accept();
        aObj.Display();

        aObj.DisplayMin();

        sc.close();
    }
}