import java.util.Scanner;

class NumberX
{
    public void DisplayFactor(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)  //time Complexity reduced from O(N) to O(N/2)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println("Factors are :" +iCnt);
            }
        }
    }
}


public class program47
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

// Time Complexity : O(N/2)
// where N >= 0