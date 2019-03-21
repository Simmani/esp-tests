// See LICENSE for license details.

#include "util.h"

//--------------------------------------------------------------------------
// Input/Reference Data

#include "dataset1.h"

void sgemm_inner ( int n, float A[], float B[], float C[] );
void sgemm_remainder ( int n, float A[], float B[], float C[] );

void sgemm( int n, float A[], float B[], float C[] )
{
  int i;

  for (i = 0 ; i < n/4*4 ; i += 4) {
    sgemm_inner(n, A + i*n, B, C + i*n);
  }

  for (i = n/4*4 ; i < n ; i++) {
    sgemm_remainder(n, A + i*n, B, C + i*n);
  }
}


//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{
  float results[MAT_WIDTH * MAT_WIDTH];

  setStats(1);
  sgemm(MAT_WIDTH, input_data_X, input_data_Y, results);
  setStats(0);

  // Check the results
  return verifyFloat(MAT_WIDTH*MAT_WIDTH, results, verify_data);
}
