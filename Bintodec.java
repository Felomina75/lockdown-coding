import java.util.*;
public class Bintodec
{
 
  public int BinaryToDecimal(int binaryNumber)
  {
    int decimal = 0;
    int p = 0;
    while(true)
    {
      if(binaryNumber == 0)
      {
        break;
      }
      else
      {
          int temp = binaryNumber%10;
          decimal += temp*Math.pow(2, p);
          binaryNumber = binaryNumber/10;
          p++;
       }
    }
    return decimal;
  }
 
  public static void main(String args[])
  {
    Bintodec obj = new Bintodec();
    int num;
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter the number:");
    num = scanner.nextInt();
    System.out.println("Binary to decimal conversion is  --> "+obj.BinaryToDecimal(num));    
  }
}
