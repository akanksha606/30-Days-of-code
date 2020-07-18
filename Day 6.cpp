//Day 6(Let's Review)
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner z=new Scanner(System.in);
        int n=z.nextInt();
        z.nextLine();
        int i,j;
        for(i=1;i<=n;i++){
            String s,se="",so="";
            s=z.nextLine();
              for(j=0;j<s.length();j++){
                if(j%2==0)
                so=so+s.charAt(j);
                else 
                se=se+s.charAt(j);
              }
              System.out.println(so+" "+se);
        }
    }
}
