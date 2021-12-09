//Write a java program to demonstrate java string buffer functions

public class prct2 {
    public static void main(String args[]){ 

    StringBuffer sb=new StringBuffer("Hello ");  
    sb.append("Java"); //now original string is changed  
    System.out.println(sb); //prints Hello Java 

    sb.insert(1,"Java"); //now original string is changed  
    System.out.println(sb); //prints HJavaello  

    StringBuffer s1=new StringBuffer("Hello");  
    sb.replace(1,3,"Java");  
    System.out.println(s1); //prints HJavalo  

    StringBuffer bs=new StringBuffer();  
    System.out.println(bs.capacity());//default 16  
    sb.append("Hello ");  
    System.out.println(sb.capacity());//now 16  
    sb.append("java is my favourite language");  
    System.out.println(sb.capacity()); //now (16*2)+2=34 i.e (oldcapacity*2)+2  
    sb.ensureCapacity(10); //now no change  
    System.out.println(sb.capacity()); //now 34  
    sb.ensureCapacity(50); //now (34*2)+2  
    System.out.println(sb.capacity()); //now 70  
    }  
}
