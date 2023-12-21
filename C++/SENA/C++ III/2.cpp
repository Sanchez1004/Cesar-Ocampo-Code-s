#include <iostream>
#include <string>

using namespace std;

class P {
	private:
		int a, A;
		double b, B;
		string c, C;
	public:
		P(){	}
		
		void Entero(int x, int y) {
			this->a = x;
			this->A = y;
		}
		
		void Doble(double x, double y) {
			this->b = x;
			this->B = y;
		}
		
		void Letra(string x, string y) {
			this->c = x;
			this->C = y;
		}
};

int main(){
	P a;
	
	system("pause");
	return 0;
}

