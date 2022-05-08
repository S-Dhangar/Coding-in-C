import java.util.*;
class Matrix_Add
{
      int a[][]=new int[3][3];
      int b[][]=new int[3][3];
      int c[][]=new int[3][3];
      Scanner sc=new Scanner(System.in);
      public void getData()
      {
    	  System.out.println("Enter data of matrix 1");
    	   for(int i=0;i<=2;i++)
    	   {
    		   for(int j=0;j<=2;j++)
    		   {
    			  a[i][j]= sc.nextInt();
    		   }
    	   }
    	   System.out.println("Enter data of matrix 2");
       	
    	   for(int i=0;i<=2;i++)
    	   {
    		   for(int j=0;j<=2;j++)
    		   {
    			  b[i][j]= sc.nextInt();
    		   }
    	   }
      }
      public void addData()
      {
    for(int i=0;i<=2;i++)
   	   {
   		   for(int j=0;j<=2;j++)
   		   {
   			  c[i][j]= a[i][j]+b[i][j];
   		   }
   	   }
      }    
    public void showData()
    {
  for(int i=0;i<=2;i++)
 	   {
 		   for(int j=0;j<=2;j++)
 		   {
 			  System.out.print(c[i][j]+ "  ");
 		   }
 		  System.out.println();
 	   }
      }
}
public class Add_Matrix {

	public static void main(String[] args) {
		  Matrix_Add ob=new Matrix_Add();
		  ob.getData();
		  ob.addData();
		  ob.showData();

	}

}
