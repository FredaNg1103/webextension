/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

/**
 *
 * @author USER
 */
import java.util.Random;

public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         Random rn = new Random(10);
        int width  = 128;
        int height = 16;
        for (int i=0; i<height; i++) {
            for (int j=0; j<width; j++) {
                int temp = rn.nextInt();
                String wall;                
                if (temp % 2 == 0) {
                    wall = "╱";
                } else { 
                    wall = "╲";
                }
                System.out.print(wall);
            }
            System.out.println("");
        }
    }
    
}
