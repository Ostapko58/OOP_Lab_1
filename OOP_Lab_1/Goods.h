#pragma once
class Goods
{
private:
	double first = -1;
	int second = -1;
public:
	double GetFirst() const { return first; }
	int GetSecond() const { return second; }
	void SetFirst(double value);
	void SetSecond(int value);
	bool Init(double x, int y);
	void Display() const;
	void Read();
	double cost();
};

