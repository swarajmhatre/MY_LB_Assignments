import java.util.*;

class ArrayX {
    public int Arr[];

    ArrayX(int x) {
        Arr = new int[x];
    }

    public void Accept() {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the elements for first array: ");
        for (int i = 0; i < Arr.length; i++) {
            Arr[i] = sc.nextInt();
        }
        sc.close();
    }

    public void Display(int[] Arr) {
        System.out.println("Elements of Array: ");
        for (int i = 0; i < Arr.length; i++) {

            System.out.print(Arr[i] + "\t");

        }
        System.out.println();

    }

    private int Summation(int iNo) {
        int  iDigit = 0;
        int iSum =0;
        while (iNo != 0) {
            iDigit = iNo % 10;
            iSum += iDigit;
            iNo /= 10;
        }
        return iSum;
    }

    public void ReverseArray() {
        for (int i = 0; i < Arr.length; i++) {
            Arr[i] = Summation(Arr[i]);
        }
    }
}

public class program46_2 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of elements in the first array: ");
        int iLength1 = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength1);
        aObj.Accept();
        aObj.Display(aObj.Arr);

        aObj.ReverseArray();

        aObj.Display(aObj.Arr);
        sc.close();
    }
}