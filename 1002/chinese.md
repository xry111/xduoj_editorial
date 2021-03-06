# Problem 1002: 小W的塔防

枚举所有情况的时间复杂度![](http://www.forkosh.com/mathtex.cgi?O(3^n)),
超时。注意到每个塔只对正在或已经通过自己的怪有影响,而对前面的所有塔毫无影响,
发现本题具有无后效性,可以DP。由于怪在某塔下受到的伤害只和当前塔的种类、之前的
每种塔的个数有关,而和前面塔的摆放顺序无关,可以用塔的个数作为状态变量。用f[i][j][k]
表示怪通过i个绿塔、j个蓝塔、k个红塔后受到的伤害,则状态转移方程为

```
f[i][j][k] = max{f[i-1][j][k]+(i-1)y(t+jz), f[i][j-1][k]+iy(t+(j-1)z), f[i][j][k-1]+(iy+x)y(t+jz)}
```

用这个方程可以在![](http://www.forkosh.com/mathtex.cgi?O(n^3))时间内解决这个问题。
