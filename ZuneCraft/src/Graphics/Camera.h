#pragma once

#include <glm/glm.hpp>

namespace ZuneCraft {
	enum Direction {
		FORWARD,
		BACKWARD,
		LEFT,
		RIGHT,
		UP,
		DOWN
	};

	class Camera {
	public:
		Camera();
		void Rotate(const glm::vec2& offset, bool resetStartPoint);

		const glm::vec3& GetForwardVector();
		const glm::vec3& GetRightVector();

		void SetPosition(const glm::vec3& pos);

		glm::mat4 GetViewMatrix();
	private:
		void UpdateVectors();
		glm::vec3 m_Pos, m_Front, m_Right, m_Up, m_WorldUp;
		float m_Pitch, m_Yaw;
	};
}