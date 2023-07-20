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

    public int[] CopyArrayRev() {
        int Xrr[] = new int[Arr.length];
        int i, j;
        for( i= Arr.length -1, j =0; (i >= 0 && j<Arr.length); i--, j++){
            Xrr[j] = Arr[i];
        }
        return Xrr;
    }
}

public class program43_3 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of elements in the first array: ");
        int iLength1 = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength1);
        aObj.Accept();
        aObj.Display(aObj.Arr);

        int Xrr[] = aObj.CopyArrayRev();
        aObj.Display(Xrr);
        sc.close();
    }
}