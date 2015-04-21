# Problem 1002: The Tower Defence of Little W

If we test all ways to place these towers, the time complexity will be
![](http://www.forkosh.com/mathtex.cgi?O(3^n)) and lead to TLE. But we
can see each tower does not affect all towers before itself. So we can
solve this using dynamic programming. Let f[i][j][k] be the maximum HP
lose of the monster after it passed i green towers, j blue towers, and
k red towers, we have the recursive equation:

```
f[i][j][k] = max{f[i-1][j][k]+(i-1)y(t+jz), f[i][j-1][k]+iy(t+(j-1)z), f[i][j][k-1]+(iy+x)y(t+jz)}
```

We can solve this problem in ![](http://www.forkosh.com/mathtex.cgi?O(n^3))
using this equation.
