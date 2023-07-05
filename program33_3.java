import java.util.*;
class StringX{
    public  int countDiff(String str){
        char Arr[] = str.toCharArray();
        int iSmall =0;
        int iCapital =0;
        for(int i=0; i< Arr.length; i++){
            if((Arr[i]>='a')&&(Arr[i]<='z')){
                iSmall++;
            }
            else    if((Arr[i]>='A')&&(Arr[i]<='Z')){
                iCapital++;
            }
        }
        if(iCapital>iSmall){
            return iCapital-iSmall;
        }
        else{
            return iSmall- iCapital;
        }
        
    }
}
public class program33_3{
    public static void main(String args[]){
        Scanner sc = new  Scanner(System.in);

        System.out.println(("ENter the String: "));
        String str = sc.nextLine();

        StringX sObj = new StringX();

        int iRet = sObj.countDiff(str);

        System.out.println("The difference in frequencies of Capital and Small letters in the string are: " + iRet);

        sc.close();
    }
}