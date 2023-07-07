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

    public boolean StrPallindrome() {
        char Arr[] = Str1.toCharArray();

        int i = 0;
        int j = Arr.length - 1;
        boolean bRet = true;
        while (i < j) {
            if (Arr[i] == Arr[j]) {
                i++;
                j--;
            } else if (Arr[i] == (char) (Arr[j] + 32)) {
                i++;
                j--;

            } else if (Arr[i] == ((char) (Arr[j] - 32))) {
                i++;
                j--;
            } else {
                bRet = false;
                break;
            }
        }
        return bRet;
    }
}

public class program37_5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first String: ");
        String str1 = sc.nextLine();

        StringX strX = new StringX(str1);

        boolean bRet = strX.StrPallindrome();

        if (bRet) {
            System.out.println("The String is a pallindrome.");
        } else {
            System.out.println("The String is not a pallindrome.");
        }
    }
}
