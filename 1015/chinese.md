# Problem 1015: 无聊的Light Light

这是一个贪心题。首先，显然应该让写出的数的位数尽可能多，
这个位数就是
```
w/min{a}
```
。

然后要让高位尽可能大，每次选一个最大的数，使得剩余的体力值
能够写出这个数，并用体力消耗最小的数填满后面的每一位就行了。

时间复杂度为
```
O(w/min{a})
```
。
