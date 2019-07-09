import java.text.DecimalFormat;
public class knightstour
{
  int[][] sol;
  int path = 0;
  int i, j;
  public void knightstour(int N)
  {
    sol = new int[N][N];
    for (i = 0; i < N; i++)
      {
	for (j = 0; j < N; j++)
	  {
	    sol[i][j] = 0;
	  }
      }
  }

  public void solve ()
  {
    if (find (0, 0, 0, sol.length))
      print ();
    else
      System.out.println ("no path");
  }

  public boolean canMove (int row, int col, int N)
  {
    if (row >= 0 && col >= 0 && row < N && col < N)
      {
	return true;
      }
    return false;
  }

  public boolean find (int row, int col, int index, int N)
  {
    if (sol[row][col] != 0)
      {				//check if already visited
	return false;
      }
    sol[row][col] = path++;
    if (index == N * N - 1)
      {
	return (true);
      }				//check possibilities
    if (canMove (row + 2, col + 1, N)
	&& find (row + 2, col + 1, index + 1, N))
      {
	return true;
      }
    if (canMove (row + 1, col + 2, N)
	&& find (row + 1, col + 2, index + 1, N))
      {
	return true;
      }
    if (canMove (row - 1, col + 2, N)
	&& find (row - 1, col + 2, index + 1, N))
      {
	return true;
      }
    if (canMove (row - 2, col - 1, N)
	&& find (row - 2, col - 1, index + 1, N))
      {
	return true;
      }
    if (canMove (row - 1, col - 2, N)
	&& find (row - 1, col + 1, index + 1, N))
      {
	return true;
      }
    if (canMove (row + 1, col - 2, N)
	&& find (row + 1, col + 1, index + 1, N))
      {
	return true;
      }
    if (canMove (row + 2, col - 1, N)
	&& find (row + 1, col - 1, index + 1, N))
      {
	return true;
      }
    sol[row][col] = 0;		// backtracking
    path--;
    return (false);
  }
  public void print ()
  {

    DecimalFormat twodigits = new DecimalFormat ("00");
    for (int i = 0; i < sol.length; i++)
      {
	for (int j = 0; j < sol.length; j++)
	  {
	    System.out.print ("   " + twodigits.format (sol[i][j]));
	  }
	System.out.println ();
      }
  }
  public static void main (String[]args)
  {
    int N = 8;
    kt m = new knightstour(N);
    m.solve ();
  }
}
