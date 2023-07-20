import java.util.*;

class ArrayX {
    int Arr[];
    int Brr[];

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
    }

    public void DisplayEven() {
        System.out.println("Elements of Array1: ");
        for (int i = 0; i < Arr.length; i++) {
            if ((Arr[i] % 2) == 0) {
                System.out.print(Arr[i] + "\t");
            }
        }
        System.out.println("Elements of Array2: ");
        for (int i = 0; i < Brr.length; i++) {
            if ((Brr[i] % 2) == 0) {
                System.out.print(Brr[i] + "\t");
            }
        }
    }
}

public class program42_2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of elements in the first array: ");
        int iLength1 = sc.nextInt();
        System.out.println("Enter the number of elements in the Second array: ");
        int iLength2 = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength1, iLength2);
        aObj.Accept();
        aObj.DisplayEven();
        sc.close();

    }
}
