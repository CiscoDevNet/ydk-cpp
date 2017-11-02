
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IP_URPF_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IP_URPF_MIB {

CISCOIPURPFMIB::CISCOIPURPFMIB()
    :
    cipurpfscalar(std::make_shared<CISCOIPURPFMIB::Cipurpfscalar>())
	,cipurpftable(std::make_shared<CISCOIPURPFMIB::Cipurpftable>())
	,cipurpfifmontable(std::make_shared<CISCOIPURPFMIB::Cipurpfifmontable>())
	,cipurpfvrfiftable(std::make_shared<CISCOIPURPFMIB::Cipurpfvrfiftable>())
	,cipurpfvrftable(std::make_shared<CISCOIPURPFMIB::Cipurpfvrftable>())
{
    cipurpfscalar->parent = this;
    cipurpftable->parent = this;
    cipurpfifmontable->parent = this;
    cipurpfvrfiftable->parent = this;
    cipurpfvrftable->parent = this;

    yang_name = "CISCO-IP-URPF-MIB"; yang_parent_name = "CISCO-IP-URPF-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOIPURPFMIB::~CISCOIPURPFMIB()
{
}

bool CISCOIPURPFMIB::has_data() const
{
    return (cipurpfscalar !=  nullptr && cipurpfscalar->has_data())
	|| (cipurpftable !=  nullptr && cipurpftable->has_data())
	|| (cipurpfifmontable !=  nullptr && cipurpfifmontable->has_data())
	|| (cipurpfvrfiftable !=  nullptr && cipurpfvrfiftable->has_data())
	|| (cipurpfvrftable !=  nullptr && cipurpfvrftable->has_data());
}

bool CISCOIPURPFMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cipurpfscalar !=  nullptr && cipurpfscalar->has_operation())
	|| (cipurpftable !=  nullptr && cipurpftable->has_operation())
	|| (cipurpfifmontable !=  nullptr && cipurpfifmontable->has_operation())
	|| (cipurpfvrfiftable !=  nullptr && cipurpfvrfiftable->has_operation())
	|| (cipurpfvrftable !=  nullptr && cipurpfvrftable->has_operation());
}

std::string CISCOIPURPFMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPURPFMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPURPFMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipUrpfScalar")
    {
        if(cipurpfscalar == nullptr)
        {
            cipurpfscalar = std::make_shared<CISCOIPURPFMIB::Cipurpfscalar>();
        }
        return cipurpfscalar;
    }

    if(child_yang_name == "cipUrpfTable")
    {
        if(cipurpftable == nullptr)
        {
            cipurpftable = std::make_shared<CISCOIPURPFMIB::Cipurpftable>();
        }
        return cipurpftable;
    }

    if(child_yang_name == "cipUrpfIfMonTable")
    {
        if(cipurpfifmontable == nullptr)
        {
            cipurpfifmontable = std::make_shared<CISCOIPURPFMIB::Cipurpfifmontable>();
        }
        return cipurpfifmontable;
    }

    if(child_yang_name == "cipUrpfVrfIfTable")
    {
        if(cipurpfvrfiftable == nullptr)
        {
            cipurpfvrfiftable = std::make_shared<CISCOIPURPFMIB::Cipurpfvrfiftable>();
        }
        return cipurpfvrfiftable;
    }

    if(child_yang_name == "cipUrpfVrfTable")
    {
        if(cipurpfvrftable == nullptr)
        {
            cipurpfvrftable = std::make_shared<CISCOIPURPFMIB::Cipurpfvrftable>();
        }
        return cipurpfvrftable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPURPFMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cipurpfscalar != nullptr)
    {
        children["cipUrpfScalar"] = cipurpfscalar;
    }

    if(cipurpftable != nullptr)
    {
        children["cipUrpfTable"] = cipurpftable;
    }

    if(cipurpfifmontable != nullptr)
    {
        children["cipUrpfIfMonTable"] = cipurpfifmontable;
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

void CISCOIPURPFMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPURPFMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIPURPFMIB::clone_ptr() const
{
    return std::make_shared<CISCOIPURPFMIB>();
}

std::string CISCOIPURPFMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIPURPFMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIPURPFMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIPURPFMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIPURPFMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfScalar" || name == "cipUrpfTable" || name == "cipUrpfIfMonTable" || name == "cipUrpfVrfIfTable" || name == "cipUrpfVrfTable")
        return true;
    return false;
}

CISCOIPURPFMIB::Cipurpfscalar::Cipurpfscalar()
    :
    cipurpfdropratewindow{YType::int32, "cipUrpfDropRateWindow"},
    cipurpfcomputeinterval{YType::int32, "cipUrpfComputeInterval"},
    cipurpfdropnotifyholddowntime{YType::int32, "cipUrpfDropNotifyHoldDownTime"}
{

    yang_name = "cipUrpfScalar"; yang_parent_name = "CISCO-IP-URPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPURPFMIB::Cipurpfscalar::~Cipurpfscalar()
{
}

bool CISCOIPURPFMIB::Cipurpfscalar::has_data() const
{
    return cipurpfdropratewindow.is_set
	|| cipurpfcomputeinterval.is_set
	|| cipurpfdropnotifyholddowntime.is_set;
}

bool CISCOIPURPFMIB::Cipurpfscalar::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipurpfdropratewindow.yfilter)
	|| ydk::is_set(cipurpfcomputeinterval.yfilter)
	|| ydk::is_set(cipurpfdropnotifyholddowntime.yfilter);
}

std::string CISCOIPURPFMIB::Cipurpfscalar::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPURPFMIB::Cipurpfscalar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfScalar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPURPFMIB::Cipurpfscalar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipurpfdropratewindow.is_set || is_set(cipurpfdropratewindow.yfilter)) leaf_name_data.push_back(cipurpfdropratewindow.get_name_leafdata());
    if (cipurpfcomputeinterval.is_set || is_set(cipurpfcomputeinterval.yfilter)) leaf_name_data.push_back(cipurpfcomputeinterval.get_name_leafdata());
    if (cipurpfdropnotifyholddowntime.is_set || is_set(cipurpfdropnotifyholddowntime.yfilter)) leaf_name_data.push_back(cipurpfdropnotifyholddowntime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPURPFMIB::Cipurpfscalar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPURPFMIB::Cipurpfscalar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIPURPFMIB::Cipurpfscalar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipUrpfDropRateWindow")
    {
        cipurpfdropratewindow = value;
        cipurpfdropratewindow.value_namespace = name_space;
        cipurpfdropratewindow.value_namespace_prefix = name_space_prefix;
    }
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
}

void CISCOIPURPFMIB::Cipurpfscalar::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipUrpfDropRateWindow")
    {
        cipurpfdropratewindow.yfilter = yfilter;
    }
    if(value_path == "cipUrpfComputeInterval")
    {
        cipurpfcomputeinterval.yfilter = yfilter;
    }
    if(value_path == "cipUrpfDropNotifyHoldDownTime")
    {
        cipurpfdropnotifyholddowntime.yfilter = yfilter;
    }
}

bool CISCOIPURPFMIB::Cipurpfscalar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfDropRateWindow" || name == "cipUrpfComputeInterval" || name == "cipUrpfDropNotifyHoldDownTime")
        return true;
    return false;
}

CISCOIPURPFMIB::Cipurpftable::Cipurpftable()
{

    yang_name = "cipUrpfTable"; yang_parent_name = "CISCO-IP-URPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPURPFMIB::Cipurpftable::~Cipurpftable()
{
}

bool CISCOIPURPFMIB::Cipurpftable::has_data() const
{
    for (std::size_t index=0; index<cipurpfentry.size(); index++)
    {
        if(cipurpfentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPURPFMIB::Cipurpftable::has_operation() const
{
    for (std::size_t index=0; index<cipurpfentry.size(); index++)
    {
        if(cipurpfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPURPFMIB::Cipurpftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPURPFMIB::Cipurpftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPURPFMIB::Cipurpftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPURPFMIB::Cipurpftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOIPURPFMIB::Cipurpftable::Cipurpfentry>();
        c->parent = this;
        cipurpfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPURPFMIB::Cipurpftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipurpfentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIPURPFMIB::Cipurpftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPURPFMIB::Cipurpftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPURPFMIB::Cipurpftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfEntry")
        return true;
    return false;
}

CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::Cipurpfentry()
    :
    cipurpfipversion{YType::enumeration, "cipUrpfIpVersion"},
    cipurpfdrops{YType::uint32, "cipUrpfDrops"},
    cipurpfdroprate{YType::uint32, "cipUrpfDropRate"}
{

    yang_name = "cipUrpfEntry"; yang_parent_name = "cipUrpfTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::~Cipurpfentry()
{
}

bool CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::has_data() const
{
    return cipurpfipversion.is_set
	|| cipurpfdrops.is_set
	|| cipurpfdroprate.is_set;
}

bool CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipurpfipversion.yfilter)
	|| ydk::is_set(cipurpfdrops.yfilter)
	|| ydk::is_set(cipurpfdroprate.yfilter);
}

std::string CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/cipUrpfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfEntry" <<"[cipUrpfIpVersion='" <<cipurpfipversion <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipurpfipversion.is_set || is_set(cipurpfipversion.yfilter)) leaf_name_data.push_back(cipurpfipversion.get_name_leafdata());
    if (cipurpfdrops.is_set || is_set(cipurpfdrops.yfilter)) leaf_name_data.push_back(cipurpfdrops.get_name_leafdata());
    if (cipurpfdroprate.is_set || is_set(cipurpfdroprate.yfilter)) leaf_name_data.push_back(cipurpfdroprate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipUrpfIpVersion")
    {
        cipurpfipversion = value;
        cipurpfipversion.value_namespace = name_space;
        cipurpfipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfDrops")
    {
        cipurpfdrops = value;
        cipurpfdrops.value_namespace = name_space;
        cipurpfdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfDropRate")
    {
        cipurpfdroprate = value;
        cipurpfdroprate.value_namespace = name_space;
        cipurpfdroprate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipUrpfIpVersion")
    {
        cipurpfipversion.yfilter = yfilter;
    }
    if(value_path == "cipUrpfDrops")
    {
        cipurpfdrops.yfilter = yfilter;
    }
    if(value_path == "cipUrpfDropRate")
    {
        cipurpfdroprate.yfilter = yfilter;
    }
}

bool CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfIpVersion" || name == "cipUrpfDrops" || name == "cipUrpfDropRate")
        return true;
    return false;
}

CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmontable()
{

    yang_name = "cipUrpfIfMonTable"; yang_parent_name = "CISCO-IP-URPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPURPFMIB::Cipurpfifmontable::~Cipurpfifmontable()
{
}

bool CISCOIPURPFMIB::Cipurpfifmontable::has_data() const
{
    for (std::size_t index=0; index<cipurpfifmonentry.size(); index++)
    {
        if(cipurpfifmonentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPURPFMIB::Cipurpfifmontable::has_operation() const
{
    for (std::size_t index=0; index<cipurpfifmonentry.size(); index++)
    {
        if(cipurpfifmonentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPURPFMIB::Cipurpfifmontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPURPFMIB::Cipurpfifmontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfIfMonTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPURPFMIB::Cipurpfifmontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPURPFMIB::Cipurpfifmontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry>();
        c->parent = this;
        cipurpfifmonentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPURPFMIB::Cipurpfifmontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipurpfifmonentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIPURPFMIB::Cipurpfifmontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPURPFMIB::Cipurpfifmontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPURPFMIB::Cipurpfifmontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfIfMonEntry")
        return true;
    return false;
}

CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifmonentry()
    :
    ifindex{YType::str, "ifIndex"},
    cipurpfifipversion{YType::enumeration, "cipUrpfIfIpVersion"},
    cipurpfifdrops{YType::uint32, "cipUrpfIfDrops"},
    cipurpfifsuppresseddrops{YType::uint32, "cipUrpfIfSuppressedDrops"},
    cipurpfifdroprate{YType::uint32, "cipUrpfIfDropRate"},
    cipurpfifdiscontinuitytime{YType::uint32, "cipUrpfIfDiscontinuityTime"},
    cipurpfifdropratenotifyenable{YType::boolean, "cipUrpfIfDropRateNotifyEnable"},
    cipurpfifnotifydropratethreshold{YType::uint32, "cipUrpfIfNotifyDropRateThreshold"},
    cipurpfifnotifydrholddownreset{YType::boolean, "cipUrpfIfNotifyDrHoldDownReset"},
    cipurpfifcheckstrict{YType::enumeration, "cipUrpfIfCheckStrict"},
    cipurpfifwhichroutetableid{YType::enumeration, "cipUrpfIfWhichRouteTableID"},
    cipurpfifvrfname{YType::str, "cipUrpfIfVrfName"}
{

    yang_name = "cipUrpfIfMonEntry"; yang_parent_name = "cipUrpfIfMonTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::~Cipurpfifmonentry()
{
}

bool CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::has_data() const
{
    return ifindex.is_set
	|| cipurpfifipversion.is_set
	|| cipurpfifdrops.is_set
	|| cipurpfifsuppresseddrops.is_set
	|| cipurpfifdroprate.is_set
	|| cipurpfifdiscontinuitytime.is_set
	|| cipurpfifdropratenotifyenable.is_set
	|| cipurpfifnotifydropratethreshold.is_set
	|| cipurpfifnotifydrholddownreset.is_set
	|| cipurpfifcheckstrict.is_set
	|| cipurpfifwhichroutetableid.is_set
	|| cipurpfifvrfname.is_set;
}

bool CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cipurpfifipversion.yfilter)
	|| ydk::is_set(cipurpfifdrops.yfilter)
	|| ydk::is_set(cipurpfifsuppresseddrops.yfilter)
	|| ydk::is_set(cipurpfifdroprate.yfilter)
	|| ydk::is_set(cipurpfifdiscontinuitytime.yfilter)
	|| ydk::is_set(cipurpfifdropratenotifyenable.yfilter)
	|| ydk::is_set(cipurpfifnotifydropratethreshold.yfilter)
	|| ydk::is_set(cipurpfifnotifydrholddownreset.yfilter)
	|| ydk::is_set(cipurpfifcheckstrict.yfilter)
	|| ydk::is_set(cipurpfifwhichroutetableid.yfilter)
	|| ydk::is_set(cipurpfifvrfname.yfilter);
}

std::string CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/cipUrpfIfMonTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfIfMonEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cipUrpfIfIpVersion='" <<cipurpfifipversion <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cipurpfifipversion.is_set || is_set(cipurpfifipversion.yfilter)) leaf_name_data.push_back(cipurpfifipversion.get_name_leafdata());
    if (cipurpfifdrops.is_set || is_set(cipurpfifdrops.yfilter)) leaf_name_data.push_back(cipurpfifdrops.get_name_leafdata());
    if (cipurpfifsuppresseddrops.is_set || is_set(cipurpfifsuppresseddrops.yfilter)) leaf_name_data.push_back(cipurpfifsuppresseddrops.get_name_leafdata());
    if (cipurpfifdroprate.is_set || is_set(cipurpfifdroprate.yfilter)) leaf_name_data.push_back(cipurpfifdroprate.get_name_leafdata());
    if (cipurpfifdiscontinuitytime.is_set || is_set(cipurpfifdiscontinuitytime.yfilter)) leaf_name_data.push_back(cipurpfifdiscontinuitytime.get_name_leafdata());
    if (cipurpfifdropratenotifyenable.is_set || is_set(cipurpfifdropratenotifyenable.yfilter)) leaf_name_data.push_back(cipurpfifdropratenotifyenable.get_name_leafdata());
    if (cipurpfifnotifydropratethreshold.is_set || is_set(cipurpfifnotifydropratethreshold.yfilter)) leaf_name_data.push_back(cipurpfifnotifydropratethreshold.get_name_leafdata());
    if (cipurpfifnotifydrholddownreset.is_set || is_set(cipurpfifnotifydrholddownreset.yfilter)) leaf_name_data.push_back(cipurpfifnotifydrholddownreset.get_name_leafdata());
    if (cipurpfifcheckstrict.is_set || is_set(cipurpfifcheckstrict.yfilter)) leaf_name_data.push_back(cipurpfifcheckstrict.get_name_leafdata());
    if (cipurpfifwhichroutetableid.is_set || is_set(cipurpfifwhichroutetableid.yfilter)) leaf_name_data.push_back(cipurpfifwhichroutetableid.get_name_leafdata());
    if (cipurpfifvrfname.is_set || is_set(cipurpfifvrfname.yfilter)) leaf_name_data.push_back(cipurpfifvrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cipUrpfIfDrops")
    {
        cipurpfifdrops = value;
        cipurpfifdrops.value_namespace = name_space;
        cipurpfifdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfSuppressedDrops")
    {
        cipurpfifsuppresseddrops = value;
        cipurpfifsuppresseddrops.value_namespace = name_space;
        cipurpfifsuppresseddrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfDropRate")
    {
        cipurpfifdroprate = value;
        cipurpfifdroprate.value_namespace = name_space;
        cipurpfifdroprate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfDiscontinuityTime")
    {
        cipurpfifdiscontinuitytime = value;
        cipurpfifdiscontinuitytime.value_namespace = name_space;
        cipurpfifdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfDropRateNotifyEnable")
    {
        cipurpfifdropratenotifyenable = value;
        cipurpfifdropratenotifyenable.value_namespace = name_space;
        cipurpfifdropratenotifyenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfNotifyDropRateThreshold")
    {
        cipurpfifnotifydropratethreshold = value;
        cipurpfifnotifydropratethreshold.value_namespace = name_space;
        cipurpfifnotifydropratethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfNotifyDrHoldDownReset")
    {
        cipurpfifnotifydrholddownreset = value;
        cipurpfifnotifydrholddownreset.value_namespace = name_space;
        cipurpfifnotifydrholddownreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfCheckStrict")
    {
        cipurpfifcheckstrict = value;
        cipurpfifcheckstrict.value_namespace = name_space;
        cipurpfifcheckstrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfWhichRouteTableID")
    {
        cipurpfifwhichroutetableid = value;
        cipurpfifwhichroutetableid.value_namespace = name_space;
        cipurpfifwhichroutetableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfIfVrfName")
    {
        cipurpfifvrfname = value;
        cipurpfifvrfname.value_namespace = name_space;
        cipurpfifvrfname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfIpVersion")
    {
        cipurpfifipversion.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfDrops")
    {
        cipurpfifdrops.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfSuppressedDrops")
    {
        cipurpfifsuppresseddrops.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfDropRate")
    {
        cipurpfifdroprate.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfDiscontinuityTime")
    {
        cipurpfifdiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfDropRateNotifyEnable")
    {
        cipurpfifdropratenotifyenable.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfNotifyDropRateThreshold")
    {
        cipurpfifnotifydropratethreshold.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfNotifyDrHoldDownReset")
    {
        cipurpfifnotifydrholddownreset.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfCheckStrict")
    {
        cipurpfifcheckstrict.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfWhichRouteTableID")
    {
        cipurpfifwhichroutetableid.yfilter = yfilter;
    }
    if(value_path == "cipUrpfIfVrfName")
    {
        cipurpfifvrfname.yfilter = yfilter;
    }
}

bool CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cipUrpfIfIpVersion" || name == "cipUrpfIfDrops" || name == "cipUrpfIfSuppressedDrops" || name == "cipUrpfIfDropRate" || name == "cipUrpfIfDiscontinuityTime" || name == "cipUrpfIfDropRateNotifyEnable" || name == "cipUrpfIfNotifyDropRateThreshold" || name == "cipUrpfIfNotifyDrHoldDownReset" || name == "cipUrpfIfCheckStrict" || name == "cipUrpfIfWhichRouteTableID" || name == "cipUrpfIfVrfName")
        return true;
    return false;
}

CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfiftable()
{

    yang_name = "cipUrpfVrfIfTable"; yang_parent_name = "CISCO-IP-URPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPURPFMIB::Cipurpfvrfiftable::~Cipurpfvrfiftable()
{
}

bool CISCOIPURPFMIB::Cipurpfvrfiftable::has_data() const
{
    for (std::size_t index=0; index<cipurpfvrfifentry.size(); index++)
    {
        if(cipurpfvrfifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPURPFMIB::Cipurpfvrfiftable::has_operation() const
{
    for (std::size_t index=0; index<cipurpfvrfifentry.size(); index++)
    {
        if(cipurpfvrfifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPURPFMIB::Cipurpfvrfiftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPURPFMIB::Cipurpfvrfiftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfVrfIfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPURPFMIB::Cipurpfvrfiftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPURPFMIB::Cipurpfvrfiftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry>();
        c->parent = this;
        cipurpfvrfifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPURPFMIB::Cipurpfvrfiftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipurpfvrfifentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIPURPFMIB::Cipurpfvrfiftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPURPFMIB::Cipurpfvrfiftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPURPFMIB::Cipurpfvrfiftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfVrfIfEntry")
        return true;
    return false;
}

CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::Cipurpfvrfifentry()
    :
    cipurpfvrfname{YType::str, "cipUrpfVrfName"},
    ifindex{YType::str, "ifIndex"},
    cipurpfvrfifdrops{YType::uint32, "cipUrpfVrfIfDrops"},
    cipurpfvrfifdiscontinuitytime{YType::uint32, "cipUrpfVrfIfDiscontinuityTime"}
{

    yang_name = "cipUrpfVrfIfEntry"; yang_parent_name = "cipUrpfVrfIfTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::~Cipurpfvrfifentry()
{
}

bool CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::has_data() const
{
    return cipurpfvrfname.is_set
	|| ifindex.is_set
	|| cipurpfvrfifdrops.is_set
	|| cipurpfvrfifdiscontinuitytime.is_set;
}

bool CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipurpfvrfname.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cipurpfvrfifdrops.yfilter)
	|| ydk::is_set(cipurpfvrfifdiscontinuitytime.yfilter);
}

std::string CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/cipUrpfVrfIfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfVrfIfEntry" <<"[cipUrpfVrfName='" <<cipurpfvrfname <<"']" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipurpfvrfname.is_set || is_set(cipurpfvrfname.yfilter)) leaf_name_data.push_back(cipurpfvrfname.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cipurpfvrfifdrops.is_set || is_set(cipurpfvrfifdrops.yfilter)) leaf_name_data.push_back(cipurpfvrfifdrops.get_name_leafdata());
    if (cipurpfvrfifdiscontinuitytime.is_set || is_set(cipurpfvrfifdiscontinuitytime.yfilter)) leaf_name_data.push_back(cipurpfvrfifdiscontinuitytime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cipUrpfVrfIfDrops")
    {
        cipurpfvrfifdrops = value;
        cipurpfvrfifdrops.value_namespace = name_space;
        cipurpfvrfifdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipUrpfVrfIfDiscontinuityTime")
    {
        cipurpfvrfifdiscontinuitytime = value;
        cipurpfvrfifdiscontinuitytime.value_namespace = name_space;
        cipurpfvrfifdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipUrpfVrfName")
    {
        cipurpfvrfname.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cipUrpfVrfIfDrops")
    {
        cipurpfvrfifdrops.yfilter = yfilter;
    }
    if(value_path == "cipUrpfVrfIfDiscontinuityTime")
    {
        cipurpfvrfifdiscontinuitytime.yfilter = yfilter;
    }
}

bool CISCOIPURPFMIB::Cipurpfvrfiftable::Cipurpfvrfifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfVrfName" || name == "ifIndex" || name == "cipUrpfVrfIfDrops" || name == "cipUrpfVrfIfDiscontinuityTime")
        return true;
    return false;
}

CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrftable()
{

    yang_name = "cipUrpfVrfTable"; yang_parent_name = "CISCO-IP-URPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPURPFMIB::Cipurpfvrftable::~Cipurpfvrftable()
{
}

bool CISCOIPURPFMIB::Cipurpfvrftable::has_data() const
{
    for (std::size_t index=0; index<cipurpfvrfentry.size(); index++)
    {
        if(cipurpfvrfentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPURPFMIB::Cipurpfvrftable::has_operation() const
{
    for (std::size_t index=0; index<cipurpfvrfentry.size(); index++)
    {
        if(cipurpfvrfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPURPFMIB::Cipurpfvrftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPURPFMIB::Cipurpfvrftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfVrfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPURPFMIB::Cipurpfvrftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPURPFMIB::Cipurpfvrftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry>();
        c->parent = this;
        cipurpfvrfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPURPFMIB::Cipurpfvrftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipurpfvrfentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIPURPFMIB::Cipurpfvrftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPURPFMIB::Cipurpfvrftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPURPFMIB::Cipurpfvrftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfVrfEntry")
        return true;
    return false;
}

CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::Cipurpfvrfentry()
    :
    cipurpfvrfname{YType::str, "cipUrpfVrfName"}
{

    yang_name = "cipUrpfVrfEntry"; yang_parent_name = "cipUrpfVrfTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::~Cipurpfvrfentry()
{
}

bool CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::has_data() const
{
    return cipurpfvrfname.is_set;
}

bool CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipurpfvrfname.yfilter);
}

std::string CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-URPF-MIB:CISCO-IP-URPF-MIB/cipUrpfVrfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipUrpfVrfEntry" <<"[cipUrpfVrfName='" <<cipurpfvrfname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipurpfvrfname.is_set || is_set(cipurpfvrfname.yfilter)) leaf_name_data.push_back(cipurpfvrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipUrpfVrfName")
    {
        cipurpfvrfname = value;
        cipurpfvrfname.value_namespace = name_space;
        cipurpfvrfname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipUrpfVrfName")
    {
        cipurpfvrfname.yfilter = yfilter;
    }
}

bool CISCOIPURPFMIB::Cipurpfvrftable::Cipurpfvrfentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipUrpfVrfName")
        return true;
    return false;
}

const Enum::YLeaf UnicastRpfType::strict {1, "strict"};
const Enum::YLeaf UnicastRpfType::loose {2, "loose"};
const Enum::YLeaf UnicastRpfType::disabled {3, "disabled"};

const Enum::YLeaf CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::Cipurpfipversion::ipv4 {1, "ipv4"};
const Enum::YLeaf CISCOIPURPFMIB::Cipurpftable::Cipurpfentry::Cipurpfipversion::ipv6 {2, "ipv6"};

const Enum::YLeaf CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifipversion::ipv4 {1, "ipv4"};
const Enum::YLeaf CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifipversion::ipv6 {2, "ipv6"};

const Enum::YLeaf CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifcheckstrict::strict {1, "strict"};
const Enum::YLeaf CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifcheckstrict::loose {2, "loose"};

const Enum::YLeaf CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifwhichroutetableid::default_ {1, "default"};
const Enum::YLeaf CISCOIPURPFMIB::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifwhichroutetableid::vrf {2, "vrf"};


}
}

