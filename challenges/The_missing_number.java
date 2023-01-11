import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] l = new int[100];
        for(int i = 1; i<100; i++){
            l[i] = sc.nextInt();
        }
        Arrays.sort(l);
        for(int i = 1; i<100; i++){
            if (i != l[i]){
                System.out.println(i);
                return;
            }
        }
        System.out.println(100);
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
}