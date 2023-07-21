import java.util.*;

class Pattern {
    int iRow;
    int iCol;

    Pattern(int iRow, int iCol) {
        this.iCol = iCol;
        this.iRow = iRow;
    }

    public void Display() {
        for (int i = 1; i <= iRow; i++) {
            for (int j = 1; j <= iCol; j++) {
                if ((i == j)) {
                    System.out.print(i + "\t");

                } else if ((i == iRow) || (i == 1)) {
                    System.out.print(j + "\t");

                } else if ((j == iCol) || (j == 1)) {
                    System.out.print(j + "\t");
                } else {
                    System.out.print("\t");

                }
            }
            System.out.println();
        }
    }
}

public class program45_5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of rows and columns respectively: ");
        int iRow = sc.nextInt();
        int iCol = sc.nextInt();

        Pattern pObj = new Pattern(iRow, iCol);

        pObj.Display();

        sc.close();
    }
}