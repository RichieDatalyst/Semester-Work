#include<iostream>
using namespace std;
class DM {
public:
	int m;
	int cm;
	DM() {}
	DM(int m, int cm) {
		this->m = m;
		this->cm = cm;
	}
	friend istream& operator >>(istream& in, DM& dm) {
		cout << "Enter m value : ";
		in >> dm.m;
		cout << "Enter cm value : ";
		in >> dm.cm;
		return in;
	}
	friend ostream& operator <<(ostream& out, DM& dm) {
		out << dm.m << " m " << dm.cm << " cm" << endl;
		return out;
	}
};
class DB {
private:
	int ft;
	int inches;
public:
	DB() {}
	DB(int ft, int inches) {
		this->ft = ft;
		this->inches = inches;
	}
	friend istream& operator >>(istream& in, DB& db) {
		cout << "Enter ft value : ";
		in >> db.ft;
		cout << "Enter inches value : ";
		in >> db.inches;
		return in;
	}
	friend ostream& operator <<(ostream& out, DB& db) {
		out << db.ft << " ft " << db.inches << " inches" << endl;
		return out;
	}
	friend DB add(DB db, DM dm);
};
DB add(DB db, DM dm) {
	int Result_cm = (dm.m * 100 + dm.cm) + ((db.ft * 12) + db.inches) * 2.54;
	int M = Result_cm / 100;
	int Cm = Result_cm % 100;
	return DB(M, Cm);
}
int main() {
	DM dm1;
	DB db1;
	cin >> dm1;
	cout << dm1;
	cin >> db1;
	cout << db1;
	DB sum = add(db1, dm1);
	cout << "After Addition : ";
	cout << sum;
	return 0;
}