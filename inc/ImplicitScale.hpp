/*
 * ImplicitScale
 *
 * File: 	ImplicitScale.hpp
 * Author:	Evan Wilde		<etcwilde@uvic.ca>
 * Date:	Mar 25 2015
 */

#ifndef IMPLICIT_SCALE_HPP
#define IMPLICIT_SCALE_HPP
#include "ImplicitTransform.hpp"

namespace Implicit
{
	/**
	 * \brief Scales the implicit object represented by the child
	 */
	class Scale : public Transform
	{
	public:
		/**
		 * \brief Scale implicit object
		 *
		 * Scales the implicit object non-uniformly in the x, y, z,
		 * axes.
		 *
		 * \param child Object to be scaled
		 * \param scale amount to scale on each axis
		 */
		Scale(Object* child, const glm::vec3& scale);

		/**
		 * \brief Scale implicit object
		 *
		 * Scales the implicit object non-uniformly in the x, y, z,
		 * axes.
		 *
		 * \param child Object to be scaled
		 * \param x Scale factor on the x axis
		 * \param y Scale factor on the y axis
		 * \param z Scale factor on the z axis
		 */
		Scale(Object* child, float x, float y, float z);
		/**
		 * \brief Scale implicit object
		 *
		 * Scales the implicit object uniformly along all axes.
		 *
		 * \param child Object to be scaled
		 * \param s Uniform scale factor
		 */
		Scale(Object* child, float s);

		virtual glm::vec3 Normal(const glm::vec3& point);
	private:
		glm::mat4 m_normal_conversion;
	};
};
#endif//IMPLICIT_SCALE_HPP
