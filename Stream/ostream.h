#include <cstdio>
#include <iostream>

namespace Ostream
{
	using namespace std;
	class ostream {
	public:
		void operator<<(char * str) {
			printf("%s", str);
		}
		void operator<<(char str) {
			printf("%c", str);
		}
		void operator<<(int num) {
			printf("%d", num);
		}
		void operator<< (double e) {
			printf("%.3lf", e);
		}
		void operator<< (ostream(*fp)(ostream &ostm))
		{
			fp(*this);
		}

	};
	ostream& endl(ostream& ostm)
	{
		ostm << '\n';
		fflush(stdout);
		return ostm;
	}

	ostream cout;
}
