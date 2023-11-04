#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        /*  hex - output stream to hexadecimal any subsequent
            integer values that are output using cout will be 
            displayed in hexadecimal format. */
            
        /*  showbase - specifies that the "0x" prefix should be 
            shown for hexadecimal values*/
            
        cout << hex << left << showbase << nouppercase;
        cout << (long long) A << endl;
        
        /*  showpos - specifies that the sign of positive numbers 
            should be shown with a plus sign ('+'). 
            B is positive, so it is displayed with a plus sign.*/
        cout << dec << right << setw(15) << setfill('_') << showpos
             << fixed << setprecision(2);
        cout << B << endl;
        
        cout << scientific << uppercase << noshowpos << setprecision(9);
        cout << C << endl;

	}
	return 0;

}