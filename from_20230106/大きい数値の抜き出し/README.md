# タイトル

This is a sample so that I can commit this to the GitHub.

## 1. Questions

項数nの数列a{n}が与えられる。この数列から基準pより大きい数値をすべて選び出し、昇順で表示するプログラムを組め。
基準pより大きい数値がない場合は「None」とだけ表示すること。
ただし、異常系に関しては考慮しないものとする。

ヒント: ``a{n} > p``となるようにすること

## 2. Conditions

```
1≦n≦100
1≦p≦100
1≦a{i}≦10
```

## 3. Inputs and Outputs

### 3.1. Inputs

```
n p
a{1} a{2} ... a{n}
```

一行目に項数nと基準pが半角スペースを区切り文字として与えられる。
二行目には数列a{n}が半角スペースを区切り文字として与えられる。

### 3.2. Outputs

```
b{1} b{2} ... b{m}
```

基準pより大きい数値で構成されたb{m}を半角スペースを区切り文字として表示する。

### 3.3. Examples

#### 3.3.1. Inputs 1

```
9 7
3 0 1 8 5 2 10 7 9
```
#### 3.3.2. Outputs 1

```
8 9 10
```

※ Inputs 1 は input1.txt, Output 1 は output1.txt に記述されているとする。
