/*
 * ImplicitUnion
 *
 * File: 	ImplicitUnion.hpp
 * Author:	Evan Wilde		<etcwilde@uvic.ca>
 * Date:	Mar 22 2015
 */

#ifndef IMPLICIT_UNION_HPP
#define IMPLICIT_UNION_HPP
#include <algorithm>

#include "ImplicitObject.hpp"

namespace Implicit
{
	class Union : public Object
	{
	public:
		/**
		 * \brief Construct a union object
		 * uses default iso value of 0.5
		 */
		Union();

		Union(float iso);

		virtual float Evaluate(glm::vec3 point);
		virtual float FieldValue(glm::vec3 point);

		virtual glm::vec3 Normal(glm::vec3 point);
	};
};

#endif//IMPLICIT_UNION_HPP
