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


    public void Pattern() {
        for (int i = 0; i < Arr.length; i++) {
            for(int j=0; j< Arr[i]; j++){
                System.out.print("*\t");
            }
            System.out.println(" ");
        }
    }
}

public class program44_5 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of elements in the first array: ");
        int iLength1 = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength1);
        aObj.Accept();
        aObj.Display(aObj.Arr);

        aObj.Pattern();
        sc.close();
    }
}