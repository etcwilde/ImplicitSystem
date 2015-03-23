#ifndef IMPLICIT_OPERATOR_HPP
#define IMPLICIT_OPERATOR_HPP

#include "ImplicitObject.hpp"

namespace Implicit
{
	class Operator : public Object
	{
	public:
		/**
		 * \brief Creates a new binary operator
		 * Iso values are averaged between the two objects
		 * \param left Address of Object on left side
		 * \param right Address of Object on right side
		 */
		Operator(Object* left, Object* right);

		/**
		 * \brief Creates a new binary operator
		 *
		 * \param left Address of Object on left side
		 * \param right Address of Object on right side
		 * \param iso Iso value where surface exists
		 */
		Operator(Object* left, Object* right, float iso);

		virtual float Evaluate(glm::vec3 point)=0;
		virtual float FieldValue(glm::vec3 point)=0;
		virtual glm::vec3 Normal(glm::vec3 point)=0;
	protected:
		Object* m_left_child;
		Object* m_right_child;
	private:
	};
};

#endif//IMPLICIT_OPERATOR_HPP
