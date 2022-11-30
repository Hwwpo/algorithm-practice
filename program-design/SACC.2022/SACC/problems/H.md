# 向听计算

1000ms  262144K

## Deszription

日本麻将是一种通常由四人进行的棋牌策略游戏。游戏时四名玩家围坐在桌子旁，使用麻将牌进行游戏。麻将牌共有 $$$34$$$ 种，分为 $$$5$$$ 类牌，分别是万子、筒子、索子、风牌、三元牌，每种牌均有四张，总共 $$$136$$$ 张。

- `1m 2m... 9m` 表示一万到九万；
- `1s 2s... 9s` 表示一索到九索；
- `1p 2p... 9p` 表示一筒到九筒；
- `1z 2z... 7z` 依次表示「东西南北」四种风牌，以及「白发中」三种三元牌，这七张牌统称为字牌；
- 特别地，风牌、三元牌以及 `1m 9m 1s 9s 1p 9p` 这六张牌也被称为「幺九牌」。

牌型包括以下几种：

- 由 $$$2$$$ 张完全相同的牌组成的牌，称为「对子」（如 `7z 7z`）；
- 由 $$$3$$$ 张完全相同的牌组成的牌，称为「刻子」（如 `1m 1m 1m`）；
- 由 $$$3$$$ 张同花色组成连续数字的牌，称为「顺子」（如 `3s 4s 5s`），注意风牌和三元牌无法构成「顺子」。
- 特别地、「顺子」和「刻子」统称为「面子」。

当玩家的手牌符合以下规则之一时，他可以宣告和牌。

- 普通型：手牌恰包含一个「对子」和四个「面子」（如 `1m 1m 1m 3s 4s 5s 7p 8p 9p 2z 2z 2z 7z 7z`）。
- 七对子：手牌为七个**不同**的「对子」，（如 `1m 1m 3m 3m 5m 5m 2s 2s 4s 4s 6s 6s 7z 7z`）。
- 国士无双：手牌为包含全部的 $$$13$$$ 张「幺九牌」，额外再加任意一张「幺九牌」（如 `1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 7z 7z`）。

游戏开始时，四名玩家每人都有 $$$13$$$ 张牌，接下来从某名玩家开始按逆时针顺序轮流从牌山中摸一张牌，并打出一张自己不想要的牌。随着不断摸入和打出，玩家的手牌将会不断变化。这个过程持续到牌山被摸空或者有人和牌为止。

当玩家的手牌仅缺少一张有效牌即可以和牌的状态称为听牌状态，听牌状态下无论是自己摸到了有效牌（称为「自摸和」），还是其他玩家打出了有效牌（称为「荣和」），该玩家都可以宣告和牌（如 `1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 7z`，这副牌同时听全部的幺九牌）。

现在天才麻将少女咕咕想要考考你，对于给定的一副牌，咕咕至少需要再替换多少张手牌才能进入听牌状态呢？

## Input

第一行一个整数 $$$t$$$，表示有 $$$t$$$ 组测试用例（$$$1 \\leq t \\leq 10^2$$$）。

接下来 $$$t$$$ 组测试用例，每组测试用例仅一行。唯一的一行包含 $$$13$$$ 个字符串，表示 $$$13$$$ 张牌。

## Output

对于每组测试用例，输出一行一个整数 $$$x$$$，表示咕咕至少要替换 $$$x$$$ 张手牌才能进入听牌状态。

## Sample Input

```
3
1m 1m 1m 1m 5m 5m 5m 5m 9m 9m 9m 9m 1z
1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 7z
2m 5m 8m 2s 5s 8s 2p 5p 8p 1z 2z 3z 4z
```

## Sample Output

```
2
0
6
```

## Note

在样例的第一组测试用例中，咕咕只要分别摸入 `4m 6m`，并打出 `1m 9m`，即可进入听牌状态（一般型）：

```
1m 1m 1m
4m 5m 6m
5m 5m 5m
9m 9m 9m
1z
```

在样例的第三组测试用例中，咕咕只要分别摸入 `2m 5m 8m 2s 5s 8s`，并打出 `2p 5p 8p 1z 2z 3z`，即可进入听牌状态（七对子型）：

```
2m 2m
5m 5m
8m 8m
2s 2s
5s 5s
8s 8s
4z
```

**注意**：最佳方案可能有很多，以上列举的方案仅为所有最佳方案中的一种。

**注意**：虚听：即自己的手牌“听”的所有牌都已经在自己的手牌中有四张了，不可能再出现第五张。

以 `1m 1m 1m 1m 2m 3m 4m 4m 4m 4m 1s 2s 3s` 为例，玩家仅虚听 `1m` 和 `4m` 。此时不认为该副牌是听牌状态。

以 `1m 1m 1m 1m 2m 3m 4m 4m 4m 4m 5m 6m 7m` 为例，玩家虚听 `1m` 和 `4m`，实听 `7m`。此时认为该副牌是听牌状态。