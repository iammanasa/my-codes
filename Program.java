import java.io.*;
import java.util.*;
import java.util.Scanner;
public class Program
{
public static void main(String[] args)
{
String a;
Scanner sc=new Scanner(System.in);
String s=sc.nextLine();
a=s.substring(s.length()-2);
System.out.println(a);
}
}