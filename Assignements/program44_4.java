import java.util.*;

class ArrayX {
    char Arr[];

    ArrayX(int x) {
        Arr = new char[x];
    }

    public void Accept() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the elements in the array: ");
        for (int i = 0; i < Arr.length; i++) {
            Arr[i] = sc.next().charAt(0);
        }
        sc.close();
    }

    public void Display() {
        System.out.println("Elements of Array: ");
        for (int i = 0; i < Arr.length; i++) {

            System.out.print(Arr[i] + "\t");

        }
        System.out.println();
    }

    public int Difference() {
        int iCapCount = 0;
        int iSmallCount = 0;
        for (int i = 0; i < Arr.length; i++) {
            if ((Arr[i] >= 'A') && (Arr[i] <= 'Z')) {
                iCapCount++;
            } else if ((Arr[i] >= 'a') && (Arr[i] <= 'z')) {
                iSmallCount++;
            }
        }
        if (iCapCount > iSmallCount) {
            return (iCapCount - iSmallCount);
        } else {
            return (iSmallCount - iCapCount);
        }
    }
}

public class program44_4 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        int iLength = 0;
        System.out.println("Enter the number of elements in the array: ");
        iLength = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength);
        aObj.Accept();
        aObj.Display();
        int iRet = aObj.Difference();
        System.out.println("The Difference is: " + iRet);

        sc.close();
    }

}
