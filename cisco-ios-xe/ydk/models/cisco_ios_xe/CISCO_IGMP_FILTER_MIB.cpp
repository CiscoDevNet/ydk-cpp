
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IGMP_FILTER_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
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
    return is_set(yfilter)
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

void CiscoIgmpFilterMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIgmpFilterMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CiscoIgmpFilterMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIgmpFilterMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterEditor" || name == "cIgmpFilterGeneral" || name == "cIgmpFilterInterfaceTable" || name == "cIgmpFilterTable")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cigmpfilterenable.yfilter)
	|| ydk::is_set(cigmpfiltermaxprofiles.yfilter);
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

    if (cigmpfilterenable.is_set || is_set(cigmpfilterenable.yfilter)) leaf_name_data.push_back(cigmpfilterenable.get_name_leafdata());
    if (cigmpfiltermaxprofiles.is_set || is_set(cigmpfiltermaxprofiles.yfilter)) leaf_name_data.push_back(cigmpfiltermaxprofiles.get_name_leafdata());


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

void CiscoIgmpFilterMib::Cigmpfiltergeneral::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIgmpFilterEnable")
    {
        cigmpfilterenable = value;
        cigmpfilterenable.value_namespace = name_space;
        cigmpfilterenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterMaxProfiles")
    {
        cigmpfiltermaxprofiles = value;
        cigmpfiltermaxprofiles.value_namespace = name_space;
        cigmpfiltermaxprofiles.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIgmpFilterMib::Cigmpfiltergeneral::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIgmpFilterEnable")
    {
        cigmpfilterenable.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterMaxProfiles")
    {
        cigmpfiltermaxprofiles.yfilter = yfilter;
    }
}

bool CiscoIgmpFilterMib::Cigmpfiltergeneral::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterEnable" || name == "cIgmpFilterMaxProfiles")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cigmpfilterapplystatus.yfilter)
	|| ydk::is_set(cigmpfiltereditendaddress.yfilter)
	|| ydk::is_set(cigmpfiltereditendaddresstype.yfilter)
	|| ydk::is_set(cigmpfiltereditoperation.yfilter)
	|| ydk::is_set(cigmpfiltereditprofileaction.yfilter)
	|| ydk::is_set(cigmpfiltereditprofileindex.yfilter)
	|| ydk::is_set(cigmpfiltereditspinlock.yfilter)
	|| ydk::is_set(cigmpfiltereditstartaddress.yfilter)
	|| ydk::is_set(cigmpfiltereditstartaddresstype.yfilter);
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

    if (cigmpfilterapplystatus.is_set || is_set(cigmpfilterapplystatus.yfilter)) leaf_name_data.push_back(cigmpfilterapplystatus.get_name_leafdata());
    if (cigmpfiltereditendaddress.is_set || is_set(cigmpfiltereditendaddress.yfilter)) leaf_name_data.push_back(cigmpfiltereditendaddress.get_name_leafdata());
    if (cigmpfiltereditendaddresstype.is_set || is_set(cigmpfiltereditendaddresstype.yfilter)) leaf_name_data.push_back(cigmpfiltereditendaddresstype.get_name_leafdata());
    if (cigmpfiltereditoperation.is_set || is_set(cigmpfiltereditoperation.yfilter)) leaf_name_data.push_back(cigmpfiltereditoperation.get_name_leafdata());
    if (cigmpfiltereditprofileaction.is_set || is_set(cigmpfiltereditprofileaction.yfilter)) leaf_name_data.push_back(cigmpfiltereditprofileaction.get_name_leafdata());
    if (cigmpfiltereditprofileindex.is_set || is_set(cigmpfiltereditprofileindex.yfilter)) leaf_name_data.push_back(cigmpfiltereditprofileindex.get_name_leafdata());
    if (cigmpfiltereditspinlock.is_set || is_set(cigmpfiltereditspinlock.yfilter)) leaf_name_data.push_back(cigmpfiltereditspinlock.get_name_leafdata());
    if (cigmpfiltereditstartaddress.is_set || is_set(cigmpfiltereditstartaddress.yfilter)) leaf_name_data.push_back(cigmpfiltereditstartaddress.get_name_leafdata());
    if (cigmpfiltereditstartaddresstype.is_set || is_set(cigmpfiltereditstartaddresstype.yfilter)) leaf_name_data.push_back(cigmpfiltereditstartaddresstype.get_name_leafdata());


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

void CiscoIgmpFilterMib::Cigmpfiltereditor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIgmpFilterApplyStatus")
    {
        cigmpfilterapplystatus = value;
        cigmpfilterapplystatus.value_namespace = name_space;
        cigmpfilterapplystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditEndAddress")
    {
        cigmpfiltereditendaddress = value;
        cigmpfiltereditendaddress.value_namespace = name_space;
        cigmpfiltereditendaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditEndAddressType")
    {
        cigmpfiltereditendaddresstype = value;
        cigmpfiltereditendaddresstype.value_namespace = name_space;
        cigmpfiltereditendaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditOperation")
    {
        cigmpfiltereditoperation = value;
        cigmpfiltereditoperation.value_namespace = name_space;
        cigmpfiltereditoperation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditProfileAction")
    {
        cigmpfiltereditprofileaction = value;
        cigmpfiltereditprofileaction.value_namespace = name_space;
        cigmpfiltereditprofileaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditProfileIndex")
    {
        cigmpfiltereditprofileindex = value;
        cigmpfiltereditprofileindex.value_namespace = name_space;
        cigmpfiltereditprofileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditSpinLock")
    {
        cigmpfiltereditspinlock = value;
        cigmpfiltereditspinlock.value_namespace = name_space;
        cigmpfiltereditspinlock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditStartAddress")
    {
        cigmpfiltereditstartaddress = value;
        cigmpfiltereditstartaddress.value_namespace = name_space;
        cigmpfiltereditstartaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditStartAddressType")
    {
        cigmpfiltereditstartaddresstype = value;
        cigmpfiltereditstartaddresstype.value_namespace = name_space;
        cigmpfiltereditstartaddresstype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIgmpFilterMib::Cigmpfiltereditor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIgmpFilterApplyStatus")
    {
        cigmpfilterapplystatus.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditEndAddress")
    {
        cigmpfiltereditendaddress.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditEndAddressType")
    {
        cigmpfiltereditendaddresstype.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditOperation")
    {
        cigmpfiltereditoperation.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditProfileAction")
    {
        cigmpfiltereditprofileaction.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditProfileIndex")
    {
        cigmpfiltereditprofileindex.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditSpinLock")
    {
        cigmpfiltereditspinlock.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditStartAddress")
    {
        cigmpfiltereditstartaddress.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditStartAddressType")
    {
        cigmpfiltereditstartaddresstype.yfilter = yfilter;
    }
}

bool CiscoIgmpFilterMib::Cigmpfiltereditor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterApplyStatus" || name == "cIgmpFilterEditEndAddress" || name == "cIgmpFilterEditEndAddressType" || name == "cIgmpFilterEditOperation" || name == "cIgmpFilterEditProfileAction" || name == "cIgmpFilterEditProfileIndex" || name == "cIgmpFilterEditSpinLock" || name == "cIgmpFilterEditStartAddress" || name == "cIgmpFilterEditStartAddressType")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIgmpFilterMib::Cigmpfiltertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIgmpFilterMib::Cigmpfiltertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIgmpFilterMib::Cigmpfiltertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cigmpfilterprofileindex.yfilter)
	|| ydk::is_set(cigmpfilterstartaddresstype.yfilter)
	|| ydk::is_set(cigmpfilterstartaddress.yfilter)
	|| ydk::is_set(cigmpfilterendaddress.yfilter)
	|| ydk::is_set(cigmpfilterendaddresstype.yfilter)
	|| ydk::is_set(cigmpfilterprofileaction.yfilter);
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

    if (cigmpfilterprofileindex.is_set || is_set(cigmpfilterprofileindex.yfilter)) leaf_name_data.push_back(cigmpfilterprofileindex.get_name_leafdata());
    if (cigmpfilterstartaddresstype.is_set || is_set(cigmpfilterstartaddresstype.yfilter)) leaf_name_data.push_back(cigmpfilterstartaddresstype.get_name_leafdata());
    if (cigmpfilterstartaddress.is_set || is_set(cigmpfilterstartaddress.yfilter)) leaf_name_data.push_back(cigmpfilterstartaddress.get_name_leafdata());
    if (cigmpfilterendaddress.is_set || is_set(cigmpfilterendaddress.yfilter)) leaf_name_data.push_back(cigmpfilterendaddress.get_name_leafdata());
    if (cigmpfilterendaddresstype.is_set || is_set(cigmpfilterendaddresstype.yfilter)) leaf_name_data.push_back(cigmpfilterendaddresstype.get_name_leafdata());
    if (cigmpfilterprofileaction.is_set || is_set(cigmpfilterprofileaction.yfilter)) leaf_name_data.push_back(cigmpfilterprofileaction.get_name_leafdata());


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

void CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIgmpFilterProfileIndex")
    {
        cigmpfilterprofileindex = value;
        cigmpfilterprofileindex.value_namespace = name_space;
        cigmpfilterprofileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterStartAddressType")
    {
        cigmpfilterstartaddresstype = value;
        cigmpfilterstartaddresstype.value_namespace = name_space;
        cigmpfilterstartaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterStartAddress")
    {
        cigmpfilterstartaddress = value;
        cigmpfilterstartaddress.value_namespace = name_space;
        cigmpfilterstartaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEndAddress")
    {
        cigmpfilterendaddress = value;
        cigmpfilterendaddress.value_namespace = name_space;
        cigmpfilterendaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEndAddressType")
    {
        cigmpfilterendaddresstype = value;
        cigmpfilterendaddresstype.value_namespace = name_space;
        cigmpfilterendaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterProfileAction")
    {
        cigmpfilterprofileaction = value;
        cigmpfilterprofileaction.value_namespace = name_space;
        cigmpfilterprofileaction.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIgmpFilterProfileIndex")
    {
        cigmpfilterprofileindex.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterStartAddressType")
    {
        cigmpfilterstartaddresstype.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterStartAddress")
    {
        cigmpfilterstartaddress.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEndAddress")
    {
        cigmpfilterendaddress.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEndAddressType")
    {
        cigmpfilterendaddresstype.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterProfileAction")
    {
        cigmpfilterprofileaction.yfilter = yfilter;
    }
}

bool CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterProfileIndex" || name == "cIgmpFilterStartAddressType" || name == "cIgmpFilterStartAddress" || name == "cIgmpFilterEndAddress" || name == "cIgmpFilterEndAddressType" || name == "cIgmpFilterProfileAction")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIgmpFilterMib::Cigmpfilterinterfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIgmpFilterMib::Cigmpfilterinterfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIgmpFilterMib::Cigmpfilterinterfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterInterfaceEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cigmpfilterinterfaceprofileindex.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cigmpfilterinterfaceprofileindex.is_set || is_set(cigmpfilterinterfaceprofileindex.yfilter)) leaf_name_data.push_back(cigmpfilterinterfaceprofileindex.get_name_leafdata());


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

void CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterInterfaceProfileIndex")
    {
        cigmpfilterinterfaceprofileindex = value;
        cigmpfilterinterfaceprofileindex.value_namespace = name_space;
        cigmpfilterinterfaceprofileindex.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterInterfaceProfileIndex")
    {
        cigmpfilterinterfaceprofileindex.yfilter = yfilter;
    }
}

bool CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cIgmpFilterInterfaceProfileIndex")
        return true;
    return false;
}

const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfiltereditprofileaction::unSpecified {0, "unSpecified"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfiltereditprofileaction::permit {1, "permit"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfiltereditprofileaction::deny {2, "deny"};

const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfiltereditoperation::none {1, "none"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfiltereditoperation::add {2, "add"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfiltereditoperation::delete_ {3, "delete"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfiltereditoperation::modify {4, "modify"};

const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfilterapplystatus::someOtherError {1, "someOtherError"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfilterapplystatus::succeeded {2, "succeeded"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfilterapplystatus::inconsistentEdit {3, "inconsistentEdit"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfilterapplystatus::entryPresentError {4, "entryPresentError"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfilterapplystatus::entryNotPresentError {5, "entryNotPresentError"};

const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::Cigmpfilterprofileaction::permit {1, "permit"};
const Enum::YLeaf CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::Cigmpfilterprofileaction::deny {2, "deny"};


}
}

