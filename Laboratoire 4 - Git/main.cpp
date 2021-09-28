/*
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on 28 septembre 2021, 08:44
 */

#include <cstdlib>
#include <iostream>
#include "Sphere.h"

using namespace std;


int
main (int argc, char** argv)
{
  math::Sphere maSphere1 (4);

  cout << maSphere1.reqVolumeFormate ();

  return 0;
}

