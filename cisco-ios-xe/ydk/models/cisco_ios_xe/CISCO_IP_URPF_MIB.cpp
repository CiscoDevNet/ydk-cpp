
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IP_URPF_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IP_URPF_MIB {

CiscoIpUrpfMib::CiscoIpUrpfMib()
    :
    cipurpfifmontable(std::make_shared<CiscoIpUrpfMib::Cipurpfifmontable>())
	,cipurpfscalar(std::make_shared<CiscoIpUrpfMib::Cipurpfscalar>())
	,cipurpftable(std::make_shared<CiscoIpUrpfMib::Cipurpftable>())
	,cipurpfvrfiftable(std::make_shared<CiscoIpUrpfMib::Cipurpfvrfiftable>())
	,cipurpfvrftable(std::make_shared<CiscoIpUrpfMib::Cipurpfvrftable>())
{
    cipurpfifmontable->parent = this;

    cipurpfscalar->parent = this;

    cipurpftable->parent = this;

    cipurpfvrfiftable->parent = this;

    cipurpfvrftable->parent = this;

    yang_name = "CISCO-IP-URPF-MIB"; yang_parent_name = "CISCO-IP-URPF-MIB";
}

CiscoIpUrpfMib::~CiscoIpUrpfMib()
{
}

bool CiscoIpUrpfMib::has_data() const
{
    return (cipurpfifmontable !=  nullptr && cipurpfifmontable->has_data())
	|| (cipurpfscalar !=  nullptr && cipurpfscalar->has_data())
	|| (cipurpftable !=  nullptr && cipurpftable->has_data())
	|| (cipurpfvrfiftable !=  nullptr && cipurpfvrfiftable->has_data())
	|| (cipurpfvrftable !=  nullptr && cipurpfvrftable->has_data());
}

bool CiscoIpUrpfMib::has_operation() const
{
    return is_set(yfilter)
	|| (cipurpfifmontable !=  nullptr && cipurpfifmontable->has_operation())
	|| (cipurpfscalar !=  nullptr && cipurpfscalar->has_operation())
	|| (cipurpftable !=  nullptr && cipurpftable->has_operation())
	|| (cipurpfvrfiftable !=  nullptr && cipurpfvrfiftable->has_operation())
	|| (cipurpfvrftable !=  nullptr && cipurpfvrftable->has_operation());
}

std::string CiscoIpUrpfMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIpUrpfMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIpUrpfMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipUrpfIfMonTable")
    {
        if(cipurpfifmontable == nullptr)
        {
            cipurpfifmontable = std::make_shared<CiscoIpUrpfMib::Cipurpfifmontable>();
        }
        return cipurpfifmontable;
    }

    if(child_yang_name == "cipUrpfScalar")
    {
        if(cipurpfscalar == nullptr)
        {
            cipurpfscalar = std::make_shared<CiscoIpUrpfMib::Cipurpfscalar>();
        }
        return cipurpfscalar;
    }

    if(child_yang_name == "cipUrpfTable")
    {
        if(cipurpftable == nullptr)
        {
            cipurpftable = std::make_shared<CiscoIpUrpfMib::Cipurpftable>();
        }
        return cipurpftable;
    }

    if(child_yang_name == "cipUrpfVrfIfTable")
    {
        if(cipurpfvrfiftable == nullptr)
        {
            cipurpfvrfiftable = std::make_shared<CiscoIpUrpfMib::Cipurpfvrfiftable>();
        }
        return cipurpfvrfiftable;
    }

    if(child_yang_name == "cipUrpfVrfTable")
    {
        if(cipurpfvrftable == nullptr)
        {
            cipurpfvrftable = std::make_shared<CiscoIpUrpfMib::Cipurpfvrftable>();
        }
        return cipurpfvrftable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpUrpfMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cipurpfifmontable != nullptr)
    {
        children["cipUrpfIfMonTable"] = cipurpfifmontable;
    }

    if(cipurpfscalar != nullptr)
    {
        children["cipUrpfScalar"] = cipurpfscalar;
    }

    if(cipurpftable != nullptr)
    {
        children["cipUrpfTable"] = cipurpftable;
    }

    if(cipurpfvrfiftable != nullptr)
    {
        children["cipUrpfVrfIfTable"] = cipurpfvrfiftable;
    }

    if(cipurpfvrftable != nullptr)
    {
        children["cipUrpfVrfTable"] = cipurpfvrftable;
    }

    return children;
}

void CiscoIpUrpfMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpUrpfMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoIpUrpfMib::clone_ptr() const
{
    return std::make_shared<CiscoIpUrpfMib>();
}

std::string CiscoIpUrpfMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIpUrpfMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIpUrpfMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoIpUrpfMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIpUrpfMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfIfMonTable" || name == "cipUrpfScalar" || name == "cipUrpfTable" || name == "cipUrpfVrfIfTable" || name == "cipUrpfVrfTable")
        return true;
    return false;
}

CiscoIpUrpfMib::Cipurpfscalar::Cipurpfscalar()
    :
    cipurpfcomputeinterval{YType::int32, "cipUrpfComputeInterval"},
    cipurpfdropnotifyholddowntime{YType::int32, "cipUrpfDropNotifyHoldDownTime"},
    cipurpfdropratewindow{YType::int32, "cipUrpfDropRateWindow"}
{
    yang_name = "cipUrpfScalar"; yang_parent_name = "CISCO-IP-URPF-MIB";
}

CiscoIpUrpfMib::Cipurpfscalar::~Cipurpfscalar()
{
}

bool CiscoIpUrpfMib::Cipurpfscalar::has_data() const
{
    return cipurpfcomputeinterval.is_set
	|| cipurpfdropnotifyholddowntime.is_set
	|| cipurpfdropratewindow.is_set;
}

bool CiscoIpUrpfMib::Cipurpfscalar::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipurpfcomputeinterval.yfilter)
	|| ydk::is_set(cipurpfdropnotifyholddowntime.yfilter)
	|| ydk::is_set(cipurpfdropratewindow.yfilter);
}

std::string CiscoIpUrpfMib::Cipurpfscalar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfScalar";

    return path_buffer.str();

}

const EntityPath CiscoIpUrpfMib::Cipurpfscalar::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipurpfcomputeinterval.is_set || is_set(cipurpfcomputeinterval.yfilter)) leaf_name_data.push_back(cipurpfcomputeinterval.get_name_leafdata());
    if (cipurpfdropnotifyholddowntime.is_set || is_set(cipurpfdropnotifyholddowntime.yfilter)) leaf_name_data.push_back(cipurpfdropnotifyholddowntime.get_name_leafdata());
    if (cipurpfdropratewindow.is_set || is_set(cipurpfdropratewindow.yfilter)) leaf_name_data.push_back(cipurpfdropratewindow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpUrpfMib::Cipurpfscalar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpUrpfMib::Cipurpfscalar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpUrpfMib::Cipurpfscalar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipUrpfComputeInterval")
    {
        cipurpfcomputeinterval = value;
        cipurpfcomputeinterval.value_namespace = name_space;
        cipurpfcomputeinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfDropNotifyHoldDownTime")
    {
        cipurpfdropnotifyholddowntime = value;
        cipurpfdropnotifyholddowntime.value_namespace = name_space;
        cipurpfdropnotifyholddowntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfDropRateWindow")
    {
        cipurpfdropratewindow = value;
        cipurpfdropratewindow.value_namespace = name_space;
        cipurpfdropratewindow.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpUrpfMib::Cipurpfscalar::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipUrpfComputeInterval")
    {
        cipurpfcomputeinterval.yfilter = yfilter;
    }
    if(value_path == "cipUrpfDropNotifyHoldDownTime")
    {
        cipurpfdropnotifyholddowntime.yfilter = yfilter;
    }
    if(value_path == "cipUrpfDropRateWindow")
    {
        cipurpfdropratewindow.yfilter = yfilter;
    }
}

bool CiscoIpUrpfMib::Cipurpfscalar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfComputeInterval" || name == "cipUrpfDropNotifyHoldDownTime" || name == "cipUrpfDropRateWindow")
        return true;
    return false;
}

CiscoIpUrpfMib::Cipurpftable::Cipurpftable()
{
    yang_name = "cipUrpfTable"; yang_parent_name = "CISCO-IP-URPF-MIB";
}

CiscoIpUrpfMib::Cipurpftable::~Cipurpftable()
{
}

bool CiscoIpUrpfMib::Cipurpftable::has_data() const
{
    for (std::size_t index=0; index<cipurpfentry.size(); index++)
    {
        if(cipurpfentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpUrpfMib::Cipurpftable::has_operation() const
{
    for (std::size_t index=0; index<cipurpfentry.size(); index++)
    {
        if(cipurpfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpUrpfMib::Cipurpftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfTable";

    return path_buffer.str();

}

const EntityPath CiscoIpUrpfMib::Cipurpftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpUrpfMib::Cipurpftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipUrpfEntry")
    {
        for(auto const & c : cipurpfentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpUrpfMib::Cipurpftable::Cipurpfentry>();
        c->parent = this;
        cipurpfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpUrpfMib::Cipurpftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipurpfentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpUrpfMib::Cipurpftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpUrpfMib::Cipurpftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpUrpfMib::Cipurpftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfEntry")
        return true;
    return false;
}

CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::Cipurpfentry()
    :
    cipurpfipversion{YType::enumeration, "cipUrpfIpVersion"},
    cipurpfdroprate{YType::uint32, "cipUrpfDropRate"},
    cipurpfdrops{YType::uint32, "cipUrpfDrops"}
{
    yang_name = "cipUrpfEntry"; yang_parent_name = "cipUrpfTable";
}

CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::~Cipurpfentry()
{
}

bool CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::has_data() const
{
    return cipurpfipversion.is_set
	|| cipurpfdroprate.is_set
	|| cipurpfdrops.is_set;
}

bool CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipurpfipversion.yfilter)
	|| ydk::is_set(cipurpfdroprate.yfilter)
	|| ydk::is_set(cipurpfdrops.yfilter);
}

std::string CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfEntry" <<"[cipUrpfIpVersion='" <<cipurpfipversion <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/cipUrpfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipurpfipversion.is_set || is_set(cipurpfipversion.yfilter)) leaf_name_data.push_back(cipurpfipversion.get_name_leafdata());
    if (cipurpfdroprate.is_set || is_set(cipurpfdroprate.yfilter)) leaf_name_data.push_back(cipurpfdroprate.get_name_leafdata());
    if (cipurpfdrops.is_set || is_set(cipurpfdrops.yfilter)) leaf_name_data.push_back(cipurpfdrops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipUrpfIpVersion")
    {
        cipurpfipversion = value;
        cipurpfipversion.value_namespace = name_space;
        cipurpfipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfDropRate")
    {
        cipurpfdroprate = value;
        cipurpfdroprate.value_namespace = name_space;
        cipurpfdroprate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfDrops")
    {
        cipurpfdrops = value;
        cipurpfdrops.value_namespace = name_space;
        cipurpfdrops.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipUrpfIpVersion")
    {
        cipurpfipversion.yfilter = yfilter;
    }
    if(value_path == "cipUrpfDropRate")
    {
        cipurpfdroprate.yfilter = yfilter;
    }
    if(value_path == "cipUrpfDrops")
    {
        cipurpfdrops.yfilter = yfilter;
    }
}

bool CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfIpVersion" || name == "cipUrpfDropRate" || name == "cipUrpfDrops")
        return true;
    return false;
}

CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmontable()
{
    yang_name = "cipUrpfIfMonTable"; yang_parent_name = "CISCO-IP-URPF-MIB";
}

CiscoIpUrpfMib::Cipurpfifmontable::~Cipurpfifmontable()
{
}

bool CiscoIpUrpfMib::Cipurpfifmontable::has_data() const
{
    for (std::size_t index=0; index<cipurpfifmonentry.size(); index++)
    {
        if(cipurpfifmonentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpUrpfMib::Cipurpfifmontable::has_operation() const
{
    for (std::size_t index=0; index<cipurpfifmonentry.size(); index++)
    {
        if(cipurpfifmonentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpUrpfMib::Cipurpfifmontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfIfMonTable";

    return path_buffer.str();

}

const EntityPath CiscoIpUrpfMib::Cipurpfifmontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpUrpfMib::Cipurpfifmontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipUrpfIfMonEntry")
    {
        for(auto const & c : cipurpfifmonentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry>();
        c->parent = this;
        cipurpfifmonentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpUrpfMib::Cipurpfifmontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipurpfifmonentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpUrpfMib::Cipurpfifmontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpUrpfMib::Cipurpfifmontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpUrpfMib::Cipurpfifmontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfIfMonEntry")
        return true;
    return false;
}

CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifmonentry()
    :
    ifindex{YType::str, "ifIndex"},
    cipurpfifipversion{YType::enumeration, "cipUrpfIfIpVersion"},
    cipurpfifcheckstrict{YType::enumeration, "cipUrpfIfCheckStrict"},
    cipurpfifdiscontinuitytime{YType::uint32, "cipUrpfIfDiscontinuityTime"},
    cipurpfifdroprate{YType::uint32, "cipUrpfIfDropRate"},
    cipurpfifdropratenotifyenable{YType::boolean, "cipUrpfIfDropRateNotifyEnable"},
    cipurpfifdrops{YType::uint32, "cipUrpfIfDrops"},
    cipurpfifnotifydrholddownreset{YType::boolean, "cipUrpfIfNotifyDrHoldDownReset"},
    cipurpfifnotifydropratethreshold{YType::uint32, "cipUrpfIfNotifyDropRateThreshold"},
    cipurpfifsuppresseddrops{YType::uint32, "cipUrpfIfSuppressedDrops"},
    cipurpfifvrfname{YType::str, "cipUrpfIfVrfName"},
    cipurpfifwhichroutetableid{YType::enumeration, "cipUrpfIfWhichRouteTableID"}
{
    yang_name = "cipUrpfIfMonEntry"; yang_parent_name = "cipUrpfIfMonTable";
}

CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::~Cipurpfifmonentry()
{
}

bool CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::has_data() const
{
    return ifindex.is_set
	|| cipurpfifipversion.is_set
	|| cipurpfifcheckstrict.is_set
	|| cipurpfifdiscontinuitytime.is_set
	|| cipurpfifdroprate.is_set
	|| cipurpfifdropratenotifyenable.is_set
	|| cipurpfifdrops.is_set
	|| cipurpfifnotifydrholddownreset.is_set
	|| cipurpfifnotifydropratethreshold.is_set
	|| cipurpfifsuppresseddrops.is_set
	|| cipurpfifvrfname.is_set
	|| cipurpfifwhichroutetableid.is_set;
}

bool CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cipurpfifipversion.yfilter)
	|| ydk::is_set(cipurpfifcheckstrict.yfilter)
	|| ydk::is_set(cipurpfifdiscontinuitytime.yfilter)
	|| ydk::is_set(cipurpfifdroprate.yfilter)
	|| ydk::is_set(cipurpfifdropratenotifyenable.yfilter)
	|| ydk::is_set(cipurpfifdrops.yfilter)
	|| ydk::is_set(cipurpfifnotifydrholddownreset.yfilter)
	|| ydk::is_set(cipurpfifnotifydropratethreshold.yfilter)
	|| ydk::is_set(cipurpfifsuppresseddrops.yfilter)
	|| ydk::is_set(cipurpfifvrfname.yfilter)
	|| ydk::is_set(cipurpfifwhichroutetableid.yfilter);
}

std::string CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfIfMonEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cipUrpfIfIpVersion='" <<cipurpfifipversion <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/cipUrpfIfMonTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cipurpfifipversion.is_set || is_set(cipurpfifipversion.yfilter)) leaf_name_data.push_back(cipurpfifipversion.get_name_leafdata());
    if (cipurpfifcheckstrict.is_set || is_set(cipurpfifcheckstrict.yfilter)) leaf_name_data.push_back(cipurpfifcheckstrict.get_name_leafdata());
    if (cipurpfifdiscontinuitytime.is_set || is_set(cipurpfifdiscontinuitytime.yfilter)) leaf_name_data.push_back(cipurpfifdiscontinuitytime.get_name_leafdata());
    if (cipurpfifdroprate.is_set || is_set(cipurpfifdroprate.yfilter)) leaf_name_data.push_back(cipurpfifdroprate.get_name_leafdata());
    if (cipurpfifdropratenotifyenable.is_set || is_set(cipurpfifdropratenotifyenable.yfilter)) leaf_name_data.push_back(cipurpfifdropratenotifyenable.get_name_leafdata());
    if (cipurpfifdrops.is_set || is_set(cipurpfifdrops.yfilter)) leaf_name_data.push_back(cipurpfifdrops.get_name_leafdata());
    if (cipurpfifnotifydrholddownreset.is_set || is_set(cipurpfifnotifydrholddownreset.yfilter)) leaf_name_data.push_back(cipurpfifnotifydrholddownreset.get_name_leafdata());
    if (cipurpfifnotifydropratethreshold.is_set || is_set(cipurpfifnotifydropratethreshold.yfilter)) leaf_name_data.push_back(cipurpfifnotifydropratethreshold.get_name_leafdata());
    if (cipurpfifsuppresseddrops.is_set || is_set(cipurpfifsuppresseddrops.yfilter)) leaf_name_data.push_back(cipurpfifsuppresseddrops.get_name_leafdata());
    if (cipurpfifvrfname.is_set || is_set(cipurpfifvrfname.yfilter)) leaf_name_data.push_back(cipurpfifvrfname.get_name_leafdata());
    if (cipurpfifwhichroutetableid.is_set || is_set(cipurpfifwhichroutetableid.yfilter)) leaf_name_data.push_back(cipurpfifwhichroutetableid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfIpVersion")
    {
        cipurpfifipversion = value;
        cipurpfifipversion.value_namespace = name_space;
        cipurpfifipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfCheckStrict")
    {
        cipurpfifcheckstrict = value;
        cipurpfifcheckstrict.value_namespace = name_space;
        cipurpfifcheckstrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfDiscontinuityTime")
    {
        cipurpfifdiscontinuitytime = value;
        cipurpfifdiscontinuitytime.value_namespace = name_space;
        cipurpfifdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfDropRate")
    {
        cipurpfifdroprate = value;
        cipurpfifdroprate.value_namespace = name_space;
        cipurpfifdroprate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfDropRateNotifyEnable")
    {
        cipurpfifdropratenotifyenable = value;
        cipurpfifdropratenotifyenable.value_namespace = name_space;
        cipurpfifdropratenotifyenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfDrops")
    {
        cipurpfifdrops = value;
        cipurpfifdrops.value_namespace = name_space;
        cipurpfifdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfNotifyDrHoldDownReset")
    {
        cipurpfifnotifydrholddownreset = value;
        cipurpfifnotifydrholddownreset.value_namespace = name_space;
        cipurpfifnotifydrholddownreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfNotifyDropRateThreshold")
    {
        cipurpfifnotifydropratethreshold = value;
        cipurpfifnotifydropratethreshold.value_namespace = name_space;
        cipurpfifnotifydropratethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfSuppressedDrops")
    {
        cipurpfifsuppresseddrops = value;
        cipurpfifsuppresseddrops.value_namespace = name_space;
        cipurpfifsuppresseddrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfVrfName")
    {
        cipurpfifvrfname = value;
        cipurpfifvrfname.value_namespace = name_space;
        cipurpfifvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfWhichRouteTableID")
    {
        cipurpfifwhichroutetableid = value;
        cipurpfifwhichroutetableid.value_namespace = name_space;
        cipurpfifwhichroutetableid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfIpVersion")
    {
        cipurpfifipversion.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfCheckStrict")
    {
        cipurpfifcheckstrict.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfDiscontinuityTime")
    {
        cipurpfifdiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfDropRate")
    {
        cipurpfifdroprate.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfDropRateNotifyEnable")
    {
        cipurpfifdropratenotifyenable.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfDrops")
    {
        cipurpfifdrops.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfNotifyDrHoldDownReset")
    {
        cipurpfifnotifydrholddownreset.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfNotifyDropRateThreshold")
    {
        cipurpfifnotifydropratethreshold.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfSuppressedDrops")
    {
        cipurpfifsuppresseddrops.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfVrfName")
    {
        cipurpfifvrfname.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfWhichRouteTableID")
    {
        cipurpfifwhichroutetableid.yfilter = yfilter;
    }
}

bool CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cipUrpfIfIpVersion" || name == "cipUrpfIfCheckStrict" || name == "cipUrpfIfDiscontinuityTime" || name == "cipUrpfIfDropRate" || name == "cipUrpfIfDropRateNotifyEnable" || name == "cipUrpfIfDrops" || name == "cipUrpfIfNotifyDrHoldDownReset" || name == "cipUrpfIfNotifyDropRateThreshold" || name == "cipUrpfIfSuppressedDrops" || name == "cipUrpfIfVrfName" || name == "cipUrpfIfWhichRouteTableID")
        return true;
    return false;
}

CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfiftable()
{
    yang_name = "cipUrpfVrfIfTable"; yang_parent_name = "CISCO-IP-URPF-MIB";
}

CiscoIpUrpfMib::Cipurpfvrfiftable::~Cipurpfvrfiftable()
{
}

bool CiscoIpUrpfMib::Cipurpfvrfiftable::has_data() const
{
    for (std::size_t index=0; index<cipurpfvrfifentry.size(); index++)
    {
        if(cipurpfvrfifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpUrpfMib::Cipurpfvrfiftable::has_operation() const
{
    for (std::size_t index=0; index<cipurpfvrfifentry.size(); index++)
    {
        if(cipurpfvrfifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpUrpfMib::Cipurpfvrfiftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfVrfIfTable";

    return path_buffer.str();

}

const EntityPath CiscoIpUrpfMib::Cipurpfvrfiftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpUrpfMib::Cipurpfvrfiftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipUrpfVrfIfEntry")
    {
        for(auto const & c : cipurpfvrfifentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry>();
        c->parent = this;
        cipurpfvrfifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpUrpfMib::Cipurpfvrfiftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipurpfvrfifentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpUrpfMib::Cipurpfvrfiftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpUrpfMib::Cipurpfvrfiftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpUrpfMib::Cipurpfvrfiftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfVrfIfEntry")
        return true;
    return false;
}

CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry::Cipurpfvrfifentry()
    :
    cipurpfvrfname{YType::str, "cipUrpfVrfName"},
    ifindex{YType::str, "ifIndex"},
    cipurpfvrfifdiscontinuitytime{YType::uint32, "cipUrpfVrfIfDiscontinuityTime"},
    cipurpfvrfifdrops{YType::uint32, "cipUrpfVrfIfDrops"}
{
    yang_name = "cipUrpfVrfIfEntry"; yang_parent_name = "cipUrpfVrfIfTable";
}

CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry::~Cipurpfvrfifentry()
{
}

bool CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry::has_data() const
{
    return cipurpfvrfname.is_set
	|| ifindex.is_set
	|| cipurpfvrfifdiscontinuitytime.is_set
	|| cipurpfvrfifdrops.is_set;
}

bool CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipurpfvrfname.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cipurpfvrfifdiscontinuitytime.yfilter)
	|| ydk::is_set(cipurpfvrfifdrops.yfilter);
}

std::string CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfVrfIfEntry" <<"[cipUrpfVrfName='" <<cipurpfvrfname <<"']" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/cipUrpfVrfIfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipurpfvrfname.is_set || is_set(cipurpfvrfname.yfilter)) leaf_name_data.push_back(cipurpfvrfname.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cipurpfvrfifdiscontinuitytime.is_set || is_set(cipurpfvrfifdiscontinuitytime.yfilter)) leaf_name_data.push_back(cipurpfvrfifdiscontinuitytime.get_name_leafdata());
    if (cipurpfvrfifdrops.is_set || is_set(cipurpfvrfifdrops.yfilter)) leaf_name_data.push_back(cipurpfvrfifdrops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipUrpfVrfName")
    {
        cipurpfvrfname = value;
        cipurpfvrfname.value_namespace = name_space;
        cipurpfvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfVrfIfDiscontinuityTime")
    {
        cipurpfvrfifdiscontinuitytime = value;
        cipurpfvrfifdiscontinuitytime.value_namespace = name_space;
        cipurpfvrfifdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfVrfIfDrops")
    {
        cipurpfvrfifdrops = value;
        cipurpfvrfifdrops.value_namespace = name_space;
        cipurpfvrfifdrops.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipUrpfVrfName")
    {
        cipurpfvrfname.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cipUrpfVrfIfDiscontinuityTime")
    {
        cipurpfvrfifdiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "cipUrpfVrfIfDrops")
    {
        cipurpfvrfifdrops.yfilter = yfilter;
    }
}

bool CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfVrfName" || name == "ifIndex" || name == "cipUrpfVrfIfDiscontinuityTime" || name == "cipUrpfVrfIfDrops")
        return true;
    return false;
}

CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrftable()
{
    yang_name = "cipUrpfVrfTable"; yang_parent_name = "CISCO-IP-URPF-MIB";
}

CiscoIpUrpfMib::Cipurpfvrftable::~Cipurpfvrftable()
{
}

bool CiscoIpUrpfMib::Cipurpfvrftable::has_data() const
{
    for (std::size_t index=0; index<cipurpfvrfentry.size(); index++)
    {
        if(cipurpfvrfentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpUrpfMib::Cipurpfvrftable::has_operation() const
{
    for (std::size_t index=0; index<cipurpfvrfentry.size(); index++)
    {
        if(cipurpfvrfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpUrpfMib::Cipurpfvrftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfVrfTable";

    return path_buffer.str();

}

const EntityPath CiscoIpUrpfMib::Cipurpfvrftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpUrpfMib::Cipurpfvrftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipUrpfVrfEntry")
    {
        for(auto const & c : cipurpfvrfentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry>();
        c->parent = this;
        cipurpfvrfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpUrpfMib::Cipurpfvrftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipurpfvrfentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpUrpfMib::Cipurpfvrftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpUrpfMib::Cipurpfvrftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpUrpfMib::Cipurpfvrftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfVrfEntry")
        return true;
    return false;
}

CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::Cipurpfvrfentry()
    :
    cipurpfvrfname{YType::str, "cipUrpfVrfName"}
{
    yang_name = "cipUrpfVrfEntry"; yang_parent_name = "cipUrpfVrfTable";
}

CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::~Cipurpfvrfentry()
{
}

bool CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::has_data() const
{
    return cipurpfvrfname.is_set;
}

bool CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipurpfvrfname.yfilter);
}

std::string CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfVrfEntry" <<"[cipUrpfVrfName='" <<cipurpfvrfname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/cipUrpfVrfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipurpfvrfname.is_set || is_set(cipurpfvrfname.yfilter)) leaf_name_data.push_back(cipurpfvrfname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipUrpfVrfName")
    {
        cipurpfvrfname = value;
        cipurpfvrfname.value_namespace = name_space;
        cipurpfvrfname.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipUrpfVrfName")
    {
        cipurpfvrfname.yfilter = yfilter;
    }
}

bool CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfVrfName")
        return true;
    return false;
}

const Enum::YLeaf Unicastrpftype::strict {1, "strict"};
const Enum::YLeaf Unicastrpftype::loose {2, "loose"};
const Enum::YLeaf Unicastrpftype::disabled {3, "disabled"};

const Enum::YLeaf CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::Cipurpfipversion::ipv4 {1, "ipv4"};
const Enum::YLeaf CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::Cipurpfipversion::ipv6 {2, "ipv6"};

const Enum::YLeaf CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifipversion::ipv4 {1, "ipv4"};
const Enum::YLeaf CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifipversion::ipv6 {2, "ipv6"};

const Enum::YLeaf CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifcheckstrict::strict {1, "strict"};
const Enum::YLeaf CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifcheckstrict::loose {2, "loose"};

const Enum::YLeaf CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifwhichroutetableid::default_ {1, "default"};
const Enum::YLeaf CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifwhichroutetableid::vrf {2, "vrf"};


}
}

