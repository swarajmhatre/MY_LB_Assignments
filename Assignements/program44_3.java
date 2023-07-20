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
    }

    public void Display() {
        System.out.println("Elements of Array: ");
        for (int i = 0; i < Arr.length; i++) {

            System.out.print(Arr[i] + "\t");

        }
        System.out.println();
    }

    public int Search(char ch) {
        int iCount = 0;
        for (int i = 0; i < Arr.length; i++) {
            if (Arr[i] == ch) {
                iCount++;
            }
        }
        return iCount;
    }
}

public class program44_3 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        int iLength = 0;
        System.out.println("Enter the number of elements in the array: ");
        iLength = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength);
        aObj.Accept();
        aObj.Display();

        System.out.println("Enter the element to search: ");
        char ch = ' ';
        ch = sc.next().charAt(0);

        int iRet = aObj.Search(ch);
        if (iRet == 0) {
            System.out.println("There is no such element in the array");

        } else {
            System.out.println("The count is: " + iRet);
        }

        sc.close();
    }

}
