/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pattern;

/**
 *
 * @author hari
 */
import java.util.Scanner;
public class Pattern {
   
      public static void main(String[] args)
    {
        int s1=0,s2=0,sum;
     for(int i=0;i<1000;i++)
     {
         if(i%3==0)
         {
             s1+=i;
         }
         if(i%5==0)
         {
             s2+=i;
         }
     }
     sum=s1+s2;
     System.out.println("sum="+sum);
    }
}
    


