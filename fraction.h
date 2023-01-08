int gcd(int m, int n)
{
	if (m % n == 0)
	{
		return n;
	}
	else
	{
		return gcd(n, m % n);
	}
}
class Fraction {
public:
	int numerator;
	int denominator;
	void reduction(Fraction f) {
		int g = gcd(f.numerator, f.denominator);
		f.numerator /= g;
		f.denominator /= g;
	}
	void commonDenominator(Fraction f1,Fraction f2) {
		f1.numerator *= f2.denominator;
		f2.numerator *= f1.denominator;
		int tmp = f1.denominator;
		f1.denominator *= f2.denominator;
		f2.denominator *= tmp;
		reduction(f1);
		reduction(f2);
	}
	Fraction reciprocal(const Fraction& f) {
		Fraction f2;
		f2.denominator = f.numerator;
		f2.numerator = f.denominator;
		return f2;
	}
	Fraction operator+(const Fraction& f) {
		Fraction f_this;
		f_this.denominator = denominator;
		f_this.numerator = numerator;
		commonDenominator(f_this, f);
		Fraction f2;
		f2.denominator = f.denominator;
		f2.numerator = f_this.numerator + f.numerator;
		reduction(f2);
		return f2;
	}
	Fraction operator-(const Fraction& f) {
		Fraction f_this;
		f_this.denominator = denominator;
		f_this.numerator = numerator;
		commonDenominator(f_this, f);
		Fraction f2;
		f2.denominator = f.denominator;
		f2.numerator = f_this.numerator - f.numerator;
		reduction(f2);
		return f2;
	}
	Fraction operator*(const Fraction& f) {
		Fraction f2;
		f2.numerator = numerator * f.numerator;
		f2.denominator = denominator * f.denominator;
		reduction(f2);
		return f2;
	}
	Fraction operator/(Fraction& f) {
		Fraction f_new = reciprocal(f);
		Fraction f_this;
		f_this.denominator = denominator;
		f_this.numerator = numerator;
		Fraction f2 = f_this * f_new;
		return f2;
	}
};