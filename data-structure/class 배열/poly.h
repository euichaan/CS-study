#pragma once
#include <iostream>
using namespace std;
class Polynomial;
class Term
{
    friend class Polynomial; //friend 선언 
    friend ostream& operator << (ostream&,Polynomial &);
    friend istream& operator >> (istream&,Polynomial &);

private:
    float coef; //계수
    int exp; // 지수
};
class Polynomial
{
public:
    Polynomial();
    Polynomial operator+(Polynomial &);
    void NewTerm(const float,const int);
    friend ostream& operator << (ostream&,Polynomial &);
    friend istream& operator >> (istream&,Polynomial &);

private:
    Term *termArray; //0이 아닌 항의 배열 Term *termArray=new Term[capacity];
    int capacity; //termArray의 크기
    int terms; // 0이아닌 항의 수
};