#include<iostream>
using namespace std;
//***** START TASK 1*****
//template<typename T>
//GetMax(T a,T b){
//if(a>b)
//	return a;
//	else
//		return b;
//}
//template<typename T>
//GetMin(T a,T b){
//if(a<b)
//	return a;
//	else
//		return b;
//}
//template<typename T,typename t>
//GetMax(T a,t b){
//	if(a>b)
//	return a;
//	 else
//	 return b;
//}
//template<typename T,typename t>
//GetMin(T a,t b){
//	if(a<b)
//	return a;
//	 else
///	 return b;
//}
//int main(){
 //int i = 5, j = 6, k;
 //long l = 10, m = 5, n;
 //k = GetMax<int>(i, j);
 //n = GetMin<long>(l, m);
 //cout << k << endl;
 //cout << n << endl;
 //return 0;
//}
//int main(){
// int i = 5, j = 6, k;
// long l = 10, m = 5, n;
// k = GetMax(i, j);
// n = GetMin(l, m);
// cout << k << endl;
// cout << n << endl;
// return 0;
//}
//Task 1: Yes by removing class identifier of template functions in the main, the code still works.But using any datatype instead of typename then the code produces an error.
//int main(){
 //char i = 'Z';
 //int j = 6, k;
 //long l = 10, m = 5, n;
 //k = GetMax<char, long>(i, m);
 //n = GetMin<int, long>(j, l);
 //cout << k << endl;
 //cout << n << endl;
 //return 0;
//}
//int main(){
 //char i = 'Z';
 //int j = 6, k;
 //long l = 10, m = 5, n;
 //k = GetMax(i, m);
 //n = GetMin(j, l);
 //cout << k << endl;
 //cout << n << endl;
 ///return 0;
//}
//Task 1: Yes by removing class identifiers of template functions in the main, the code still works.But using any datatype instead of typename then the code produces an error.
//*****END TASK 1*****

//*****START TASK 2*****
//template<class T>
//class Pair{
//	private:
//		T values[2];
//		public:
//			Pair(T n1=0,T n2=0){
//				values[0]=n1;
//				values[1]=n2;
//			}
//			T getmax(){
//				if(values[0]>values[1])
//				return values[0];
//				 else
//				 return values[1];
//			}
//		 T getmin();	
//};
// template <class T>
//T Pair<T>::getmin(){
//	if(values[0]<values[1])
//				return values[0];
//				 else
//				 return values[1];
//			}
//int main(){
// Pair <double> myobject (1.012, 1.01234);
// cout << myobject.getmax();
// return 0;
//}
//*****END TASK 2*****

//*****START TASK 3*****
//template <class T>
//class Container{
//	T v1;
//	public:
//		Container(T val1){
//			v1=val1;
//		}
//		T inc(){
//			v1++;
//			return v1;
//		}
//};
//template<>
//class Container<char>{
//	char v1;
//public:
//	char uppercase(){
//		return v1;
//	}
//};
//	int main(){
 //Container<int> myint (7);
 //Container<char> mychar ('j');
 //cout << myint.inc() << endl;
 //cout << mychar.uppercase() << endl;
 //return 0;
//}
//*****END TASK 3*****
