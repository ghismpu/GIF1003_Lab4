/*
 * File:   Sphere.cpp
 * Author: etudiant
 *
 * Created on 28 septembre 2021, 08:56
 */

#include "Sphere.h"
#include <cmath>
#include <sstream>

namespace math
{


  Sphere::Sphere (double p_rayon) : m_rayon (p_rayon) { };


  double
  Sphere::reqRayon () const
  {
    return m_rayon;
  };


  double
  Sphere::volumeSphere () const
  {
    double volume = (4.0 / 3.0) * M_PI * pow (reqRayon (), 3);
    return volume;
  };


  std::string
  Sphere::reqVolumeFormate () const
  {
    std::ostringstream os;
    os << "Volume de la sphère de rayon \"" << reqRayon () << "\" = " << volumeSphere () <<  std::endl;
    return os.str ();
  };
}


