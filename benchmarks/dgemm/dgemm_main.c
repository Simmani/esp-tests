// See LICENSE for license details.

#include "util.h"

//--------------------------------------------------------------------------
// Input/Reference Data

#include "dataset1.h"

void dgemm_inner ( int n, double A[], double B[], double C[] );
void dgemm_remainder ( int n, double A[], double B[], double C[] );

void dgemm( int n, double A[], double B[], double C[] )
{
  int i;

  for (i = 0 ; i < n/4*4 ; i += 4) {
    dgemm_inner(n, A + i*n, B, C + i*n);
  }

  for (i = n/4*4 ; i < n ; i++) {
    dgemm_remainder(n, A + i*n, B, C + i*n);
  }
}


//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{
  double results[MAT_WIDTH * MAT_WIDTH];

  setStats(1);
  dgemm(MAT_WIDTH, input_data_X, input_data_Y, results);
  setStats(0);

  // Check the results
  return verifyDouble(MAT_WIDTH*MAT_WIDTH, results, verify_data);
}
