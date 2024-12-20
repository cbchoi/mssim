#pragma once

#include <string>
#include <iostream>

#include "coupled_model.hpp"
#include "definition.hpp"
#include "state.hpp"
#include "port.hpp"
#include "message_deliverer.hpp"

#include "model_wait_and_go.hpp"

using namespace evsim;

class CSkeletonCoupled :public CCoupledModel
{
public:
	CSkeletonCoupled(std::string name) :evsim::CCoupledModel(name)
	{

	}
};
