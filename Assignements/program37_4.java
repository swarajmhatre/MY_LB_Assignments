import java.util.*;

class StringX {
    public String Str1;

    public StringX(String str1) {
        Str1 = str1;
    }

    public String StrToggle(String str) {
        char Arr[] = str.toCharArray();

        for (int i = 0; i < Arr.length; i++) {
            if ((Arr[i] >= 'a') && (Arr[i] <= 'z')) {
                Arr[i] = (char) (Arr[i] - 32);
            } else {
                Arr[i] = (char) (Arr[i] + 32);
            }
        }
        return new String(Arr);
    }

    public String StrRevTogX() {
        String strT = StrToggle(Str1);
        char cTemp = ' ';
        char Arr[] = strT.toCharArray();
        int i = 0;
        int j = Arr.length - 1;
        while (i < j) {
            cTemp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = cTemp;
            i++;
            j--;
        }
        return new String(Arr);
    }
}

public class program37_4 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first String: ");
        String str1 = sc.nextLine();

        StringX strX = new StringX(str1);


        String sRet = strX.StrRevTogX();


        System.out.println("The modified String is: " + sRet);
    }
}
