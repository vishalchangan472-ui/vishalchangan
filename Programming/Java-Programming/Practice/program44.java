// Type 3
import java.util.Scanner;

class NumberX
{
    public static boolean CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            return true;
        }
        else
        {
           return false;
        }
    }
}


public class program44
{
    public static void main(String v[])
    {
    
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number to check it is divisible by 3 and 5 : ");
        iValue = sobj.nextInt();

        bRet =  NumberX.CheckDivisible(iValue); // CheckDivisible is static so directly used Class name for accessing method

        if(bRet == true)
        {
            System.out.println("Number is divisible by 3 and 5 : ");
        }
        else
        {
            System.out.println("Number is not divisible by 3 and 5 : ");
        }

        sobj.close();
        
    }
    
}