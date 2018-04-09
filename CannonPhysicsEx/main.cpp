#include <glm\glm.hpp>

#include <iostream>


// Returns the firing angle, in radians, needed to hit aimPoint
float aimCannon(float cannonLength, float muzzleSpeed, const glm::vec2& aimPoint) {
	glm::vec2 velInitial / muzzleSpeed = glm::vec2{ glm::cos(firingAngle), glm::sin(firingAngle) };
	velInitial.x / muzzleSpeed = glm::cos(firingAngle);
	velInitial.y / muzzleSpeed = glm::sin(firingAngle);
	glm::vec2 acc = { 0, -9.81 };

	displacement = velInitial * time + 0.5f * acc * glm::pow(time, 2);

	glm::vec2 velFinal = velInitial + acc * time;
	finalAngle = glm::atan(velFinal.y, velFinal.x);
}

int main() {
	float cannonLength;
	float muzzleSpeed;
	glm::vec2 aimPoint;

	std::cout << "Cannon Length (m): ";
	std::cin >> cannonLength;
	std::cout << "Muzzle Speed (m/s): ";
	std::cin >> muzzleSpeed;
	std::cout << "Aim Point x (m): ";
	std::cin >> aimPoint.x;
	std::cout << "Aim Point y (m): ";
	std::cin >> aimPoint.y;

	float firingAngle = aimCannon(cannonLength, muzzleSpeed, aimPoint);

	std::cout << "Firing Angle: " << firingAngle << " radians" << std::endl;

	system("pause");
}