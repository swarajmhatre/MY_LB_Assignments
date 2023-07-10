import java.util.*;

class Pattern {
    public String str;

    public Pattern(String str) {
        this.str = str;
    }

    public void Display() {
        char Arr[] = str.toCharArray();
        System.out.println("The pattern is: ");
        for (int i = Arr.length; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                System.out.print(Arr[j] + "\t");
            }
            System.out.println();
        }
        for (int i = 2; i <= Arr.length; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(Arr[j] + "\t");
            }
            System.out.println();
        }
    }
}

public class program40_4 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sc.nextLine();

        Pattern pt = new Pattern(str);

        pt.Display();

        sc.close();
    }
}
