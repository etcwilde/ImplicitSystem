/*
 * ImplicitOperator
 *
 * File: 	ImplicitOperator.cpp
 * Author:	Evan Wilde		<etcwilde@uvic.ca>
 * Date:	Mar 23 2015
 */

#include "ImplicitOperator.hpp"

using namespace Implicit;

Operator::Operator(Object* left, Object* right) :
	m_left_child(left),
	m_right_child(right)
{
	m_iso = (left->GetIso() + right->GetIso()) / 2.f;
}

Operator::Operator(Object* left, Object* right, float iso) :
	Object(iso),
	m_left_child(left),
	m_right_child(right)
{ }

glm::vec3 Operator::GetStartVertex()
{
	return Project(GetCenterVertex());
}

glm::vec3 Operator::GetCenterVertex()
{
	return (m_left_child->GetCenterVertex()-m_right_child->GetCenterVertex())*0.5f;
}

Aabb Operator::GetBoundingBox()
{
	Aabb ret_box;
	ret_box.add(m_left_child->GetBoundingBox());
	ret_box.add(m_right_child->GetBoundingBox());
	return ret_box;
}
