#include"poly.h"
using namespace std;
//다항식 입력 부분
std::istream& operator >>(std::istream &is, Polynomial &p)
{
    int noofterms;float coef; int exp;
    is>>noofterms;
    for(int i=0;i<noofterms; i++)
    {
        is >> coef >> exp;
        p.NewTerm(coef,exp);
    }
    return is;
}
//다항식 출력 부분
ostream& operator << (ostream &os, Polynomial &p)
{
    for(int i=0;i<p.terms;++i)
    {
        if(p.termArray[i].exp>1) //계수x^지수
        {
            if(p.termArray[i].coef==1)
                os<<"x^"<<p.termArray[i].exp;
            else if(p.termArray[i].coef==-1)
                os<<"-x^"<<p.termArray[i].exp;
            else
                os<<p.termArray[i].coef<<"x^"<<p.termArray[i].exp;
        }
        else if(p.termArray[i].exp==1) //계수x
        {
            if(p.termArray[i].coef==1)
                os<<"x";
            else if(p.termArray[i].coef==-1)
                os<<"-x";
            else
                os<<p.termArray[i].coef<<"x";
        }
        else//상수항
            os<<p.termArray[i].coef;
        if(i<p.terms-1)
        {
            if(p.termArray[i+1].coef>=0)
            {
                os<<"+";
            }
            else
                os<<"";
        }
    }
    cout << endl;
    return os;
}
//생성자
Polynomial::Polynomial()
        :capacity(1),terms(0)
{
    termArray=new Term[capacity];
}
//다항식의 덧셈 
Polynomial Polynomial::operator+(Polynomial& b) {
    Polynomial c;
    int aPos = 0; //termArray index
    int bPos = 0; //termArray index
    while((aPos<terms) && (bPos<b.terms))
        if(termArray[aPos].exp==b.termArray[bPos].exp)
        {
            float t= termArray[aPos].coef+b.termArray[bPos].coef;
            if(t) c.NewTerm(t,termArray[aPos].exp);
            aPos++; bPos++;
        }
        else if (termArray[aPos].exp < b.termArray[bPos].exp) {
            c.NewTerm(b.termArray[bPos].coef, b.termArray[bPos].exp);
            bPos++;
        }
        else
        {
            c.NewTerm(termArray[aPos].coef,termArray[aPos].exp);
            aPos++;
        }
    for(;aPos<terms; aPos++)
        c.NewTerm(termArray[aPos].coef,termArray[aPos].exp);
    for(;bPos<b.terms; bPos++)
        c.NewTerm(b.termArray[bPos].coef,b.termArray[bPos].exp);

    return c;
}
//새로운 항의 추가와 배열 크기 두배로 확장
void Polynomial::NewTerm(const float theCoeff, const int theExp) {

    if(terms==capacity)
    {
        capacity*=2;
        Term *temp=new Term[capacity];
        copy(termArray+0,termArray+terms,temp); //des가 temp
        delete[] termArray;
        termArray=temp;
    }
    termArray[terms].coef=theCoeff;
    termArray[terms++].exp=theExp;
}

