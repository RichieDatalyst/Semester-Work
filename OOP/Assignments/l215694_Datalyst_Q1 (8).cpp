#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void letterfrequencyfunction(char* str) {
    int ccount = 0;
    for (int i = 0; *(str + i) != '\0'; i++) {
        if ((*(str + i) >= 'a' && *(str + i) <= 'z') || *(str + i) >= 'A' && *(str + i) <= 'Z') {
            ccount++;
        }
    }
    cout << "Number of consonants : " << ccount << endl;
    char* consarray = new char[ccount];
    int count = 0;
    for (int i = 0; *(str + i) != '\0'; i++) {
        if ((*(str + i) >= 'a' && *(str + i) <= 'z') || *(str + i) >= 'A' && *(str + i) <= 'Z') {
            *(consarray + count) = *(str + i);
            count++;
        }
    }
    //for (int j = 0; j < ccount; j++) {
      //  for (int i = 0; i < ccount; i++) {
        //    if (*(consarray + i) < *(consarray + i + 1)) {
          //      char temp = *(consarray + i + 1);
            //    *(consarray + i + 1) = *(consarray + i);
              //  *(consarray + i) = temp;
        //    }
        //}
    //}
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    a = b = c = d = e = f = g = h = i = j = k = l = m = n = o = p = q = r = s = t = u = v = w = x = y = z = 0;
    // for (int i = 0; i < ccount; i++) {
      //   cout << *(consarray + i) << " " << endl;
     //}
    for (int alp = 0; alp < ccount; alp++) {
        if (*(consarray + alp) == 'a' || *(consarray + alp) == 'A') {
            a++;
        }
        else if (*(consarray + alp) == 'b' || *(consarray + alp) == 'B') {
            b++;
        }
        else if (*(consarray + alp) == 'c' || *(consarray + alp) == 'C') {
            c++;
        }
        else if (*(consarray + alp) == 'd' || *(consarray + alp) == 'D') {
            d++;
        }
        else if (*(consarray + alp) == 'e' || *(consarray + alp) == 'E') {
            e++;
        }
        else if (*(consarray + alp) == 'f' || *(consarray + alp) == 'F') {
            f++;
        }
        else if (*(consarray + alp) == 'g' || *(consarray + alp) == 'G') {
            g++;
        }
        else if (*(consarray + alp) == 'h' || *(consarray + alp) == 'H') {
            h++;
        }
        else if (*(consarray + alp) == 'i' || *(consarray + alp) == 'I') {
            i++;
        }
        else if (*(consarray + alp) == 'j' || *(consarray + alp) == 'J') {
            j++;
        }
        else if (*(consarray + alp) == 'k' || *(consarray + alp) == 'K') {
            k++;
        }
        else if (*(consarray + alp) == 'l' || *(consarray + alp) == 'L') {
            l++;
        }
        else if (*(consarray + alp) == 'm' || *(consarray + alp) == 'M') {
            m++;
        }
        else if (*(consarray + alp) == 'n' || *(consarray + alp) == 'N') {
            n++;
        }
        else if (*(consarray + alp) == 'o' || *(consarray + alp) == 'O') {
            o++;
        }
        else if (*(consarray + alp) == 'p' || *(consarray + alp) == 'P') {
            p++;
        }
        else if (*(consarray + alp) == 'q' || *(consarray + alp) == 'Q') {
            q++;
        }
        else if (*(consarray + alp) == 'r' || *(consarray + alp) == 'R') {
            r++;
        }
        else if (*(consarray + alp) == 's' || *(consarray + alp) == 'S') {
            s++;
        }
        else if (*(consarray + alp) == 't' || *(consarray + alp) == 'T') {
            t++;
        }
        else if (*(consarray + alp) == 'v' || *(consarray + alp) == 'V') {
            v++;
        }
        else if (*(consarray + alp) == 'w' || *(consarray + alp) == 'W') {
            w++;
        }
        else if (*(consarray + alp) == 'x' || *(consarray + alp) == 'X') {
            x++;
        }
        else if (*(consarray + alp) == 'y' || *(consarray + alp) == 'Y') {
            y++;
        }
        else if (*(consarray + alp) == 'z' || *(consarray + alp) == 'Z') {
            z++;
        }
    }
    cout << "Total " << "'a' : " << a << endl;
    cout << "Total " << "'b' : " << b << endl;
    cout << "Total " << "'c' : " << c << endl;
    cout << "Total " << "'d' : " << d << endl;
    cout << "Total " << "'e' : " << e << endl;
    cout << "Total " << "'f' : " << f << endl;
    cout << "Total " << "'g' : " << g << endl;
    cout << "Total " << "'h' : " << h << endl;
    cout << "Total " << "'i' : " << i << endl;
    cout << "Total " << "'j' : " << j << endl;
    cout << "Total " << "'k' : " << k << endl;
    cout << "Total " << "'l' : " << l << endl;
    cout << "Total " << "'m' : " << m << endl;
    cout << "Total " << "'n' : " << n << endl;
    cout << "Total " << "'o' : " << o << endl;
    cout << "Total " << "'p' : " << p << endl;
    cout << "Total " << "'q' : " << q << endl;
    cout << "Total " << "'r' : " << r << endl;
    cout << "Total " << "'s' : " << s << endl;
    cout << "Total " << "'t' : " << t << endl;
    cout << "Total " << "'u' : " << u << endl;
    cout << "Total " << "'v' : " << v << endl;
    cout << "Total " << "'w' : " << w << endl;
    cout << "Total " << "'x' : " << x << endl;
    cout << "Total " << "'y' : " << y << endl;
    cout << "Total " << "'z' : " << z << endl;
    delete[]str;
    delete[]consarray;
}
int main() {
    int size;
    char* str = new char[size];
    cout << "Enter Number Of Size : ";
    cin >> size;
    cin.ignore();
    cout << "Enter String : ";
    cin.getline(str, size);
    cout << str << endl;
    letterfrequencyfunction(str);
    return 0;
}
