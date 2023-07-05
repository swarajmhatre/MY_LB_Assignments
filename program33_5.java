import java.util.*;

class StringX {
    public String Reverse(String str) {
        char Arr[] = str.toCharArray();
        int i = 0;
        int j = Arr.length-1;
        char cTemp =' ';
        while (i<j) {
            cTemp = Arr[i];
            Arr[i]= Arr[j];
            Arr[j] = cTemp;
            i++;
            j--;
        }
        return new String(Arr);
    }
}

public class program33_5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println(("ENter the String: "));
        String str = sc.nextLine();

        StringX sObj = new StringX();

        String sRet = sObj.Reverse(str);

     
        System.out.println("The Reversed string is: " + sRet);

        sc.close();
    }
}