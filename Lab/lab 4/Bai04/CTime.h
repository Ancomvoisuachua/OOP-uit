#pragma once
#include <iostream>
using namespace std;

class CTime
{
    private: 
	    int Gio;
	    int Phut;
	    int Giay;
    public: 
        CTime();
        CTime(int, int, int);

        friend istream& operator>>(istream& is, CTime& t);
        friend ostream& operator<<(ostream& os, const CTime& t);

        void ChuanHoa();

        CTime operator+(int x);
        CTime operator-(int x);

        CTime& operator++();      
        CTime operator++(int);    

        CTime& operator--();      
        CTime operator--(int);    
};
