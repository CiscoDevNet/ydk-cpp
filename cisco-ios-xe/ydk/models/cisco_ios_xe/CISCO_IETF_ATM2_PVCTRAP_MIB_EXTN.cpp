
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN.hpp"

namespace ydk {
namespace CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN {

CiscoIetfAtm2PvctrapMibExtn::CiscoIetfAtm2PvctrapMibExtn()
    :
    atmcurrentstatuschangepvcltable_(std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable>())
	,atmstatuschangepvclrangetable_(std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable>())
{
    atmcurrentstatuschangepvcltable_->parent = this;

    atmstatuschangepvclrangetable_->parent = this;

    yang_name = "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN"; yang_parent_name = "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN";
}

CiscoIetfAtm2PvctrapMibExtn::~CiscoIetfAtm2PvctrapMibExtn()
{
}

bool CiscoIetfAtm2PvctrapMibExtn::has_data() const
{
    return (atmcurrentstatuschangepvcltable_ !=  nullptr && atmcurrentstatuschangepvcltable_->has_data())
	|| (atmstatuschangepvclrangetable_ !=  nullptr && atmstatuschangepvclrangetable_->has_data());
}

bool CiscoIetfAtm2PvctrapMibExtn::has_operation() const
{
    return is_set(operation)
	|| (atmcurrentstatuschangepvcltable_ !=  nullptr && atmcurrentstatuschangepvcltable_->has_operation())
	|| (atmstatuschangepvclrangetable_ !=  nullptr && atmstatuschangepvclrangetable_->has_operation());
}

std::string CiscoIetfAtm2PvctrapMibExtn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN";

    return path_buffer.str();

}

const EntityPath CiscoIetfAtm2PvctrapMibExtn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfAtm2PvctrapMibExtn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmCurrentStatusChangePVclTable")
    {
        if(atmcurrentstatuschangepvcltable_ == nullptr)
        {
            atmcurrentstatuschangepvcltable_ = std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable>();
        }
        return atmcurrentstatuschangepvcltable_;
    }

    if(child_yang_name == "atmStatusChangePVclRangeTable")
    {
        if(atmstatuschangepvclrangetable_ == nullptr)
        {
            atmstatuschangepvclrangetable_ = std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable>();
        }
        return atmstatuschangepvclrangetable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfAtm2PvctrapMibExtn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atmcurrentstatuschangepvcltable_ != nullptr)
    {
        children["atmCurrentStatusChangePVclTable"] = atmcurrentstatuschangepvcltable_;
    }

    if(atmstatuschangepvclrangetable_ != nullptr)
    {
        children["atmStatusChangePVclRangeTable"] = atmstatuschangepvclrangetable_;
    }

    return children;
}

void CiscoIetfAtm2PvctrapMibExtn::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIetfAtm2PvctrapMibExtn::clone_ptr() const
{
    return std::make_shared<CiscoIetfAtm2PvctrapMibExtn>();
}

std::string CiscoIetfAtm2PvctrapMibExtn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfAtm2PvctrapMibExtn::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfAtm2PvctrapMibExtn::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvcltable()
{
    yang_name = "atmCurrentStatusChangePVclTable"; yang_parent_name = "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN";
}

CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::~Atmcurrentstatuschangepvcltable()
{
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::has_data() const
{
    for (std::size_t index=0; index<atmcurrentstatuschangepvclentry_.size(); index++)
    {
        if(atmcurrentstatuschangepvclentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::has_operation() const
{
    for (std::size_t index=0; index<atmcurrentstatuschangepvclentry_.size(); index++)
    {
        if(atmcurrentstatuschangepvclentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmCurrentStatusChangePVclTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmCurrentStatusChangePVclEntry")
    {
        for(auto const & c : atmcurrentstatuschangepvclentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry>();
        c->parent = this;
        atmcurrentstatuschangepvclentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmcurrentstatuschangepvclentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::Atmcurrentstatuschangepvclentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    atmpvclstatuschangeend{YType::uint32, "atmPVclStatusChangeEnd"},
    atmpvclstatuschangestart{YType::uint32, "atmPVclStatusChangeStart"},
    atmpvclstatustransition{YType::uint32, "atmPVclStatusTransition"}
{
    yang_name = "atmCurrentStatusChangePVclEntry"; yang_parent_name = "atmCurrentStatusChangePVclTable";
}

CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::~Atmcurrentstatuschangepvclentry()
{
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| atmpvclstatuschangeend.is_set
	|| atmpvclstatuschangestart.is_set
	|| atmpvclstatustransition.is_set;
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(atmvclvci.operation)
	|| is_set(atmpvclstatuschangeend.operation)
	|| is_set(atmpvclstatuschangestart.operation)
	|| is_set(atmpvclstatustransition.operation);
}

std::string CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmCurrentStatusChangePVclEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN/atmCurrentStatusChangePVclTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.operation)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (atmpvclstatuschangeend.is_set || is_set(atmpvclstatuschangeend.operation)) leaf_name_data.push_back(atmpvclstatuschangeend.get_name_leafdata());
    if (atmpvclstatuschangestart.is_set || is_set(atmpvclstatuschangestart.operation)) leaf_name_data.push_back(atmpvclstatuschangestart.get_name_leafdata());
    if (atmpvclstatustransition.is_set || is_set(atmpvclstatustransition.operation)) leaf_name_data.push_back(atmpvclstatustransition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci = value;
    }
    if(value_path == "atmPVclStatusChangeEnd")
    {
        atmpvclstatuschangeend = value;
    }
    if(value_path == "atmPVclStatusChangeStart")
    {
        atmpvclstatuschangestart = value;
    }
    if(value_path == "atmPVclStatusTransition")
    {
        atmpvclstatustransition = value;
    }
}

CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangetable()
{
    yang_name = "atmStatusChangePVclRangeTable"; yang_parent_name = "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN";
}

CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::~Atmstatuschangepvclrangetable()
{
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::has_data() const
{
    for (std::size_t index=0; index<atmstatuschangepvclrangeentry_.size(); index++)
    {
        if(atmstatuschangepvclrangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<atmstatuschangepvclrangeentry_.size(); index++)
    {
        if(atmstatuschangepvclrangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmStatusChangePVclRangeTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmStatusChangePVclRangeEntry")
    {
        for(auto const & c : atmstatuschangepvclrangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry>();
        c->parent = this;
        atmstatuschangepvclrangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmstatuschangepvclrangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::Atmstatuschangepvclrangeentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    rangeindex{YType::uint32, "rangeIndex"},
    atmpvclhigherrangevalue{YType::int32, "atmPVclHigherRangeValue"},
    atmpvcllowerrangevalue{YType::int32, "atmPVclLowerRangeValue"},
    atmpvclrangestatuschangeend{YType::uint32, "atmPVclRangeStatusChangeEnd"},
    atmpvclrangestatuschangestart{YType::uint32, "atmPVclRangeStatusChangeStart"}
{
    yang_name = "atmStatusChangePVclRangeEntry"; yang_parent_name = "atmStatusChangePVclRangeTable";
}

CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::~Atmstatuschangepvclrangeentry()
{
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| rangeindex.is_set
	|| atmpvclhigherrangevalue.is_set
	|| atmpvcllowerrangevalue.is_set
	|| atmpvclrangestatuschangeend.is_set
	|| atmpvclrangestatuschangestart.is_set;
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(rangeindex.operation)
	|| is_set(atmpvclhigherrangevalue.operation)
	|| is_set(atmpvcllowerrangevalue.operation)
	|| is_set(atmpvclrangestatuschangeend.operation)
	|| is_set(atmpvclrangestatuschangestart.operation);
}

std::string CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmStatusChangePVclRangeEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[rangeIndex='" <<rangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN/atmStatusChangePVclRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (rangeindex.is_set || is_set(rangeindex.operation)) leaf_name_data.push_back(rangeindex.get_name_leafdata());
    if (atmpvclhigherrangevalue.is_set || is_set(atmpvclhigherrangevalue.operation)) leaf_name_data.push_back(atmpvclhigherrangevalue.get_name_leafdata());
    if (atmpvcllowerrangevalue.is_set || is_set(atmpvcllowerrangevalue.operation)) leaf_name_data.push_back(atmpvcllowerrangevalue.get_name_leafdata());
    if (atmpvclrangestatuschangeend.is_set || is_set(atmpvclrangestatuschangeend.operation)) leaf_name_data.push_back(atmpvclrangestatuschangeend.get_name_leafdata());
    if (atmpvclrangestatuschangestart.is_set || is_set(atmpvclrangestatuschangestart.operation)) leaf_name_data.push_back(atmpvclrangestatuschangestart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "rangeIndex")
    {
        rangeindex = value;
    }
    if(value_path == "atmPVclHigherRangeValue")
    {
        atmpvclhigherrangevalue = value;
    }
    if(value_path == "atmPVclLowerRangeValue")
    {
        atmpvcllowerrangevalue = value;
    }
    if(value_path == "atmPVclRangeStatusChangeEnd")
    {
        atmpvclrangestatuschangeend = value;
    }
    if(value_path == "atmPVclRangeStatusChangeStart")
    {
        atmpvclrangestatuschangestart = value;
    }
}


}
}

