
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_7.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::SrRangeTlv()
    :
    sr_range_length{YType::uint16, "sr-range-length"},
    sr_range_size{YType::uint32, "sr-range-size"}
    	,
    sidtlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>())
{
    sidtlv->parent = this;

    yang_name = "sr-range-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::~SrRangeTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_data() const
{
    return sr_range_length.is_set
	|| sr_range_size.is_set
	|| (sidtlv !=  nullptr && sidtlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_range_length.yfilter)
	|| ydk::is_set(sr_range_size.yfilter)
	|| (sidtlv !=  nullptr && sidtlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-range-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_range_length.is_set || is_set(sr_range_length.yfilter)) leaf_name_data.push_back(sr_range_length.get_name_leafdata());
    if (sr_range_size.is_set || is_set(sr_range_size.yfilter)) leaf_name_data.push_back(sr_range_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sidtlv")
    {
        if(sidtlv == nullptr)
        {
            sidtlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>();
        }
        return sidtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sidtlv != nullptr)
    {
        children["sidtlv"] = sidtlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length = value;
        sr_range_length.value_namespace = name_space;
        sr_range_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size = value;
        sr_range_size.value_namespace = name_space;
        sr_range_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length.yfilter = yfilter;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sidtlv" || name == "sr-range-length" || name == "sr-range-size")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::Sidtlv()
    :
    sr_sid_length{YType::uint16, "sr-sid-length"},
    sr_sid_value{YType::uint32, "sr-sid-value"}
{

    yang_name = "sidtlv"; yang_parent_name = "sr-range-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::~Sidtlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_data() const
{
    return sr_sid_length.is_set
	|| sr_sid_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_sid_length.yfilter)
	|| ydk::is_set(sr_sid_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sidtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_sid_length.is_set || is_set(sr_sid_length.yfilter)) leaf_name_data.push_back(sr_sid_length.get_name_leafdata());
    if (sr_sid_value.is_set || is_set(sr_sid_value.yfilter)) leaf_name_data.push_back(sr_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length = value;
        sr_sid_length.value_namespace = name_space;
        sr_sid_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value = value;
        sr_sid_value.value_namespace = name_space;
        sr_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length.yfilter = yfilter;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-sid-length" || name == "sr-sid-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdtlv()
    :
    node_msdtlv_length{YType::uint16, "node-msdtlv-length"}
    	,
    node_msd_sub_types(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>())
{
    node_msd_sub_types->parent = this;

    yang_name = "node-msdtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::~NodeMsdtlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_data() const
{
    return node_msdtlv_length.is_set
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_msdtlv_length.yfilter)
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msdtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_msdtlv_length.is_set || is_set(node_msdtlv_length.yfilter)) leaf_name_data.push_back(node_msdtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-msd-sub-types")
    {
        if(node_msd_sub_types == nullptr)
        {
            node_msd_sub_types = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>();
        }
        return node_msd_sub_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_msd_sub_types != nullptr)
    {
        children["node-msd-sub-types"] = node_msd_sub_types;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length = value;
        node_msdtlv_length.value_namespace = name_space;
        node_msdtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-msd-sub-types" || name == "node-msdtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::NodeMsdSubTypes()
    :
    msd_sub_type{YType::uint8, "msd-sub-type"},
    msd_value{YType::uint8, "msd-value"}
{

    yang_name = "node-msd-sub-types"; yang_parent_name = "node-msdtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::~NodeMsdSubTypes()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_data() const
{
    return msd_sub_type.is_set
	|| msd_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msd_sub_type.yfilter)
	|| ydk::is_set(msd_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msd-sub-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msd_sub_type.is_set || is_set(msd_sub_type.yfilter)) leaf_name_data.push_back(msd_sub_type.get_name_leafdata());
    if (msd_value.is_set || is_set(msd_value.yfilter)) leaf_name_data.push_back(msd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msd-sub-type")
    {
        msd_sub_type = value;
        msd_sub_type.value_namespace = name_space;
        msd_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msd-value")
    {
        msd_value = value;
        msd_value.value_namespace = name_space;
        msd_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msd-sub-type")
    {
        msd_sub_type.yfilter = yfilter;
    }
    if(value_path == "msd-value")
    {
        msd_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msd-sub-type" || name == "msd-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::OpaqueEpLsaType()
{

    yang_name = "opaque-ep-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::~OpaqueEpLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ep-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-ep-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : te_link_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::OpaqueElLsaType()
{

    yang_name = "opaque-el-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::~OpaqueElLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-el-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-el-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : te_link_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummaries()
{

    yang_name = "lsa-summaries"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::~LsaSummaries()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::has_data() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::has_operation() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-summary")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary>();
        c->parent = this;
        lsa_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsa_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-summary")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaSummary()
    :
    area_id{YType::int32, "area-id"},
    ls_type{YType::enumeration, "ls-type"},
    ls_id{YType::str, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    interface_name{YType::str, "interface-name"},
    external_tag{YType::uint32, "external-tag"},
    link_count{YType::uint16, "link-count"}
    	,
    lsa_header(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "lsa-summary"; yang_parent_name = "lsa-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::~LsaSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::has_data() const
{
    return area_id.is_set
	|| ls_type.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| interface_name.is_set
	|| external_tag.is_set
	|| link_count.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(external_tag.yfilter)
	|| ydk::is_set(link_count.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (link_count.is_set || is_set(link_count.yfilter)) leaf_name_data.push_back(link_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count")
    {
        link_count = value;
        link_count.value_namespace = name_space;
        link_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
    if(value_path == "link-count")
    {
        link_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "area-id" || name == "ls-type" || name == "ls-id" || name == "advertising-router" || name == "interface-name" || name == "external-tag" || name == "link-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::LsaHeader()
    :
    ls_type{YType::enumeration, "ls-type"},
    lsid{YType::str, "lsid"},
    advertising_router{YType::str, "advertising-router"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_data() const
{
    return ls_type.is_set
	|| lsid.is_set
	|| advertising_router.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| dn_age_lsa.is_set
	|| nsf.is_set
	|| sequence_number.is_set
	|| checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ls-type" || name == "lsid" || name == "advertising-router" || name == "lsa-area-id" || name == "lsa-age" || name == "dn-age-lsa" || name == "nsf" || name == "sequence-number" || name == "checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixes()
{

    yang_name = "summary-prefixes"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-prefix")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : summary_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    netmask{YType::str, "netmask"},
    summary_prefix{YType::str, "summary-prefix"},
    summary_mask{YType::str, "summary-mask"},
    summary_metric{YType::uint32, "summary-metric"},
    summary_metric_type{YType::enumeration, "summary-metric-type"},
    summary_tag{YType::uint32, "summary-tag"}
{

    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| netmask.is_set
	|| summary_prefix.is_set
	|| summary_mask.is_set
	|| summary_metric.is_set
	|| summary_metric_type.is_set
	|| summary_tag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(summary_prefix.yfilter)
	|| ydk::is_set(summary_mask.yfilter)
	|| ydk::is_set(summary_metric.yfilter)
	|| ydk::is_set(summary_metric_type.yfilter)
	|| ydk::is_set(summary_tag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (summary_prefix.is_set || is_set(summary_prefix.yfilter)) leaf_name_data.push_back(summary_prefix.get_name_leafdata());
    if (summary_mask.is_set || is_set(summary_mask.yfilter)) leaf_name_data.push_back(summary_mask.get_name_leafdata());
    if (summary_metric.is_set || is_set(summary_metric.yfilter)) leaf_name_data.push_back(summary_metric.get_name_leafdata());
    if (summary_metric_type.is_set || is_set(summary_metric_type.yfilter)) leaf_name_data.push_back(summary_metric_type.get_name_leafdata());
    if (summary_tag.is_set || is_set(summary_tag.yfilter)) leaf_name_data.push_back(summary_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-prefix")
    {
        summary_prefix = value;
        summary_prefix.value_namespace = name_space;
        summary_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-mask")
    {
        summary_mask = value;
        summary_mask.value_namespace = name_space;
        summary_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-metric")
    {
        summary_metric = value;
        summary_metric.value_namespace = name_space;
        summary_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-metric-type")
    {
        summary_metric_type = value;
        summary_metric_type.value_namespace = name_space;
        summary_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-tag")
    {
        summary_tag = value;
        summary_tag.value_namespace = name_space;
        summary_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "summary-prefix")
    {
        summary_prefix.yfilter = yfilter;
    }
    if(value_path == "summary-mask")
    {
        summary_mask.yfilter = yfilter;
    }
    if(value_path == "summary-metric")
    {
        summary_metric.yfilter = yfilter;
    }
    if(value_path == "summary-metric-type")
    {
        summary_metric_type.yfilter = yfilter;
    }
    if(value_path == "summary-tag")
    {
        summary_tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "netmask" || name == "summary-prefix" || name == "summary-mask" || name == "summary-metric" || name == "summary-metric-type" || name == "summary-tag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::AreaStatistics()
    :
    interface_stats_entries(std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries>())
{
    interface_stats_entries->parent = this;

    yang_name = "area-statistics"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::~AreaStatistics()
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::has_data() const
{
    return (interface_stats_entries !=  nullptr && interface_stats_entries->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_stats_entries != nullptr)
    {
        children["interface-stats-entries"] = interface_stats_entries;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entries")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntries()
{

    yang_name = "interface-stats-entries"; yang_parent_name = "area-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entry")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_stats_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| handle.is_set
	|| if_name_str.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(if_name_str.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-entry")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : if_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
        if_name_str.value_namespace = name_space;
        if_name_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "if-name-str")
    {
        if_name_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    madj_intf{YType::boolean, "madj-intf"},
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"}
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_data())
            return true;
    }
    return madj_intf.is_set
	|| area_id.is_set
	|| area_id_str.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(madj_intf.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_id_str.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-stat")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        c->parent = this;
        if_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : if_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "madj-intf")
    {
        madj_intf = value;
        madj_intf.value_namespace = name_space;
        madj_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
        area_id_str.value_namespace = name_space;
        area_id_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "madj-intf")
    {
        madj_intf.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-id-str")
    {
        area_id_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "madj-intf" || name == "area-id" || name == "area-id-str")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::OspfSummary::OspfSummary()
    :
    sa_num_nbrs{YType::uint32, "sa-num-nbrs"},
    sa_num_nbrs_up{YType::uint32, "sa-num-nbrs-up"},
    sa_num_intf{YType::uint32, "sa-num-intf"},
    sa_num_intf_up{YType::uint32, "sa-num-intf-up"},
    sa_num_vintf_up{YType::uint32, "sa-num-vintf-up"},
    sa_num_slintf_up{YType::uint32, "sa-num-slintf-up"},
    sa_num_areas{YType::uint32, "sa-num-areas"},
    sa_lsa_cnt_type_rtr{YType::uint32, "sa-lsa-cnt-type-rtr"},
    sa_lsa_cnt_type_net{YType::uint32, "sa-lsa-cnt-type-net"},
    sa_lsa_cnt_type_sum_net{YType::uint32, "sa-lsa-cnt-type-sum-net"},
    sa_lsa_cnt_type_sum_asb{YType::uint32, "sa-lsa-cnt-type-sum-asb"},
    sa_lsa_cnt_type_ase{YType::uint32, "sa-lsa-cnt-type-ase"},
    sa_lsa_cnt_type_mospf{YType::uint32, "sa-lsa-cnt-type-mospf"},
    sa_lsa_cnt_type_7ase{YType::uint32, "sa-lsa-cnt-type-7ase"},
    sa_lsa_cnt_type_8_ignore{YType::uint32, "sa-lsa-cnt-type-8-ignore"},
    sa_lsa_cnt_type_opq_link{YType::uint32, "sa-lsa-cnt-type-opq-link"},
    sa_lsa_cnt_type_opq_area{YType::uint32, "sa-lsa-cnt-type-opq-area"},
    sa_lsa_cnt_type_opq_as{YType::uint32, "sa-lsa-cnt-type-opq-as"}
{

    yang_name = "ospf-summary"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::OspfSummary::~OspfSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::OspfSummary::has_data() const
{
    return sa_num_nbrs.is_set
	|| sa_num_nbrs_up.is_set
	|| sa_num_intf.is_set
	|| sa_num_intf_up.is_set
	|| sa_num_vintf_up.is_set
	|| sa_num_slintf_up.is_set
	|| sa_num_areas.is_set
	|| sa_lsa_cnt_type_rtr.is_set
	|| sa_lsa_cnt_type_net.is_set
	|| sa_lsa_cnt_type_sum_net.is_set
	|| sa_lsa_cnt_type_sum_asb.is_set
	|| sa_lsa_cnt_type_ase.is_set
	|| sa_lsa_cnt_type_mospf.is_set
	|| sa_lsa_cnt_type_7ase.is_set
	|| sa_lsa_cnt_type_8_ignore.is_set
	|| sa_lsa_cnt_type_opq_link.is_set
	|| sa_lsa_cnt_type_opq_area.is_set
	|| sa_lsa_cnt_type_opq_as.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::OspfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_num_nbrs.yfilter)
	|| ydk::is_set(sa_num_nbrs_up.yfilter)
	|| ydk::is_set(sa_num_intf.yfilter)
	|| ydk::is_set(sa_num_intf_up.yfilter)
	|| ydk::is_set(sa_num_vintf_up.yfilter)
	|| ydk::is_set(sa_num_slintf_up.yfilter)
	|| ydk::is_set(sa_num_areas.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_rtr.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_net.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_sum_net.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_sum_asb.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_ase.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_mospf.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_7ase.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_8_ignore.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_opq_link.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_opq_area.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_opq_as.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::OspfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::OspfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_num_nbrs.is_set || is_set(sa_num_nbrs.yfilter)) leaf_name_data.push_back(sa_num_nbrs.get_name_leafdata());
    if (sa_num_nbrs_up.is_set || is_set(sa_num_nbrs_up.yfilter)) leaf_name_data.push_back(sa_num_nbrs_up.get_name_leafdata());
    if (sa_num_intf.is_set || is_set(sa_num_intf.yfilter)) leaf_name_data.push_back(sa_num_intf.get_name_leafdata());
    if (sa_num_intf_up.is_set || is_set(sa_num_intf_up.yfilter)) leaf_name_data.push_back(sa_num_intf_up.get_name_leafdata());
    if (sa_num_vintf_up.is_set || is_set(sa_num_vintf_up.yfilter)) leaf_name_data.push_back(sa_num_vintf_up.get_name_leafdata());
    if (sa_num_slintf_up.is_set || is_set(sa_num_slintf_up.yfilter)) leaf_name_data.push_back(sa_num_slintf_up.get_name_leafdata());
    if (sa_num_areas.is_set || is_set(sa_num_areas.yfilter)) leaf_name_data.push_back(sa_num_areas.get_name_leafdata());
    if (sa_lsa_cnt_type_rtr.is_set || is_set(sa_lsa_cnt_type_rtr.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_rtr.get_name_leafdata());
    if (sa_lsa_cnt_type_net.is_set || is_set(sa_lsa_cnt_type_net.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_net.get_name_leafdata());
    if (sa_lsa_cnt_type_sum_net.is_set || is_set(sa_lsa_cnt_type_sum_net.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_sum_net.get_name_leafdata());
    if (sa_lsa_cnt_type_sum_asb.is_set || is_set(sa_lsa_cnt_type_sum_asb.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_sum_asb.get_name_leafdata());
    if (sa_lsa_cnt_type_ase.is_set || is_set(sa_lsa_cnt_type_ase.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_ase.get_name_leafdata());
    if (sa_lsa_cnt_type_mospf.is_set || is_set(sa_lsa_cnt_type_mospf.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_mospf.get_name_leafdata());
    if (sa_lsa_cnt_type_7ase.is_set || is_set(sa_lsa_cnt_type_7ase.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_7ase.get_name_leafdata());
    if (sa_lsa_cnt_type_8_ignore.is_set || is_set(sa_lsa_cnt_type_8_ignore.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_8_ignore.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_link.is_set || is_set(sa_lsa_cnt_type_opq_link.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_link.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_area.is_set || is_set(sa_lsa_cnt_type_opq_area.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_area.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_as.is_set || is_set(sa_lsa_cnt_type_opq_as.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::OspfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::OspfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::OspfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-num-nbrs")
    {
        sa_num_nbrs = value;
        sa_num_nbrs.value_namespace = name_space;
        sa_num_nbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-nbrs-up")
    {
        sa_num_nbrs_up = value;
        sa_num_nbrs_up.value_namespace = name_space;
        sa_num_nbrs_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-intf")
    {
        sa_num_intf = value;
        sa_num_intf.value_namespace = name_space;
        sa_num_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-intf-up")
    {
        sa_num_intf_up = value;
        sa_num_intf_up.value_namespace = name_space;
        sa_num_intf_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-vintf-up")
    {
        sa_num_vintf_up = value;
        sa_num_vintf_up.value_namespace = name_space;
        sa_num_vintf_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-slintf-up")
    {
        sa_num_slintf_up = value;
        sa_num_slintf_up.value_namespace = name_space;
        sa_num_slintf_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-areas")
    {
        sa_num_areas = value;
        sa_num_areas.value_namespace = name_space;
        sa_num_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-rtr")
    {
        sa_lsa_cnt_type_rtr = value;
        sa_lsa_cnt_type_rtr.value_namespace = name_space;
        sa_lsa_cnt_type_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-net")
    {
        sa_lsa_cnt_type_net = value;
        sa_lsa_cnt_type_net.value_namespace = name_space;
        sa_lsa_cnt_type_net.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-sum-net")
    {
        sa_lsa_cnt_type_sum_net = value;
        sa_lsa_cnt_type_sum_net.value_namespace = name_space;
        sa_lsa_cnt_type_sum_net.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-sum-asb")
    {
        sa_lsa_cnt_type_sum_asb = value;
        sa_lsa_cnt_type_sum_asb.value_namespace = name_space;
        sa_lsa_cnt_type_sum_asb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-ase")
    {
        sa_lsa_cnt_type_ase = value;
        sa_lsa_cnt_type_ase.value_namespace = name_space;
        sa_lsa_cnt_type_ase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-mospf")
    {
        sa_lsa_cnt_type_mospf = value;
        sa_lsa_cnt_type_mospf.value_namespace = name_space;
        sa_lsa_cnt_type_mospf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-7ase")
    {
        sa_lsa_cnt_type_7ase = value;
        sa_lsa_cnt_type_7ase.value_namespace = name_space;
        sa_lsa_cnt_type_7ase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-8-ignore")
    {
        sa_lsa_cnt_type_8_ignore = value;
        sa_lsa_cnt_type_8_ignore.value_namespace = name_space;
        sa_lsa_cnt_type_8_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-opq-link")
    {
        sa_lsa_cnt_type_opq_link = value;
        sa_lsa_cnt_type_opq_link.value_namespace = name_space;
        sa_lsa_cnt_type_opq_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-opq-area")
    {
        sa_lsa_cnt_type_opq_area = value;
        sa_lsa_cnt_type_opq_area.value_namespace = name_space;
        sa_lsa_cnt_type_opq_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-opq-as")
    {
        sa_lsa_cnt_type_opq_as = value;
        sa_lsa_cnt_type_opq_as.value_namespace = name_space;
        sa_lsa_cnt_type_opq_as.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::OspfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-num-nbrs")
    {
        sa_num_nbrs.yfilter = yfilter;
    }
    if(value_path == "sa-num-nbrs-up")
    {
        sa_num_nbrs_up.yfilter = yfilter;
    }
    if(value_path == "sa-num-intf")
    {
        sa_num_intf.yfilter = yfilter;
    }
    if(value_path == "sa-num-intf-up")
    {
        sa_num_intf_up.yfilter = yfilter;
    }
    if(value_path == "sa-num-vintf-up")
    {
        sa_num_vintf_up.yfilter = yfilter;
    }
    if(value_path == "sa-num-slintf-up")
    {
        sa_num_slintf_up.yfilter = yfilter;
    }
    if(value_path == "sa-num-areas")
    {
        sa_num_areas.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-rtr")
    {
        sa_lsa_cnt_type_rtr.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-net")
    {
        sa_lsa_cnt_type_net.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-sum-net")
    {
        sa_lsa_cnt_type_sum_net.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-sum-asb")
    {
        sa_lsa_cnt_type_sum_asb.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-ase")
    {
        sa_lsa_cnt_type_ase.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-mospf")
    {
        sa_lsa_cnt_type_mospf.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-7ase")
    {
        sa_lsa_cnt_type_7ase.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-8-ignore")
    {
        sa_lsa_cnt_type_8_ignore.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-opq-link")
    {
        sa_lsa_cnt_type_opq_link.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-opq-area")
    {
        sa_lsa_cnt_type_opq_area.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-opq-as")
    {
        sa_lsa_cnt_type_opq_as.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::OspfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-num-nbrs" || name == "sa-num-nbrs-up" || name == "sa-num-intf" || name == "sa-num-intf-up" || name == "sa-num-vintf-up" || name == "sa-num-slintf-up" || name == "sa-num-areas" || name == "sa-lsa-cnt-type-rtr" || name == "sa-lsa-cnt-type-net" || name == "sa-lsa-cnt-type-sum-net" || name == "sa-lsa-cnt-type-sum-asb" || name == "sa-lsa-cnt-type-ase" || name == "sa-lsa-cnt-type-mospf" || name == "sa-lsa-cnt-type-7ase" || name == "sa-lsa-cnt-type-8-ignore" || name == "sa-lsa-cnt-type-opq-link" || name == "sa-lsa-cnt-type-opq-area" || name == "sa-lsa-cnt-type-opq-as")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FastReroute::FastReroute()
    :
    topologies(std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies>())
{
    topologies->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::has_data() const
{
    return (topologies !=  nullptr && topologies->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (topologies !=  nullptr && topologies->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies>();
        }
        return topologies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topologies != nullptr)
    {
        children["topologies"] = topologies;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topologies")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topologies()
{

    yang_name = "topologies"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::~Topologies()
{
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::Topology()
    :
    router_id{YType::str, "router-id"},
    area_id{YType::int32, "area-id"},
    ipfrr_topo_area_id{YType::str, "ipfrr-topo-area-id"},
    ipfrr_router_id{YType::str, "ipfrr-router-id"},
    ipfrr_area_revision{YType::uint32, "ipfrr-area-revision"}
{

    yang_name = "topology"; yang_parent_name = "topologies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::~Topology()
{
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::has_data() const
{
    for (std::size_t index=0; index<ipfrr_topo.size(); index++)
    {
        if(ipfrr_topo[index]->has_data())
            return true;
    }
    return router_id.is_set
	|| area_id.is_set
	|| ipfrr_topo_area_id.is_set
	|| ipfrr_router_id.is_set
	|| ipfrr_area_revision.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_topo.size(); index++)
    {
        if(ipfrr_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ipfrr_topo_area_id.yfilter)
	|| ydk::is_set(ipfrr_router_id.yfilter)
	|| ydk::is_set(ipfrr_area_revision.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ipfrr_topo_area_id.is_set || is_set(ipfrr_topo_area_id.yfilter)) leaf_name_data.push_back(ipfrr_topo_area_id.get_name_leafdata());
    if (ipfrr_router_id.is_set || is_set(ipfrr_router_id.yfilter)) leaf_name_data.push_back(ipfrr_router_id.get_name_leafdata());
    if (ipfrr_area_revision.is_set || is_set(ipfrr_area_revision.yfilter)) leaf_name_data.push_back(ipfrr_area_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-topo")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo>();
        c->parent = this;
        ipfrr_topo.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipfrr_topo)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-topo-area-id")
    {
        ipfrr_topo_area_id = value;
        ipfrr_topo_area_id.value_namespace = name_space;
        ipfrr_topo_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-router-id")
    {
        ipfrr_router_id = value;
        ipfrr_router_id.value_namespace = name_space;
        ipfrr_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-area-revision")
    {
        ipfrr_area_revision = value;
        ipfrr_area_revision.value_namespace = name_space;
        ipfrr_area_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ipfrr-topo-area-id")
    {
        ipfrr_topo_area_id.yfilter = yfilter;
    }
    if(value_path == "ipfrr-router-id")
    {
        ipfrr_router_id.yfilter = yfilter;
    }
    if(value_path == "ipfrr-area-revision")
    {
        ipfrr_area_revision.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-topo" || name == "router-id" || name == "area-id" || name == "ipfrr-topo-area-id" || name == "ipfrr-router-id" || name == "ipfrr-area-revision")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::IpfrrTopo()
    :
    node_id{YType::str, "node-id"},
    distance{YType::uint32, "distance"},
    distance_reverse{YType::uint32, "distance-reverse"},
    type4{YType::boolean, "type4"},
    revision{YType::uint32, "revision"},
    neighbor_sourced{YType::boolean, "neighbor-sourced"},
    dr{YType::boolean, "dr"},
    poison{YType::boolean, "poison"}
{

    yang_name = "ipfrr-topo"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::~IpfrrTopo()
{
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::has_data() const
{
    return node_id.is_set
	|| distance.is_set
	|| distance_reverse.is_set
	|| type4.is_set
	|| revision.is_set
	|| neighbor_sourced.is_set
	|| dr.is_set
	|| poison.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(distance_reverse.yfilter)
	|| ydk::is_set(type4.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| ydk::is_set(neighbor_sourced.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(poison.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (distance_reverse.is_set || is_set(distance_reverse.yfilter)) leaf_name_data.push_back(distance_reverse.get_name_leafdata());
    if (type4.is_set || is_set(type4.yfilter)) leaf_name_data.push_back(type4.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (neighbor_sourced.is_set || is_set(neighbor_sourced.yfilter)) leaf_name_data.push_back(neighbor_sourced.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (poison.is_set || is_set(poison.yfilter)) leaf_name_data.push_back(poison.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance-reverse")
    {
        distance_reverse = value;
        distance_reverse.value_namespace = name_space;
        distance_reverse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type4")
    {
        type4 = value;
        type4.value_namespace = name_space;
        type4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-sourced")
    {
        neighbor_sourced = value;
        neighbor_sourced.value_namespace = name_space;
        neighbor_sourced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poison")
    {
        poison = value;
        poison.value_namespace = name_space;
        poison.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "distance-reverse")
    {
        distance_reverse.yfilter = yfilter;
    }
    if(value_path == "type4")
    {
        type4.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
    if(value_path == "neighbor-sourced")
    {
        neighbor_sourced.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "poison")
    {
        poison.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "distance" || name == "distance-reverse" || name == "type4" || name == "revision" || name == "neighbor-sourced" || name == "dr" || name == "poison")
        return true;
    return false;
}


}
}

