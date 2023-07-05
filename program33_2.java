import java.util.*;
class StringX{
    public  int countSmall(String str){
        char Arr[] = str.toCharArray();
        int iCount =0;
        for(int i=0; i< Arr.length; i++){
            if((Arr[i]>='a')&&(Arr[i]<='z')){
                iCount++;
            }
        }
        return iCount;
    }
}
public class program33_2{
    public static void main(String args[]){
        Scanner sc = new  Scanner(System.in);

        System.out.println(("ENter the String: "));
        String str = sc.nextLine();

        StringX sObj = new StringX();

        int iRet = sObj.countSmall(str);

        System.out.println("The number of capital letters in the string are: " + iRet);

        sc.close();
    }
}