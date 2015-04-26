# Problem 1017: Codeforces上的rating

这个题是个双关键字排序问题，只要写出正确的比较函数，
然后用各种时间复杂度是O(nlogn)的排序方法都能过。例如：
快速排序、堆排序、归并排序等。总的时间复杂度是O(nLlogn)，
这里L是ID的长度。

因为CF Rating的范围有限（从worse到tourist就不到4000个数），
使用桶排序结合字典树，可以在O(nL)时间内解决这个问题。但是
上面的O(nLlogn)的方法已经足够了。

C++ STL提供了时间复杂度为O(nlogn)的排序函数std::sort，参见
[这一文档](http://www.cplusplus.com/reference/algorithm/sort/?kw=sort)。
