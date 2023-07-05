import java.util.*;

class StringX {
    public boolean checkVowel(String str) {
        char Arr[] = str.toCharArray();
        boolean bRet = false;
        for (int i = 0; i < Arr.length; i++) {
            if ((Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u')) {
                bRet = true;
                break;
            } else if ((Arr[i] == 'A') || (Arr[i] == 'E') || (Arr[i] == 'I') || (Arr[i] == 'O') || (Arr[i] == 'U')) {
                bRet = true;
                break;
            }
        }
        return bRet;
    }
}

public class program33_4 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println(("ENter the String: "));
        String str = sc.nextLine();

        StringX sObj = new StringX();

        boolean bRet = sObj.checkVowel(str);

        if (bRet) {
            System.out.println(("The String contains vowels."));
        } else {
            System.out.println(("The String soes not contain vowels."));

        }

        sc.close();
    }
}