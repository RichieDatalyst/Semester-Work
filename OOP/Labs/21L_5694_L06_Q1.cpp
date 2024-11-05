#include<iostream>
using namespace std;
class Quadratic {
private:
	int a;
	int b;
	int c;
public:
	Quadratic() {
		a = 0;
		b = 0;
		c = 0;
	}
	Quadratic(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	Quadratic(Quadratic& Q) {
		a = Q.a;
		b = Q.b;
		c = Q.c;
	}
	~Quadratic() {
	}
	Quadratic operator*(const int& quad) {
		Quadratic mul;
		mul.a = this->a * quad;
		mul.b = this->b * quad;
		mul.c = this->c * quad;
		return mul;
	}
	bool operator ==(const Quadratic& Quad) {
		if ((this->a == Quad.a) && (this->b == Quad.b) && (this->c == Quad.c)) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator !=(const Quadratic& Quad) {
		if ((this->a != Quad.a) && (this->b != Quad.b) && (this->c != Quad.c)) {
			return true;
		}
		else {
			return false;
		}
	}
	void operator = (const Quadratic& Qu) {
		a = Qu.a;
		b = Qu.b;
		c = Qu.c;
	}
	Quadratic operator+(const Quadratic& quad) {
		Quadratic Add;
		Add.a = a + quad.a;
		Add.b = b + quad.b;
		Add.c = c + quad.c;
		return Add;
	}
	Quadratic operator-(const Quadratic& quad) {
		Quadratic Sub;
		Sub.a = a - quad.a;
		Sub.b = b - quad.b;
		Sub.c = c - quad.c;
		return Sub;
	}
	friend Quadratic add(const Quadratic& quad1, const Quadratic& quad2);
	friend Quadratic sub(const Quadratic& quad1, const Quadratic& quad2);
	friend istream& operator >>(istream& in, Quadratic& q);
	friend ostream& operator <<(ostream& out, Quadratic& q);
};
istream& operator >>(istream& in, Quadratic& q) {
	cout << "Enter First Quadratic : ";
	in >> q.a;
	cout << "Enter Second Quadratic : ";
	in >> q.b;
	cout << "Enter Third Quadratic : ";
	in >> q.c;
	return in;
}
ostream& operator <<(ostream& out, Quadratic& q) {
	out << q.a << "X^2" << " + " << q.b << "X" << " + " << q.c << endl;
	return out;
}
Quadratic add(const Quadratic& quad1, const Quadratic& quad2) {
	Quadratic Add;
	Add.a = quad1.a + quad2.a;
	Add.b = quad1.b + quad2.b;
	Add.c = quad1.c + quad2.c;
	return Add;
}

Quadratic sub(const Quadratic& quad1, const Quadratic& quad2) {
	Quadratic Sub;
	Sub.a = quad1.a - quad2.a;
	Sub.b = quad1.b - quad2.b;
	Sub.c = quad1.c - quad2.c;
	return Sub;
}
int main() {
	Quadratic q1, q2, add, sub;
	cout << "Enter First Quadratic" << endl;
	cin >> q1;
	cout << "Enter Second Quadratic" << endl;
	cin >> q2;
	cout << "First Quadratic" << endl;
	cout << q1;
	cout << "Second Quadratic" << endl;
	cout << q2;
	cout << "After Adding" << endl;
	add = q1 + q2;
	cout << add;
	cout << "After Subtracting" << endl;
	sub = q1 - q2;
	cout << sub;
	cout << "After Multiplying" << endl;
	q1 = q2 * 2;
	cout << q1 << endl;
	if (q1 == q2) {
		cout << "Both Quadratics are equal" << endl;
	}
	else {
		cout << "Both Quadratics are not equal" << endl;
	}

	return 0;
}