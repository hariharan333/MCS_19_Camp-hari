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
        int t;
         int arr[]=new int[100];
         System.out.println("enter your number:");
         Scanner scan=new Scanner(System.in);
         int n=scan.nextInt();
         for(int i=0;i<n;i++)
         {
         arr[i]=scan.nextInt();
         }
         for(int j=0;j<n-1;j++)
         {
             for(int i=0;i<n-j-1;i++)
             {
                 
             
            if(arr[i]>=arr[i+1])
            {
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
         }}
         for(int i=0;i<n;i++)
         {
                System.out.println(arr[i]);
          }
    }
}
    


