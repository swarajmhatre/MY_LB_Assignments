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
        if (iEvenSum > iOddSum) {
            return iEvenSum - iOddSum;
        } else {
            return iOddSum - iEvenSum;
        }
    }

    void DivByFive() {
        System.out.println("The numbers divisible by 5 in the array are: ");

        for (int i = 0; i < Arr.length; i++) {
            if ((Arr[i] % 5) == 0) {
                System.out.println(Arr[i]);
            }
        }
    }
    void EvenDivByFive() {
        System.out.println("The even numbers divisible by 5 in the array are: ");

        for (int i = 0; i < Arr.length; i++) {
            if (((Arr[i] % 5) == 0)&&((Arr[i] % 2) == 0))  {
                System.out.println(Arr[i]);
            }
        }
    }
    void DisplayDiv() {
        System.out.println("The  numbers divisible by 3 and 5 in the array are: ");

        for (int i = 0; i < Arr.length; i++) {
            if (((Arr[i] % 5) == 0)&&((Arr[i] % 3) == 0))  {
                System.out.println(Arr[i]);
            }
        }
    }
    void ElevenMulti() {
        System.out.println("The  numbers which are multiple of 11 in the array are: ");

        for (int i = 0; i < Arr.length; i++) {
            if (((Arr[i] % 11) == 0))  {
                System.out.println(Arr[i]);
            }
        }
    }
}

public class program34_5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of elements in the array: ");
        int iSize = sc.nextInt();

        MyArray mObj = new MyArray(iSize);

        mObj.Accept();
        mObj.Display();
        mObj.ElevenMulti();
    }
}