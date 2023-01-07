# タイトル

This is a sample so that I can commit this to the GitHub.

## 1. Questions

二次方程式 a(x^2) + bx + c = 0 (a ≠ 0) のa,b,cがそれぞれ与えられる。このとき、解の個数を表示するプログラムを組め。
ただし、異常系に関しては考慮しないものとする。

Input 1の場合、以下のようになる。

判別式 D = b^2 - 4ac を用いて計算する。
a = 7, b = 2, c = 3 という値が与えられているため、この判別式に代入する。
D = 2^2 - ( 4 * 7 * 3 )
D = 4 - 84
D = -80

D < 0 のとき、「二つの異なる虚数解を持つ」ため個数は2となる。

## 2. Conditions

```
1≦a≦10
1≦b≦10
1≦c≦10
```

## 3. Inputs and Outputs

### 3.1. Inputs

```
a b c
```

a, b, c のそれぞれの値が半角スペースを区切り文字にして渡される。

### 3.2. Outputs

```
NUM
```

与えられた三つの値が与えられた 二次方程式 a(x^2)+bx+c=0の解の個数を表示する。

### 3.3. Examples

#### 3.3.1. Inputs 1

```
7 2 3
```
#### 3.3.2. Outputs 1

```
2
```

※ Inputs 1 は input1.txt, Output 1 は output1.txt に記述されているとする。
