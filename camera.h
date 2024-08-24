#pragma once

class Camera {
public:
	glm::vec3 pos;
	glm::vec3 front;
	glm::vec3 up;;

	float yaw;
	float pitch;

	float sensitivity;
	Camera() {
		pos = glm::vec3(0.0f, 0.0f, 3.0f);
		front = glm::vec3(0.0f, 0.0f, -1.0f);
		up = glm::vec3(0.0f, 1.0f, 0.0f);

		yaw = -90.0f;
		pitch = 0.0f;

		sensitivity = 0.1f;
	}
};