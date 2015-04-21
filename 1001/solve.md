# Problem 1001: Another Problem about Apple

If we implement this problem by the simple, brute-force way, the time complexity
of two swap operation will be $O(n)$ and $O(m)$. The huge overall complexity
$O(Q\times max(n, m)+nm)$ will lead to TLE. But we can notice
that the order of swap operations does not affect the result, so simply mapping
current positon of a line/row to its origin positon will be OK.
