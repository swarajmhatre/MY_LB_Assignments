import java.util.*;

class ArrayX {
    public double Arr[];

    ArrayX(int x) {
        Arr = new double[x];
    }

    public void Accept() {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the elements for first array: ");
        for (int i = 0; i < Arr.length; i++) {
            Arr[i] = sc.nextDouble();
        }
        sc.close();
    }

    public void Display(double[] Arr) {
        System.out.println("Elements of Array: ");
        for (int i = 0; i < Arr.length; i++) {

            System.out.print(Arr[i] + "\t");

        }
        System.out.println();

    }

    public void Percentage() {
        for (int i = 0; i < Arr.length; i++) {
            if (Arr[i] < 35) {
                System.out.println(Arr[i] + "\tFail");
            } else if (Arr[i] < 50) {
                System.out.println(Arr[i] + "\tPass Class");

            } else if (Arr[i] < 60) {
                System.out.println(Arr[i] + "\tSecond Class");

            } else if (Arr[i] < 70) {
                System.out.println(Arr[i] + "\tFirst Class");

            } else {
                System.out.println(Arr[i] + "\tFist Class with Distinction");
            }
        }
    }
}

public class program46_5 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of elements in the first array: ");
        int iLength1 = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength1);
        aObj.Accept();
        aObj.Display(aObj.Arr);

        aObj.Percentage();

        sc.close();
    }
}