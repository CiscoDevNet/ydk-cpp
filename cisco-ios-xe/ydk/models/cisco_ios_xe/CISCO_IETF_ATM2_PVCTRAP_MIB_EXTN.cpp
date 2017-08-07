
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN {

CiscoIetfAtm2PvctrapMibExtn::CiscoIetfAtm2PvctrapMibExtn()
    :
    atmcurrentstatuschangepvcltable(std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable>())
	,atmstatuschangepvclrangetable(std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable>())
{
    atmcurrentstatuschangepvcltable->parent = this;

    atmstatuschangepvclrangetable->parent = this;

    yang_name = "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN"; yang_parent_name = "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN";
}

CiscoIetfAtm2PvctrapMibExtn::~CiscoIetfAtm2PvctrapMibExtn()
{
}

bool CiscoIetfAtm2PvctrapMibExtn::has_data() const
{
    return (atmcurrentstatuschangepvcltable !=  nullptr && atmcurrentstatuschangepvcltable->has_data())
	|| (atmstatuschangepvclrangetable !=  nullptr && atmstatuschangepvclrangetable->has_data());
}

bool CiscoIetfAtm2PvctrapMibExtn::has_operation() const
{
    return is_set(yfilter)
	|| (atmcurrentstatuschangepvcltable !=  nullptr && atmcurrentstatuschangepvcltable->has_operation())
	|| (atmstatuschangepvclrangetable !=  nullptr && atmstatuschangepvclrangetable->has_operation());
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
        if(atmcurrentstatuschangepvcltable == nullptr)
        {
            atmcurrentstatuschangepvcltable = std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable>();
        }
        return atmcurrentstatuschangepvcltable;
    }

    if(child_yang_name == "atmStatusChangePVclRangeTable")
    {
        if(atmstatuschangepvclrangetable == nullptr)
        {
            atmstatuschangepvclrangetable = std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable>();
        }
        return atmstatuschangepvclrangetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfAtm2PvctrapMibExtn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atmcurrentstatuschangepvcltable != nullptr)
    {
        children["atmCurrentStatusChangePVclTable"] = atmcurrentstatuschangepvcltable;
    }

    if(atmstatuschangepvclrangetable != nullptr)
    {
        children["atmStatusChangePVclRangeTable"] = atmstatuschangepvclrangetable;
    }

    return children;
}

void CiscoIetfAtm2PvctrapMibExtn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfAtm2PvctrapMibExtn::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CiscoIetfAtm2PvctrapMibExtn::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIetfAtm2PvctrapMibExtn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmCurrentStatusChangePVclTable" || name == "atmStatusChangePVclRangeTable")
        return true;
    return false;
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
    for (std::size_t index=0; index<atmcurrentstatuschangepvclentry.size(); index++)
    {
        if(atmcurrentstatuschangepvclentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::has_operation() const
{
    for (std::size_t index=0; index<atmcurrentstatuschangepvclentry.size(); index++)
    {
        if(atmcurrentstatuschangepvclentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : atmcurrentstatuschangepvclentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry>();
        c->parent = this;
        atmcurrentstatuschangepvclentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmcurrentstatuschangepvclentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmCurrentStatusChangePVclEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(atmvclvci.yfilter)
	|| ydk::is_set(atmpvclstatuschangeend.yfilter)
	|| ydk::is_set(atmpvclstatuschangestart.yfilter)
	|| ydk::is_set(atmpvclstatustransition.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.yfilter)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (atmpvclstatuschangeend.is_set || is_set(atmpvclstatuschangeend.yfilter)) leaf_name_data.push_back(atmpvclstatuschangeend.get_name_leafdata());
    if (atmpvclstatuschangestart.is_set || is_set(atmpvclstatuschangestart.yfilter)) leaf_name_data.push_back(atmpvclstatuschangestart.get_name_leafdata());
    if (atmpvclstatustransition.is_set || is_set(atmpvclstatustransition.yfilter)) leaf_name_data.push_back(atmpvclstatustransition.get_name_leafdata());


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

void CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
        atmvclvpi.value_namespace = name_space;
        atmvclvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci = value;
        atmvclvci.value_namespace = name_space;
        atmvclvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclStatusChangeEnd")
    {
        atmpvclstatuschangeend = value;
        atmpvclstatuschangeend.value_namespace = name_space;
        atmpvclstatuschangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclStatusChangeStart")
    {
        atmpvclstatuschangestart = value;
        atmpvclstatuschangestart.value_namespace = name_space;
        atmpvclstatuschangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclStatusTransition")
    {
        atmpvclstatustransition = value;
        atmpvclstatustransition.value_namespace = name_space;
        atmpvclstatustransition.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci.yfilter = yfilter;
    }
    if(value_path == "atmPVclStatusChangeEnd")
    {
        atmpvclstatuschangeend.yfilter = yfilter;
    }
    if(value_path == "atmPVclStatusChangeStart")
    {
        atmpvclstatuschangestart.yfilter = yfilter;
    }
    if(value_path == "atmPVclStatusTransition")
    {
        atmpvclstatustransition.yfilter = yfilter;
    }
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "atmVclVci" || name == "atmPVclStatusChangeEnd" || name == "atmPVclStatusChangeStart" || name == "atmPVclStatusTransition")
        return true;
    return false;
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
    for (std::size_t index=0; index<atmstatuschangepvclrangeentry.size(); index++)
    {
        if(atmstatuschangepvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<atmstatuschangepvclrangeentry.size(); index++)
    {
        if(atmstatuschangepvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : atmstatuschangepvclrangeentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry>();
        c->parent = this;
        atmstatuschangepvclrangeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmstatuschangepvclrangeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmStatusChangePVclRangeEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(rangeindex.yfilter)
	|| ydk::is_set(atmpvclhigherrangevalue.yfilter)
	|| ydk::is_set(atmpvcllowerrangevalue.yfilter)
	|| ydk::is_set(atmpvclrangestatuschangeend.yfilter)
	|| ydk::is_set(atmpvclrangestatuschangestart.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (rangeindex.is_set || is_set(rangeindex.yfilter)) leaf_name_data.push_back(rangeindex.get_name_leafdata());
    if (atmpvclhigherrangevalue.is_set || is_set(atmpvclhigherrangevalue.yfilter)) leaf_name_data.push_back(atmpvclhigherrangevalue.get_name_leafdata());
    if (atmpvcllowerrangevalue.is_set || is_set(atmpvcllowerrangevalue.yfilter)) leaf_name_data.push_back(atmpvcllowerrangevalue.get_name_leafdata());
    if (atmpvclrangestatuschangeend.is_set || is_set(atmpvclrangestatuschangeend.yfilter)) leaf_name_data.push_back(atmpvclrangestatuschangeend.get_name_leafdata());
    if (atmpvclrangestatuschangestart.is_set || is_set(atmpvclrangestatuschangestart.yfilter)) leaf_name_data.push_back(atmpvclrangestatuschangestart.get_name_leafdata());


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

void CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
        atmvclvpi.value_namespace = name_space;
        atmvclvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rangeIndex")
    {
        rangeindex = value;
        rangeindex.value_namespace = name_space;
        rangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclHigherRangeValue")
    {
        atmpvclhigherrangevalue = value;
        atmpvclhigherrangevalue.value_namespace = name_space;
        atmpvclhigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclLowerRangeValue")
    {
        atmpvcllowerrangevalue = value;
        atmpvcllowerrangevalue.value_namespace = name_space;
        atmpvcllowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclRangeStatusChangeEnd")
    {
        atmpvclrangestatuschangeend = value;
        atmpvclrangestatuschangeend.value_namespace = name_space;
        atmpvclrangestatuschangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclRangeStatusChangeStart")
    {
        atmpvclrangestatuschangestart = value;
        atmpvclrangestatuschangestart.value_namespace = name_space;
        atmpvclrangestatuschangestart.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "rangeIndex")
    {
        rangeindex.yfilter = yfilter;
    }
    if(value_path == "atmPVclHigherRangeValue")
    {
        atmpvclhigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "atmPVclLowerRangeValue")
    {
        atmpvcllowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "atmPVclRangeStatusChangeEnd")
    {
        atmpvclrangestatuschangeend.yfilter = yfilter;
    }
    if(value_path == "atmPVclRangeStatusChangeStart")
    {
        atmpvclrangestatuschangestart.yfilter = yfilter;
    }
}

bool CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "rangeIndex" || name == "atmPVclHigherRangeValue" || name == "atmPVclLowerRangeValue" || name == "atmPVclRangeStatusChangeEnd" || name == "atmPVclRangeStatusChangeStart")
        return true;
    return false;
}


}
}

