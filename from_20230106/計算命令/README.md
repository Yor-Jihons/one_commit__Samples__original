# 計算命令

This is a sample so that I can commit this to the GitHub.

## 1. Questions

最初に処理対象の整数Nが与えられる。更にその整数Nに対して行う処理が指定される。このNにそれぞれの処理を加えた結果を出力するプログラムを組め。
ただし、異常系に関しては考慮しないものとする。

処理は以下の定義となる。

- add a  : 現在のNの値にaを足す ( +a )
- sub a  : 現在のNの値にaを引く ( -a )
- multiply a  : 現在のNの値にaをかける ( ×a )
- divide a  : 現在のNの値にaで割る ( ÷a )

Input 1を例に取ると、

```
1. 対象の整数は10とする
2. 対象整数 10 を 2 で割る
    => 5 となるため、対象整数は 5 になる
3. 対象整数 5 に 3 を足す
    => 8 となるため、対象整数は 8 になる
4. 対象整数 8 に 4 をかける
    => 32 となるため、対象整数は 32 となる
5. 結果は 32 となる
```

## 2. Conditions

```
1≦n≦10
1≦m≦9
1≦a≦10
```

## 3. Inputs and Outputs

### 3.1. Inputs

```
n m
command_1
command_2
...
command_m
```

一行目に 対象整数 n (の初期値)と命令数 m が半角スペースを区切り文字として渡される。
二行目以降は m 個分の命令が渡される。命令についてはQuestionsを参照。

### 3.2. Outputs

```
RES
```

対象整数 n に処理を加えた結果を出力する。

### 3.3. Examples

#### 3.3.1. Inputs 1

```
10 3
divide 2
add 3
multiply 4
```
#### 3.3.2. Outputs 1

```
32
```

※ Inputs 1 は input1.txt, Output 1 は output1.txt に記述されているとする。
