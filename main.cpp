#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include "header.h"
#include "initial.h"
#include "discrete.h"
#include "interpolation.h"
#include "HE.h"
#include "HB.h"
#include "H1.h"
#include "H2.h"
#include "H3.h"

//#include "E:\eigen/Eigen/Dense"
//using namespace std;
//using namespace Eigen;


int main()
{	
	partical_initial();
	cout << "partical_initial finished!" << endl;
	f_initial();
	cout << "f_initial finished!" << endl;
	EB_initial;
	cout << "Initilaize finished!" << endl;
	HE();
	cout << "HE finished!" << endl;
	HB();
	cout << "HB finished!" << endl;
	H1();
	cout << "H1 finished!" << endl;
	H2();
	cout << "H2 finished!" << endl;
	H3();
	cout << "finally, finished!" << endl;
	return 0;
}


