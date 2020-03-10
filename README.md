#Numerical Sine Calculator
## Numerical Analysis Project 2

使用数值分析方法计算$sinx$的任意数值解。求解器提供三种方法：级数逼近法、常微分方程法和微小增量法。GUI使用Qt框架编写。

**Author**: Zhaoxi Chen

## 1.Prerequisities

### 1.1 OS

Ubuntu 18.04 LTS (1604 maybe ok)

### 1.2 Compiler

- qmake version 3.1, using Qt version 5.9.5
###### Install qmake if you don't have one
```bash
sudo apt-get install qt5-qmake
sudo apt-get install libqt5-dev
```
Then do ```qmake -v``` checking for installation

- g++ 7.4.0 (actually lower or higher version can also works)

## 2. Build NumericalSineCalculator

### 2.1 Command Line Version(Optional)
```bash
cd path-to-project2
make
```

### 2.2 GUI Version
```bash
cd path-to-project2/NumericalSineCalculator
cd build
qmake -o Makefile ../NumericalSineCalculator.pro -spec linux-g++
make
```

## 3. Run NumericalSineCalculator

### 3.1 Command Line Version
在本目录下打开命令行运行`./main`

### 3.2 GUI
```bash
cd path-to-project2/NumericalSineCalculator/build
./NumericalSineCalculator
(直接双击打开也可)
```

## 4. Report
See [report.pdf](report/report.pdf)
Latex source code at [report.tex](report/report.tex)
