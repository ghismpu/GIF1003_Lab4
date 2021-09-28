/**
 * \file Utilisation.cpp
 * \brief Programme pilote pour tester la classe Sphere.
 * \author etudiant
 * \version 0.1
 * \date 2015-06-12
 */

#include "Sphere.h"
#include <iostream>

using namespace std;
using namespace math;

int main()
{
	Sphere maSphere(4);
	cout << maSphere.reqVolumeFormate() << endl;
	return 0;
}
