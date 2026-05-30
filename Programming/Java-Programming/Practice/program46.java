import java.util.Scanner;

class NumberX
{
    public void DisplayFactor(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println("Factors are :" +iCnt);
            }
        }
    }
}


public class program46
{
    public static void main(String v[])
    {
        
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();
        nobj.DisplayFactor(iValue);

        sobj.close();
        
    }
    
}

// Time Complexity : O(N)
// where N >= 0