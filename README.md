# DES Cryptographic Algorithm in C

## Description

This is my own DES implementation in pure C language. An educational model of the Data Encryption Standard (DES).

!WARNING! This code is ment only for educational purposes, do not encrypt data with this code!

## Requirements

* GCC compiler

## Compilation

```bash
gcc src\des.c -o bin\des.exe
```

## Usage

By default it outputs with verbose the whole process of encryption.

```bash
./bin/des.exe > res.txt
```

## Bibliography

* [DES Overview and Tutorial (TU Berlin)](https://page.math.tu-berlin.de/~kant/teaching/hess/krypto-ws2006/des.htm)
* [4-DES System Security (LRI)](https://www.lri.fr/~fmartignon/documenti/systemesecurite/4-DES.pdf)
