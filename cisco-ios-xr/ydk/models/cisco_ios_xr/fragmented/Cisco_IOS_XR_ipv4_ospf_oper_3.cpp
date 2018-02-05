
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_5.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_6.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_4.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_7.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::UnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "unknown-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::~UnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_data() const
{
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::RtrCapTlv()
    :
    rtr_cap_tlv_length{YType::uint16, "rtr-cap-tlv-length"},
    rtr_cap_graceful_restart{YType::boolean, "rtr-cap-graceful-restart"},
    rtr_cap_graceful_restart_helper{YType::boolean, "rtr-cap-graceful-restart-helper"},
    rtr_cap_stub_rtr{YType::boolean, "rtr-cap-stub-rtr"},
    rtr_cap_area_te{YType::boolean, "rtr-cap-area-te"},
    rtr_cap_p2plan{YType::boolean, "rtr-cap-p2plan"},
    rtr_cap_te_exp{YType::boolean, "rtr-cap-te-exp"},
    rtr_cap_all_bits{YType::uint32, "rtr-cap-all-bits"},
    rtr_cap_additional_info{YType::str, "rtr-cap-additional-info"}
{

    yang_name = "rtr-cap-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::~RtrCapTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_data() const
{
    return rtr_cap_tlv_length.is_set
	|| rtr_cap_graceful_restart.is_set
	|| rtr_cap_graceful_restart_helper.is_set
	|| rtr_cap_stub_rtr.is_set
	|| rtr_cap_area_te.is_set
	|| rtr_cap_p2plan.is_set
	|| rtr_cap_te_exp.is_set
	|| rtr_cap_all_bits.is_set
	|| rtr_cap_additional_info.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_cap_tlv_length.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart_helper.yfilter)
	|| ydk::is_set(rtr_cap_stub_rtr.yfilter)
	|| ydk::is_set(rtr_cap_area_te.yfilter)
	|| ydk::is_set(rtr_cap_p2plan.yfilter)
	|| ydk::is_set(rtr_cap_te_exp.yfilter)
	|| ydk::is_set(rtr_cap_all_bits.yfilter)
	|| ydk::is_set(rtr_cap_additional_info.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr-cap-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_cap_tlv_length.is_set || is_set(rtr_cap_tlv_length.yfilter)) leaf_name_data.push_back(rtr_cap_tlv_length.get_name_leafdata());
    if (rtr_cap_graceful_restart.is_set || is_set(rtr_cap_graceful_restart.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart.get_name_leafdata());
    if (rtr_cap_graceful_restart_helper.is_set || is_set(rtr_cap_graceful_restart_helper.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart_helper.get_name_leafdata());
    if (rtr_cap_stub_rtr.is_set || is_set(rtr_cap_stub_rtr.yfilter)) leaf_name_data.push_back(rtr_cap_stub_rtr.get_name_leafdata());
    if (rtr_cap_area_te.is_set || is_set(rtr_cap_area_te.yfilter)) leaf_name_data.push_back(rtr_cap_area_te.get_name_leafdata());
    if (rtr_cap_p2plan.is_set || is_set(rtr_cap_p2plan.yfilter)) leaf_name_data.push_back(rtr_cap_p2plan.get_name_leafdata());
    if (rtr_cap_te_exp.is_set || is_set(rtr_cap_te_exp.yfilter)) leaf_name_data.push_back(rtr_cap_te_exp.get_name_leafdata());
    if (rtr_cap_all_bits.is_set || is_set(rtr_cap_all_bits.yfilter)) leaf_name_data.push_back(rtr_cap_all_bits.get_name_leafdata());
    if (rtr_cap_additional_info.is_set || is_set(rtr_cap_additional_info.yfilter)) leaf_name_data.push_back(rtr_cap_additional_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length = value;
        rtr_cap_tlv_length.value_namespace = name_space;
        rtr_cap_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart = value;
        rtr_cap_graceful_restart.value_namespace = name_space;
        rtr_cap_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper = value;
        rtr_cap_graceful_restart_helper.value_namespace = name_space;
        rtr_cap_graceful_restart_helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr = value;
        rtr_cap_stub_rtr.value_namespace = name_space;
        rtr_cap_stub_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te = value;
        rtr_cap_area_te.value_namespace = name_space;
        rtr_cap_area_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan = value;
        rtr_cap_p2plan.value_namespace = name_space;
        rtr_cap_p2plan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp = value;
        rtr_cap_te_exp.value_namespace = name_space;
        rtr_cap_te_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits = value;
        rtr_cap_all_bits.value_namespace = name_space;
        rtr_cap_all_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info = value;
        rtr_cap_additional_info.value_namespace = name_space;
        rtr_cap_additional_info.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-cap-tlv-length" || name == "rtr-cap-graceful-restart" || name == "rtr-cap-graceful-restart-helper" || name == "rtr-cap-stub-rtr" || name == "rtr-cap-area-te" || name == "rtr-cap-p2plan" || name == "rtr-cap-te-exp" || name == "rtr-cap-all-bits" || name == "rtr-cap-additional-info")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::Pcedtlv()
    :
    pcedtlv_length{YType::uint16, "pcedtlv-length"}
    	,
    pced_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>())
	,pced_scope(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>())
{
    pced_addr->parent = this;
    pced_scope->parent = this;

    yang_name = "pcedtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::~Pcedtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_data() const
{
    return pcedtlv_length.is_set
	|| (pced_addr !=  nullptr && pced_addr->has_data())
	|| (pced_scope !=  nullptr && pced_scope->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcedtlv_length.yfilter)
	|| (pced_addr !=  nullptr && pced_addr->has_operation())
	|| (pced_scope !=  nullptr && pced_scope->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcedtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcedtlv_length.is_set || is_set(pcedtlv_length.yfilter)) leaf_name_data.push_back(pcedtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pced-addr")
    {
        if(pced_addr == nullptr)
        {
            pced_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>();
        }
        return pced_addr;
    }

    if(child_yang_name == "pced-scope")
    {
        if(pced_scope == nullptr)
        {
            pced_scope = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>();
        }
        return pced_scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pced_addr != nullptr)
    {
        children["pced-addr"] = pced_addr;
    }

    if(pced_scope != nullptr)
    {
        children["pced-scope"] = pced_scope;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length = value;
        pcedtlv_length.value_namespace = name_space;
        pcedtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pced-addr" || name == "pced-scope" || name == "pcedtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PcedAddr()
    :
    pce_addr_type{YType::enumeration, "pce-addr-type"}
    	,
    pce_addr_unknown_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>())
	,ipv4pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>())
	,ipv6pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>())
{
    pce_addr_unknown_tlv->parent = this;
    ipv4pce_addr->parent = this;
    ipv6pce_addr->parent = this;

    yang_name = "pced-addr"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::~PcedAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_data() const
{
    return pce_addr_type.is_set
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_data())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_data())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_addr_type.yfilter)
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_operation())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_operation())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_addr_type.is_set || is_set(pce_addr_type.yfilter)) leaf_name_data.push_back(pce_addr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce-addr-unknown-tlv")
    {
        if(pce_addr_unknown_tlv == nullptr)
        {
            pce_addr_unknown_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>();
        }
        return pce_addr_unknown_tlv;
    }

    if(child_yang_name == "ipv4pce-addr")
    {
        if(ipv4pce_addr == nullptr)
        {
            ipv4pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>();
        }
        return ipv4pce_addr;
    }

    if(child_yang_name == "ipv6pce-addr")
    {
        if(ipv6pce_addr == nullptr)
        {
            ipv6pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>();
        }
        return ipv6pce_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pce_addr_unknown_tlv != nullptr)
    {
        children["pce-addr-unknown-tlv"] = pce_addr_unknown_tlv;
    }

    if(ipv4pce_addr != nullptr)
    {
        children["ipv4pce-addr"] = ipv4pce_addr;
    }

    if(ipv6pce_addr != nullptr)
    {
        children["ipv6pce-addr"] = ipv6pce_addr;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type = value;
        pce_addr_type.value_namespace = name_space;
        pce_addr_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-addr-unknown-tlv" || name == "ipv4pce-addr" || name == "ipv6pce-addr" || name == "pce-addr-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::PceAddrUnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "pce-addr-unknown-tlv"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::~PceAddrUnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_data() const
{
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-addr-unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::Ipv4PceAddr()
    :
    pceipv4_addr{YType::str, "pceipv4-addr"}
{

    yang_name = "ipv4pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::~Ipv4PceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_data() const
{
    return pceipv4_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv4_addr.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv4_addr.is_set || is_set(pceipv4_addr.yfilter)) leaf_name_data.push_back(pceipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr = value;
        pceipv4_addr.value_namespace = name_space;
        pceipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv4-addr")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::Ipv6PceAddr()
    :
    pceipv6_addr{YType::str, "pceipv6-addr"}
{

    yang_name = "ipv6pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::~Ipv6PceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_data() const
{
    return pceipv6_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv6_addr.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv6_addr.is_set || is_set(pceipv6_addr.yfilter)) leaf_name_data.push_back(pceipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr = value;
        pceipv6_addr.value_namespace = name_space;
        pceipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv6-addr")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::PcedScope()
    :
    lbit{YType::boolean, "lbit"},
    rbit{YType::boolean, "rbit"},
    rd_bit{YType::boolean, "rd-bit"},
    sbit{YType::boolean, "sbit"},
    sd_bit{YType::boolean, "sd-bit"},
    ybit{YType::boolean, "ybit"},
    pref_l{YType::uint8, "pref-l"},
    pref_r{YType::uint8, "pref-r"},
    pref_s{YType::uint8, "pref-s"},
    pref_y{YType::uint8, "pref-y"},
    all_scope_info_bits{YType::uint32, "all-scope-info-bits"}
{

    yang_name = "pced-scope"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::~PcedScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_data() const
{
    return lbit.is_set
	|| rbit.is_set
	|| rd_bit.is_set
	|| sbit.is_set
	|| sd_bit.is_set
	|| ybit.is_set
	|| pref_l.is_set
	|| pref_r.is_set
	|| pref_s.is_set
	|| pref_y.is_set
	|| all_scope_info_bits.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(rbit.yfilter)
	|| ydk::is_set(rd_bit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(sd_bit.yfilter)
	|| ydk::is_set(ybit.yfilter)
	|| ydk::is_set(pref_l.yfilter)
	|| ydk::is_set(pref_r.yfilter)
	|| ydk::is_set(pref_s.yfilter)
	|| ydk::is_set(pref_y.yfilter)
	|| ydk::is_set(all_scope_info_bits.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (rbit.is_set || is_set(rbit.yfilter)) leaf_name_data.push_back(rbit.get_name_leafdata());
    if (rd_bit.is_set || is_set(rd_bit.yfilter)) leaf_name_data.push_back(rd_bit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (sd_bit.is_set || is_set(sd_bit.yfilter)) leaf_name_data.push_back(sd_bit.get_name_leafdata());
    if (ybit.is_set || is_set(ybit.yfilter)) leaf_name_data.push_back(ybit.get_name_leafdata());
    if (pref_l.is_set || is_set(pref_l.yfilter)) leaf_name_data.push_back(pref_l.get_name_leafdata());
    if (pref_r.is_set || is_set(pref_r.yfilter)) leaf_name_data.push_back(pref_r.get_name_leafdata());
    if (pref_s.is_set || is_set(pref_s.yfilter)) leaf_name_data.push_back(pref_s.get_name_leafdata());
    if (pref_y.is_set || is_set(pref_y.yfilter)) leaf_name_data.push_back(pref_y.get_name_leafdata());
    if (all_scope_info_bits.is_set || is_set(all_scope_info_bits.yfilter)) leaf_name_data.push_back(all_scope_info_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rbit")
    {
        rbit = value;
        rbit.value_namespace = name_space;
        rbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-bit")
    {
        rd_bit = value;
        rd_bit.value_namespace = name_space;
        rd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-bit")
    {
        sd_bit = value;
        sd_bit.value_namespace = name_space;
        sd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ybit")
    {
        ybit = value;
        ybit.value_namespace = name_space;
        ybit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-l")
    {
        pref_l = value;
        pref_l.value_namespace = name_space;
        pref_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-r")
    {
        pref_r = value;
        pref_r.value_namespace = name_space;
        pref_r.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-s")
    {
        pref_s = value;
        pref_s.value_namespace = name_space;
        pref_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-y")
    {
        pref_y = value;
        pref_y.value_namespace = name_space;
        pref_y.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits = value;
        all_scope_info_bits.value_namespace = name_space;
        all_scope_info_bits.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
    if(value_path == "rbit")
    {
        rbit.yfilter = yfilter;
    }
    if(value_path == "rd-bit")
    {
        rd_bit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "sd-bit")
    {
        sd_bit.yfilter = yfilter;
    }
    if(value_path == "ybit")
    {
        ybit.yfilter = yfilter;
    }
    if(value_path == "pref-l")
    {
        pref_l.yfilter = yfilter;
    }
    if(value_path == "pref-r")
    {
        pref_r.yfilter = yfilter;
    }
    if(value_path == "pref-s")
    {
        pref_s.yfilter = yfilter;
    }
    if(value_path == "pref-y")
    {
        pref_y.yfilter = yfilter;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbit" || name == "rbit" || name == "rd-bit" || name == "sbit" || name == "sd-bit" || name == "ybit" || name == "pref-l" || name == "pref-r" || name == "pref-s" || name == "pref-y" || name == "all-scope-info-bits")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoTlv()
    :
    sr_algo_length{YType::uint16, "sr-algo-length"},
    sr_algo_value{YType::str, "sr-algo-value"}
{

    yang_name = "sr-algo-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::~SrAlgoTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_data() const
{
    return sr_algo_length.is_set
	|| sr_algo_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_algo_length.yfilter)
	|| ydk::is_set(sr_algo_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_algo_length.is_set || is_set(sr_algo_length.yfilter)) leaf_name_data.push_back(sr_algo_length.get_name_leafdata());
    if (sr_algo_value.is_set || is_set(sr_algo_value.yfilter)) leaf_name_data.push_back(sr_algo_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length = value;
        sr_algo_length.value_namespace = name_space;
        sr_algo_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value = value;
        sr_algo_value.value_namespace = name_space;
        sr_algo_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length.yfilter = yfilter;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-algo-length" || name == "sr-algo-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::SrRangeTlv()
    :
    sr_range_length{YType::uint16, "sr-range-length"},
    sr_range_size{YType::uint32, "sr-range-size"}
    	,
    sidtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>())
{
    sidtlv->parent = this;

    yang_name = "sr-range-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::~SrRangeTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_data() const
{
    return sr_range_length.is_set
	|| sr_range_size.is_set
	|| (sidtlv !=  nullptr && sidtlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_range_length.yfilter)
	|| ydk::is_set(sr_range_size.yfilter)
	|| (sidtlv !=  nullptr && sidtlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-range-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_range_length.is_set || is_set(sr_range_length.yfilter)) leaf_name_data.push_back(sr_range_length.get_name_leafdata());
    if (sr_range_size.is_set || is_set(sr_range_size.yfilter)) leaf_name_data.push_back(sr_range_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sidtlv")
    {
        if(sidtlv == nullptr)
        {
            sidtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>();
        }
        return sidtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sidtlv != nullptr)
    {
        children["sidtlv"] = sidtlv;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sidtlv" || name == "sr-range-length" || name == "sr-range-size")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::Sidtlv()
    :
    sr_sid_length{YType::uint16, "sr-sid-length"},
    sr_sid_value{YType::uint32, "sr-sid-value"}
{

    yang_name = "sidtlv"; yang_parent_name = "sr-range-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::~Sidtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_data() const
{
    return sr_sid_length.is_set
	|| sr_sid_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_sid_length.yfilter)
	|| ydk::is_set(sr_sid_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sidtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_sid_length.is_set || is_set(sr_sid_length.yfilter)) leaf_name_data.push_back(sr_sid_length.get_name_leafdata());
    if (sr_sid_value.is_set || is_set(sr_sid_value.yfilter)) leaf_name_data.push_back(sr_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-sid-length" || name == "sr-sid-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdtlv()
    :
    node_msdtlv_length{YType::uint16, "node-msdtlv-length"}
    	,
    node_msd_sub_types(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>())
{
    node_msd_sub_types->parent = this;

    yang_name = "node-msdtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::~NodeMsdtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_data() const
{
    return node_msdtlv_length.is_set
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_msdtlv_length.yfilter)
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msdtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_msdtlv_length.is_set || is_set(node_msdtlv_length.yfilter)) leaf_name_data.push_back(node_msdtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-msd-sub-types")
    {
        if(node_msd_sub_types == nullptr)
        {
            node_msd_sub_types = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>();
        }
        return node_msd_sub_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_msd_sub_types != nullptr)
    {
        children["node-msd-sub-types"] = node_msd_sub_types;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length = value;
        node_msdtlv_length.value_namespace = name_space;
        node_msdtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-msd-sub-types" || name == "node-msdtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::NodeMsdSubTypes()
    :
    msd_sub_type{YType::uint8, "msd-sub-type"},
    msd_value{YType::uint8, "msd-value"}
{

    yang_name = "node-msd-sub-types"; yang_parent_name = "node-msdtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::~NodeMsdSubTypes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_data() const
{
    return msd_sub_type.is_set
	|| msd_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msd_sub_type.yfilter)
	|| ydk::is_set(msd_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msd-sub-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msd_sub_type.is_set || is_set(msd_sub_type.yfilter)) leaf_name_data.push_back(msd_sub_type.get_name_leafdata());
    if (msd_value.is_set || is_set(msd_value.yfilter)) leaf_name_data.push_back(msd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msd-sub-type" || name == "msd-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::OpaqueEpLsaType()
{

    yang_name = "opaque-ep-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::~OpaqueEpLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ep-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-ep-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::OpaqueElLsaType()
{

    yang_name = "opaque-el-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::~OpaqueElLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-el-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-el-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummaries()
{

    yang_name = "lsa-summaries"; yang_parent_name = "database-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::~LsaSummaries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_data() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_operation() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-summary")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary>();
        c->parent = this;
        lsa_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-summary")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaSummary()
    :
    area_id{YType::int32, "area-id"},
    ls_type{YType::enumeration, "ls-type"},
    ls_id{YType::str, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    interface_name{YType::str, "interface-name"},
    external_tag{YType::uint32, "external-tag"},
    link_count{YType::uint16, "link-count"}
    	,
    lsa_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "lsa-summary"; yang_parent_name = "lsa-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::~LsaSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "area-id" || name == "ls-type" || name == "ls-id" || name == "advertising-router" || name == "interface-name" || name == "external-tag" || name == "link-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::LsaHeader()
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

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ls-type" || name == "lsid" || name == "advertising-router" || name == "lsa-area-id" || name == "lsa-age" || name == "dn-age-lsa" || name == "nsf" || name == "sequence-number" || name == "checksum")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummaries()
{

    yang_name = "database-summaries"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::~DatabaseSummaries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::has_data() const
{
    for (std::size_t index=0; index<database_summary.size(); index++)
    {
        if(database_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::has_operation() const
{
    for (std::size_t index=0; index<database_summary.size(); index++)
    {
        if(database_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-summary")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary>();
        c->parent = this;
        database_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : database_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-summary")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::DatabaseSummary()
    :
    area_id{YType::int32, "area-id"},
    dbase_sum_area_id_string{YType::str, "dbase-sum-area-id-string"}
{

    yang_name = "database-summary"; yang_parent_name = "database-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::~DatabaseSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::has_data() const
{
    for (std::size_t index=0; index<area_lsa_counter.size(); index++)
    {
        if(area_lsa_counter[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| dbase_sum_area_id_string.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::has_operation() const
{
    for (std::size_t index=0; index<area_lsa_counter.size(); index++)
    {
        if(area_lsa_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(dbase_sum_area_id_string.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (dbase_sum_area_id_string.is_set || is_set(dbase_sum_area_id_string.yfilter)) leaf_name_data.push_back(dbase_sum_area_id_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-lsa-counter")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter>();
        c->parent = this;
        area_lsa_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area_lsa_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbase-sum-area-id-string")
    {
        dbase_sum_area_id_string = value;
        dbase_sum_area_id_string.value_namespace = name_space;
        dbase_sum_area_id_string.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "dbase-sum-area-id-string")
    {
        dbase_sum_area_id_string.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-lsa-counter" || name == "area-id" || name == "dbase-sum-area-id-string")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::AreaLsaCounter()
    :
    lsa_type{YType::enumeration, "lsa-type"},
    lsa_count{YType::int32, "lsa-count"},
    lsa_delete_count{YType::int32, "lsa-delete-count"},
    lsa_maxage_count{YType::int32, "lsa-maxage-count"},
    lsa_self_count{YType::int32, "lsa-self-count"}
{

    yang_name = "area-lsa-counter"; yang_parent_name = "database-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::~AreaLsaCounter()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_data() const
{
    return lsa_type.is_set
	|| lsa_count.is_set
	|| lsa_delete_count.is_set
	|| lsa_maxage_count.is_set
	|| lsa_self_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_count.yfilter)
	|| ydk::is_set(lsa_delete_count.yfilter)
	|| ydk::is_set(lsa_maxage_count.yfilter)
	|| ydk::is_set(lsa_self_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-lsa-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_count.is_set || is_set(lsa_count.yfilter)) leaf_name_data.push_back(lsa_count.get_name_leafdata());
    if (lsa_delete_count.is_set || is_set(lsa_delete_count.yfilter)) leaf_name_data.push_back(lsa_delete_count.get_name_leafdata());
    if (lsa_maxage_count.is_set || is_set(lsa_maxage_count.yfilter)) leaf_name_data.push_back(lsa_maxage_count.get_name_leafdata());
    if (lsa_self_count.is_set || is_set(lsa_self_count.yfilter)) leaf_name_data.push_back(lsa_self_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-count")
    {
        lsa_count = value;
        lsa_count.value_namespace = name_space;
        lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count = value;
        lsa_delete_count.value_namespace = name_space;
        lsa_delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count = value;
        lsa_maxage_count.value_namespace = name_space;
        lsa_maxage_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count = value;
        lsa_self_count.value_namespace = name_space;
        lsa_self_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-count")
    {
        lsa_count.yfilter = yfilter;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count.yfilter = yfilter;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count.yfilter = yfilter;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-count" || name == "lsa-delete-count" || name == "lsa-maxage-count" || name == "lsa-self-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::DatabaseSummaryAs()
{

    yang_name = "database-summary-as"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::~DatabaseSummaryAs()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::has_data() const
{
    for (std::size_t index=0; index<as_lsa_counter.size(); index++)
    {
        if(as_lsa_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::has_operation() const
{
    for (std::size_t index=0; index<as_lsa_counter.size(); index++)
    {
        if(as_lsa_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-lsa-counter")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter>();
        c->parent = this;
        as_lsa_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : as_lsa_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-lsa-counter")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::AsLsaCounter()
    :
    lsa_type{YType::enumeration, "lsa-type"},
    lsa_count{YType::int32, "lsa-count"},
    lsa_delete_count{YType::int32, "lsa-delete-count"},
    lsa_maxage_count{YType::int32, "lsa-maxage-count"},
    lsa_self_count{YType::int32, "lsa-self-count"}
{

    yang_name = "as-lsa-counter"; yang_parent_name = "database-summary-as"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::~AsLsaCounter()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::has_data() const
{
    return lsa_type.is_set
	|| lsa_count.is_set
	|| lsa_delete_count.is_set
	|| lsa_maxage_count.is_set
	|| lsa_self_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_count.yfilter)
	|| ydk::is_set(lsa_delete_count.yfilter)
	|| ydk::is_set(lsa_maxage_count.yfilter)
	|| ydk::is_set(lsa_self_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-lsa-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_count.is_set || is_set(lsa_count.yfilter)) leaf_name_data.push_back(lsa_count.get_name_leafdata());
    if (lsa_delete_count.is_set || is_set(lsa_delete_count.yfilter)) leaf_name_data.push_back(lsa_delete_count.get_name_leafdata());
    if (lsa_maxage_count.is_set || is_set(lsa_maxage_count.yfilter)) leaf_name_data.push_back(lsa_maxage_count.get_name_leafdata());
    if (lsa_self_count.is_set || is_set(lsa_self_count.yfilter)) leaf_name_data.push_back(lsa_self_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-count")
    {
        lsa_count = value;
        lsa_count.value_namespace = name_space;
        lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count = value;
        lsa_delete_count.value_namespace = name_space;
        lsa_delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count = value;
        lsa_maxage_count.value_namespace = name_space;
        lsa_maxage_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count = value;
        lsa_self_count.value_namespace = name_space;
        lsa_self_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-count")
    {
        lsa_count.yfilter = yfilter;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count.yfilter = yfilter;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count.yfilter = yfilter;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-count" || name == "lsa-delete-count" || name == "lsa-maxage-count" || name == "lsa-self-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsas()
{

    yang_name = "lsas"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::~Lsas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa>();
        c->parent = this;
        lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::Lsa()
    :
    area_id{YType::int32, "area-id"},
    ls_type{YType::enumeration, "ls-type"},
    ls_id{YType::str, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    interface_name{YType::str, "interface-name"}
    	,
    lsa_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader>())
	,lsa_detail_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData>())
	,lsa_internal_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData>())
{
    lsa_header->parent = this;
    lsa_detail_data->parent = this;
    lsa_internal_data->parent = this;

    yang_name = "lsa"; yang_parent_name = "lsas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::~Lsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::has_data() const
{
    return area_id.is_set
	|| ls_type.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| interface_name.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_data())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_operation())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail-data")
    {
        if(lsa_detail_data == nullptr)
        {
            lsa_detail_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData>();
        }
        return lsa_detail_data;
    }

    if(child_yang_name == "lsa-internal-data")
    {
        if(lsa_internal_data == nullptr)
        {
            lsa_internal_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData>();
        }
        return lsa_internal_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail_data != nullptr)
    {
        children["lsa-detail-data"] = lsa_detail_data;
    }

    if(lsa_internal_data != nullptr)
    {
        children["lsa-internal-data"] = lsa_internal_data;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail-data" || name == "lsa-internal-data" || name == "area-id" || name == "ls-type" || name == "ls-id" || name == "advertising-router" || name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::LsaHeader()
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

    yang_name = "lsa-header"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ls-type" || name == "lsid" || name == "advertising-router" || name == "lsa-area-id" || name == "lsa-age" || name == "dn-age-lsa" || name == "nsf" || name == "sequence-number" || name == "checksum")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaDetailData()
    :
    tos_capable{YType::boolean, "tos-capable"},
    nssa_translation{YType::boolean, "nssa-translation"},
    demand_circuit{YType::boolean, "demand-circuit"},
    dn_bit{YType::boolean, "dn-bit"},
    lsa_rate_limit_due_time{YType::uint32, "lsa-rate-limit-due-time"},
    lsadb_base_clock{YType::uint64, "lsadb-base-clock"},
    routing_bit{YType::boolean, "routing-bit"},
    advertising_router_reachable{YType::boolean, "advertising-router-reachable"},
    length{YType::uint16, "length"},
    sum_origin{YType::uint16, "sum-origin"},
    ase_origin{YType::uint16, "ase-origin"},
    in_sync{YType::uint8, "in-sync"},
    lsa_prefix_priority{YType::uint8, "lsa-prefix-priority"},
    new_lsa_prefix_priority{YType::uint8, "new-lsa-prefix-priority"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"}
    	,
    lsa_throttle_timer(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>())
	,lsa_last_updated_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>())
	,lsadb_base_time_stamp(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>())
	,not_delete(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete>())
{
    lsa_throttle_timer->parent = this;
    lsa_last_updated_time->parent = this;
    lsadb_base_time_stamp->parent = this;
    not_delete->parent = this;

    yang_name = "lsa-detail-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::~LsaDetailData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::has_data() const
{
    return tos_capable.is_set
	|| nssa_translation.is_set
	|| demand_circuit.is_set
	|| dn_bit.is_set
	|| lsa_rate_limit_due_time.is_set
	|| lsadb_base_clock.is_set
	|| routing_bit.is_set
	|| advertising_router_reachable.is_set
	|| length.is_set
	|| sum_origin.is_set
	|| ase_origin.is_set
	|| in_sync.is_set
	|| lsa_prefix_priority.is_set
	|| new_lsa_prefix_priority.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_data())
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_data())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_data())
	|| (not_delete !=  nullptr && not_delete->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_capable.yfilter)
	|| ydk::is_set(nssa_translation.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(dn_bit.yfilter)
	|| ydk::is_set(lsa_rate_limit_due_time.yfilter)
	|| ydk::is_set(lsadb_base_clock.yfilter)
	|| ydk::is_set(routing_bit.yfilter)
	|| ydk::is_set(advertising_router_reachable.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(sum_origin.yfilter)
	|| ydk::is_set(ase_origin.yfilter)
	|| ydk::is_set(in_sync.yfilter)
	|| ydk::is_set(lsa_prefix_priority.yfilter)
	|| ydk::is_set(new_lsa_prefix_priority.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_operation())
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_operation())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_operation())
	|| (not_delete !=  nullptr && not_delete->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_capable.is_set || is_set(tos_capable.yfilter)) leaf_name_data.push_back(tos_capable.get_name_leafdata());
    if (nssa_translation.is_set || is_set(nssa_translation.yfilter)) leaf_name_data.push_back(nssa_translation.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (dn_bit.is_set || is_set(dn_bit.yfilter)) leaf_name_data.push_back(dn_bit.get_name_leafdata());
    if (lsa_rate_limit_due_time.is_set || is_set(lsa_rate_limit_due_time.yfilter)) leaf_name_data.push_back(lsa_rate_limit_due_time.get_name_leafdata());
    if (lsadb_base_clock.is_set || is_set(lsadb_base_clock.yfilter)) leaf_name_data.push_back(lsadb_base_clock.get_name_leafdata());
    if (routing_bit.is_set || is_set(routing_bit.yfilter)) leaf_name_data.push_back(routing_bit.get_name_leafdata());
    if (advertising_router_reachable.is_set || is_set(advertising_router_reachable.yfilter)) leaf_name_data.push_back(advertising_router_reachable.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (sum_origin.is_set || is_set(sum_origin.yfilter)) leaf_name_data.push_back(sum_origin.get_name_leafdata());
    if (ase_origin.is_set || is_set(ase_origin.yfilter)) leaf_name_data.push_back(ase_origin.get_name_leafdata());
    if (in_sync.is_set || is_set(in_sync.yfilter)) leaf_name_data.push_back(in_sync.get_name_leafdata());
    if (lsa_prefix_priority.is_set || is_set(lsa_prefix_priority.yfilter)) leaf_name_data.push_back(lsa_prefix_priority.get_name_leafdata());
    if (new_lsa_prefix_priority.is_set || is_set(new_lsa_prefix_priority.yfilter)) leaf_name_data.push_back(new_lsa_prefix_priority.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-throttle-timer")
    {
        if(lsa_throttle_timer == nullptr)
        {
            lsa_throttle_timer = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>();
        }
        return lsa_throttle_timer;
    }

    if(child_yang_name == "lsa-last-updated-time")
    {
        if(lsa_last_updated_time == nullptr)
        {
            lsa_last_updated_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>();
        }
        return lsa_last_updated_time;
    }

    if(child_yang_name == "lsadb-base-time-stamp")
    {
        if(lsadb_base_time_stamp == nullptr)
        {
            lsadb_base_time_stamp = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>();
        }
        return lsadb_base_time_stamp;
    }

    if(child_yang_name == "not-delete")
    {
        if(not_delete == nullptr)
        {
            not_delete = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete>();
        }
        return not_delete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_throttle_timer != nullptr)
    {
        children["lsa-throttle-timer"] = lsa_throttle_timer;
    }

    if(lsa_last_updated_time != nullptr)
    {
        children["lsa-last-updated-time"] = lsa_last_updated_time;
    }

    if(lsadb_base_time_stamp != nullptr)
    {
        children["lsadb-base-time-stamp"] = lsadb_base_time_stamp;
    }

    if(not_delete != nullptr)
    {
        children["not-delete"] = not_delete;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-capable")
    {
        tos_capable = value;
        tos_capable.value_namespace = name_space;
        tos_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation = value;
        nssa_translation.value_namespace = name_space;
        nssa_translation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-bit")
    {
        dn_bit = value;
        dn_bit.value_namespace = name_space;
        dn_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time = value;
        lsa_rate_limit_due_time.value_namespace = name_space;
        lsa_rate_limit_due_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock = value;
        lsadb_base_clock.value_namespace = name_space;
        lsadb_base_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-bit")
    {
        routing_bit = value;
        routing_bit.value_namespace = name_space;
        routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable = value;
        advertising_router_reachable.value_namespace = name_space;
        advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-origin")
    {
        sum_origin = value;
        sum_origin.value_namespace = name_space;
        sum_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ase-origin")
    {
        ase_origin = value;
        ase_origin.value_namespace = name_space;
        ase_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sync")
    {
        in_sync = value;
        in_sync.value_namespace = name_space;
        in_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority = value;
        lsa_prefix_priority.value_namespace = name_space;
        lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority = value;
        new_lsa_prefix_priority.value_namespace = name_space;
        new_lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-capable")
    {
        tos_capable.yfilter = yfilter;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "dn-bit")
    {
        dn_bit.yfilter = yfilter;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time.yfilter = yfilter;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock.yfilter = yfilter;
    }
    if(value_path == "routing-bit")
    {
        routing_bit.yfilter = yfilter;
    }
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "sum-origin")
    {
        sum_origin.yfilter = yfilter;
    }
    if(value_path == "ase-origin")
    {
        ase_origin.yfilter = yfilter;
    }
    if(value_path == "in-sync")
    {
        in_sync.yfilter = yfilter;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-throttle-timer" || name == "lsa-last-updated-time" || name == "lsadb-base-time-stamp" || name == "not-delete" || name == "tos-capable" || name == "nssa-translation" || name == "demand-circuit" || name == "dn-bit" || name == "lsa-rate-limit-due-time" || name == "lsadb-base-clock" || name == "routing-bit" || name == "advertising-router-reachable" || name == "length" || name == "sum-origin" || name == "ase-origin" || name == "in-sync" || name == "lsa-prefix-priority" || name == "new-lsa-prefix-priority" || name == "lsa-flood-required-post-fail-over")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::LsaThrottleTimer()
    :
    timer_location{YType::enumeration, "timer-location"},
    timer_type{YType::enumeration, "timer-type"},
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    last_inst_second_table_index{YType::uint8, "last-inst-second-table-index"},
    last_inst_minute_table_index{YType::uint8, "last-inst-minute-table-index"}
{

    yang_name = "lsa-throttle-timer"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::~LsaThrottleTimer()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_data() const
{
    return timer_location.is_set
	|| timer_type.is_set
	|| second_table_index.is_set
	|| minute_table_index.is_set
	|| last_inst_second_table_index.is_set
	|| last_inst_minute_table_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_location.yfilter)
	|| ydk::is_set(timer_type.yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(last_inst_second_table_index.yfilter)
	|| ydk::is_set(last_inst_minute_table_index.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-throttle-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_location.is_set || is_set(timer_location.yfilter)) leaf_name_data.push_back(timer_location.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (last_inst_second_table_index.is_set || is_set(last_inst_second_table_index.yfilter)) leaf_name_data.push_back(last_inst_second_table_index.get_name_leafdata());
    if (last_inst_minute_table_index.is_set || is_set(last_inst_minute_table_index.yfilter)) leaf_name_data.push_back(last_inst_minute_table_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-location")
    {
        timer_location = value;
        timer_location.value_namespace = name_space;
        timer_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index = value;
        last_inst_second_table_index.value_namespace = name_space;
        last_inst_second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index = value;
        last_inst_minute_table_index.value_namespace = name_space;
        last_inst_minute_table_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-location")
    {
        timer_location.yfilter = yfilter;
    }
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-location" || name == "timer-type" || name == "second-table-index" || name == "minute-table-index" || name == "last-inst-second-table-index" || name == "last-inst-minute-table-index")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::LsaLastUpdatedTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "lsa-last-updated-time"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::~LsaLastUpdatedTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-last-updated-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::LsadbBaseTimeStamp()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "lsadb-base-time-stamp"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::~LsadbBaseTimeStamp()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsadb-base-time-stamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::NotDelete()
    :
    free_time{YType::uint32, "free-time"},
    no_delete{YType::boolean, "no-delete"},
    neighbor_exchange{YType::boolean, "neighbor-exchange"},
    routing_table{YType::boolean, "routing-table"},
    acknowledgement{YType::boolean, "acknowledgement"},
    maximum_age{YType::boolean, "maximum-age"},
    partial_spf{YType::boolean, "partial-spf"},
    flood_pending{YType::boolean, "flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    nsr_ack_pending{YType::boolean, "nsr-ack-pending"},
    sum_orig_pending{YType::boolean, "sum-orig-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"}
{

    yang_name = "not-delete"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::~NotDelete()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_data() const
{
    return free_time.is_set
	|| no_delete.is_set
	|| neighbor_exchange.is_set
	|| routing_table.is_set
	|| acknowledgement.is_set
	|| maximum_age.is_set
	|| partial_spf.is_set
	|| flood_pending.is_set
	|| rate_limit.is_set
	|| nsr_ack_pending.is_set
	|| sum_orig_pending.is_set
	|| nsr_flood_required.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(no_delete.yfilter)
	|| ydk::is_set(neighbor_exchange.yfilter)
	|| ydk::is_set(routing_table.yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| ydk::is_set(maximum_age.yfilter)
	|| ydk::is_set(partial_spf.yfilter)
	|| ydk::is_set(flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(nsr_ack_pending.yfilter)
	|| ydk::is_set(sum_orig_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not-delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (no_delete.is_set || is_set(no_delete.yfilter)) leaf_name_data.push_back(no_delete.get_name_leafdata());
    if (neighbor_exchange.is_set || is_set(neighbor_exchange.yfilter)) leaf_name_data.push_back(neighbor_exchange.get_name_leafdata());
    if (routing_table.is_set || is_set(routing_table.yfilter)) leaf_name_data.push_back(routing_table.get_name_leafdata());
    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (maximum_age.is_set || is_set(maximum_age.yfilter)) leaf_name_data.push_back(maximum_age.get_name_leafdata());
    if (partial_spf.is_set || is_set(partial_spf.yfilter)) leaf_name_data.push_back(partial_spf.get_name_leafdata());
    if (flood_pending.is_set || is_set(flood_pending.yfilter)) leaf_name_data.push_back(flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (nsr_ack_pending.is_set || is_set(nsr_ack_pending.yfilter)) leaf_name_data.push_back(nsr_ack_pending.get_name_leafdata());
    if (sum_orig_pending.is_set || is_set(sum_orig_pending.yfilter)) leaf_name_data.push_back(sum_orig_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-delete")
    {
        no_delete = value;
        no_delete.value_namespace = name_space;
        no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange = value;
        neighbor_exchange.value_namespace = name_space;
        neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-table")
    {
        routing_table = value;
        routing_table.value_namespace = name_space;
        routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-age")
    {
        maximum_age = value;
        maximum_age.value_namespace = name_space;
        maximum_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-spf")
    {
        partial_spf = value;
        partial_spf.value_namespace = name_space;
        partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pending")
    {
        flood_pending = value;
        flood_pending.value_namespace = name_space;
        flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending = value;
        nsr_ack_pending.value_namespace = name_space;
        nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending = value;
        sum_orig_pending.value_namespace = name_space;
        sum_orig_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "no-delete")
    {
        no_delete.yfilter = yfilter;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "routing-table")
    {
        routing_table.yfilter = yfilter;
    }
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
    if(value_path == "maximum-age")
    {
        maximum_age.yfilter = yfilter;
    }
    if(value_path == "partial-spf")
    {
        partial_spf.yfilter = yfilter;
    }
    if(value_path == "flood-pending")
    {
        flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "free-time" || name == "no-delete" || name == "neighbor-exchange" || name == "routing-table" || name == "acknowledgement" || name == "maximum-age" || name == "partial-spf" || name == "flood-pending" || name == "rate-limit" || name == "nsr-ack-pending" || name == "sum-orig-pending" || name == "nsr-flood-required")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::LsaInternalData()
    :
    internal_lsa_type{YType::enumeration, "internal-lsa-type"}
    	,
    router_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType>())
	,network_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType>())
	,summary_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType>())
	,external_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType>())
	,opaque_link_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>())
	,opaque_mpls_te_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>())
	,opaque_grace_lsa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>())
	,opaque_router_info_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>())
	,opaque_ep_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>())
	,opaque_el_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>())
{
    router_lsa_type->parent = this;
    network_lsa_type->parent = this;
    summary_lsa_type->parent = this;
    external_lsa_type->parent = this;
    opaque_link_lsa_type->parent = this;
    opaque_mpls_te_lsa_type->parent = this;
    opaque_grace_lsa->parent = this;
    opaque_router_info_lsa_type->parent = this;
    opaque_ep_lsa_type->parent = this;
    opaque_el_lsa_type->parent = this;

    yang_name = "lsa-internal-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::~LsaInternalData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::has_data() const
{
    return internal_lsa_type.is_set
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_data())
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_data())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_data())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_data())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_data())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_data())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_lsa_type.yfilter)
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_operation())
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_operation())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_operation())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_operation())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_operation())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_operation())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa_type.is_set || is_set(internal_lsa_type.yfilter)) leaf_name_data.push_back(internal_lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type == nullptr)
        {
            router_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType>();
        }
        return router_lsa_type;
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type == nullptr)
        {
            network_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType>();
        }
        return network_lsa_type;
    }

    if(child_yang_name == "summary-lsa-type")
    {
        if(summary_lsa_type == nullptr)
        {
            summary_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType>();
        }
        return summary_lsa_type;
    }

    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type == nullptr)
        {
            external_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType>();
        }
        return external_lsa_type;
    }

    if(child_yang_name == "opaque-link-lsa-type")
    {
        if(opaque_link_lsa_type == nullptr)
        {
            opaque_link_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>();
        }
        return opaque_link_lsa_type;
    }

    if(child_yang_name == "opaque-mpls-te-lsa-type")
    {
        if(opaque_mpls_te_lsa_type == nullptr)
        {
            opaque_mpls_te_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>();
        }
        return opaque_mpls_te_lsa_type;
    }

    if(child_yang_name == "opaque-grace-lsa")
    {
        if(opaque_grace_lsa == nullptr)
        {
            opaque_grace_lsa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>();
        }
        return opaque_grace_lsa;
    }

    if(child_yang_name == "opaque-router-info-lsa-type")
    {
        if(opaque_router_info_lsa_type == nullptr)
        {
            opaque_router_info_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>();
        }
        return opaque_router_info_lsa_type;
    }

    if(child_yang_name == "opaque-ep-lsa-type")
    {
        if(opaque_ep_lsa_type == nullptr)
        {
            opaque_ep_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>();
        }
        return opaque_ep_lsa_type;
    }

    if(child_yang_name == "opaque-el-lsa-type")
    {
        if(opaque_el_lsa_type == nullptr)
        {
            opaque_el_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>();
        }
        return opaque_el_lsa_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(router_lsa_type != nullptr)
    {
        children["router-lsa-type"] = router_lsa_type;
    }

    if(network_lsa_type != nullptr)
    {
        children["network-lsa-type"] = network_lsa_type;
    }

    if(summary_lsa_type != nullptr)
    {
        children["summary-lsa-type"] = summary_lsa_type;
    }

    if(external_lsa_type != nullptr)
    {
        children["external-lsa-type"] = external_lsa_type;
    }

    if(opaque_link_lsa_type != nullptr)
    {
        children["opaque-link-lsa-type"] = opaque_link_lsa_type;
    }

    if(opaque_mpls_te_lsa_type != nullptr)
    {
        children["opaque-mpls-te-lsa-type"] = opaque_mpls_te_lsa_type;
    }

    if(opaque_grace_lsa != nullptr)
    {
        children["opaque-grace-lsa"] = opaque_grace_lsa;
    }

    if(opaque_router_info_lsa_type != nullptr)
    {
        children["opaque-router-info-lsa-type"] = opaque_router_info_lsa_type;
    }

    if(opaque_ep_lsa_type != nullptr)
    {
        children["opaque-ep-lsa-type"] = opaque_ep_lsa_type;
    }

    if(opaque_el_lsa_type != nullptr)
    {
        children["opaque-el-lsa-type"] = opaque_el_lsa_type;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type = value;
        internal_lsa_type.value_namespace = name_space;
        internal_lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-lsa-type" || name == "network-lsa-type" || name == "summary-lsa-type" || name == "external-lsa-type" || name == "opaque-link-lsa-type" || name == "opaque-mpls-te-lsa-type" || name == "opaque-grace-lsa" || name == "opaque-router-info-lsa-type" || name == "opaque-ep-lsa-type" || name == "opaque-el-lsa-type" || name == "internal-lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::RouterLsaType()
    :
    router_asbr{YType::boolean, "router-asbr"},
    router_abr{YType::boolean, "router-abr"},
    internal_lsa{YType::boolean, "internal-lsa"}
{

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::~RouterLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_data())
            return true;
    }
    return router_asbr.is_set
	|| router_abr.is_set
	|| internal_lsa.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_asbr.yfilter)
	|| ydk::is_set(router_abr.yfilter)
	|| ydk::is_set(internal_lsa.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_asbr.is_set || is_set(router_asbr.yfilter)) leaf_name_data.push_back(router_asbr.get_name_leafdata());
    if (router_abr.is_set || is_set(router_abr.yfilter)) leaf_name_data.push_back(router_abr.get_name_leafdata());
    if (internal_lsa.is_set || is_set(internal_lsa.yfilter)) leaf_name_data.push_back(internal_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    if(child_yang_name == "internal-link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink>();
        c->parent = this;
        internal_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : internal_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-asbr")
    {
        router_asbr = value;
        router_asbr.value_namespace = name_space;
        router_asbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-abr")
    {
        router_abr = value;
        router_abr.value_namespace = name_space;
        router_abr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-lsa")
    {
        internal_lsa = value;
        internal_lsa.value_namespace = name_space;
        internal_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-asbr")
    {
        router_asbr.yfilter = yfilter;
    }
    if(value_path == "router-abr")
    {
        router_abr.yfilter = yfilter;
    }
    if(value_path == "internal-lsa")
    {
        internal_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "internal-link" || name == "router-asbr" || name == "router-abr" || name == "internal-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::Link()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    link_type{YType::enumeration, "link-type"},
    link_metric{YType::uint16, "link-metric"}
{

    yang_name = "link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::~Link()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| link_type.is_set
	|| link_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_metric.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link_tos)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-id" || name == "link-data" || name == "link-type" || name == "link-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::InternalLink()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    link_type{YType::enumeration, "link-type"},
    link_metric{YType::uint16, "link-metric"}
{

    yang_name = "internal-link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::~InternalLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| link_type.is_set
	|| link_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_metric.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link_tos)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-id" || name == "link-data" || name == "link-type" || name == "link-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "internal-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NetworkLsaType()
    :
    network_prefix_length{YType::uint32, "network-prefix-length"}
{

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_data() const
{
    for (std::size_t index=0; index<neighbor_router.size(); index++)
    {
        if(neighbor_router[index]->has_data())
            return true;
    }
    return network_prefix_length.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_operation() const
{
    for (std::size_t index=0; index<neighbor_router.size(); index++)
    {
        if(neighbor_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_prefix_length.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_prefix_length.is_set || is_set(network_prefix_length.yfilter)) leaf_name_data.push_back(network_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-router")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter>();
        c->parent = this;
        neighbor_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length = value;
        network_prefix_length.value_namespace = name_space;
        network_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-router" || name == "network-prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::NeighborRouter()
    :
    entry{YType::str, "entry"}
{

    yang_name = "neighbor-router"; yang_parent_name = "network-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::~NeighborRouter()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaType()
    :
    summary_prefix_length{YType::uint32, "summary-prefix-length"},
    internal_sum_lsa{YType::boolean, "internal-sum-lsa"}
{

    yang_name = "summary-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::~SummaryLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_data() const
{
    for (std::size_t index=0; index<summary_lsa_metric.size(); index++)
    {
        if(summary_lsa_metric[index]->has_data())
            return true;
    }
    return summary_prefix_length.is_set
	|| internal_sum_lsa.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_operation() const
{
    for (std::size_t index=0; index<summary_lsa_metric.size(); index++)
    {
        if(summary_lsa_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(summary_prefix_length.yfilter)
	|| ydk::is_set(internal_sum_lsa.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (summary_prefix_length.is_set || is_set(summary_prefix_length.yfilter)) leaf_name_data.push_back(summary_prefix_length.get_name_leafdata());
    if (internal_sum_lsa.is_set || is_set(internal_sum_lsa.yfilter)) leaf_name_data.push_back(internal_sum_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-lsa-metric")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric>();
        c->parent = this;
        summary_lsa_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : summary_lsa_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length = value;
        summary_prefix_length.value_namespace = name_space;
        summary_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa = value;
        internal_sum_lsa.value_namespace = name_space;
        internal_sum_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-lsa-metric" || name == "summary-prefix-length" || name == "internal-sum-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::SummaryLsaMetric()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "summary-lsa-metric"; yang_parent_name = "summary-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::~SummaryLsaMetric()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalLsaType()
    :
    external_prefix_length{YType::uint32, "external-prefix-length"},
    internal_external_lsa{YType::boolean, "internal-external-lsa"}
{

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_data() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_data())
            return true;
    }
    return external_prefix_length.is_set
	|| internal_external_lsa.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_operation() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(external_prefix_length.yfilter)
	|| ydk::is_set(internal_external_lsa.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_prefix_length.is_set || is_set(external_prefix_length.yfilter)) leaf_name_data.push_back(external_prefix_length.get_name_leafdata());
    if (internal_external_lsa.is_set || is_set(internal_external_lsa.yfilter)) leaf_name_data.push_back(internal_external_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-tos-metric")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric>();
        c->parent = this;
        external_tos_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : external_tos_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length = value;
        external_prefix_length.value_namespace = name_space;
        external_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa = value;
        internal_external_lsa.value_namespace = name_space;
        internal_external_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-tos-metric" || name == "external-prefix-length" || name == "internal-external-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::ExternalTosMetric()
    :
    external_metric{YType::uint32, "external-metric"},
    external_metric_type{YType::enumeration, "external-metric-type"},
    external_tos{YType::uint32, "external-tos"},
    forwarding_address{YType::str, "forwarding-address"},
    external_tag{YType::uint32, "external-tag"}
{

    yang_name = "external-tos-metric"; yang_parent_name = "external-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::~ExternalTosMetric()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_data() const
{
    return external_metric.is_set
	|| external_metric_type.is_set
	|| external_tos.is_set
	|| forwarding_address.is_set
	|| external_tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_metric.yfilter)
	|| ydk::is_set(external_metric_type.yfilter)
	|| ydk::is_set(external_tos.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-tos-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metric.is_set || is_set(external_metric.yfilter)) leaf_name_data.push_back(external_metric.get_name_leafdata());
    if (external_metric_type.is_set || is_set(external_metric_type.yfilter)) leaf_name_data.push_back(external_metric_type.get_name_leafdata());
    if (external_tos.is_set || is_set(external_tos.yfilter)) leaf_name_data.push_back(external_tos.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-metric")
    {
        external_metric = value;
        external_metric.value_namespace = name_space;
        external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type = value;
        external_metric_type.value_namespace = name_space;
        external_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tos")
    {
        external_tos = value;
        external_tos.value_namespace = name_space;
        external_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-metric")
    {
        external_metric.yfilter = yfilter;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type.yfilter = yfilter;
    }
    if(value_path == "external-tos")
    {
        external_tos.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-metric" || name == "external-metric-type" || name == "external-tos" || name == "forwarding-address" || name == "external-tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::OpaqueLinkLsaType()
    :
    opaque_interface_name{YType::str, "opaque-interface-name"}
{

    yang_name = "opaque-link-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::~OpaqueLinkLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_data() const
{
    return opaque_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-link-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_interface_name.is_set || is_set(opaque_interface_name.yfilter)) leaf_name_data.push_back(opaque_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name = value;
        opaque_interface_name.value_namespace = name_space;
        opaque_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::OpaqueMplsTeLsaType()
{

    yang_name = "opaque-mpls-te-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::~OpaqueMplsTeLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-mpls-te-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-mpls-te-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::OpaqueGraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "opaque-grace-lsa"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::~OpaqueGraceLsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| ip_address.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grace_period.yfilter)
	|| ydk::is_set(grace_reason.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-grace-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.yfilter)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.yfilter)) leaf_name_data.push_back(grace_reason.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
        grace_period.value_namespace = name_space;
        grace_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
        grace_reason.value_namespace = name_space;
        grace_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grace-period")
    {
        grace_period.yfilter = yfilter;
    }
    if(value_path == "grace-reason")
    {
        grace_reason.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grace-period" || name == "grace-reason" || name == "ip-address")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRouterInfoLsaType()
    :
    opaque_rilsa_scope{YType::enumeration, "opaque-rilsa-scope"},
    opaque_ri_interface_name{YType::str, "opaque-ri-interface-name"}
{

    yang_name = "opaque-router-info-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::~OpaqueRouterInfoLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_data() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_data())
            return true;
    }
    return opaque_rilsa_scope.is_set
	|| opaque_ri_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_operation() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(opaque_rilsa_scope.yfilter)
	|| ydk::is_set(opaque_ri_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-router-info-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_rilsa_scope.is_set || is_set(opaque_rilsa_scope.yfilter)) leaf_name_data.push_back(opaque_rilsa_scope.get_name_leafdata());
    if (opaque_ri_interface_name.is_set || is_set(opaque_ri_interface_name.yfilter)) leaf_name_data.push_back(opaque_ri_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opaque-ritlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv>();
        c->parent = this;
        opaque_ritlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : opaque_ritlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope = value;
        opaque_rilsa_scope.value_namespace = name_space;
        opaque_rilsa_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name = value;
        opaque_ri_interface_name.value_namespace = name_space;
        opaque_ri_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope.yfilter = yfilter;
    }
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-ritlv" || name == "opaque-rilsa-scope" || name == "opaque-ri-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::OpaqueRitlv()
    :
    ritlv_internal_type{YType::enumeration, "ritlv-internal-type"}
    	,
    unknown_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>())
	,rtr_cap_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>())
	,pcedtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>())
	,sr_algo_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>())
	,sr_range_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>())
	,node_msdtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>())
{
    unknown_tlv->parent = this;
    rtr_cap_tlv->parent = this;
    pcedtlv->parent = this;
    sr_algo_tlv->parent = this;
    sr_range_tlv->parent = this;
    node_msdtlv->parent = this;

    yang_name = "opaque-ritlv"; yang_parent_name = "opaque-router-info-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::~OpaqueRitlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_data() const
{
    return ritlv_internal_type.is_set
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_data())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_data())
	|| (pcedtlv !=  nullptr && pcedtlv->has_data())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_data())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_data())
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ritlv_internal_type.yfilter)
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_operation())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_operation())
	|| (pcedtlv !=  nullptr && pcedtlv->has_operation())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_operation())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_operation())
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ritlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ritlv_internal_type.is_set || is_set(ritlv_internal_type.yfilter)) leaf_name_data.push_back(ritlv_internal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-tlv")
    {
        if(unknown_tlv == nullptr)
        {
            unknown_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>();
        }
        return unknown_tlv;
    }

    if(child_yang_name == "rtr-cap-tlv")
    {
        if(rtr_cap_tlv == nullptr)
        {
            rtr_cap_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>();
        }
        return rtr_cap_tlv;
    }

    if(child_yang_name == "pcedtlv")
    {
        if(pcedtlv == nullptr)
        {
            pcedtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>();
        }
        return pcedtlv;
    }

    if(child_yang_name == "sr-algo-tlv")
    {
        if(sr_algo_tlv == nullptr)
        {
            sr_algo_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>();
        }
        return sr_algo_tlv;
    }

    if(child_yang_name == "sr-range-tlv")
    {
        if(sr_range_tlv == nullptr)
        {
            sr_range_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>();
        }
        return sr_range_tlv;
    }

    if(child_yang_name == "node-msdtlv")
    {
        if(node_msdtlv == nullptr)
        {
            node_msdtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>();
        }
        return node_msdtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unknown_tlv != nullptr)
    {
        children["unknown-tlv"] = unknown_tlv;
    }

    if(rtr_cap_tlv != nullptr)
    {
        children["rtr-cap-tlv"] = rtr_cap_tlv;
    }

    if(pcedtlv != nullptr)
    {
        children["pcedtlv"] = pcedtlv;
    }

    if(sr_algo_tlv != nullptr)
    {
        children["sr-algo-tlv"] = sr_algo_tlv;
    }

    if(sr_range_tlv != nullptr)
    {
        children["sr-range-tlv"] = sr_range_tlv;
    }

    if(node_msdtlv != nullptr)
    {
        children["node-msdtlv"] = node_msdtlv;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type = value;
        ritlv_internal_type.value_namespace = name_space;
        ritlv_internal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-tlv" || name == "rtr-cap-tlv" || name == "pcedtlv" || name == "sr-algo-tlv" || name == "sr-range-tlv" || name == "node-msdtlv" || name == "ritlv-internal-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::UnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "unknown-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::~UnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_data() const
{
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::RtrCapTlv()
    :
    rtr_cap_tlv_length{YType::uint16, "rtr-cap-tlv-length"},
    rtr_cap_graceful_restart{YType::boolean, "rtr-cap-graceful-restart"},
    rtr_cap_graceful_restart_helper{YType::boolean, "rtr-cap-graceful-restart-helper"},
    rtr_cap_stub_rtr{YType::boolean, "rtr-cap-stub-rtr"},
    rtr_cap_area_te{YType::boolean, "rtr-cap-area-te"},
    rtr_cap_p2plan{YType::boolean, "rtr-cap-p2plan"},
    rtr_cap_te_exp{YType::boolean, "rtr-cap-te-exp"},
    rtr_cap_all_bits{YType::uint32, "rtr-cap-all-bits"},
    rtr_cap_additional_info{YType::str, "rtr-cap-additional-info"}
{

    yang_name = "rtr-cap-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::~RtrCapTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_data() const
{
    return rtr_cap_tlv_length.is_set
	|| rtr_cap_graceful_restart.is_set
	|| rtr_cap_graceful_restart_helper.is_set
	|| rtr_cap_stub_rtr.is_set
	|| rtr_cap_area_te.is_set
	|| rtr_cap_p2plan.is_set
	|| rtr_cap_te_exp.is_set
	|| rtr_cap_all_bits.is_set
	|| rtr_cap_additional_info.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_cap_tlv_length.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart_helper.yfilter)
	|| ydk::is_set(rtr_cap_stub_rtr.yfilter)
	|| ydk::is_set(rtr_cap_area_te.yfilter)
	|| ydk::is_set(rtr_cap_p2plan.yfilter)
	|| ydk::is_set(rtr_cap_te_exp.yfilter)
	|| ydk::is_set(rtr_cap_all_bits.yfilter)
	|| ydk::is_set(rtr_cap_additional_info.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr-cap-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_cap_tlv_length.is_set || is_set(rtr_cap_tlv_length.yfilter)) leaf_name_data.push_back(rtr_cap_tlv_length.get_name_leafdata());
    if (rtr_cap_graceful_restart.is_set || is_set(rtr_cap_graceful_restart.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart.get_name_leafdata());
    if (rtr_cap_graceful_restart_helper.is_set || is_set(rtr_cap_graceful_restart_helper.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart_helper.get_name_leafdata());
    if (rtr_cap_stub_rtr.is_set || is_set(rtr_cap_stub_rtr.yfilter)) leaf_name_data.push_back(rtr_cap_stub_rtr.get_name_leafdata());
    if (rtr_cap_area_te.is_set || is_set(rtr_cap_area_te.yfilter)) leaf_name_data.push_back(rtr_cap_area_te.get_name_leafdata());
    if (rtr_cap_p2plan.is_set || is_set(rtr_cap_p2plan.yfilter)) leaf_name_data.push_back(rtr_cap_p2plan.get_name_leafdata());
    if (rtr_cap_te_exp.is_set || is_set(rtr_cap_te_exp.yfilter)) leaf_name_data.push_back(rtr_cap_te_exp.get_name_leafdata());
    if (rtr_cap_all_bits.is_set || is_set(rtr_cap_all_bits.yfilter)) leaf_name_data.push_back(rtr_cap_all_bits.get_name_leafdata());
    if (rtr_cap_additional_info.is_set || is_set(rtr_cap_additional_info.yfilter)) leaf_name_data.push_back(rtr_cap_additional_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length = value;
        rtr_cap_tlv_length.value_namespace = name_space;
        rtr_cap_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart = value;
        rtr_cap_graceful_restart.value_namespace = name_space;
        rtr_cap_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper = value;
        rtr_cap_graceful_restart_helper.value_namespace = name_space;
        rtr_cap_graceful_restart_helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr = value;
        rtr_cap_stub_rtr.value_namespace = name_space;
        rtr_cap_stub_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te = value;
        rtr_cap_area_te.value_namespace = name_space;
        rtr_cap_area_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan = value;
        rtr_cap_p2plan.value_namespace = name_space;
        rtr_cap_p2plan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp = value;
        rtr_cap_te_exp.value_namespace = name_space;
        rtr_cap_te_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits = value;
        rtr_cap_all_bits.value_namespace = name_space;
        rtr_cap_all_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info = value;
        rtr_cap_additional_info.value_namespace = name_space;
        rtr_cap_additional_info.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-cap-tlv-length" || name == "rtr-cap-graceful-restart" || name == "rtr-cap-graceful-restart-helper" || name == "rtr-cap-stub-rtr" || name == "rtr-cap-area-te" || name == "rtr-cap-p2plan" || name == "rtr-cap-te-exp" || name == "rtr-cap-all-bits" || name == "rtr-cap-additional-info")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::Pcedtlv()
    :
    pcedtlv_length{YType::uint16, "pcedtlv-length"}
    	,
    pced_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>())
	,pced_scope(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>())
{
    pced_addr->parent = this;
    pced_scope->parent = this;

    yang_name = "pcedtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::~Pcedtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_data() const
{
    return pcedtlv_length.is_set
	|| (pced_addr !=  nullptr && pced_addr->has_data())
	|| (pced_scope !=  nullptr && pced_scope->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcedtlv_length.yfilter)
	|| (pced_addr !=  nullptr && pced_addr->has_operation())
	|| (pced_scope !=  nullptr && pced_scope->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcedtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcedtlv_length.is_set || is_set(pcedtlv_length.yfilter)) leaf_name_data.push_back(pcedtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pced-addr")
    {
        if(pced_addr == nullptr)
        {
            pced_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>();
        }
        return pced_addr;
    }

    if(child_yang_name == "pced-scope")
    {
        if(pced_scope == nullptr)
        {
            pced_scope = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>();
        }
        return pced_scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pced_addr != nullptr)
    {
        children["pced-addr"] = pced_addr;
    }

    if(pced_scope != nullptr)
    {
        children["pced-scope"] = pced_scope;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length = value;
        pcedtlv_length.value_namespace = name_space;
        pcedtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pced-addr" || name == "pced-scope" || name == "pcedtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PcedAddr()
    :
    pce_addr_type{YType::enumeration, "pce-addr-type"}
    	,
    pce_addr_unknown_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>())
	,ipv4pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>())
	,ipv6pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>())
{
    pce_addr_unknown_tlv->parent = this;
    ipv4pce_addr->parent = this;
    ipv6pce_addr->parent = this;

    yang_name = "pced-addr"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::~PcedAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_data() const
{
    return pce_addr_type.is_set
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_data())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_data())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_addr_type.yfilter)
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_operation())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_operation())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_addr_type.is_set || is_set(pce_addr_type.yfilter)) leaf_name_data.push_back(pce_addr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce-addr-unknown-tlv")
    {
        if(pce_addr_unknown_tlv == nullptr)
        {
            pce_addr_unknown_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>();
        }
        return pce_addr_unknown_tlv;
    }

    if(child_yang_name == "ipv4pce-addr")
    {
        if(ipv4pce_addr == nullptr)
        {
            ipv4pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>();
        }
        return ipv4pce_addr;
    }

    if(child_yang_name == "ipv6pce-addr")
    {
        if(ipv6pce_addr == nullptr)
        {
            ipv6pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>();
        }
        return ipv6pce_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pce_addr_unknown_tlv != nullptr)
    {
        children["pce-addr-unknown-tlv"] = pce_addr_unknown_tlv;
    }

    if(ipv4pce_addr != nullptr)
    {
        children["ipv4pce-addr"] = ipv4pce_addr;
    }

    if(ipv6pce_addr != nullptr)
    {
        children["ipv6pce-addr"] = ipv6pce_addr;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type = value;
        pce_addr_type.value_namespace = name_space;
        pce_addr_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-addr-unknown-tlv" || name == "ipv4pce-addr" || name == "ipv6pce-addr" || name == "pce-addr-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::PceAddrUnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "pce-addr-unknown-tlv"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::~PceAddrUnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_data() const
{
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-addr-unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::Ipv4PceAddr()
    :
    pceipv4_addr{YType::str, "pceipv4-addr"}
{

    yang_name = "ipv4pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::~Ipv4PceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_data() const
{
    return pceipv4_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv4_addr.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv4_addr.is_set || is_set(pceipv4_addr.yfilter)) leaf_name_data.push_back(pceipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr = value;
        pceipv4_addr.value_namespace = name_space;
        pceipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv4-addr")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::Ipv6PceAddr()
    :
    pceipv6_addr{YType::str, "pceipv6-addr"}
{

    yang_name = "ipv6pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::~Ipv6PceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_data() const
{
    return pceipv6_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv6_addr.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv6_addr.is_set || is_set(pceipv6_addr.yfilter)) leaf_name_data.push_back(pceipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr = value;
        pceipv6_addr.value_namespace = name_space;
        pceipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv6-addr")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::PcedScope()
    :
    lbit{YType::boolean, "lbit"},
    rbit{YType::boolean, "rbit"},
    rd_bit{YType::boolean, "rd-bit"},
    sbit{YType::boolean, "sbit"},
    sd_bit{YType::boolean, "sd-bit"},
    ybit{YType::boolean, "ybit"},
    pref_l{YType::uint8, "pref-l"},
    pref_r{YType::uint8, "pref-r"},
    pref_s{YType::uint8, "pref-s"},
    pref_y{YType::uint8, "pref-y"},
    all_scope_info_bits{YType::uint32, "all-scope-info-bits"}
{

    yang_name = "pced-scope"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::~PcedScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_data() const
{
    return lbit.is_set
	|| rbit.is_set
	|| rd_bit.is_set
	|| sbit.is_set
	|| sd_bit.is_set
	|| ybit.is_set
	|| pref_l.is_set
	|| pref_r.is_set
	|| pref_s.is_set
	|| pref_y.is_set
	|| all_scope_info_bits.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(rbit.yfilter)
	|| ydk::is_set(rd_bit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(sd_bit.yfilter)
	|| ydk::is_set(ybit.yfilter)
	|| ydk::is_set(pref_l.yfilter)
	|| ydk::is_set(pref_r.yfilter)
	|| ydk::is_set(pref_s.yfilter)
	|| ydk::is_set(pref_y.yfilter)
	|| ydk::is_set(all_scope_info_bits.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (rbit.is_set || is_set(rbit.yfilter)) leaf_name_data.push_back(rbit.get_name_leafdata());
    if (rd_bit.is_set || is_set(rd_bit.yfilter)) leaf_name_data.push_back(rd_bit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (sd_bit.is_set || is_set(sd_bit.yfilter)) leaf_name_data.push_back(sd_bit.get_name_leafdata());
    if (ybit.is_set || is_set(ybit.yfilter)) leaf_name_data.push_back(ybit.get_name_leafdata());
    if (pref_l.is_set || is_set(pref_l.yfilter)) leaf_name_data.push_back(pref_l.get_name_leafdata());
    if (pref_r.is_set || is_set(pref_r.yfilter)) leaf_name_data.push_back(pref_r.get_name_leafdata());
    if (pref_s.is_set || is_set(pref_s.yfilter)) leaf_name_data.push_back(pref_s.get_name_leafdata());
    if (pref_y.is_set || is_set(pref_y.yfilter)) leaf_name_data.push_back(pref_y.get_name_leafdata());
    if (all_scope_info_bits.is_set || is_set(all_scope_info_bits.yfilter)) leaf_name_data.push_back(all_scope_info_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rbit")
    {
        rbit = value;
        rbit.value_namespace = name_space;
        rbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-bit")
    {
        rd_bit = value;
        rd_bit.value_namespace = name_space;
        rd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-bit")
    {
        sd_bit = value;
        sd_bit.value_namespace = name_space;
        sd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ybit")
    {
        ybit = value;
        ybit.value_namespace = name_space;
        ybit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-l")
    {
        pref_l = value;
        pref_l.value_namespace = name_space;
        pref_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-r")
    {
        pref_r = value;
        pref_r.value_namespace = name_space;
        pref_r.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-s")
    {
        pref_s = value;
        pref_s.value_namespace = name_space;
        pref_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-y")
    {
        pref_y = value;
        pref_y.value_namespace = name_space;
        pref_y.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits = value;
        all_scope_info_bits.value_namespace = name_space;
        all_scope_info_bits.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
    if(value_path == "rbit")
    {
        rbit.yfilter = yfilter;
    }
    if(value_path == "rd-bit")
    {
        rd_bit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "sd-bit")
    {
        sd_bit.yfilter = yfilter;
    }
    if(value_path == "ybit")
    {
        ybit.yfilter = yfilter;
    }
    if(value_path == "pref-l")
    {
        pref_l.yfilter = yfilter;
    }
    if(value_path == "pref-r")
    {
        pref_r.yfilter = yfilter;
    }
    if(value_path == "pref-s")
    {
        pref_s.yfilter = yfilter;
    }
    if(value_path == "pref-y")
    {
        pref_y.yfilter = yfilter;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbit" || name == "rbit" || name == "rd-bit" || name == "sbit" || name == "sd-bit" || name == "ybit" || name == "pref-l" || name == "pref-r" || name == "pref-s" || name == "pref-y" || name == "all-scope-info-bits")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoTlv()
    :
    sr_algo_length{YType::uint16, "sr-algo-length"},
    sr_algo_value{YType::str, "sr-algo-value"}
{

    yang_name = "sr-algo-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::~SrAlgoTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_data() const
{
    return sr_algo_length.is_set
	|| sr_algo_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_algo_length.yfilter)
	|| ydk::is_set(sr_algo_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_algo_length.is_set || is_set(sr_algo_length.yfilter)) leaf_name_data.push_back(sr_algo_length.get_name_leafdata());
    if (sr_algo_value.is_set || is_set(sr_algo_value.yfilter)) leaf_name_data.push_back(sr_algo_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length = value;
        sr_algo_length.value_namespace = name_space;
        sr_algo_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value = value;
        sr_algo_value.value_namespace = name_space;
        sr_algo_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length.yfilter = yfilter;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-algo-length" || name == "sr-algo-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::SrRangeTlv()
    :
    sr_range_length{YType::uint16, "sr-range-length"},
    sr_range_size{YType::uint32, "sr-range-size"}
    	,
    sidtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>())
{
    sidtlv->parent = this;

    yang_name = "sr-range-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::~SrRangeTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_data() const
{
    return sr_range_length.is_set
	|| sr_range_size.is_set
	|| (sidtlv !=  nullptr && sidtlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_range_length.yfilter)
	|| ydk::is_set(sr_range_size.yfilter)
	|| (sidtlv !=  nullptr && sidtlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-range-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_range_length.is_set || is_set(sr_range_length.yfilter)) leaf_name_data.push_back(sr_range_length.get_name_leafdata());
    if (sr_range_size.is_set || is_set(sr_range_size.yfilter)) leaf_name_data.push_back(sr_range_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sidtlv")
    {
        if(sidtlv == nullptr)
        {
            sidtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>();
        }
        return sidtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sidtlv != nullptr)
    {
        children["sidtlv"] = sidtlv;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sidtlv" || name == "sr-range-length" || name == "sr-range-size")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::Sidtlv()
    :
    sr_sid_length{YType::uint16, "sr-sid-length"},
    sr_sid_value{YType::uint32, "sr-sid-value"}
{

    yang_name = "sidtlv"; yang_parent_name = "sr-range-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::~Sidtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_data() const
{
    return sr_sid_length.is_set
	|| sr_sid_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_sid_length.yfilter)
	|| ydk::is_set(sr_sid_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sidtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_sid_length.is_set || is_set(sr_sid_length.yfilter)) leaf_name_data.push_back(sr_sid_length.get_name_leafdata());
    if (sr_sid_value.is_set || is_set(sr_sid_value.yfilter)) leaf_name_data.push_back(sr_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-sid-length" || name == "sr-sid-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdtlv()
    :
    node_msdtlv_length{YType::uint16, "node-msdtlv-length"}
    	,
    node_msd_sub_types(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>())
{
    node_msd_sub_types->parent = this;

    yang_name = "node-msdtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::~NodeMsdtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_data() const
{
    return node_msdtlv_length.is_set
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_msdtlv_length.yfilter)
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msdtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_msdtlv_length.is_set || is_set(node_msdtlv_length.yfilter)) leaf_name_data.push_back(node_msdtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-msd-sub-types")
    {
        if(node_msd_sub_types == nullptr)
        {
            node_msd_sub_types = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>();
        }
        return node_msd_sub_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_msd_sub_types != nullptr)
    {
        children["node-msd-sub-types"] = node_msd_sub_types;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length = value;
        node_msdtlv_length.value_namespace = name_space;
        node_msdtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-msd-sub-types" || name == "node-msdtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::NodeMsdSubTypes()
    :
    msd_sub_type{YType::uint8, "msd-sub-type"},
    msd_value{YType::uint8, "msd-value"}
{

    yang_name = "node-msd-sub-types"; yang_parent_name = "node-msdtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::~NodeMsdSubTypes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_data() const
{
    return msd_sub_type.is_set
	|| msd_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msd_sub_type.yfilter)
	|| ydk::is_set(msd_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msd-sub-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msd_sub_type.is_set || is_set(msd_sub_type.yfilter)) leaf_name_data.push_back(msd_sub_type.get_name_leafdata());
    if (msd_value.is_set || is_set(msd_value.yfilter)) leaf_name_data.push_back(msd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msd-sub-type" || name == "msd-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::OpaqueEpLsaType()
{

    yang_name = "opaque-ep-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::~OpaqueEpLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ep-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-ep-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::OpaqueElLsaType()
{

    yang_name = "opaque-el-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::~OpaqueElLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-el-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-el-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummaries()
{

    yang_name = "lsa-summaries"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::~LsaSummaries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::has_data() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::has_operation() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-summary")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary>();
        c->parent = this;
        lsa_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-summary")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaSummary()
    :
    area_id{YType::int32, "area-id"},
    ls_type{YType::enumeration, "ls-type"},
    ls_id{YType::str, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    interface_name{YType::str, "interface-name"},
    external_tag{YType::uint32, "external-tag"},
    link_count{YType::uint16, "link-count"}
    	,
    lsa_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "lsa-summary"; yang_parent_name = "lsa-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::~LsaSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "area-id" || name == "ls-type" || name == "ls-id" || name == "advertising-router" || name == "interface-name" || name == "external-tag" || name == "link-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::LsaHeader()
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

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ls-type" || name == "lsid" || name == "advertising-router" || name == "lsa-area-id" || name == "lsa-age" || name == "dn-age-lsa" || name == "nsf" || name == "sequence-number" || name == "checksum")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixes()
{

    yang_name = "summary-prefixes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-prefix")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
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

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| netmask.is_set
	|| summary_prefix.is_set
	|| summary_mask.is_set
	|| summary_metric.is_set
	|| summary_metric_type.is_set
	|| summary_tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "netmask" || name == "summary-prefix" || name == "summary-mask" || name == "summary-metric" || name == "summary-metric-type" || name == "summary-tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::AreaStatistics()
    :
    interface_stats_entries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries>())
{
    interface_stats_entries->parent = this;

    yang_name = "area-statistics"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::~AreaStatistics()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::has_data() const
{
    return (interface_stats_entries !=  nullptr && interface_stats_entries->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_stats_entries != nullptr)
    {
        children["interface-stats-entries"] = interface_stats_entries;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entries")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntries()
{

    yang_name = "interface-stats-entries"; yang_parent_name = "area-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entry")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-entry")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    madj_intf{YType::boolean, "madj-intf"},
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"}
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-stat")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        c->parent = this;
        if_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "madj-intf" || name == "area-id" || name == "area-id-str")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::OspfSummary()
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

    yang_name = "ospf-summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::~OspfSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-num-nbrs" || name == "sa-num-nbrs-up" || name == "sa-num-intf" || name == "sa-num-intf-up" || name == "sa-num-vintf-up" || name == "sa-num-slintf-up" || name == "sa-num-areas" || name == "sa-lsa-cnt-type-rtr" || name == "sa-lsa-cnt-type-net" || name == "sa-lsa-cnt-type-sum-net" || name == "sa-lsa-cnt-type-sum-asb" || name == "sa-lsa-cnt-type-ase" || name == "sa-lsa-cnt-type-mospf" || name == "sa-lsa-cnt-type-7ase" || name == "sa-lsa-cnt-type-8-ignore" || name == "sa-lsa-cnt-type-opq-link" || name == "sa-lsa-cnt-type-opq-area" || name == "sa-lsa-cnt-type-opq-as")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::FastReroute()
    :
    topologies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies>())
{
    topologies->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_data() const
{
    return (topologies !=  nullptr && topologies->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (topologies !=  nullptr && topologies->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies>();
        }
        return topologies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topologies != nullptr)
    {
        children["topologies"] = topologies;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topologies")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topologies()
{

    yang_name = "topologies"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::~Topologies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::Topology()
    :
    router_id{YType::str, "router-id"},
    area_id{YType::int32, "area-id"},
    ipfrr_topo_area_id{YType::str, "ipfrr-topo-area-id"},
    ipfrr_router_id{YType::str, "ipfrr-router-id"},
    ipfrr_area_revision{YType::uint32, "ipfrr-area-revision"}
{

    yang_name = "topology"; yang_parent_name = "topologies"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::~Topology()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ipfrr_topo_area_id.is_set || is_set(ipfrr_topo_area_id.yfilter)) leaf_name_data.push_back(ipfrr_topo_area_id.get_name_leafdata());
    if (ipfrr_router_id.is_set || is_set(ipfrr_router_id.yfilter)) leaf_name_data.push_back(ipfrr_router_id.get_name_leafdata());
    if (ipfrr_area_revision.is_set || is_set(ipfrr_area_revision.yfilter)) leaf_name_data.push_back(ipfrr_area_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-topo")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo>();
        c->parent = this;
        ipfrr_topo.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_children() const
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

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-topo" || name == "router-id" || name == "area-id" || name == "ipfrr-topo-area-id" || name == "ipfrr-router-id" || name == "ipfrr-area-revision")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::IpfrrTopo()
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

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::~IpfrrTopo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "distance" || name == "distance-reverse" || name == "type4" || name == "revision" || name == "neighbor-sourced" || name == "dr" || name == "poison")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Srms()
    :
    policy(std::make_shared<Ospf::Processes::Process::Srms::Policy>())
{
    policy->parent = this;

    yang_name = "srms"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::~Srms()
{
}

bool Ospf::Processes::Process::Srms::has_data() const
{
    return (policy !=  nullptr && policy->has_data());
}

bool Ospf::Processes::Process::Srms::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Ospf::Processes::Process::Srms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Ospf::Processes::Process::Srms::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    return children;
}

void Ospf::Processes::Process::Srms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::Policy()
    :
    policy_ipv4(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4>())
{
    policy_ipv4->parent = this;

    yang_name = "policy"; yang_parent_name = "srms"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::~Policy()
{
}

bool Ospf::Processes::Process::Srms::Policy::has_data() const
{
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 == nullptr)
        {
            policy_ipv4 = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4>();
        }
        return policy_ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_ipv4 != nullptr)
    {
        children["policy-ipv4"] = policy_ipv4;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_backup(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>())
	,policy_ipv4_active(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
{
    policy_ipv4_backup->parent = this;
    policy_ipv4_active->parent = this;

    yang_name = "policy-ipv4"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::has_data() const
{
    return (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data())
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation())
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup == nullptr)
        {
            policy_ipv4_backup = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>();
        }
        return policy_ipv4_backup;
    }

    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active == nullptr)
        {
            policy_ipv4_active = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active>();
        }
        return policy_ipv4_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_ipv4_backup != nullptr)
    {
        children["policy-ipv4-backup"] = policy_ipv4_backup;
    }

    if(policy_ipv4_active != nullptr)
    {
        children["policy-ipv4-active"] = policy_ipv4_active;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4-backup" || name == "policy-ipv4-active")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
{

    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
    	,
    addr(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
{

    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
    	,
    addr(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::DefaultVrf()
    :
    flood_list_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable>())
	,mpls_te(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe>())
	,statistics(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics>())
	,adjacency_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation>())
	,route_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation>())
	,interface_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation>())
	,border_routers(std::make_shared<Ospf::Processes::Process::DefaultVrf::BorderRouters>())
	,process_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation>())
	,areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas>())
	,database(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database>())
	,summary_prefixes(std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes>())
	,area_statistics(std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics>())
	,ospf_summary(std::make_shared<Ospf::Processes::Process::DefaultVrf::OspfSummary>())
	,fast_reroute(std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute>())
{
    flood_list_table->parent = this;
    mpls_te->parent = this;
    statistics->parent = this;
    adjacency_information->parent = this;
    route_information->parent = this;
    interface_information->parent = this;
    border_routers->parent = this;
    process_information->parent = this;
    areas->parent = this;
    database->parent = this;
    summary_prefixes->parent = this;
    area_statistics->parent = this;
    ospf_summary->parent = this;
    fast_reroute->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::~DefaultVrf()
{
}

bool Ospf::Processes::Process::DefaultVrf::has_data() const
{
    return (flood_list_table !=  nullptr && flood_list_table->has_data())
	|| (mpls_te !=  nullptr && mpls_te->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (adjacency_information !=  nullptr && adjacency_information->has_data())
	|| (route_information !=  nullptr && route_information->has_data())
	|| (interface_information !=  nullptr && interface_information->has_data())
	|| (border_routers !=  nullptr && border_routers->has_data())
	|| (process_information !=  nullptr && process_information->has_data())
	|| (areas !=  nullptr && areas->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (area_statistics !=  nullptr && area_statistics->has_data())
	|| (ospf_summary !=  nullptr && ospf_summary->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (flood_list_table !=  nullptr && flood_list_table->has_operation())
	|| (mpls_te !=  nullptr && mpls_te->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (adjacency_information !=  nullptr && adjacency_information->has_operation())
	|| (route_information !=  nullptr && route_information->has_operation())
	|| (interface_information !=  nullptr && interface_information->has_operation())
	|| (border_routers !=  nullptr && border_routers->has_operation())
	|| (process_information !=  nullptr && process_information->has_operation())
	|| (areas !=  nullptr && areas->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (area_statistics !=  nullptr && area_statistics->has_operation())
	|| (ospf_summary !=  nullptr && ospf_summary->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood-list-table")
    {
        if(flood_list_table == nullptr)
        {
            flood_list_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable>();
        }
        return flood_list_table;
    }

    if(child_yang_name == "mpls-te")
    {
        if(mpls_te == nullptr)
        {
            mpls_te = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe>();
        }
        return mpls_te;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "adjacency-information")
    {
        if(adjacency_information == nullptr)
        {
            adjacency_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation>();
        }
        return adjacency_information;
    }

    if(child_yang_name == "route-information")
    {
        if(route_information == nullptr)
        {
            route_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation>();
        }
        return route_information;
    }

    if(child_yang_name == "interface-information")
    {
        if(interface_information == nullptr)
        {
            interface_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation>();
        }
        return interface_information;
    }

    if(child_yang_name == "border-routers")
    {
        if(border_routers == nullptr)
        {
            border_routers = std::make_shared<Ospf::Processes::Process::DefaultVrf::BorderRouters>();
        }
        return border_routers;
    }

    if(child_yang_name == "process-information")
    {
        if(process_information == nullptr)
        {
            process_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation>();
        }
        return process_information;
    }

    if(child_yang_name == "areas")
    {
        if(areas == nullptr)
        {
            areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas>();
        }
        return areas;
    }

    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database>();
        }
        return database;
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes == nullptr)
        {
            summary_prefixes = std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes>();
        }
        return summary_prefixes;
    }

    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics>();
        }
        return area_statistics;
    }

    if(child_yang_name == "ospf-summary")
    {
        if(ospf_summary == nullptr)
        {
            ospf_summary = std::make_shared<Ospf::Processes::Process::DefaultVrf::OspfSummary>();
        }
        return ospf_summary;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flood_list_table != nullptr)
    {
        children["flood-list-table"] = flood_list_table;
    }

    if(mpls_te != nullptr)
    {
        children["mpls-te"] = mpls_te;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(adjacency_information != nullptr)
    {
        children["adjacency-information"] = adjacency_information;
    }

    if(route_information != nullptr)
    {
        children["route-information"] = route_information;
    }

    if(interface_information != nullptr)
    {
        children["interface-information"] = interface_information;
    }

    if(border_routers != nullptr)
    {
        children["border-routers"] = border_routers;
    }

    if(process_information != nullptr)
    {
        children["process-information"] = process_information;
    }

    if(areas != nullptr)
    {
        children["areas"] = areas;
    }

    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(summary_prefixes != nullptr)
    {
        children["summary-prefixes"] = summary_prefixes;
    }

    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    if(ospf_summary != nullptr)
    {
        children["ospf-summary"] = ospf_summary;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood-list-table" || name == "mpls-te" || name == "statistics" || name == "adjacency-information" || name == "route-information" || name == "interface-information" || name == "border-routers" || name == "process-information" || name == "areas" || name == "database" || name == "summary-prefixes" || name == "area-statistics" || name == "ospf-summary" || name == "fast-reroute")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::FloodListTable()
{

    yang_name = "flood-list-table"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::~FloodListTable()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::has_data() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::has_operation() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-list-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FloodListTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood>();
        c->parent = this;
        flood.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::FloodListTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::Flood()
    :
    interface_name{YType::str, "interface-name"},
    flood_interface_name{YType::str, "flood-interface-name"},
    flood_pacing_timer{YType::uint32, "flood-pacing-timer"},
    flood_lsa_count{YType::uint32, "flood-lsa-count"}
{

    yang_name = "flood"; yang_parent_name = "flood-list-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::~Flood()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::has_data() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| flood_interface_name.is_set
	|| flood_pacing_timer.is_set
	|| flood_lsa_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::has_operation() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(flood_interface_name.yfilter)
	|| ydk::is_set(flood_pacing_timer.yfilter)
	|| ydk::is_set(flood_lsa_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (flood_interface_name.is_set || is_set(flood_interface_name.yfilter)) leaf_name_data.push_back(flood_interface_name.get_name_leafdata());
    if (flood_pacing_timer.is_set || is_set(flood_pacing_timer.yfilter)) leaf_name_data.push_back(flood_pacing_timer.get_name_leafdata());
    if (flood_lsa_count.is_set || is_set(flood_lsa_count.yfilter)) leaf_name_data.push_back(flood_lsa_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-flood")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood>();
        c->parent = this;
        area_flood.push_back(c);
        return c;
    }

    if(child_yang_name == "as-flood")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood>();
        c->parent = this;
        as_flood.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area_flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : as_flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name = value;
        flood_interface_name.value_namespace = name_space;
        flood_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer = value;
        flood_pacing_timer.value_namespace = name_space;
        flood_pacing_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count = value;
        flood_lsa_count.value_namespace = name_space;
        flood_lsa_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name.yfilter = yfilter;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer.yfilter = yfilter;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-flood" || name == "as-flood" || name == "interface-name" || name == "flood-interface-name" || name == "flood-pacing-timer" || name == "flood-lsa-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::AreaFlood()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "area-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::~AreaFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::AsFlood()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "as-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::~AsFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTe()
    :
    mpls_te_links(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks>())
	,mpls_te_fragments(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments>())
{
    mpls_te_links->parent = this;
    mpls_te_fragments->parent = this;

    yang_name = "mpls-te"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::~MplsTe()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::has_data() const
{
    return (mpls_te_links !=  nullptr && mpls_te_links->has_data())
	|| (mpls_te_fragments !=  nullptr && mpls_te_fragments->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_te_links !=  nullptr && mpls_te_links->has_operation())
	|| (mpls_te_fragments !=  nullptr && mpls_te_fragments->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-links")
    {
        if(mpls_te_links == nullptr)
        {
            mpls_te_links = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks>();
        }
        return mpls_te_links;
    }

    if(child_yang_name == "mpls-te-fragments")
    {
        if(mpls_te_fragments == nullptr)
        {
            mpls_te_fragments = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments>();
        }
        return mpls_te_fragments;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mpls_te_links != nullptr)
    {
        children["mpls-te-links"] = mpls_te_links;
    }

    if(mpls_te_fragments != nullptr)
    {
        children["mpls-te-fragments"] = mpls_te_fragments;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-links" || name == "mpls-te-fragments")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLinks()
{

    yang_name = "mpls-te-links"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::~MplsTeLinks()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::has_data() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink>();
        c->parent = this;
        mpls_te_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-link")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink()
    :
    area_id{YType::int32, "area-id"},
    mpls_te_router_id{YType::str, "mpls-te-router-id"},
    mpls_te_enabled{YType::boolean, "mpls-te-enabled"},
    mpls_te_initialized{YType::boolean, "mpls-te-initialized"},
    mpls_te_area_id{YType::str, "mpls-te-area-id"},
    mpls_te_area_instance{YType::uint32, "mpls-te-area-instance"},
    mpls_te_router_address{YType::str, "mpls-te-router-address"},
    mpls_te_next_fragment_id{YType::uint32, "mpls-te-next-fragment-id"},
    spacious_fragment{YType::boolean, "spacious-fragment"}
{

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-links"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::~MplsTeLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::has_data() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| mpls_te_router_id.is_set
	|| mpls_te_enabled.is_set
	|| mpls_te_initialized.is_set
	|| mpls_te_area_id.is_set
	|| mpls_te_area_instance.is_set
	|| mpls_te_router_address.is_set
	|| mpls_te_next_fragment_id.is_set
	|| spacious_fragment.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(mpls_te_router_id.yfilter)
	|| ydk::is_set(mpls_te_enabled.yfilter)
	|| ydk::is_set(mpls_te_initialized.yfilter)
	|| ydk::is_set(mpls_te_area_id.yfilter)
	|| ydk::is_set(mpls_te_area_instance.yfilter)
	|| ydk::is_set(mpls_te_router_address.yfilter)
	|| ydk::is_set(mpls_te_next_fragment_id.yfilter)
	|| ydk::is_set(spacious_fragment.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (mpls_te_router_id.is_set || is_set(mpls_te_router_id.yfilter)) leaf_name_data.push_back(mpls_te_router_id.get_name_leafdata());
    if (mpls_te_enabled.is_set || is_set(mpls_te_enabled.yfilter)) leaf_name_data.push_back(mpls_te_enabled.get_name_leafdata());
    if (mpls_te_initialized.is_set || is_set(mpls_te_initialized.yfilter)) leaf_name_data.push_back(mpls_te_initialized.get_name_leafdata());
    if (mpls_te_area_id.is_set || is_set(mpls_te_area_id.yfilter)) leaf_name_data.push_back(mpls_te_area_id.get_name_leafdata());
    if (mpls_te_area_instance.is_set || is_set(mpls_te_area_instance.yfilter)) leaf_name_data.push_back(mpls_te_area_instance.get_name_leafdata());
    if (mpls_te_router_address.is_set || is_set(mpls_te_router_address.yfilter)) leaf_name_data.push_back(mpls_te_router_address.get_name_leafdata());
    if (mpls_te_next_fragment_id.is_set || is_set(mpls_te_next_fragment_id.yfilter)) leaf_name_data.push_back(mpls_te_next_fragment_id.get_name_leafdata());
    if (spacious_fragment.is_set || is_set(spacious_fragment.yfilter)) leaf_name_data.push_back(spacious_fragment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_>();
        c->parent = this;
        mpls_te_link.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls-te-fragment")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment>();
        c->parent = this;
        mpls_te_fragment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : mpls_te_fragment)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id = value;
        mpls_te_router_id.value_namespace = name_space;
        mpls_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled = value;
        mpls_te_enabled.value_namespace = name_space;
        mpls_te_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized = value;
        mpls_te_initialized.value_namespace = name_space;
        mpls_te_initialized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id = value;
        mpls_te_area_id.value_namespace = name_space;
        mpls_te_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance = value;
        mpls_te_area_instance.value_namespace = name_space;
        mpls_te_area_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address = value;
        mpls_te_router_address.value_namespace = name_space;
        mpls_te_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id = value;
        mpls_te_next_fragment_id.value_namespace = name_space;
        mpls_te_next_fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment = value;
        spacious_fragment.value_namespace = name_space;
        spacious_fragment.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled.yfilter = yfilter;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized.yfilter = yfilter;
    }
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address.yfilter = yfilter;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id.yfilter = yfilter;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-link" || name == "mpls-te-fragment" || name == "area-id" || name == "mpls-te-router-id" || name == "mpls-te-enabled" || name == "mpls-te-initialized" || name == "mpls-te-area-id" || name == "mpls-te-area-instance" || name == "mpls-te-router-address" || name == "mpls-te-next-fragment-id" || name == "spacious-fragment")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsTeLink_()
    :
    new_link{YType::boolean, "new-link"},
    fragment_id{YType::uint32, "fragment-id"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    link_address{YType::str, "link-address"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    priority_count{YType::int32, "priority-count"},
    affinity{YType::uint32, "affinity"},
    output_interface_id{YType::uint32, "output-interface-id"},
    input_interface_id{YType::uint32, "input-interface-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"}
    	,
    global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability>())
	,extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList>())
{
    global_unreserve_bw_per_priority->parent = this;
    sub_pool_unreserve_bw_per_priority->parent = this;
    link_protocol_priority_capability->parent = this;
    link_sw_capability->parent = this;
    extended_admin_group_list->parent = this;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::~MplsTeLink_()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return new_link.is_set
	|| fragment_id.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_system_id.is_set
	|| link_address.is_set
	|| neighbor_ip_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| priority_count.is_set
	|| affinity.is_set
	|| output_interface_id.is_set
	|| input_interface_id.is_set
	|| dste_in_use.is_set
	|| dste_allocation_model_id.is_set
	|| number_of_optional_tl_vs.is_set
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(new_link.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(mpls_link_instance.yfilter)
	|| ydk::is_set(mpls_link_type.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bw.yfilter)
	|| ydk::is_set(maximum_link_reservable_bw.yfilter)
	|| ydk::is_set(maximum_link_sub_reservable_bw.yfilter)
	|| ydk::is_set(priority_count.yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(output_interface_id.yfilter)
	|| ydk::is_set(input_interface_id.yfilter)
	|| ydk::is_set(dste_in_use.yfilter)
	|| ydk::is_set(dste_allocation_model_id.yfilter)
	|| ydk::is_set(number_of_optional_tl_vs.yfilter)
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_link.is_set || is_set(new_link.yfilter)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.yfilter)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.yfilter)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.yfilter)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.yfilter)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.yfilter)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.yfilter)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.yfilter)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.yfilter)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.yfilter)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority == nullptr)
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority>();
        }
        return global_unreserve_bw_per_priority;
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority == nullptr)
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority>();
        }
        return sub_pool_unreserve_bw_per_priority;
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability == nullptr)
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability>();
        }
        return link_protocol_priority_capability;
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability == nullptr)
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability>();
        }
        return link_sw_capability;
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list == nullptr)
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList>();
        }
        return extended_admin_group_list;
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_unreserve_bw_per_priority != nullptr)
    {
        children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
    }

    if(sub_pool_unreserve_bw_per_priority != nullptr)
    {
        children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
    }

    if(link_protocol_priority_capability != nullptr)
    {
        children["link-protocol-priority-capability"] = link_protocol_priority_capability;
    }

    if(link_sw_capability != nullptr)
    {
        children["link-sw-capability"] = link_sw_capability;
    }

    if(extended_admin_group_list != nullptr)
    {
        children["extended-admin-group-list"] = extended_admin_group_list;
    }

    count = 0;
    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "new-link")
    {
        new_link = value;
        new_link.value_namespace = name_space;
        new_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
        mpls_link_instance.value_namespace = name_space;
        mpls_link_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
        mpls_link_type.value_namespace = name_space;
        mpls_link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
        maximum_link_bw.value_namespace = name_space;
        maximum_link_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
        maximum_link_reservable_bw.value_namespace = name_space;
        maximum_link_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
        maximum_link_sub_reservable_bw.value_namespace = name_space;
        maximum_link_sub_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
        priority_count.value_namespace = name_space;
        priority_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
        output_interface_id.value_namespace = name_space;
        output_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
        input_interface_id.value_namespace = name_space;
        input_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
        dste_in_use.value_namespace = name_space;
        dste_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
        dste_allocation_model_id.value_namespace = name_space;
        dste_allocation_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
        number_of_optional_tl_vs.value_namespace = name_space;
        number_of_optional_tl_vs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "new-link")
    {
        new_link.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "priority-count")
    {
        priority_count.yfilter = yfilter;
    }
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id.yfilter = yfilter;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id.yfilter = yfilter;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use.yfilter = yfilter;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id.yfilter = yfilter;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-unreserve-bw-per-priority" || name == "sub-pool-unreserve-bw-per-priority" || name == "link-protocol-priority-capability" || name == "link-sw-capability" || name == "extended-admin-group-list" || name == "mplste-link-opt-tlv" || name == "new-link" || name == "fragment-id" || name == "mpls-link-instance" || name == "mpls-link-type" || name == "neighbor-system-id" || name == "link-address" || name == "neighbor-ip-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bw" || name == "maximum-link-reservable-bw" || name == "maximum-link-sub-reservable-bw" || name == "priority-count" || name == "affinity" || name == "output-interface-id" || name == "input-interface-id" || name == "dste-in-use" || name == "dste-allocation-model-id" || name == "number-of-optional-tl-vs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
{

    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "global-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
{

    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "sub-pool-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{

    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_protocol_capability.yfilter)
	|| ydk::is_set(link_protocol_priority.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.yfilter)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.yfilter)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
        link_protocol_capability.value_namespace = name_space;
        link_protocol_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
        link_protocol_priority.value_namespace = name_space;
        link_protocol_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability.yfilter = yfilter;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protocol-capability" || name == "link-protocol-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::LinkSwCapability()
    :
    link_switching_capability{YType::uint8, "link-switching-capability"},
    link_encoding{YType::uint8, "link-encoding"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"},
    link_mtu{YType::uint16, "link-mtu"}
{

    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::has_data() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_data())
            return true;
    }
    return link_switching_capability.is_set
	|| link_encoding.is_set
	|| minimum_lsp_bw.is_set
	|| link_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::has_operation() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_switching_capability.yfilter)
	|| ydk::is_set(link_encoding.yfilter)
	|| ydk::is_set(minimum_lsp_bw.yfilter)
	|| ydk::is_set(link_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_switching_capability.is_set || is_set(link_switching_capability.yfilter)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (link_encoding.is_set || is_set(link_encoding.yfilter)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.yfilter)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.yfilter)) leaf_name_data.push_back(link_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-lsp-bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority>();
        c->parent = this;
        maximum_lsp_bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : maximum_lsp_bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
        link_switching_capability.value_namespace = name_space;
        link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-encoding")
    {
        link_encoding = value;
        link_encoding.value_namespace = name_space;
        link_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
        minimum_lsp_bw.value_namespace = name_space;
        minimum_lsp_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
        link_mtu.value_namespace = name_space;
        link_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-switching-capability")
    {
        link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "link-encoding")
    {
        link_encoding.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw.yfilter = yfilter;
    }
    if(value_path == "link-mtu")
    {
        link_mtu.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-lsp-bw-per-priority" || name == "link-switching-capability" || name == "link-encoding" || name == "minimum-lsp-bw" || name == "link-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::MaximumLspBwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "maximum-lsp-bw-per-priority"; yang_parent_name = "link-sw-capability"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::~MaximumLspBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-lsp-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    extended_admin_size{YType::uint32, "extended-admin-size"}
{

    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::has_data() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_data())
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::has_operation() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_admin_size.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.yfilter)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-admin-data")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData>();
        c->parent = this;
        ext_admin_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ext_admin_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
        extended_admin_size.value_namespace = name_space;
        extended_admin_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-admin-data" || name == "extended-admin-size")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::ExtAdminData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "ext-admin-data"; yang_parent_name = "extended-admin-group-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::~ExtAdminData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-admin-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"},
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"}
{

    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_type.is_set
	|| mplste_link_opt_tlv_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_type.yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_len.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());
    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
        mplste_link_opt_tlv_type.value_namespace = name_space;
        mplste_link_opt_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
        mplste_link_opt_tlv_len.value_namespace = name_space;
        mplste_link_opt_tlv_len.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type.yfilter = yfilter;
    }
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-opt-tlv-value" || name == "mplste-link-opt-tlv-type" || name == "mplste-link-opt-tlv-len")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    srlgtlv_value->parent = this;
    ixcdtlv_value->parent = this;
    unidtlv_value->parent = this;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_tlv_type.yfilter)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.yfilter)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value == nullptr)
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
        }
        return bctlv_value;
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value == nullptr)
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
        }
        return srlgtlv_value;
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value == nullptr)
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
        }
        return ixcdtlv_value;
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value == nullptr)
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
        }
        return unidtlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bctlv_value != nullptr)
    {
        children["bctlv-value"] = bctlv_value;
    }

    if(srlgtlv_value != nullptr)
    {
        children["srlgtlv-value"] = srlgtlv_value;
    }

    if(ixcdtlv_value != nullptr)
    {
        children["ixcdtlv-value"] = ixcdtlv_value;
    }

    if(unidtlv_value != nullptr)
    {
        children["unidtlv-value"] = unidtlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
        opaque_tlv_type.value_namespace = name_space;
        opaque_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bctlv-value" || name == "srlgtlv-value" || name == "ixcdtlv-value" || name == "unidtlv-value" || name == "opaque-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    num_b_cs{YType::uint32, "num-b-cs"}
{

    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_data())
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(model_id.yfilter)
	|| ydk::is_set(num_b_cs.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.yfilter)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.yfilter)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-bc-bandwidth")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth>();
        c->parent = this;
        mplste_link_bc_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_bc_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model-id")
    {
        model_id = value;
        model_id.value_namespace = name_space;
        model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
        num_b_cs.value_namespace = name_space;
        num_b_cs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model-id")
    {
        model_id.yfilter = yfilter;
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-bc-bandwidth" || name == "model-id" || name == "num-b-cs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::MplsteLinkBcBandwidth()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "mplste-link-bc-bandwidth"; yang_parent_name = "bctlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::~MplsteLinkBcBandwidth()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-bc-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    srlg_len{YType::uint32, "srlg-len"},
    num_srl_gs{YType::uint32, "num-srl-gs"}
{

    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_data())
            return true;
    }
    return srlg_len.is_set
	|| num_srl_gs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_len.yfilter)
	|| ydk::is_set(num_srl_gs.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_len.is_set || is_set(srlg_len.yfilter)) leaf_name_data.push_back(srlg_len.get_name_leafdata());
    if (num_srl_gs.is_set || is_set(num_srl_gs.yfilter)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-srlg-data")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData>();
        c->parent = this;
        mplste_link_srlg_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_srlg_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-len")
    {
        srlg_len = value;
        srlg_len.value_namespace = name_space;
        srlg_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
        num_srl_gs.value_namespace = name_space;
        num_srl_gs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-len")
    {
        srlg_len.yfilter = yfilter;
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-srlg-data" || name == "srlg-len" || name == "num-srl-gs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::MplsteLinkSrlgData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mplste-link-srlg-data"; yang_parent_name = "srlgtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::~MplsteLinkSrlgData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-srlg-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    switching_cap{YType::uint8, "switching-cap"},
    rile_len_code{YType::uint8, "rile-len-code"},
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return switching_cap.is_set
	|| rile_len_code.is_set
	|| fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(switching_cap.yfilter)
	|| ydk::is_set(rile_len_code.yfilter)
	|| ydk::is_set(fixed_scsi_count.yfilter)
	|| ydk::is_set(flex_scsi_count.yfilter)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap.is_set || is_set(switching_cap.yfilter)) leaf_name_data.push_back(switching_cap.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.yfilter)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.yfilter)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.yfilter)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type == nullptr)
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
        }
        return ixcd_switching_cap_type;
    }

    if(child_yang_name == "max-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ixcd_switching_cap_type != nullptr)
    {
        children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
    }

    count = 0;
    for (auto const & c : max_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap")
    {
        switching_cap = value;
        switching_cap.value_namespace = name_space;
        switching_cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
        rile_len_code.value_namespace = name_space;
        rile_len_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
        fixed_scsi_count.value_namespace = name_space;
        fixed_scsi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
        flex_scsi_count.value_namespace = name_space;
        flex_scsi_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap")
    {
        switching_cap.yfilter = yfilter;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code.yfilter = yfilter;
    }
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count.yfilter = yfilter;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcd-switching-cap-type" || name == "max-lspbw" || name == "switching-cap" || name == "rile-len-code" || name == "fixed-scsi-count" || name == "flex-scsi-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
	,ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
{
    ixcdpsc_info->parent = this;
    ixcdbw_sub_tlv->parent = this;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data())
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switching_cap_type.yfilter)
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation())
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.yfilter)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info == nullptr)
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
        }
        return ixcdpsc_info;
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv == nullptr)
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
        }
        return ixcdbw_sub_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ixcdpsc_info != nullptr)
    {
        children["ixcdpsc-info"] = ixcdpsc_info;
    }

    if(ixcdbw_sub_tlv != nullptr)
    {
        children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
        switching_cap_type.value_namespace = name_space;
        switching_cap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcdpsc-info" || name == "ixcdbw-sub-tlv" || name == "switching-cap-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{

    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_lsp_bandwidth.yfilter)
	|| ydk::is_set(psc_interface_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.yfilter)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.yfilter)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
        min_lsp_bandwidth.value_namespace = name_space;
        min_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
        psc_interface_mtu.value_namespace = name_space;
        psc_interface_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-lsp-bandwidth" || name == "psc-interface-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{

    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arr-bw-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arr-bw-sub-tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"},
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_type.is_set
	|| bw_sub_tlv_length.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_sub_tlv_type.yfilter)
	|| ydk::is_set(bw_sub_tlv_length.yfilter)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.yfilter)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());
    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.yfilter)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value == nullptr)
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
        }
        return bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bw_sub_tlv_value != nullptr)
    {
        children["bw-sub-tlv-value"] = bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
        bw_sub_tlv_type.value_namespace = name_space;
        bw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
        bw_sub_tlv_length.value_namespace = name_space;
        bw_sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-sub-tlv-value" || name == "bw-sub-tlv-type" || name == "bw-sub-tlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    flex_bw_sub_tlv_value->parent = this;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ixcdbw_sub_tlv_type.yfilter)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.yfilter)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value == nullptr)
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
        }
        return fixed_bw_sub_tlv_value;
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value == nullptr)
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
        }
        return flex_bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fixed_bw_sub_tlv_value != nullptr)
    {
        children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
    }

    if(flex_bw_sub_tlv_value != nullptr)
    {
        children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
        ixcdbw_sub_tlv_type.value_namespace = name_space;
        ixcdbw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-bw-sub-tlv-value" || name == "flex-bw-sub-tlv-value" || name == "ixcdbw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_data())
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value == nullptr)
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
        }
        return fixed_sub_tlv_value;
    }

    if(child_yang_name == "unres-oduj-prio")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio>();
        c->parent = this;
        unres_oduj_prio.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fixed_sub_tlv_value != nullptr)
    {
        children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
    }

    count = 0;
    for (auto const & c : unres_oduj_prio)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-sub-tlv-value" || name == "unres-oduj-prio")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    signal_type{YType::uint8, "signal-type"},
    num_stages{YType::uint8, "num-stages"},
    tbit{YType::uint8, "tbit"},
    sbit{YType::uint8, "sbit"},
    tsg{YType::uint8, "tsg"},
    res{YType::uint8, "res"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    stage{YType::str, "stage"}
{

    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return signal_type.is_set
	|| num_stages.is_set
	|| tbit.is_set
	|| sbit.is_set
	|| tsg.is_set
	|| res.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| stage.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(tsg.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(stage.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
        priority_bit0.value_namespace = name_space;
        priority_bit0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
        priority_bit1.value_namespace = name_space;
        priority_bit1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
        priority_bit2.value_namespace = name_space;
        priority_bit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
        priority_bit3.value_namespace = name_space;
        priority_bit3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
        priority_bit4.value_namespace = name_space;
        priority_bit4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
        priority_bit5.value_namespace = name_space;
        priority_bit5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
        priority_bit6.value_namespace = name_space;
        priority_bit6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
        priority_bit7.value_namespace = name_space;
        priority_bit7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0.yfilter = yfilter;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1.yfilter = yfilter;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2.yfilter = yfilter;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3.yfilter = yfilter;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4.yfilter = yfilter;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5.yfilter = yfilter;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6.yfilter = yfilter;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-type" || name == "num-stages" || name == "tbit" || name == "sbit" || name == "tsg" || name == "res" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "stage")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::UnresOdujPrio()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unres-oduj-prio"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::~UnresOdujPrio()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-oduj-prio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common == nullptr)
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
        }
        return flex_sub_tlv_value_common;
    }

    if(child_yang_name == "unres-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw>();
        c->parent = this;
        unres_lspbw.push_back(c);
        return c;
    }

    if(child_yang_name == "max-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flex_sub_tlv_value_common != nullptr)
    {
        children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
    }

    count = 0;
    for (auto const & c : unres_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : max_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-sub-tlv-value-common" || name == "unres-lspbw" || name == "max-lspbw")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    signal_type{YType::uint8, "signal-type"},
    num_stages{YType::uint8, "num-stages"},
    tbit{YType::uint8, "tbit"},
    sbit{YType::uint8, "sbit"},
    tsg{YType::uint8, "tsg"},
    res{YType::uint8, "res"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    stage{YType::str, "stage"}
{

    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return signal_type.is_set
	|| num_stages.is_set
	|| tbit.is_set
	|| sbit.is_set
	|| tsg.is_set
	|| res.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| stage.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(tsg.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(stage.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
        priority_bit0.value_namespace = name_space;
        priority_bit0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
        priority_bit1.value_namespace = name_space;
        priority_bit1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
        priority_bit2.value_namespace = name_space;
        priority_bit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
        priority_bit3.value_namespace = name_space;
        priority_bit3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
        priority_bit4.value_namespace = name_space;
        priority_bit4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
        priority_bit5.value_namespace = name_space;
        priority_bit5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
        priority_bit6.value_namespace = name_space;
        priority_bit6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
        priority_bit7.value_namespace = name_space;
        priority_bit7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0.yfilter = yfilter;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1.yfilter = yfilter;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2.yfilter = yfilter;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3.yfilter = yfilter;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4.yfilter = yfilter;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5.yfilter = yfilter;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6.yfilter = yfilter;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-type" || name == "num-stages" || name == "tbit" || name == "sbit" || name == "tsg" || name == "res" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "stage")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::UnresLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "unres-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::~UnresLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::int64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{

    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uni_dir_delay.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.yfilter)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
        uni_dir_delay.value_namespace = name_space;
        uni_dir_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uni-dir-delay")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeFragment()
    :
    fragment_instance{YType::uint32, "fragment-instance"},
    fragment_id{YType::uint32, "fragment-id"},
    dste_model_id{YType::uint8, "dste-model-id"},
    same_fragment_count{YType::uint8, "same-fragment-count"}
{

    yang_name = "mpls-te-fragment"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::~MplsTeFragment()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::has_data() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return fragment_instance.is_set
	|| fragment_id.is_set
	|| dste_model_id.is_set
	|| same_fragment_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fragment_instance.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(dste_model_id.yfilter)
	|| ydk::is_set(same_fragment_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fragment_instance.is_set || is_set(fragment_instance.yfilter)) leaf_name_data.push_back(fragment_instance.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (dste_model_id.is_set || is_set(dste_model_id.yfilter)) leaf_name_data.push_back(dste_model_id.get_name_leafdata());
    if (same_fragment_count.is_set || is_set(same_fragment_count.yfilter)) leaf_name_data.push_back(same_fragment_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_>();
        c->parent = this;
        mpls_te_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fragment-instance")
    {
        fragment_instance = value;
        fragment_instance.value_namespace = name_space;
        fragment_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-model-id")
    {
        dste_model_id = value;
        dste_model_id.value_namespace = name_space;
        dste_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "same-fragment-count")
    {
        same_fragment_count = value;
        same_fragment_count.value_namespace = name_space;
        same_fragment_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fragment-instance")
    {
        fragment_instance.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "dste-model-id")
    {
        dste_model_id.yfilter = yfilter;
    }
    if(value_path == "same-fragment-count")
    {
        same_fragment_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-link" || name == "fragment-instance" || name == "fragment-id" || name == "dste-model-id" || name == "same-fragment-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsTeLink_()
    :
    new_link{YType::boolean, "new-link"},
    fragment_id{YType::uint32, "fragment-id"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    link_address{YType::str, "link-address"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    priority_count{YType::int32, "priority-count"},
    affinity{YType::uint32, "affinity"},
    output_interface_id{YType::uint32, "output-interface-id"},
    input_interface_id{YType::uint32, "input-interface-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"}
    	,
    global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability>())
	,extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList>())
{
    global_unreserve_bw_per_priority->parent = this;
    sub_pool_unreserve_bw_per_priority->parent = this;
    link_protocol_priority_capability->parent = this;
    link_sw_capability->parent = this;
    extended_admin_group_list->parent = this;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-fragment"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::~MplsTeLink_()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return new_link.is_set
	|| fragment_id.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_system_id.is_set
	|| link_address.is_set
	|| neighbor_ip_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| priority_count.is_set
	|| affinity.is_set
	|| output_interface_id.is_set
	|| input_interface_id.is_set
	|| dste_in_use.is_set
	|| dste_allocation_model_id.is_set
	|| number_of_optional_tl_vs.is_set
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(new_link.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(mpls_link_instance.yfilter)
	|| ydk::is_set(mpls_link_type.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bw.yfilter)
	|| ydk::is_set(maximum_link_reservable_bw.yfilter)
	|| ydk::is_set(maximum_link_sub_reservable_bw.yfilter)
	|| ydk::is_set(priority_count.yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(output_interface_id.yfilter)
	|| ydk::is_set(input_interface_id.yfilter)
	|| ydk::is_set(dste_in_use.yfilter)
	|| ydk::is_set(dste_allocation_model_id.yfilter)
	|| ydk::is_set(number_of_optional_tl_vs.yfilter)
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_link.is_set || is_set(new_link.yfilter)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.yfilter)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.yfilter)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.yfilter)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.yfilter)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.yfilter)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.yfilter)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.yfilter)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.yfilter)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.yfilter)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority == nullptr)
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority>();
        }
        return global_unreserve_bw_per_priority;
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority == nullptr)
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority>();
        }
        return sub_pool_unreserve_bw_per_priority;
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability == nullptr)
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability>();
        }
        return link_protocol_priority_capability;
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability == nullptr)
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability>();
        }
        return link_sw_capability;
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list == nullptr)
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList>();
        }
        return extended_admin_group_list;
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_unreserve_bw_per_priority != nullptr)
    {
        children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
    }

    if(sub_pool_unreserve_bw_per_priority != nullptr)
    {
        children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
    }

    if(link_protocol_priority_capability != nullptr)
    {
        children["link-protocol-priority-capability"] = link_protocol_priority_capability;
    }

    if(link_sw_capability != nullptr)
    {
        children["link-sw-capability"] = link_sw_capability;
    }

    if(extended_admin_group_list != nullptr)
    {
        children["extended-admin-group-list"] = extended_admin_group_list;
    }

    count = 0;
    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "new-link")
    {
        new_link = value;
        new_link.value_namespace = name_space;
        new_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
        mpls_link_instance.value_namespace = name_space;
        mpls_link_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
        mpls_link_type.value_namespace = name_space;
        mpls_link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
        maximum_link_bw.value_namespace = name_space;
        maximum_link_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
        maximum_link_reservable_bw.value_namespace = name_space;
        maximum_link_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
        maximum_link_sub_reservable_bw.value_namespace = name_space;
        maximum_link_sub_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
        priority_count.value_namespace = name_space;
        priority_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
        output_interface_id.value_namespace = name_space;
        output_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
        input_interface_id.value_namespace = name_space;
        input_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
        dste_in_use.value_namespace = name_space;
        dste_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
        dste_allocation_model_id.value_namespace = name_space;
        dste_allocation_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
        number_of_optional_tl_vs.value_namespace = name_space;
        number_of_optional_tl_vs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "new-link")
    {
        new_link.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "priority-count")
    {
        priority_count.yfilter = yfilter;
    }
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id.yfilter = yfilter;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id.yfilter = yfilter;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use.yfilter = yfilter;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id.yfilter = yfilter;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-unreserve-bw-per-priority" || name == "sub-pool-unreserve-bw-per-priority" || name == "link-protocol-priority-capability" || name == "link-sw-capability" || name == "extended-admin-group-list" || name == "mplste-link-opt-tlv" || name == "new-link" || name == "fragment-id" || name == "mpls-link-instance" || name == "mpls-link-type" || name == "neighbor-system-id" || name == "link-address" || name == "neighbor-ip-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bw" || name == "maximum-link-reservable-bw" || name == "maximum-link-sub-reservable-bw" || name == "priority-count" || name == "affinity" || name == "output-interface-id" || name == "input-interface-id" || name == "dste-in-use" || name == "dste-allocation-model-id" || name == "number-of-optional-tl-vs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
{

    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "global-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
{

    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "sub-pool-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{

    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_protocol_capability.yfilter)
	|| ydk::is_set(link_protocol_priority.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.yfilter)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.yfilter)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
        link_protocol_capability.value_namespace = name_space;
        link_protocol_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
        link_protocol_priority.value_namespace = name_space;
        link_protocol_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability.yfilter = yfilter;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protocol-capability" || name == "link-protocol-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::LinkSwCapability()
    :
    link_switching_capability{YType::uint8, "link-switching-capability"},
    link_encoding{YType::uint8, "link-encoding"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"},
    link_mtu{YType::uint16, "link-mtu"}
{

    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::has_data() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_data())
            return true;
    }
    return link_switching_capability.is_set
	|| link_encoding.is_set
	|| minimum_lsp_bw.is_set
	|| link_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::has_operation() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_switching_capability.yfilter)
	|| ydk::is_set(link_encoding.yfilter)
	|| ydk::is_set(minimum_lsp_bw.yfilter)
	|| ydk::is_set(link_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_switching_capability.is_set || is_set(link_switching_capability.yfilter)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (link_encoding.is_set || is_set(link_encoding.yfilter)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.yfilter)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.yfilter)) leaf_name_data.push_back(link_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-lsp-bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority>();
        c->parent = this;
        maximum_lsp_bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : maximum_lsp_bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
        link_switching_capability.value_namespace = name_space;
        link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-encoding")
    {
        link_encoding = value;
        link_encoding.value_namespace = name_space;
        link_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
        minimum_lsp_bw.value_namespace = name_space;
        minimum_lsp_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
        link_mtu.value_namespace = name_space;
        link_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-switching-capability")
    {
        link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "link-encoding")
    {
        link_encoding.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw.yfilter = yfilter;
    }
    if(value_path == "link-mtu")
    {
        link_mtu.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-lsp-bw-per-priority" || name == "link-switching-capability" || name == "link-encoding" || name == "minimum-lsp-bw" || name == "link-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::MaximumLspBwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "maximum-lsp-bw-per-priority"; yang_parent_name = "link-sw-capability"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::~MaximumLspBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-lsp-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    extended_admin_size{YType::uint32, "extended-admin-size"}
{

    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::has_data() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_data())
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::has_operation() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_admin_size.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.yfilter)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-admin-data")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData>();
        c->parent = this;
        ext_admin_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ext_admin_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
        extended_admin_size.value_namespace = name_space;
        extended_admin_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-admin-data" || name == "extended-admin-size")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::ExtAdminData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "ext-admin-data"; yang_parent_name = "extended-admin-group-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::~ExtAdminData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-admin-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"},
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"}
{

    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_type.is_set
	|| mplste_link_opt_tlv_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_type.yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_len.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());
    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
        mplste_link_opt_tlv_type.value_namespace = name_space;
        mplste_link_opt_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
        mplste_link_opt_tlv_len.value_namespace = name_space;
        mplste_link_opt_tlv_len.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type.yfilter = yfilter;
    }
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-opt-tlv-value" || name == "mplste-link-opt-tlv-type" || name == "mplste-link-opt-tlv-len")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    srlgtlv_value->parent = this;
    ixcdtlv_value->parent = this;
    unidtlv_value->parent = this;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_tlv_type.yfilter)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.yfilter)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value == nullptr)
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
        }
        return bctlv_value;
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value == nullptr)
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
        }
        return srlgtlv_value;
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value == nullptr)
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
        }
        return ixcdtlv_value;
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value == nullptr)
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
        }
        return unidtlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bctlv_value != nullptr)
    {
        children["bctlv-value"] = bctlv_value;
    }

    if(srlgtlv_value != nullptr)
    {
        children["srlgtlv-value"] = srlgtlv_value;
    }

    if(ixcdtlv_value != nullptr)
    {
        children["ixcdtlv-value"] = ixcdtlv_value;
    }

    if(unidtlv_value != nullptr)
    {
        children["unidtlv-value"] = unidtlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
        opaque_tlv_type.value_namespace = name_space;
        opaque_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bctlv-value" || name == "srlgtlv-value" || name == "ixcdtlv-value" || name == "unidtlv-value" || name == "opaque-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    num_b_cs{YType::uint32, "num-b-cs"}
{

    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_data())
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(model_id.yfilter)
	|| ydk::is_set(num_b_cs.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.yfilter)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.yfilter)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-bc-bandwidth")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth>();
        c->parent = this;
        mplste_link_bc_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_bc_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model-id")
    {
        model_id = value;
        model_id.value_namespace = name_space;
        model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
        num_b_cs.value_namespace = name_space;
        num_b_cs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model-id")
    {
        model_id.yfilter = yfilter;
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-bc-bandwidth" || name == "model-id" || name == "num-b-cs")
        return true;
    return false;
}


}
}

