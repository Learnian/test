nclude <iostream>
#include <fstream>
using namespace std;

void printarray (int arg[], int length) {
	  for (int n=0; n<length; ++n)
		      cout << arg[n] << ' ';
	    cout << '\n';
}

int main ()
{
	  string line;
	    float dt;
	      float nt;
	        float par_arr[];
		  ifstream myfile ("params.dat");
		    if (myfile.is_open())
			      {
				          i=0;
					      while ( getline (myfile,line) )
						          {
								        par_arr[i] << line << '\n';
									      i+=1;
									          }
					          myfile.close();
						    }

		      else cout << "Unable to open file";     
		        dt=par_arr[0];
			  nt=par_arr[1];
			    int firstarray[] = {5, 10, 15};
			      int secondarray[] = {2, 4, 6, 8, 10};
			        printarray (firstarray,3);
				  printarray (secondarray,5);
}
dt = 0.1
t_beg = 0
t_end = 5
nt = int((t_end-t_beg)/dt+1)
	t = np.zeros(nt)
	x = np.zeros(nt)

# constants in our equation
	x0 = 1


# Loop to code Explicit Euler
	t[0] = t_beg
	x[0] = x0
	for i in range(nt-1):
		    x[i+1] = x[i]*(1-3*dt)
		        t[i+1] = t[i] + dt

