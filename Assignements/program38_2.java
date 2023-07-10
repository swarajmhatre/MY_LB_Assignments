import java.util.*;

class Pattern {
    public int iRow;
    public int iCol;

    public Pattern(int iRow, int iCol) {
        this.iRow = iRow;
        this.iCol = iCol;
    }

    public void Display() {
        System.out.println("The pattern is: ");
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCol; j++) {
                if ((i % 2) == 0) {

                    System.out.print((char) ('A' + j) + "\t");
                } else {
                    System.out.print((char) ('a' + j) + "\t");

                }
            }
            System.out.println();
        }
    }
}

public class program38_2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of Rows: ");
        int iRow = sc.nextInt();

        System.out.println("Enter the number of Cols: ");
        int iCol = sc.nextInt();

        Pattern pt = new Pattern(iRow, iCol);

        pt.Display();

        sc.close();
    }
}
