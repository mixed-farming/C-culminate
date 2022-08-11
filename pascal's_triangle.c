// C program for Pascal’s Triangle
// A O(n^2) time and O(1) extra space
// function for Pascal's Triangle
void printPascal(int n)
{
for (int line = 1; line <= n; line++)
{
	for(int j=1;j<=n-line;j++)
   	 {
        	printf(" ");//spaces
    	 }
	int C = 1; // used to represent C(line, i)
	for (int i = 1; i <= line; i++)
	{
	printf("%d ", C); // The first value in a line is always 1
	C = C * (line - i) / i;//relation between nCp & nC(p+1)
	}
	printf("\n");
}
}
// Driver code
int main()
{
  int n;
  printf("Enter the number of rows : ");
  scanf("%d",&n);
	printPascal(n);
	return 0;
}
