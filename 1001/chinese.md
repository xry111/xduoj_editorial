# Problem 1001: 又是苹果

直接模拟的话，时间复杂度是每次操作O(n)或者O(m)，最坏情况下总的时间复杂度是
![](http://www.forkosh.com/mathtex.cgi?O(Q\\times max(n, m)+nm))
，显然会超时。注意到，如果连续进行若干交换操作，无论操作顺序如何，最后的结
果都是一样的。因此，可以把行、列的交换操作分开处理。可分别定义表line和row,
表示当前的第i行是原来的第line[i]行,第j列是原来的第row[j]列。这样,对于每次交
换操作,只要交换两个数就行了,时间复杂度是O(1)。对于查询第i行j列的操作,直接返
回原矩阵第line[i]行,row[j]列的元素就行了,时间复杂度O(1)。总的时间复杂度
O(Q + nm)。
