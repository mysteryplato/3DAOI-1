#include "SubItem.hpp"

using namespace Job;

//>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// constructor & destructor

SubItem::SubItem()
{
    try
    {
        this->m_pAlg = new Alg2D;
        this->m_itemType = ItemType::SUBITEM;
    }
    CATCH_AND_RETHROW_EXCEPTION_WITH_OBJ("构造函数出错");
}

SubItem::~SubItem()
{
    try
    {
        if(nullptr == this->m_pAlg)
        {
            delete this->m_pAlg;
        }
    }
    catch(...)
    {
        if(nullptr == this->m_pAlg)
        {
            delete this->m_pAlg;
        }
    }
}

//<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------mm
