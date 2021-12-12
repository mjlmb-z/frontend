import java.util.Scanner;

public class q1
{
    public static void main(String[] args)
    {
        int year;
        Scanner scan = new Scanner(System.in); System.out.println("Enter any Year:"); year = scan.nextInt();
        // Implementing our algorithm.
        if (year % 400 == 0) {
            System.out.println(year + " is a leap year.");
        } else if (year % 100 == 0) {
            System.out.println(year + " is not a leap year.");
        } 
        else if (year % 4 == 0) { System.out.println(year + " is a leap year.");
        } 
        else {
            System.out.println(year + " is not a leap year.");
        }
    }


}