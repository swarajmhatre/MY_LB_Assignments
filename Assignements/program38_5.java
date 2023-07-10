import java.util.*;

class Pattern {
    public int iRow;
    public int iCol;
    public int iCnt;
    public Pattern(int iRow, int iCol) {
        this.iRow = iRow;
        this.iCol = iCol;
    }

    public void Display() {
        iCnt =1;
        System.out.println("The pattern is: ");
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCol; j++) {
                System.out.print( iCnt + "\t");
                iCnt++;
            }
            System.out.println();
        }
    }
}

public class program38_5 {
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
