package oops.exceptionhandling;
import java.io.FileNotFoundException;
import java.io.IOException;

public class exceptionhandling {
    /*public static void main(String[] args)
    {
        try{
            int a=5;
            int b=0;
            int c=a/b;
            System.out.println("The division is:\t", +c);
        }catch (ArithmeticException e)
        {
            System.out.println(e.getMessage());
        }
        finally{
            System.out.println("Sorry for the inconveniencies");
        }
    }*/
    static void checkAge(int age) {
        if (age < 18) {
            throw new ArithmeticException("Access denied - You must be at least 18 years old.");
        }
        else {
            System.out.println("Access granted - You are old enough!");
        }
    }

    public static void main(String[] args) {
        checkAge(15); // Set age to 15 (which is below 18...)
    }
}
