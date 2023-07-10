import java.util.*;

class Pattern {
    public String str;

    public Pattern(String str) {
       this.str = str;
    }

    public void Display() {
        char Arr[] = str.toCharArray();
        System.out.println("The pattern is: ");
        for (int i = 1; i <= Arr.length; i++) {
            for (int j = 0; j < i ; j++) {
                System.out.print(Arr[j]+ "\t");
            }
            System.out.println();
        }
    }
}

public class program40_3 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sc.nextLine();

        Pattern pt = new Pattern(str);

        pt.Display();

        sc.close();
    }
}
