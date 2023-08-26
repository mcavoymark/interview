// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"

//using namespace std;

class Fibo_bufferupdate {
	public:
		int fibo_bufferupdate(int count, int nback);
};

// Fibonacci F[n] = F[n-1] + F[n-2]
// Instead of thinking of it as shifting numbers in a buffer size nback+1
// Think of it as the a buffer of size nback, where the bins are updated sequentially every nback cycles
int Fibo_bufferupdate::fibo_bufferupdate(int count, int nback) {
	std::vector<int> buf(nback, 0);
	buf[1] = 1;

	int logic=count;
	for (int i = 2; i <= count; ++i) {
		logic = i % nback; //check
		//std::cout << "i=" << i << " logic = " << logic << std::endl;
		for (int j = 0; j < nback; ++j) {
			if (j != logic) buf[logic] += buf[j]; //if correct, not elegant
		}
	}
	return buf[logic];
}

int main()
{
	//cout << "Hello CMake." << endl;

	Fibo_bufferupdate fbu;
	int nback = 3;
	std::vector<int> count = { 0,1,2,3,4,5,6,7,8,9,10 };
	for (auto i : count) {
		std::cout << "nback=" << nback << " count= " << i << " result=" << fbu.fibo_bufferupdate(i, nback) << std::endl;
	}
	
	
	
	return 0;
}
