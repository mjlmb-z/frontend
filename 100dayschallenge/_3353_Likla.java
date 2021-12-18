// Write a java program to demonstrate method and overloading
public class _3353_Likla{

    public int _3353_Likla(int x, int y)
    {

        return (x+y);
    }
    public int _3353_Likla(int x, int y, int z)
    {

        return (x+y+z);
    }

    public double _3353_Likla(double x, double y)
    {

        return(x+y);
    }

    public static void main(String[] args)
    {
        _3353_Likla s = new _3353_Likla();
        System.out.println(s._3353_Likla(10, 20));
        System.out.println(s._3353_Likla(10,20,30));
        System.out.println(s._3353_Likla(10.5, 20.5));
    }
}