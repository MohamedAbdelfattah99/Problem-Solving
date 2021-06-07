/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package modified.kaprekar.numbers;

/**
 *
 * @author Mohamed
 */
import java.util.Scanner;


public class ModifiedKaprekarNumbers {
public static Scanner input = new Scanner(System.in);
private static boolean isKaprekar(int num) {
        long square= (long) num * num;
        String str   = String.valueOf(square);
        String left  = str.substring(0, str.length() / 2);
        String right = str.substring(str.length() / 2);
        int numL;
        if((left.isEmpty())){ 
          numL=0;
        }
        else{
            numL=Integer.parseInt(left);
        }
        int numR;
        if((right.isEmpty())){ 
            numR=0;}
        else
            numR= Integer.parseInt(right);
        
        if (numL + numR == num) {
            System.out.print(num + " ");
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
           int p = input.nextInt();
        int q = input.nextInt();
            boolean foundKaprekar = false;
        for (int num = p; num <= q; num++) {
            if (isKaprekar(num)) {
                foundKaprekar = true;
            }
        }
        if (!foundKaprekar) {
            System.out.println("INVALID RANGE");
        }
    }
    }
    

