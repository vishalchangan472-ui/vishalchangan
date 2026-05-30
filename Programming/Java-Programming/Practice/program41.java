// Type 2
import java.util.Scanner;

public class program41
{

    static void CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            System.out.println("Number is divisible by 3 and 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 and 5");
            //System.out.printf("%d is divisible by 3 and 5", iValue);
        }
    }
    public static void main(String v[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter number to check it is divisible by 3 and 5 : ");
        iValue = sobj.nextInt();

        CheckDivisible(iValue);
        
        sobj.close();
    }
    
}