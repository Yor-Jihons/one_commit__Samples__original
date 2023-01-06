# 単語数のカウント

This is a sample so that I can commit this to the GitHub.

## 1. Questions

半角英数字で構成されている文章Sが与えられる。このSに含まれる単語数を計算するプログラムを組め。
ただし、異常系に関しては考慮しないものとし、アポストロフィー以外の記号(ピリオドやカンマ)はカウントに含めないものとする。
また、"I'm" のような場合は一つの単語とする。

例としてInput 1の場合、以下のようになる。

```
[SAMPLE]
This is the test which I learnt. When I was a student, I like English launguage.
```

```
1. 'T'から始まり、単語レベルで読み取る。
2. ただし"learnt."のような語尾についているピリオドとカンマは除外しておく。
3. "I was a ..." の "I" はすでにあるため除外。

→ 結果、14単語となる。
```

## 2. Conditions

```
2≦|S|≦2000
```

## 3. Inputs and Outputs

### 3.1. Inputs

```
S
```

一括で文章がSとして渡される。

### 3.2. Outputs

```
NUM
```

単語数を表示する。

### 3.3. Examples

#### 3.3.1. Inputs 1

```
This is the test which I learnt. When I was a student, I like English launguage.
```
#### 3.3.2. Outputs 1

```
14
```

※ Inputs 1 は input1.txt, Output 1 は output1.txt に記述されているとする。
