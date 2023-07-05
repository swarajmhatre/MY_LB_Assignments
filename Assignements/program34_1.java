import java.util.*;

class ArrayX {
    public int Arr[];

    public ArrayX(int iSize) {
        Arr = new int[iSize];
    }

    protected void Accept() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the elements: ");

        for (int i = 0; i < Arr.length; i++) {
            Arr[i] = sc.nextInt();
        }
    }

    protected void Display() {
        System.out.println("The elements in the array are: ");

        for (int i = 0; i < Arr.length; i++) {
            System.out.println(Arr[i]);
        }
    }
}

class MyArray extends ArrayX {
    public MyArray(int iSize) {
        super(iSize);
    }

    public int SumDiff() {
        int iOddSum = 0;
        int iEvenSum = 0;

        for (int i = 0; i < Arr.length; i++) {
            if ((Arr[i] % 2) == 0) {
                iEvenSum += Arr[i];
            } else {
                iOddSum += Arr[i];
            }
        }
            return iEvenSum - iOddSum;
    }
}

public class program34_1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of elements in the array: ");
        int iSize = sc.nextInt();

        MyArray mObj = new MyArray(iSize);

        mObj.Accept();
        mObj.Display();
        int iRet = mObj.SumDiff();
        System.out.println("The difference between the summation of add and event elements in the array is: "+ iRet);
    }
}