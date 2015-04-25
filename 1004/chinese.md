# Problem 1004: Mg的B12二十面体

题目描述中谁也没有说过暴力枚举会TLE，只是*****说会导致
思维僵化。比赛场上做题要以AC为目的，当然直接暴力枚举。
假设把二十面体X的1号顶点朝上立在桌子上，二十面体Y可能有
60种摆放方式能够与X重合：12个顶点都可以朝上，每种情况又
可以沿过朝上、朝下两个顶点的轴旋转
![](http://www.forkosh.com/mathtex.cgi?0,{{2\\pi}\\over 5},{{4\\pi}\\over 5},{{6\\pi}\\over 5},{{8\\pi}\\over 5})
这五种不同角度，所以有
![](http://www.forkosh.com/mathtex.cgi?12\\times 5)
种摆放方式。枚举这60种摆放方式，判断是否相同就行了。

编程实现时，把二十面体分4层，第一层（最上层）一个顶点A，
第二层5个顶点
![](http://www.forkosh.com/mathtex.cgi?a_0,a_1,a_2,a_3,a_4)
组成正五边形（称这个正五边形“属于”顶点A），第三层
![](http://www.forkosh.com/mathtex.cgi?{b_0}...{b_4})
同样组成正五边形（属于顶点B），第四层一个顶点B。开常量数
组，记录每个顶点对面的顶点，以及“属于”它的正五边形。为了
保证五边形的顶点顺序正确，属于A的五边形顶点要按照从二十面
体中心O指向A的右手螺旋次序保存。比较时按这4层比较，第一、
四层直接比较一次就行了，比较二、三层时要枚举5种旋转方式。
二十面体按
![](http://www.forkosh.com/mathtex.cgi?\\overrightarrow{BA})
右手螺旋方向旋转角度x，就是A所属的正五边形按
![](http://www.forkosh.com/mathtex.cgi?\\overrightarrow{OA})
右手螺旋方向旋转角度x，而B所属的正五边形按
![](http://www.forkosh.com/mathtex.cgi?\\overrightarrow{BO})
右手螺旋方向（就是
![](http://www.forkosh.com/mathtex.cgi?\\overrightarrow{OB})
左手螺旋方向）旋转角度x。为了方便，把五边形顶点复制一份，
存成
![](http://www.forkosh.com/mathtex.cgi?\\{a_0,a_1,a_2,a_3,a_4,a_0,a_1,a_2,a_3,a_4\\})
，比较时，旋转
![](http://www.forkosh.com/mathtex.cgi?{2j\\pi}\\over 5)
，就相当于依次比较X的
![](http://www.forkosh.com/mathtex.cgi?{a_0}...{a_4})
和Y的
![](http://www.forkosh.com/mathtex.cgi?{a_j}...a_{j+4})
，以及X的
![](http://www.forkosh.com/mathtex.cgi?{b_0}...{b_4})
和Y的
![](http://www.forkosh.com/mathtex.cgi?{b_{5-j}}...{b_{9-j}})
。

**一个非常重要的细节：**

记录常量数组时，务必保持两个相对的正五边形之间节点的对应关系。例如，顶点
1对应的正五边形为2 3 4 5 6，而节点12对应的正五边形为
7 11 10 9 8，可见这两个正五边形的第一个节点对于二十面体
的中心对称，则**所有相对的正五边形**必须满足同样的对应关系。
最简单的方法是，因为这些正五边形要么包含1要么包含12，记录
时直接从1或12开始记录。

如果不注意这一点，就会犯下solve.cpp中那样愚蠢的错误。

主要编码量在于打常量数组，时间复杂度
![](http://www.forkosh.com/mathtex.cgi?O(12\\times 5^2))
。
