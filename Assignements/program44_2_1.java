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

    public int ArrayCountVowels(){
        int iCount =0;
        for(int i=0; i<Arr.length; i++){
            if((Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u')||(Arr[i]=='A')||(Arr[i]=='E')||(Arr[i]=='I')||(Arr[i]=='O')||(Arr[i]=='U')){
                iCount++;
            }
        }
        return iCount;
    }
}

public class program44_2_1 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        int iLength = 0;
        System.out.println("Enter the number of elements in the array: ");
        iLength = sc.nextInt();

        ArrayX aObj = new ArrayX(iLength);
        aObj.Accept();
        aObj.Display();
        int iRet = aObj.ArrayCountVowels();
        System.out.println("The count is: " + iRet);

        sc.close();
    }

}
