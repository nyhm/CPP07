要件　https://cdn.intra.42.fr/pdf/pdf/178667/en.subject.pdf

https://web.archive.org/web/20250429115023/https://42-evaluation-sheets-hub.vercel.app/Cursus/CPP07/


了解しました。課題文を 原文 → 和訳 → 意味 の順で整理します。

⸻

原文
Chapter IV

和訳
第4章

意味
章の区切りタイトル。

⸻

原文
Exercise 00: Start with a few functions

和訳
課題00: いくつかの関数から始める

意味
最初の演習は基本的な関数テンプレートを実装する課題。

⸻

原文
Directory: ex00/

和訳
ディレクトリ: ex00/

意味
課題ファイルを置く場所。

⸻

原文
Files to Submit: Makefile, main.cpp, whatever.{h, hpp}

和訳
提出ファイル: Makefile, main.cpp, whatever.{h, hpp}

意味
提出対象のファイル一覧。

⸻

原文
Forbidden: None

和訳
禁止事項: なし

意味
この課題では特に禁止されている関数や機能はない。

⸻

原文
Implement the following function templates:

和訳
以下の関数テンプレートを実装せよ:

意味
求められている実装の一覧がここから始まる。

⸻

原文
• swap: Swaps the values of two given parameters. Does not return anything.

和訳
• swap: 与えられた2つの引数の値を入れ替える。戻り値はない。

意味
引数の参照を受け取って内容を交換するテンプレート関数。

⸻

原文
• min: Compares the two values passed as parameters and returns the smallest one. If they are equal, it returns the second one.

和訳
• min: 2つの引数を比較し、小さい方を返す。同じ場合は2番目の引数を返す。

意味
比較演算子を使って大小を判定する関数。

⸻

原文
• max: Compares the two values passed as parameters and returns the greatest one. If they are equal, it returns the second one.

和訳
• max: 2つの引数を比較し、大きい方を返す。同じ場合は2番目の引数を返す。

意味
比較演算子を使って大小を判定する関数。

⸻

原文
These functions can be called with any type of argument. The only requirement is that the two arguments must have the same type and must support all the comparison operators.

和訳
これらの関数は任意の型の引数で呼び出せる。ただし2つの引数は同じ型であり、比較演算子が使える型でなければならない。

意味
テンプレートとして汎用化されているが、型には条件がある。

⸻

原文
Templates must be defined in the header files.

和訳
テンプレートはヘッダファイルに定義しなければならない。

意味
テンプレート関数は .hpp や .h 内に書く必要がある。

⸻

これは ex00 の動作確認用の main の例です。

⸻

コードの説明

int a = 2;
int b = 3;
::swap(a, b);

	•	swap テンプレートが正しく動けば、a と b の値が入れ替わる。

std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	•	min は 2 を返す（同じなら 2番目を返す仕様）。
	•	max は 3 を返す。

std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);

	•	c と d が入れ替わる。

std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	•	"chaine1" < "chaine2" なので
	•	min は "chaine1"
	•	max は "chaine2"

⸻

期待される出力

a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2


⸻

意味
	•	int 型、std::string 型どちらでもテンプレートが動作することを確認できる。
	•	swap/min/max の仕様通りに結果が得られれば合格。

⸻


了解しました。Exercise 01: Iter を「原文 → 和訳 → 意味」で整理します。

⸻

原文
Chapter V

和訳
第5章

意味
章の区切りタイトル。

⸻

原文
Exercise 01: Iter

和訳
課題01: Iter

意味
この課題は「iter」というテンプレート関数を実装するもの。

⸻

原文
Directory: ex01/

和訳
ディレクトリ: ex01/

意味
課題のソースコードを置くフォルダ。

⸻

原文
Files to Submit: Makefile, main.cpp, iter.{h, hpp}

和訳
提出ファイル: Makefile, main.cpp, iter.{h, hpp}

意味
提出対象のファイル一覧。

⸻

原文
Forbidden: None

和訳
禁止事項: なし

意味
この課題では特に禁止されている関数や機能はない。

⸻

原文
Implement a function template iter that takes 3 parameters and returns nothing.

和訳
3つの引数を取り、戻り値を返さない関数テンプレート iter を実装せよ。

意味
関数の基本仕様。

⸻

原文
• The first parameter is the address of an array.

和訳
・1つ目の引数は配列のアドレス。

意味
処理対象となる配列の先頭アドレスを渡す。

⸻

原文
• The second one is the length of the array, passed as a const value.

和訳
・2つ目の引数は配列の長さ（定数値として渡す）。

意味
配列サイズを指定する。変更不可。

⸻

原文
• The third one is a function that will be called on every element of the array.

和訳
・3つ目の引数は配列の各要素に対して呼び出される関数。

意味
反復処理で実行する処理を関数として渡す。

⸻

原文
Submit a main.cpp file that contains your tests. Provide enough code to generate a test executable.

和訳
テストを含む main.cpp を提出せよ。テスト実行ファイルを生成できる十分なコードを提供すること。

意味
動作確認用のメイン関数を必ず含めること。

⸻

原文
Your iter function template must work with any type of array. The third parameter can be an instantiated function template.

和訳
iter 関数テンプレートは任意の型の配列で動作しなければならない。3番目の引数はインスタンス化された関数テンプレートでもよい。

意味
汎用性の高いテンプレートとして作る必要がある。

⸻

原文
The function passed as the third parameter may take its argument by const reference or non-const reference, depending on the context.

和訳
3番目の引数として渡される関数は、状況に応じて引数を const 参照または非 const 参照で受け取る場合がある。

意味
関数が要素を書き換えるかどうかで、参照の型が異なることに注意。

⸻

原文
Think carefully about how to support both const and non-const elements in your iter function.

和訳
iter 関数で const 要素と非 const 要素の両方をサポートする方法を慎重に考えよ。

意味
テンプレート定義で const 配列と非 const 配列の両方に対応できるように設計する必要がある。

⸻


了解しました。Exercise 02: Array を「原文 → 和訳 → 意味」で整理します。

⸻

原文
Chapter VI

和訳
第6章

意味
章の区切りタイトル。

⸻

原文
Exercise 02: Array

和訳
課題02: Array

意味
配列のように振る舞うクラス・テンプレートを作成する課題。

⸻

原文
Directory: ex02/

和訳
ディレクトリ: ex02/

意味
課題ソースコードを置くフォルダ。

⸻

原文
Files to Submit: Makefile, main.cpp, Array.{h, hpp} and optional file: Array.tpp

和訳
提出ファイル: Makefile, main.cpp, Array.{h, hpp}、任意で Array.tpp

意味
提出対象ファイルの一覧。テンプレート本体を .tpp に分けてもよい。

⸻

原文
Forbidden: None

和訳
禁止事項: なし

意味
この課題には特に禁止されている関数や機能はない。

⸻

原文
Develop a class template Array that contains elements of type T and that implements the following behavior and functions:

和訳
型 T の要素を保持するクラス・テンプレート Array を作成し、以下の動作と機能を実装せよ。

意味
クラス Array<T> を汎用テンプレートとして設計する。

⸻

原文
• Construction with no parameter: Creates an empty array.

和訳
・引数なしのコンストラクタ: 空の配列を生成する。

意味
デフォルトコンストラクタでサイズ0の配列を作る。

⸻

原文
• Construction with an unsigned int n as a parameter: Creates an array of n elements initialized by default.
Tip: Try to compile int * a = new int(); then display *a.

和訳
・unsigned int n を引数に取るコンストラクタ: n 個の要素をデフォルト初期化した配列を生成する。
ヒント: int * a = new int(); をコンパイルして *a を表示してみよ。

意味
配列要素はデフォルトコンストラクタで初期化されることを確認する。

⸻

原文
• Construction by copy and assignment operator. In both cases, modifying either the original array or its copy after copying musn’t affect the other array.

和訳
・コピーコンストラクタと代入演算子による構築: コピー後は、元の配列とコピーの一方を変更しても他方に影響を与えてはならない。

意味
ディープコピーを実装する必要がある。

⸻

原文
• You MUST use the operator new[] to allocate memory. Preventive allocation (allocating memory in advance) is forbidden. Your program must never access non-allocated memory.

和訳
・メモリ確保には必ず operator new[] を使用すること。予防的な先行割り当ては禁止。未確保のメモリにアクセスしてはならない。

意味
内部実装で new[] を使い、必要以上に確保してはいけない。

⸻

原文
• Elements can be accessed through the subscript operator: [ ].

和訳
・要素は添字演算子 [] でアクセスできる。

意味
operator[] をオーバーロードして実装する。

⸻

原文
• When accessing an element with the [ ] operator, if its index is out of bounds, an std::exception is thrown.

和訳
・[] で要素にアクセスする際、範囲外インデックスなら std::exception を投げる。

意味
範囲チェックを必ず行う。

⸻

原文
• A member function size() that returns the number of elements in the array. This member function takes no parameters and must not modify the current instance.

和訳
・要素数を返すメンバ関数 size() を実装する。この関数は引数を取らず、インスタンスを変更してはならない。

意味
配列の長さを取得する読み取り専用関数。

⸻

原文
As usual, ensure everything works as expected and turn in a main.cpp file that contains your tests.

和訳
いつも通り、すべてが正しく動作することを確認し、テストを含む main.cpp を提出すること。

意味
動作確認用のメイン関数を含めることが必須。

⸻



原文を区切りごとに和訳します。

⸻

SCALE FOR PROJECT CPP MODULE 07

CPP Module 07 の評価基準

⸻

Introduction

序文

以下のルールを守ること:
	•	評価の過程を通じて、礼儀正しく、丁寧に、敬意を払い、建設的であること。コミュニティの健全さはこれにかかっている。
	•	評価対象の学生やグループと一緒に、プロジェクトで起きている不具合を特定し、時間をかけて議論・検討すること。
	•	仲間がプロジェクトの指示や機能範囲をどのように理解しているかは異なる場合がある。その違いを考慮し、常にオープンな心で正直に評価すること。ピア評価が真剣に行われたときのみ、教育効果がある。

⸻

Guidelines

ガイドライン
	•	評価は学生やグループの Git リポジトリに提出された作業のみ を対象とする。
	•	リポジトリが本人のものであることを二重に確認すること。正しいプロジェクトであることを確かめ、git clone は空のディレクトリで行うこと。
	•	悪意のあるエイリアスで公式リポジトリ以外を評価させられていないか慎重に確認すること。
	•	必要であれば、採点用のスクリプト（テストや自動化用）を一緒に確認して、予期せぬ事態を避けること。
	•	自分がまだ完了していない課題を評価する場合は、評価を始める前に課題の本文をすべて読むこと。
	•	空のリポジトリ、動作しないプログラム、Normエラー、不正行為などは用意されたフラグを使って報告する。この場合、評価は終了し、最終成績は 0 点（不正行為なら -42）。ただし不正行為以外は、将来同じ失敗を繰り返さないために提出内容を一緒に確認することを強く推奨する。
	•	設定ファイル以外を編集する必要はない。もし編集する場合は、学生に理由を説明し、合意を得ること。
	•	メモリリークがないことも確認する。ヒープに確保されたメモリは、プログラム終了前に必ず解放されなければならない。leaks, valgrind, e_fence など、利用可能なツールは自由に使える。リークがある場合は対応するフラグを付けること。

⸻

Attachments

添付ファイル
	•	ex00.cpp
	•	ex01.cpp
	•	subject.pdf
	•	main.cpp

⸻

Preliminary tests

事前テスト

不正行為が疑われる場合は、ここで評価を終了すること。「Cheat」フラグを使って報告する。この判断は冷静かつ慎重に行うこと。

⸻

Prerequisites

前提条件
	•	コードは c++ で -Wall -Wextra -Werror フラグ付きでコンパイルできること。
	•	プロジェクトは C++98 標準 に従わなければならない。したがって C++11 以降の関数やコンテナは使えない。

採点してはならないケース:
	•	関数がヘッダファイルに実装されている（テンプレート関数を除く）。
	•	Makefile が必須フラグなし、または c++ 以外のコンパイラを使っている。

「Forbidden Function」フラグを付けるケース:
	•	C言語関数の使用（*alloc, *printf, free）
	•	課題の指示で許可されていない関数の使用
	•	using namespace <ns_name> または friend キーワードの使用
	•	外部ライブラリの使用、または C++98 以外の機能の使用

⸻

Exercise 00: Start with a few functions

課題00: いくつかの関数から始める
	•	この課題は 3 つのシンプルな関数テンプレートを書くことがテーマ: swap(), min(), max()。

Simple types

基本型で確認
	•	int のような単純な型で、期待される出力になるか（課題本文参照）。

Complex types

複雑型で確認
	•	ex00.cpp ファイルを使って、複雑な型でも関数が動作するか。

⸻

Exercise 01: Iter

課題01: iter
	•	配列をイテレートするジェネリック関数を書く課題。

Does it work?

動作確認:
	•	提出された iter を使って ex01.cpp をテストする。
	•	成功すれば次の出力が得られるはず:

0
1
2
3
4
42
42
42
42
42


⸻

Exercise 02: Array

課題02: Array
	•	配列のように振る舞うクラス・テンプレートを実装する課題。
	•	実際の配列の内部確保に new[] を使っていない場合は、この課題を採点してはいけない。
	•	採点前に、単純型と複雑型の両方でクラスが動作することを学生に確認させること。

Constructors

コンストラクタ確認:
	•	空の配列を作れるか？
	•	特定のサイズの配列を作れるか？

Access

アクセス確認:
	•	operator[] を使って要素を読み書きできるか（const インスタンスなら読み取りのみ）。
	•	範囲外アクセスをした場合、std::exception を投げるか。

⸻
