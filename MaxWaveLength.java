
public class MaxWaveLength {
public static void main(String[] args) {
	int[][] arr= {
			{1,2,3},
			{6,4,3},
			{8,5,4}
	};
	int res=MaxWlength(arr);
	System.out.println("Max Wave length of array "+res);
}
static int MaxWlength(int [][] array)
{
	int length=0;
	int sum=0;
	for(int i=0;i<array.length;i++)
	{
		
		for(int j=0;j<array.length;j++)
		{
			sum=sum+array[i][j];
		}
		if(length>sum)
		{
			length=sum;
		}
	}
	return length;
}
}
