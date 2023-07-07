import java.util.*;

class StringX {
    public String Str1, Str2;

    public StringX(String str1, String str2) {
        Str1 = str1;
        Str2 = str2;
    }

    public String StrNcatX(int N) {
        String Str = new String();
        if (N >= Str2.length()) {
            Str = Str1 + Str2;
            return Str;
        } else {
            Str = Str1;
            char Arr[] = Str2.toCharArray();
            for (int i = 0; i < N; i++) {
                Str = Str + Arr[i];
            }
            return Str;
        }
    }

    public boolean StrCmpX() {
        char Arr1[] = Str1.toCharArray();
        char Arr2[] = Str2.toCharArray();
        boolean bRet = true;
        if (Arr1.length != Arr2.length) {
            return false;
        } else {
            for (int i = 0; i < Arr1.length; i++) {
                if (Arr1[i] != Arr2[i]) {
                    bRet = false;
                    break;
                }
            }
        }
        return bRet;

    }
    public boolean StrNCmpX(int iPos) {
        char Arr1[] = Str1.toCharArray();
        char Arr2[] = Str2.toCharArray();
        boolean bRet = true;
        if (iPos >= Str2.length()) {
            if(Str1.equals(Str2)){
                return true;
            }
            else{
                return false;
            }
        } else {
            for (int i = 0; i <  iPos; i++) {
                if (Arr1[i] != Arr2[i]) {
                    bRet = false;
                    break;
                }
            }
        }
        return bRet;

    }

}

public class program37_3 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first String: ");
        String str1 = sc.nextLine();

        System.out.println("Enter the Second String: ");
        String str2 = sc.nextLine();

        StringX strX = new StringX(str1, str2);

        System.out.println("Enter the position: ");
        int iPos = sc.nextInt();
        boolean bRet = strX.StrNCmpX(iPos);
        if (bRet) {
            System.out.println("The two strings are equal.");
        } else {
            System.out.println("The two strings are not equal.");
        }

    }
}
