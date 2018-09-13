# item01 理解模板型别推导

## 0. 编译

```
$ make
```
产出 demo01 到 demo05 5 个文件

## 1. ParamType 是个指针或引用，但不是通用引用(Universal Reference)

- demo01

```c++
template <typename T>
void f(T& param)
```

- demo02

```c++
template <typename T>
void f(const T& param)
```

- demo03

```c++
template <typename T>
void f(T* param)
```

## 2. ParamType 是通用引用(Universal Reference)

- demo04

```c++
template <typename T>
void f(T&& param)
```

## 3. ParamType 是既非引用也非指针

- demo05

```c++
template <typename T>
void f(T param)
```
