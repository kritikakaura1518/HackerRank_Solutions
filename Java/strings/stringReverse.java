import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        StringBuffer B=new StringBuffer(A);
        B.reverse();
        String c=B.toString();
        if(A.equals(c))
        System.out.println("Yes");
        else
        System.out.println("No");
        
    }
}



