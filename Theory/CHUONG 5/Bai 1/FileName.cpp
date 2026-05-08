#include <iostream>
using namespace std;

class SoPhuc {
	private:
		double Ao;
		double Thuc;
	public:
		SoPhuc(double a = 0, double t = 0);

		double GetAo() const;
		double GetThuc() const;

		void SetAo(double a);
		void SetThuc(double t);

		SoPhuc operator + (const SoPhuc & other) const;
		SoPhuc operator - (const SoPhuc& other) const;
		SoPhuc operator * (const SoPhuc& other) const;
		SoPhuc operator / (const SoPhuc& other) const;
		bool operator == (const SoPhuc& other) const;

		friend ostream& operator << (ostream& os, const SoPhuc& c);
		friend istream& operator >> (istream& is, SoPhuc& c);
};

SoPhuc::SoPhuc(double a, double t) {
	Ao = a;
	Thuc = t;
}

double SoPhuc::GetAo() const{
	return Ao;
}

double SoPhuc::GetThuc() const {
	return Thuc;
}

void SoPhuc::SetAo(double a){
	Ao = a;
}

void SoPhuc::SetThuc(double t) {
	Thuc = t;
}

SoPhuc SoPhuc::operator + (const SoPhuc& other) const {
	return SoPhuc(Ao + other.Ao, Thuc + other.Thuc);
}

SoPhuc SoPhuc::operator - (const SoPhuc& other) const {
	return SoPhuc(Ao - other.Ao, Thuc - other.Thuc);
}

SoPhuc SoPhuc::operator * (const SoPhuc& other) const {
	return SoPhuc(Ao * other.Ao - Thuc * other.Thuc, Ao * other.Thuc + Thuc * other.Ao);
}

SoPhuc SoPhuc::operator / (const SoPhuc& other) const {
	double temp = other.Ao * other.Ao + other.Thuc * other.Thuc;

	return SoPhuc(
		(Ao * other.Ao + Thuc * other.Thuc) / temp,
		(Thuc * other.Ao - Ao * other.Thuc) / temp
	);
}

bool SoPhuc::operator == (const SoPhuc& other) const {
	return (Ao == other.Ao && Thuc == other.Thuc);
}

ostream& operator << (ostream& os, const SoPhuc& c) {
	os << c.Thuc;
	if (c.Ao >= 0) os << "+";
	os << c.Ao << "i";

	return os;
}

istream& operator >> (istream& is, SoPhuc& c) {
	cout << "Nhap phan thuc: ";
	is >> c.Thuc;

	cout << "Nhap phan ao: ";
	is >> c.Ao;

	return is;
}

int main() {
	SoPhuc A, B;

	cout << "Nhap so phuc A\n";
	cin >> A;

	cout << "Nhap so phuc B\n";
	cin >> B;

	cout << "A = " << A << "\n";
	cout << "B = " << B << "\n";

	cout << "A + B = " << (A + B) << "\n";
	cout << "A - B = " << (A - B) << "\n";
	cout << "A * B = " << (A * B) << "\n";
	cout << "A / B = " << (A / B) << "\n";

	cout << "A == B: " << (A == B ? "True" : "False") << "\n";

	return 0;
}