#include "CustomException.hpp"

using namespace SSDK;

//>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// constructor & destructor

CustomException::CustomException(std::string &message)
{
    this->m_originalMsg = message;
}

CustomException::~CustomException()
{

}

//<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

