/**
 * \file Sphere.h
 * \brief Prototype des fonctions de la classe Sphere.
 * \author etudiant
 * \version 0.1
 * \date 2015-06-12
 */
#ifndef SPHERE_H_
#define SPHERE_H_

#include <string>

namespace math
{
/**
 * \class Sphere
 * \brief Classe modélisant l'interface d'une sphère.
 */
class Sphere
{
public:
	Sphere(double p_rayon=0); //constructeur avec paramètre
	double reqRayon() const;
	void asgRayon(double p_nouveauRayon);
	double volumeSphere() const; //calcul du volume
	std::string reqVolumeFormate() const; // affichage en chaîne de caractère

private:
	double m_rayon;
};

} /* namespace math */

#endif /* SPHERE_H_ */
