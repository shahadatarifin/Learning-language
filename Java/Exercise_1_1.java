/*
Write a program to Calculate percentage of a given stduent
in board exam. His marks from 5 subject must be taken as input from the user

 */


import java.util.Scanner;

public class Exercise_1_1 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("English -> ");
        byte eng = s.nextByte();

        System.out.print("Biology -> ");
        byte bio = s.nextByte();

        System.out.print("Math -> ");
        byte math = s.nextByte();

        System.out.print("Chemistry -> ");
        byte che = s.nextByte();

        System.out.print("Physics -> ");
        byte phy = s.nextByte();

        double avg =  ((eng + bio + math + che + phy) / 5.0);

        System.out.println("Percentage: " + avg + " %");

    }
}