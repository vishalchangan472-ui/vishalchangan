import java.util.Scanner;

class NumberX
{
    public int SumFactor(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;


        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)  
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
         return iSum;
    }
}


public class program49
{
    public static void main(String v[])
    {
        
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();
        iRet = nobj.SumFactor(iValue);

        System.out.println("Summession of Factors is : " +iRet);

        sobj.close();
    }
    
}

