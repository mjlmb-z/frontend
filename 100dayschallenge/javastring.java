public class javastring {
    public static void main(String args[]){
    String s1="Welcome";
    String s2="World";
    String s3="no";
    String s4="cat";
    String s5="";

    System.out.println("String length is: \t"+s1.length());
    System.out.println("String length is: \t"+s2.length());

    System.out.println("Comparing, we get " +s1.compareTo(s2));
    System.out.println("Comparing, we get " +s1.compareTo(s3));
    System.out.println("Comparing, we get " +s1.compareTo(s4));

    s4=s4.concat(" Meow");
    System.out.println(s4);

    System.out.println(s5.isEmpty());    //True
    System.out.println(s1.isEmpty());    //False

    System.out.println(s2+" cup.");               // without trim()
    System.out.println(s2.trim()+" cup.");        // with trim()

    String s1lower=s1.toLowerCase();
    System.out.println(s1lower);
    String s3upper=s3.toUpperCase();
    System.out.println(s3upper);    

    }
}