//int* test_Destory()
//{
//	my_Queue q;
//	q._popST.push(1);
//	q._popST.push(2);
//	q._popST.push(3);
//
//	return q._popST._a;
//}

//int main()
//{
//	int* rem = test_Destory();
//	free(rem);
//	return 0;
//}

#include<stdlib.h>
//class Date
//{
//public:
//	Date(int a = 1, int b = 2)
//	{
//		_a = 1;
//		_b = 2;
//	}
//	Date(const Date& d)
//	{
//		cout << "Date" << endl;
//		//_a = d._a;
//		//_b = d._b;
//		//_c = d._c;
//	}
//
//	void print()
//	{
//
//	}
//
////private:
//	int _a;
//	int _b;
//	int* _c;
//};
//
//Date t()
//{
//	Date a1;
//	a1._c = (int*)malloc(12);
//	return a1;
//}
//int main()
//{
//	//t();
//	//Date ret = t();
//	//Date b = ret;
//
//	//Date d;
//	//if (d._c == nullptr)
//	//{
//	//	cout << d._c << endl;
//	//}
//
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year = 2023, int month = 2, int day = 11)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)
//	{
//		cout << "Date" << endl;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	//运算符重载
//	// d1 < d2
//	bool operator<(const Date& d)
//	{
//		if (_year < d._year)
//			return true;
//		else if(_year > d._year)
//			return false;
//
//		if (_month < d._month)
//			return true;
//		else if (_month > d._month)
//			return false;
//
//		if (_day < d._day)
//			return true;
//		else
//			return false;
//	}
//	bool operator>=(const Date& d)
//	{
//		return !(*this < d);
//		//return !(this->operator<(d));
//	}
//	//Date& operator+(int day)
//	//{
//	//	return *this;
//	//}
//	Date operator+(int day)
//	{
//		return *this;
//	}
//	Date& operator=(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//
//		return *this;
//	}
//
//private:
//	int* a;
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	//Date dt1(2021,2,3);
//	//Date dt2;
//	//cout << dt1.operator<(dt2) << endl;
//	//cout << (dt1 >= dt2) << endl;
//
//	//Date dt3(2023, 2, 12);
//	//Date dt4 = dt3 + 1;
//	//dt3 + 1;
//
//	//Date dt4;
//	//dt4 = dt3 + 1;
//
//	Date dt5;
//
//	return 0;
//}


//日期类测试
//int main()
//{
//	//Date dt1;
//	//dt1.Print();
//	//Date dt2(2023,3,3);
//	//dt2.Print();
//
//	//cout << (dt1 == dt2) << endl;
//	//cout << dt1.operator==(dt2) << endl;
//
//	//cout << (dt1 != dt2) << endl;
//	//cout << dt1.operator!=(dt2) << endl;
//
//	//cout << (dt1 < dt2) << endl;
//	
//	//Date dt3(2030, 2, 3);
//	//cout << (dt1 >= dt3) << endl;
//	//cout << (dt1 != dt3) << endl;
//
//	//Date dt4;
//	//dt4.Print();
//	//dt4 += 1000;
//	//dt4.Print();
//
//	//Date dt4;
//	//dt4.Print();
//	//dt4 + 100;
//	//dt4.Print();
//	//dt4 = dt1 + 100;
//
//	//Date dt4;
//	//dt4.Print();
//	//dt4 -= 10000;
//	//dt4.Print();
//
//	/*Date dt5;
//	dt5.Print();
//	dt5 = dt1 - 10000;
//	dt5.Print();
//	dt1.Print();*/
//
//	/*Date dt6;
//	dt6.Print();
//	dt6++;
//	dt6.Print();
//	dt1 = dt6++;
//	dt6.Print();
//	dt1.Print();
//	dt1 = ++dt6;
//	dt6.Print();
//	dt1.Print();*/
//
//	// dt1 - dt2
//	Date dt1(2036, 2,27);
//	Date dt2(1976, 3, 27);
//	cout << dt1 - dt2 << endl;
//
//	return 0;
//}
