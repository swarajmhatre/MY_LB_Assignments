import java.util.*;

class StringX {
    public String Str1, Str2;

    public StringX(String str1, String str2) {
        Str1 = str1;
        Str2 = str2;
    }

    public String StrNcatX(int N){
        String Str = new String();
        if(N >= Str2.length()){
            Str =  Str1+Str2;
            return Str;
        }
        else{
            Str = Str1;
            char Arr[] = Str2.toCharArray();
            for(int i=0; i<N;i++){
                Str = Str + Arr[i];
            }
            return Str;
        }
    }
    
}

public class program37_1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first String: ");
        String str1 = sc.nextLine();

        System.out.println("Enter the Second String: ");
        String str2 = sc.nextLine();


        StringX strX = new StringX(str1, str2);
        
        System.out.println("Enter the postition: ");
        int iPos = sc.nextInt();
        String sRet =strX.StrNcatX(iPos);
        
        System.out.println("The modified string is: "+ sRet);
    
    }
}
