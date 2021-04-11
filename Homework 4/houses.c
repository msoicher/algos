#include <stdio.h>
int min(int n, int m);

int main(void) {

  int costs[3][3] = {
      {17,2,17},
      {16,16,5},
      {14,3,19}
  };

  int N = 3;

  for (int i = 1; i < N; i++) {
      costs[i][0] += min(costs[i-1][1], costs[i-1][2]);
      costs[i][1] += min(costs[i-1][0], costs[i-1][2]);
      costs[i][2] += min(costs[i-1][0], costs[i-1][1]);
  }

  printf("Minimum is: %d\n", min(costs[N-1][0], costs[N][1]));
}

int min(int n, int m) {

  if (n < m) return n;
  else return m;
}
