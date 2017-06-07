
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IGMP_FILTER_MIB.hpp"

namespace ydk {
namespace CISCO_IGMP_FILTER_MIB {

CiscoIgmpFilterMib::CiscoIgmpFilterMib()
    :
    cigmpfiltereditor(std::make_shared<CiscoIgmpFilterMib::Cigmpfiltereditor>())
	,cigmpfiltergeneral(std::make_shared<CiscoIgmpFilterMib::Cigmpfiltergeneral>())
	,cigmpfilterinterfacetable(std::make_shared<CiscoIgmpFilterMib::Cigmpfilterinterfacetable>())
	,cigmpfiltertable(std::make_shared<CiscoIgmpFilterMib::Cigmpfiltertable>())
{
    cigmpfiltereditor->parent = this;

    cigmpfiltergeneral->parent = this;

    cigmpfilterinterfacetable->parent = this;

    cigmpfiltertable->parent = this;

    yang_name = "CISCO-IGMP-FILTER-MIB"; yang_parent_name = "CISCO-IGMP-FILTER-MIB";
}

CiscoIgmpFilterMib::~CiscoIgmpFilterMib()
{
}

bool CiscoIgmpFilterMib::has_data() const
{
    return (cigmpfiltereditor !=  nullptr && cigmpfiltereditor->has_data())
	|| (cigmpfiltergeneral !=  nullptr && cigmpfiltergeneral->has_data())
	|| (cigmpfilterinterfacetable !=  nullptr && cigmpfilterinterfacetable->has_data())
	|| (cigmpfiltertable !=  nullptr && cigmpfiltertable->has_data());
}

bool CiscoIgmpFilterMib::has_operation() const
{
    return is_set(operation)
	|| (cigmpfiltereditor !=  nullptr && cigmpfiltereditor->has_operation())
	|| (cigmpfiltergeneral !=  nullptr && cigmpfiltergeneral->has_operation())
	|| (cigmpfilterinterfacetable !=  nullptr && cigmpfilterinterfacetable->has_operation())
	|| (cigmpfiltertable !=  nullptr && cigmpfiltertable->has_operation());
}

std::string CiscoIgmpFilterMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIgmpFilterMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIgmpFilterMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIgmpFilterEditor")
    {
        if(cigmpfiltereditor == nullptr)
        {
            cigmpfiltereditor = std::make_shared<CiscoIgmpFilterMib::Cigmpfiltereditor>();
        }
        return cigmpfiltereditor;
    }

    if(child_yang_name == "cIgmpFilterGeneral")
    {
        if(cigmpfiltergeneral == nullptr)
        {
            cigmpfiltergeneral = std::make_shared<CiscoIgmpFilterMib::Cigmpfiltergeneral>();
        }
        return cigmpfiltergeneral;
    }

    if(child_yang_name == "cIgmpFilterInterfaceTable")
    {
        if(cigmpfilterinterfacetable == nullptr)
        {
            cigmpfilterinterfacetable = std::make_shared<CiscoIgmpFilterMib::Cigmpfilterinterfacetable>();
        }
        return cigmpfilterinterfacetable;
    }

    if(child_yang_name == "cIgmpFilterTable")
    {
        if(cigmpfiltertable == nullptr)
        {
            cigmpfiltertable = std::make_shared<CiscoIgmpFilterMib::Cigmpfiltertable>();
        }
        return cigmpfiltertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIgmpFilterMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cigmpfiltereditor != nullptr)
    {
        children["cIgmpFilterEditor"] = cigmpfiltereditor;
    }

    if(cigmpfiltergeneral != nullptr)
    {
        children["cIgmpFilterGeneral"] = cigmpfiltergeneral;
    }

    if(cigmpfilterinterfacetable != nullptr)
    {
        children["cIgmpFilterInterfaceTable"] = cigmpfilterinterfacetable;
    }

    if(cigmpfiltertable != nullptr)
    {
        children["cIgmpFilterTable"] = cigmpfiltertable;
    }

    return children;
}

void CiscoIgmpFilterMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIgmpFilterMib::clone_ptr() const
{
    return std::make_shared<CiscoIgmpFilterMib>();
}

std::string CiscoIgmpFilterMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIgmpFilterMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIgmpFilterMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIgmpFilterMib::Cigmpfiltergeneral::Cigmpfiltergeneral()
    :
    cigmpfilterenable{YType::boolean, "cIgmpFilterEnable"},
    cigmpfiltermaxprofiles{YType::uint32, "cIgmpFilterMaxProfiles"}
{
    yang_name = "cIgmpFilterGeneral"; yang_parent_name = "CISCO-IGMP-FILTER-MIB";
}

CiscoIgmpFilterMib::Cigmpfiltergeneral::~Cigmpfiltergeneral()
{
}

bool CiscoIgmpFilterMib::Cigmpfiltergeneral::has_data() const
{
    return cigmpfilterenable.is_set
	|| cigmpfiltermaxprofiles.is_set;
}

bool CiscoIgmpFilterMib::Cigmpfiltergeneral::has_operation() const
{
    return is_set(operation)
	|| is_set(cigmpfilterenable.operation)
	|| is_set(cigmpfiltermaxprofiles.operation);
}

std::string CiscoIgmpFilterMib::Cigmpfiltergeneral::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterGeneral";

    return path_buffer.str();

}

const EntityPath CiscoIgmpFilterMib::Cigmpfiltergeneral::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cigmpfilterenable.is_set || is_set(cigmpfilterenable.operation)) leaf_name_data.push_back(cigmpfilterenable.get_name_leafdata());
    if (cigmpfiltermaxprofiles.is_set || is_set(cigmpfiltermaxprofiles.operation)) leaf_name_data.push_back(cigmpfiltermaxprofiles.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIgmpFilterMib::Cigmpfiltergeneral::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIgmpFilterMib::Cigmpfiltergeneral::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIgmpFilterMib::Cigmpfiltergeneral::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cIgmpFilterEnable")
    {
        cigmpfilterenable = value;
    }
    if(value_path == "cIgmpFilterMaxProfiles")
    {
        cigmpfiltermaxprofiles = value;
    }
}

CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfiltereditor()
    :
    cigmpfilterapplystatus{YType::enumeration, "cIgmpFilterApplyStatus"},
    cigmpfiltereditendaddress{YType::str, "cIgmpFilterEditEndAddress"},
    cigmpfiltereditendaddresstype{YType::enumeration, "cIgmpFilterEditEndAddressType"},
    cigmpfiltereditoperation{YType::enumeration, "cIgmpFilterEditOperation"},
    cigmpfiltereditprofileaction{YType::enumeration, "cIgmpFilterEditProfileAction"},
    cigmpfiltereditprofileindex{YType::uint32, "cIgmpFilterEditProfileIndex"},
    cigmpfiltereditspinlock{YType::int32, "cIgmpFilterEditSpinLock"},
    cigmpfiltereditstartaddress{YType::str, "cIgmpFilterEditStartAddress"},
    cigmpfiltereditstartaddresstype{YType::enumeration, "cIgmpFilterEditStartAddressType"}
{
    yang_name = "cIgmpFilterEditor"; yang_parent_name = "CISCO-IGMP-FILTER-MIB";
}

CiscoIgmpFilterMib::Cigmpfiltereditor::~Cigmpfiltereditor()
{
}

bool CiscoIgmpFilterMib::Cigmpfiltereditor::has_data() const
{
    return cigmpfilterapplystatus.is_set
	|| cigmpfiltereditendaddress.is_set
	|| cigmpfiltereditendaddresstype.is_set
	|| cigmpfiltereditoperation.is_set
	|| cigmpfiltereditprofileaction.is_set
	|| cigmpfiltereditprofileindex.is_set
	|| cigmpfiltereditspinlock.is_set
	|| cigmpfiltereditstartaddress.is_set
	|| cigmpfiltereditstartaddresstype.is_set;
}

bool CiscoIgmpFilterMib::Cigmpfiltereditor::has_operation() const
{
    return is_set(operation)
	|| is_set(cigmpfilterapplystatus.operation)
	|| is_set(cigmpfiltereditendaddress.operation)
	|| is_set(cigmpfiltereditendaddresstype.operation)
	|| is_set(cigmpfiltereditoperation.operation)
	|| is_set(cigmpfiltereditprofileaction.operation)
	|| is_set(cigmpfiltereditprofileindex.operation)
	|| is_set(cigmpfiltereditspinlock.operation)
	|| is_set(cigmpfiltereditstartaddress.operation)
	|| is_set(cigmpfiltereditstartaddresstype.operation);
}

std::string CiscoIgmpFilterMib::Cigmpfiltereditor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterEditor";

    return path_buffer.str();

}

const EntityPath CiscoIgmpFilterMib::Cigmpfiltereditor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cigmpfilterapplystatus.is_set || is_set(cigmpfilterapplystatus.operation)) leaf_name_data.push_back(cigmpfilterapplystatus.get_name_leafdata());
    if (cigmpfiltereditendaddress.is_set || is_set(cigmpfiltereditendaddress.operation)) leaf_name_data.push_back(cigmpfiltereditendaddress.get_name_leafdata());
    if (cigmpfiltereditendaddresstype.is_set || is_set(cigmpfiltereditendaddresstype.operation)) leaf_name_data.push_back(cigmpfiltereditendaddresstype.get_name_leafdata());
    if (cigmpfiltereditoperation.is_set || is_set(cigmpfiltereditoperation.operation)) leaf_name_data.push_back(cigmpfiltereditoperation.get_name_leafdata());
    if (cigmpfiltereditprofileaction.is_set || is_set(cigmpfiltereditprofileaction.operation)) leaf_name_data.push_back(cigmpfiltereditprofileaction.get_name_leafdata());
    if (cigmpfiltereditprofileindex.is_set || is_set(cigmpfiltereditprofileindex.operation)) leaf_name_data.push_back(cigmpfiltereditprofileindex.get_name_leafdata());
    if (cigmpfiltereditspinlock.is_set || is_set(cigmpfiltereditspinlock.operation)) leaf_name_data.push_back(cigmpfiltereditspinlock.get_name_leafdata());
    if (cigmpfiltereditstartaddress.is_set || is_set(cigmpfiltereditstartaddress.operation)) leaf_name_data.push_back(cigmpfiltereditstartaddress.get_name_leafdata());
    if (cigmpfiltereditstartaddresstype.is_set || is_set(cigmpfiltereditstartaddresstype.operation)) leaf_name_data.push_back(cigmpfiltereditstartaddresstype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIgmpFilterMib::Cigmpfiltereditor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIgmpFilterMib::Cigmpfiltereditor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIgmpFilterMib::Cigmpfiltereditor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cIgmpFilterApplyStatus")
    {
        cigmpfilterapplystatus = value;
    }
    if(value_path == "cIgmpFilterEditEndAddress")
    {
        cigmpfiltereditendaddress = value;
    }
    if(value_path == "cIgmpFilterEditEndAddressType")
    {
        cigmpfiltereditendaddresstype = value;
    }
    if(value_path == "cIgmpFilterEditOperation")
    {
        cigmpfiltereditoperation = value;
    }
    if(value_path == "cIgmpFilterEditProfileAction")
    {
        cigmpfiltereditprofileaction = value;
    }
    if(value_path == "cIgmpFilterEditProfileIndex")
    {
        cigmpfiltereditprofileindex = value;
    }
    if(value_path == "cIgmpFilterEditSpinLock")
    {
        cigmpfiltereditspinlock = value;
    }
    if(value_path == "cIgmpFilterEditStartAddress")
    {
        cigmpfiltereditstartaddress = value;
    }
    if(value_path == "cIgmpFilterEditStartAddressType")
    {
        cigmpfiltereditstartaddresstype = value;
    }
}

CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfiltertable()
{
    yang_name = "cIgmpFilterTable"; yang_parent_name = "CISCO-IGMP-FILTER-MIB";
}

CiscoIgmpFilterMib::Cigmpfiltertable::~Cigmpfiltertable()
{
}

bool CiscoIgmpFilterMib::Cigmpfiltertable::has_data() const
{
    for (std::size_t index=0; index<cigmpfilterentry.size(); index++)
    {
        if(cigmpfilterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIgmpFilterMib::Cigmpfiltertable::has_operation() const
{
    for (std::size_t index=0; index<cigmpfilterentry.size(); index++)
    {
        if(cigmpfilterentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIgmpFilterMib::Cigmpfiltertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterTable";

    return path_buffer.str();

}

const EntityPath CiscoIgmpFilterMib::Cigmpfiltertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIgmpFilterMib::Cigmpfiltertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIgmpFilterEntry")
    {
        for(auto const & c : cigmpfilterentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry>();
        c->parent = this;
        cigmpfilterentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIgmpFilterMib::Cigmpfiltertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cigmpfilterentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIgmpFilterMib::Cigmpfiltertable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::Cigmpfilterentry()
    :
    cigmpfilterprofileindex{YType::uint32, "cIgmpFilterProfileIndex"},
    cigmpfilterstartaddresstype{YType::enumeration, "cIgmpFilterStartAddressType"},
    cigmpfilterstartaddress{YType::str, "cIgmpFilterStartAddress"},
    cigmpfilterendaddress{YType::str, "cIgmpFilterEndAddress"},
    cigmpfilterendaddresstype{YType::enumeration, "cIgmpFilterEndAddressType"},
    cigmpfilterprofileaction{YType::enumeration, "cIgmpFilterProfileAction"}
{
    yang_name = "cIgmpFilterEntry"; yang_parent_name = "cIgmpFilterTable";
}

CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::~Cigmpfilterentry()
{
}

bool CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::has_data() const
{
    return cigmpfilterprofileindex.is_set
	|| cigmpfilterstartaddresstype.is_set
	|| cigmpfilterstartaddress.is_set
	|| cigmpfilterendaddress.is_set
	|| cigmpfilterendaddresstype.is_set
	|| cigmpfilterprofileaction.is_set;
}

bool CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cigmpfilterprofileindex.operation)
	|| is_set(cigmpfilterstartaddresstype.operation)
	|| is_set(cigmpfilterstartaddress.operation)
	|| is_set(cigmpfilterendaddress.operation)
	|| is_set(cigmpfilterendaddresstype.operation)
	|| is_set(cigmpfilterprofileaction.operation);
}

std::string CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterEntry" <<"[cIgmpFilterProfileIndex='" <<cigmpfilterprofileindex <<"']" <<"[cIgmpFilterStartAddressType='" <<cigmpfilterstartaddresstype <<"']" <<"[cIgmpFilterStartAddress='" <<cigmpfilterstartaddress <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/cIgmpFilterTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cigmpfilterprofileindex.is_set || is_set(cigmpfilterprofileindex.operation)) leaf_name_data.push_back(cigmpfilterprofileindex.get_name_leafdata());
    if (cigmpfilterstartaddresstype.is_set || is_set(cigmpfilterstartaddresstype.operation)) leaf_name_data.push_back(cigmpfilterstartaddresstype.get_name_leafdata());
    if (cigmpfilterstartaddress.is_set || is_set(cigmpfilterstartaddress.operation)) leaf_name_data.push_back(cigmpfilterstartaddress.get_name_leafdata());
    if (cigmpfilterendaddress.is_set || is_set(cigmpfilterendaddress.operation)) leaf_name_data.push_back(cigmpfilterendaddress.get_name_leafdata());
    if (cigmpfilterendaddresstype.is_set || is_set(cigmpfilterendaddresstype.operation)) leaf_name_data.push_back(cigmpfilterendaddresstype.get_name_leafdata());
    if (cigmpfilterprofileaction.is_set || is_set(cigmpfilterprofileaction.operation)) leaf_name_data.push_back(cigmpfilterprofileaction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cIgmpFilterProfileIndex")
    {
        cigmpfilterprofileindex = value;
    }
    if(value_path == "cIgmpFilterStartAddressType")
    {
        cigmpfilterstartaddresstype = value;
    }
    if(value_path == "cIgmpFilterStartAddress")
    {
        cigmpfilterstartaddress = value;
    }
    if(value_path == "cIgmpFilterEndAddress")
    {
        cigmpfilterendaddress = value;
    }
    if(value_path == "cIgmpFilterEndAddressType")
    {
        cigmpfilterendaddresstype = value;
    }
    if(value_path == "cIgmpFilterProfileAction")
    {
        cigmpfilterprofileaction = value;
    }
}

CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfacetable()
{
    yang_name = "cIgmpFilterInterfaceTable"; yang_parent_name = "CISCO-IGMP-FILTER-MIB";
}

CiscoIgmpFilterMib::Cigmpfilterinterfacetable::~Cigmpfilterinterfacetable()
{
}

bool CiscoIgmpFilterMib::Cigmpfilterinterfacetable::has_data() const
{
    for (std::size_t index=0; index<cigmpfilterinterfaceentry.size(); index++)
    {
        if(cigmpfilterinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIgmpFilterMib::Cigmpfilterinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<cigmpfilterinterfaceentry.size(); index++)
    {
        if(cigmpfilterinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIgmpFilterMib::Cigmpfilterinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterInterfaceTable";

    return path_buffer.str();

}

const EntityPath CiscoIgmpFilterMib::Cigmpfilterinterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIgmpFilterMib::Cigmpfilterinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIgmpFilterInterfaceEntry")
    {
        for(auto const & c : cigmpfilterinterfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry>();
        c->parent = this;
        cigmpfilterinterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIgmpFilterMib::Cigmpfilterinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cigmpfilterinterfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIgmpFilterMib::Cigmpfilterinterfacetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::Cigmpfilterinterfaceentry()
    :
    ifindex{YType::str, "ifIndex"},
    cigmpfilterinterfaceprofileindex{YType::uint32, "cIgmpFilterInterfaceProfileIndex"}
{
    yang_name = "cIgmpFilterInterfaceEntry"; yang_parent_name = "cIgmpFilterInterfaceTable";
}

CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::~Cigmpfilterinterfaceentry()
{
}

bool CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::has_data() const
{
    return ifindex.is_set
	|| cigmpfilterinterfaceprofileindex.is_set;
}

bool CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cigmpfilterinterfaceprofileindex.operation);
}

std::string CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterInterfaceEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/cIgmpFilterInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cigmpfilterinterfaceprofileindex.is_set || is_set(cigmpfilterinterfaceprofileindex.operation)) leaf_name_data.push_back(cigmpfilterinterfaceprofileindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cIgmpFilterInterfaceProfileIndex")
    {
        cigmpfilterinterfaceprofileindex = value;
    }
}

const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfiltereditprofileactionEnum::unSpecified {0, "unSpecified"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfiltereditprofileactionEnum::permit {1, "permit"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfiltereditprofileactionEnum::deny {2, "deny"};

const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfiltereditoperationEnum::none {1, "none"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfiltereditoperationEnum::add {2, "add"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfiltereditoperationEnum::delete_ {3, "delete"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfiltereditoperationEnum::modify {4, "modify"};

const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfilterapplystatusEnum::someOtherError {1, "someOtherError"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfilterapplystatusEnum::succeeded {2, "succeeded"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfilterapplystatusEnum::inconsistentEdit {3, "inconsistentEdit"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfilterapplystatusEnum::entryPresentError {4, "entryPresentError"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfilterapplystatusEnum::entryNotPresentError {5, "entryNotPresentError"};

const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::CigmpfilterprofileactionEnum::permit {1, "permit"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::CigmpfilterprofileactionEnum::deny {2, "deny"};


}
}

