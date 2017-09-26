
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_1.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::OpaqueMplsTeLsaType()
{

    yang_name = "opaque-mpls-te-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::~OpaqueMplsTeLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-mpls-te-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{

    yang_name = "tlv"; yang_parent_name = "opaque-mpls-te-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(tlv_data.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(tlv_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_link_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "mpls-dste-link" || name == "mpls-router-id" || name == "tlv-data" || name == "tlv-length" || name == "tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-length" || name == "sub-tlv-type" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRouterInfoLsaType()
    :
    opaque_ri_interface_name{YType::str, "opaque-ri-interface-name"},
    opaque_rilsa_scope{YType::enumeration, "opaque-rilsa-scope"}
{

    yang_name = "opaque-router-info-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::~OpaqueRouterInfoLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_data() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_data())
            return true;
    }
    return opaque_ri_interface_name.is_set
	|| opaque_rilsa_scope.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_operation() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(opaque_ri_interface_name.yfilter)
	|| ydk::is_set(opaque_rilsa_scope.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-router-info-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_ri_interface_name.is_set || is_set(opaque_ri_interface_name.yfilter)) leaf_name_data.push_back(opaque_ri_interface_name.get_name_leafdata());
    if (opaque_rilsa_scope.is_set || is_set(opaque_rilsa_scope.yfilter)) leaf_name_data.push_back(opaque_rilsa_scope.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opaque-ritlv")
    {
        for(auto const & c : opaque_ritlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv>();
        c->parent = this;
        opaque_ritlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : opaque_ritlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name = value;
        opaque_ri_interface_name.value_namespace = name_space;
        opaque_ri_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope = value;
        opaque_rilsa_scope.value_namespace = name_space;
        opaque_rilsa_scope.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name.yfilter = yfilter;
    }
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-ritlv" || name == "opaque-ri-interface-name" || name == "opaque-rilsa-scope")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::OpaqueRitlv()
    :
    ritlv_internal_type{YType::enumeration, "ritlv-internal-type"}
    	,
    node_msdtlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>())
	,pcedtlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>())
	,rtr_cap_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>())
	,sr_algo_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>())
	,sr_range_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>())
	,unknown_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>())
{
    node_msdtlv->parent = this;
    pcedtlv->parent = this;
    rtr_cap_tlv->parent = this;
    sr_algo_tlv->parent = this;
    sr_range_tlv->parent = this;
    unknown_tlv->parent = this;

    yang_name = "opaque-ritlv"; yang_parent_name = "opaque-router-info-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::~OpaqueRitlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_data() const
{
    return ritlv_internal_type.is_set
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_data())
	|| (pcedtlv !=  nullptr && pcedtlv->has_data())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_data())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_data())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_data())
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ritlv_internal_type.yfilter)
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_operation())
	|| (pcedtlv !=  nullptr && pcedtlv->has_operation())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_operation())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_operation())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_operation())
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ritlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ritlv_internal_type.is_set || is_set(ritlv_internal_type.yfilter)) leaf_name_data.push_back(ritlv_internal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-msdtlv")
    {
        if(node_msdtlv == nullptr)
        {
            node_msdtlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>();
        }
        return node_msdtlv;
    }

    if(child_yang_name == "pcedtlv")
    {
        if(pcedtlv == nullptr)
        {
            pcedtlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>();
        }
        return pcedtlv;
    }

    if(child_yang_name == "rtr-cap-tlv")
    {
        if(rtr_cap_tlv == nullptr)
        {
            rtr_cap_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>();
        }
        return rtr_cap_tlv;
    }

    if(child_yang_name == "sr-algo-tlv")
    {
        if(sr_algo_tlv == nullptr)
        {
            sr_algo_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>();
        }
        return sr_algo_tlv;
    }

    if(child_yang_name == "sr-range-tlv")
    {
        if(sr_range_tlv == nullptr)
        {
            sr_range_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>();
        }
        return sr_range_tlv;
    }

    if(child_yang_name == "unknown-tlv")
    {
        if(unknown_tlv == nullptr)
        {
            unknown_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>();
        }
        return unknown_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_msdtlv != nullptr)
    {
        children["node-msdtlv"] = node_msdtlv;
    }

    if(pcedtlv != nullptr)
    {
        children["pcedtlv"] = pcedtlv;
    }

    if(rtr_cap_tlv != nullptr)
    {
        children["rtr-cap-tlv"] = rtr_cap_tlv;
    }

    if(sr_algo_tlv != nullptr)
    {
        children["sr-algo-tlv"] = sr_algo_tlv;
    }

    if(sr_range_tlv != nullptr)
    {
        children["sr-range-tlv"] = sr_range_tlv;
    }

    if(unknown_tlv != nullptr)
    {
        children["unknown-tlv"] = unknown_tlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type = value;
        ritlv_internal_type.value_namespace = name_space;
        ritlv_internal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-msdtlv" || name == "pcedtlv" || name == "rtr-cap-tlv" || name == "sr-algo-tlv" || name == "sr-range-tlv" || name == "unknown-tlv" || name == "ritlv-internal-type")
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

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::Pcedtlv()
    :
    pcedtlv_length{YType::uint16, "pcedtlv-length"}
    	,
    pced_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>())
	,pced_scope(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>())
{
    pced_addr->parent = this;
    pced_scope->parent = this;

    yang_name = "pcedtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::~Pcedtlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_data() const
{
    return pcedtlv_length.is_set
	|| (pced_addr !=  nullptr && pced_addr->has_data())
	|| (pced_scope !=  nullptr && pced_scope->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcedtlv_length.yfilter)
	|| (pced_addr !=  nullptr && pced_addr->has_operation())
	|| (pced_scope !=  nullptr && pced_scope->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcedtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcedtlv_length.is_set || is_set(pcedtlv_length.yfilter)) leaf_name_data.push_back(pcedtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pced-addr")
    {
        if(pced_addr == nullptr)
        {
            pced_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>();
        }
        return pced_addr;
    }

    if(child_yang_name == "pced-scope")
    {
        if(pced_scope == nullptr)
        {
            pced_scope = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>();
        }
        return pced_scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length = value;
        pcedtlv_length.value_namespace = name_space;
        pcedtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pced-addr" || name == "pced-scope" || name == "pcedtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PcedAddr()
    :
    pce_addr_type{YType::enumeration, "pce-addr-type"}
    	,
    ipv4pce_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>())
	,ipv6pce_addr(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>())
	,pce_addr_unknown_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>())
{
    ipv4pce_addr->parent = this;
    ipv6pce_addr->parent = this;
    pce_addr_unknown_tlv->parent = this;

    yang_name = "pced-addr"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::~PcedAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_data() const
{
    return pce_addr_type.is_set
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_data())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_data())
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_addr_type.yfilter)
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_operation())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_operation())
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_addr_type.is_set || is_set(pce_addr_type.yfilter)) leaf_name_data.push_back(pce_addr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4pce-addr")
    {
        if(ipv4pce_addr == nullptr)
        {
            ipv4pce_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>();
        }
        return ipv4pce_addr;
    }

    if(child_yang_name == "ipv6pce-addr")
    {
        if(ipv6pce_addr == nullptr)
        {
            ipv6pce_addr = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>();
        }
        return ipv6pce_addr;
    }

    if(child_yang_name == "pce-addr-unknown-tlv")
    {
        if(pce_addr_unknown_tlv == nullptr)
        {
            pce_addr_unknown_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>();
        }
        return pce_addr_unknown_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4pce_addr != nullptr)
    {
        children["ipv4pce-addr"] = ipv4pce_addr;
    }

    if(ipv6pce_addr != nullptr)
    {
        children["ipv6pce-addr"] = ipv6pce_addr;
    }

    if(pce_addr_unknown_tlv != nullptr)
    {
        children["pce-addr-unknown-tlv"] = pce_addr_unknown_tlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type = value;
        pce_addr_type.value_namespace = name_space;
        pce_addr_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4pce-addr" || name == "ipv6pce-addr" || name == "pce-addr-unknown-tlv" || name == "pce-addr-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::Ipv4PceAddr()
    :
    pceipv4_addr{YType::str, "pceipv4-addr"}
{

    yang_name = "ipv4pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::~Ipv4PceAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_data() const
{
    return pceipv4_addr.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv4_addr.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv4_addr.is_set || is_set(pceipv4_addr.yfilter)) leaf_name_data.push_back(pceipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr = value;
        pceipv4_addr.value_namespace = name_space;
        pceipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv4-addr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::Ipv6PceAddr()
    :
    pceipv6_addr{YType::str, "pceipv6-addr"}
{

    yang_name = "ipv6pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::~Ipv6PceAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_data() const
{
    return pceipv6_addr.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv6_addr.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv6_addr.is_set || is_set(pceipv6_addr.yfilter)) leaf_name_data.push_back(pceipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr = value;
        pceipv6_addr.value_namespace = name_space;
        pceipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv6-addr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::PceAddrUnknownTlv()
    :
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "pce-addr-unknown-tlv"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::~PceAddrUnknownTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_data() const
{
    return ri_gen_tlv_length.is_set
	|| ri_gen_tlv_type.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-addr-unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-length" || name == "ri-gen-tlv-type" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::PcedScope()
    :
    all_scope_info_bits{YType::uint32, "all-scope-info-bits"},
    lbit{YType::boolean, "lbit"},
    pref_l{YType::uint8, "pref-l"},
    pref_r{YType::uint8, "pref-r"},
    pref_s{YType::uint8, "pref-s"},
    pref_y{YType::uint8, "pref-y"},
    rbit{YType::boolean, "rbit"},
    rd_bit{YType::boolean, "rd-bit"},
    sbit{YType::boolean, "sbit"},
    sd_bit{YType::boolean, "sd-bit"},
    ybit{YType::boolean, "ybit"}
{

    yang_name = "pced-scope"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::~PcedScope()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_data() const
{
    return all_scope_info_bits.is_set
	|| lbit.is_set
	|| pref_l.is_set
	|| pref_r.is_set
	|| pref_s.is_set
	|| pref_y.is_set
	|| rbit.is_set
	|| rd_bit.is_set
	|| sbit.is_set
	|| sd_bit.is_set
	|| ybit.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_scope_info_bits.yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(pref_l.yfilter)
	|| ydk::is_set(pref_r.yfilter)
	|| ydk::is_set(pref_s.yfilter)
	|| ydk::is_set(pref_y.yfilter)
	|| ydk::is_set(rbit.yfilter)
	|| ydk::is_set(rd_bit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(sd_bit.yfilter)
	|| ydk::is_set(ybit.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_scope_info_bits.is_set || is_set(all_scope_info_bits.yfilter)) leaf_name_data.push_back(all_scope_info_bits.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (pref_l.is_set || is_set(pref_l.yfilter)) leaf_name_data.push_back(pref_l.get_name_leafdata());
    if (pref_r.is_set || is_set(pref_r.yfilter)) leaf_name_data.push_back(pref_r.get_name_leafdata());
    if (pref_s.is_set || is_set(pref_s.yfilter)) leaf_name_data.push_back(pref_s.get_name_leafdata());
    if (pref_y.is_set || is_set(pref_y.yfilter)) leaf_name_data.push_back(pref_y.get_name_leafdata());
    if (rbit.is_set || is_set(rbit.yfilter)) leaf_name_data.push_back(rbit.get_name_leafdata());
    if (rd_bit.is_set || is_set(rd_bit.yfilter)) leaf_name_data.push_back(rd_bit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (sd_bit.is_set || is_set(sd_bit.yfilter)) leaf_name_data.push_back(sd_bit.get_name_leafdata());
    if (ybit.is_set || is_set(ybit.yfilter)) leaf_name_data.push_back(ybit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits = value;
        all_scope_info_bits.value_namespace = name_space;
        all_scope_info_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
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
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
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
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-scope-info-bits" || name == "lbit" || name == "pref-l" || name == "pref-r" || name == "pref-s" || name == "pref-y" || name == "rbit" || name == "rd-bit" || name == "sbit" || name == "sd-bit" || name == "ybit")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::RtrCapTlv()
    :
    rtr_cap_additional_info{YType::str, "rtr-cap-additional-info"},
    rtr_cap_all_bits{YType::uint32, "rtr-cap-all-bits"},
    rtr_cap_area_te{YType::boolean, "rtr-cap-area-te"},
    rtr_cap_graceful_restart{YType::boolean, "rtr-cap-graceful-restart"},
    rtr_cap_graceful_restart_helper{YType::boolean, "rtr-cap-graceful-restart-helper"},
    rtr_cap_p2plan{YType::boolean, "rtr-cap-p2plan"},
    rtr_cap_stub_rtr{YType::boolean, "rtr-cap-stub-rtr"},
    rtr_cap_te_exp{YType::boolean, "rtr-cap-te-exp"},
    rtr_cap_tlv_length{YType::uint16, "rtr-cap-tlv-length"}
{

    yang_name = "rtr-cap-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::~RtrCapTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_data() const
{
    return rtr_cap_additional_info.is_set
	|| rtr_cap_all_bits.is_set
	|| rtr_cap_area_te.is_set
	|| rtr_cap_graceful_restart.is_set
	|| rtr_cap_graceful_restart_helper.is_set
	|| rtr_cap_p2plan.is_set
	|| rtr_cap_stub_rtr.is_set
	|| rtr_cap_te_exp.is_set
	|| rtr_cap_tlv_length.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_cap_additional_info.yfilter)
	|| ydk::is_set(rtr_cap_all_bits.yfilter)
	|| ydk::is_set(rtr_cap_area_te.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart_helper.yfilter)
	|| ydk::is_set(rtr_cap_p2plan.yfilter)
	|| ydk::is_set(rtr_cap_stub_rtr.yfilter)
	|| ydk::is_set(rtr_cap_te_exp.yfilter)
	|| ydk::is_set(rtr_cap_tlv_length.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr-cap-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_cap_additional_info.is_set || is_set(rtr_cap_additional_info.yfilter)) leaf_name_data.push_back(rtr_cap_additional_info.get_name_leafdata());
    if (rtr_cap_all_bits.is_set || is_set(rtr_cap_all_bits.yfilter)) leaf_name_data.push_back(rtr_cap_all_bits.get_name_leafdata());
    if (rtr_cap_area_te.is_set || is_set(rtr_cap_area_te.yfilter)) leaf_name_data.push_back(rtr_cap_area_te.get_name_leafdata());
    if (rtr_cap_graceful_restart.is_set || is_set(rtr_cap_graceful_restart.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart.get_name_leafdata());
    if (rtr_cap_graceful_restart_helper.is_set || is_set(rtr_cap_graceful_restart_helper.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart_helper.get_name_leafdata());
    if (rtr_cap_p2plan.is_set || is_set(rtr_cap_p2plan.yfilter)) leaf_name_data.push_back(rtr_cap_p2plan.get_name_leafdata());
    if (rtr_cap_stub_rtr.is_set || is_set(rtr_cap_stub_rtr.yfilter)) leaf_name_data.push_back(rtr_cap_stub_rtr.get_name_leafdata());
    if (rtr_cap_te_exp.is_set || is_set(rtr_cap_te_exp.yfilter)) leaf_name_data.push_back(rtr_cap_te_exp.get_name_leafdata());
    if (rtr_cap_tlv_length.is_set || is_set(rtr_cap_tlv_length.yfilter)) leaf_name_data.push_back(rtr_cap_tlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info = value;
        rtr_cap_additional_info.value_namespace = name_space;
        rtr_cap_additional_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits = value;
        rtr_cap_all_bits.value_namespace = name_space;
        rtr_cap_all_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te = value;
        rtr_cap_area_te.value_namespace = name_space;
        rtr_cap_area_te.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan = value;
        rtr_cap_p2plan.value_namespace = name_space;
        rtr_cap_p2plan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr = value;
        rtr_cap_stub_rtr.value_namespace = name_space;
        rtr_cap_stub_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp = value;
        rtr_cap_te_exp.value_namespace = name_space;
        rtr_cap_te_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length = value;
        rtr_cap_tlv_length.value_namespace = name_space;
        rtr_cap_tlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-cap-additional-info" || name == "rtr-cap-all-bits" || name == "rtr-cap-area-te" || name == "rtr-cap-graceful-restart" || name == "rtr-cap-graceful-restart-helper" || name == "rtr-cap-p2plan" || name == "rtr-cap-stub-rtr" || name == "rtr-cap-te-exp" || name == "rtr-cap-tlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoTlv()
    :
    sr_algo_length{YType::uint16, "sr-algo-length"},
    sr_algo_value{YType::str, "sr-algo-value"}
{

    yang_name = "sr-algo-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::~SrAlgoTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_data() const
{
    return sr_algo_length.is_set
	|| sr_algo_value.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_algo_length.yfilter)
	|| ydk::is_set(sr_algo_value.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_algo_length.is_set || is_set(sr_algo_length.yfilter)) leaf_name_data.push_back(sr_algo_length.get_name_leafdata());
    if (sr_algo_value.is_set || is_set(sr_algo_value.yfilter)) leaf_name_data.push_back(sr_algo_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-algo-length" || name == "sr-algo-value")
        return true;
    return false;
}

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

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::UnknownTlv()
    :
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "unknown-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::~UnknownTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_data() const
{
    return ri_gen_tlv_length.is_set
	|| ri_gen_tlv_type.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-length" || name == "ri-gen-tlv-type" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::RouterLsaType()
    :
    internal_lsa{YType::boolean, "internal-lsa"},
    router_abr{YType::boolean, "router-abr"},
    router_asbr{YType::boolean, "router-asbr"}
{

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::~RouterLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return internal_lsa.is_set
	|| router_abr.is_set
	|| router_asbr.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(internal_lsa.yfilter)
	|| ydk::is_set(router_abr.yfilter)
	|| ydk::is_set(router_asbr.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa.is_set || is_set(internal_lsa.yfilter)) leaf_name_data.push_back(internal_lsa.get_name_leafdata());
    if (router_abr.is_set || is_set(router_abr.yfilter)) leaf_name_data.push_back(router_abr.get_name_leafdata());
    if (router_asbr.is_set || is_set(router_asbr.yfilter)) leaf_name_data.push_back(router_asbr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal-link")
    {
        for(auto const & c : internal_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink>();
        c->parent = this;
        internal_link.push_back(c);
        return c;
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : internal_link)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-lsa")
    {
        internal_lsa = value;
        internal_lsa.value_namespace = name_space;
        internal_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-abr")
    {
        router_abr = value;
        router_abr.value_namespace = name_space;
        router_abr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-asbr")
    {
        router_asbr = value;
        router_asbr.value_namespace = name_space;
        router_asbr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-lsa")
    {
        internal_lsa.yfilter = yfilter;
    }
    if(value_path == "router-abr")
    {
        router_abr.yfilter = yfilter;
    }
    if(value_path == "router-asbr")
    {
        router_asbr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-link" || name == "link" || name == "internal-lsa" || name == "router-abr" || name == "router-asbr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::InternalLink()
    :
    link_data{YType::str, "link-data"},
    link_id{YType::str, "link-id"},
    link_metric{YType::uint16, "link-metric"},
    link_type{YType::enumeration, "link-type"}
{

    yang_name = "internal-link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::~InternalLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_data.is_set
	|| link_id.is_set
	|| link_metric.is_set
	|| link_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_metric.yfilter)
	|| ydk::is_set(link_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        for(auto const & c : link_tos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_tos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-data" || name == "link-id" || name == "link-metric" || name == "link-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "internal-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::Link()
    :
    link_data{YType::str, "link-data"},
    link_id{YType::str, "link-id"},
    link_metric{YType::uint16, "link-metric"},
    link_type{YType::enumeration, "link-type"}
{

    yang_name = "link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::~Link()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_data.is_set
	|| link_id.is_set
	|| link_metric.is_set
	|| link_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_metric.yfilter)
	|| ydk::is_set(link_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        for(auto const & c : link_tos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_tos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-data" || name == "link-id" || name == "link-metric" || name == "link-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaType()
    :
    internal_sum_lsa{YType::boolean, "internal-sum-lsa"},
    summary_prefix_length{YType::uint32, "summary-prefix-length"}
{

    yang_name = "summary-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::~SummaryLsaType()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_data() const
{
    for (std::size_t index=0; index<summary_lsa_metric.size(); index++)
    {
        if(summary_lsa_metric[index]->has_data())
            return true;
    }
    return internal_sum_lsa.is_set
	|| summary_prefix_length.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_operation() const
{
    for (std::size_t index=0; index<summary_lsa_metric.size(); index++)
    {
        if(summary_lsa_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(internal_sum_lsa.yfilter)
	|| ydk::is_set(summary_prefix_length.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_sum_lsa.is_set || is_set(internal_sum_lsa.yfilter)) leaf_name_data.push_back(internal_sum_lsa.get_name_leafdata());
    if (summary_prefix_length.is_set || is_set(summary_prefix_length.yfilter)) leaf_name_data.push_back(summary_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-lsa-metric")
    {
        for(auto const & c : summary_lsa_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric>();
        c->parent = this;
        summary_lsa_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_lsa_metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa = value;
        internal_sum_lsa.value_namespace = name_space;
        internal_sum_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length = value;
        summary_prefix_length.value_namespace = name_space;
        summary_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa.yfilter = yfilter;
    }
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-lsa-metric" || name == "internal-sum-lsa" || name == "summary-prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::SummaryLsaMetric()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "summary-lsa-metric"; yang_parent_name = "summary-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::~SummaryLsaMetric()
{
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
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
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
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
    area_id{YType::int32, "area-id"},
    ipfrr_area_revision{YType::uint32, "ipfrr-area-revision"},
    ipfrr_router_id{YType::str, "ipfrr-router-id"},
    ipfrr_topo_area_id{YType::str, "ipfrr-topo-area-id"},
    router_id{YType::str, "router-id"}
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
    return area_id.is_set
	|| ipfrr_area_revision.is_set
	|| ipfrr_router_id.is_set
	|| ipfrr_topo_area_id.is_set
	|| router_id.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_topo.size(); index++)
    {
        if(ipfrr_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ipfrr_area_revision.yfilter)
	|| ydk::is_set(ipfrr_router_id.yfilter)
	|| ydk::is_set(ipfrr_topo_area_id.yfilter)
	|| ydk::is_set(router_id.yfilter);
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

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ipfrr_area_revision.is_set || is_set(ipfrr_area_revision.yfilter)) leaf_name_data.push_back(ipfrr_area_revision.get_name_leafdata());
    if (ipfrr_router_id.is_set || is_set(ipfrr_router_id.yfilter)) leaf_name_data.push_back(ipfrr_router_id.get_name_leafdata());
    if (ipfrr_topo_area_id.is_set || is_set(ipfrr_topo_area_id.yfilter)) leaf_name_data.push_back(ipfrr_topo_area_id.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-topo")
    {
        for(auto const & c : ipfrr_topo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : ipfrr_topo)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-area-revision")
    {
        ipfrr_area_revision = value;
        ipfrr_area_revision.value_namespace = name_space;
        ipfrr_area_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-router-id")
    {
        ipfrr_router_id = value;
        ipfrr_router_id.value_namespace = name_space;
        ipfrr_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-topo-area-id")
    {
        ipfrr_topo_area_id = value;
        ipfrr_topo_area_id.value_namespace = name_space;
        ipfrr_topo_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ipfrr-area-revision")
    {
        ipfrr_area_revision.yfilter = yfilter;
    }
    if(value_path == "ipfrr-router-id")
    {
        ipfrr_router_id.yfilter = yfilter;
    }
    if(value_path == "ipfrr-topo-area-id")
    {
        ipfrr_topo_area_id.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-topo" || name == "area-id" || name == "ipfrr-area-revision" || name == "ipfrr-router-id" || name == "ipfrr-topo-area-id" || name == "router-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::IpfrrTopo()
    :
    distance{YType::uint32, "distance"},
    distance_reverse{YType::uint32, "distance-reverse"},
    dr{YType::boolean, "dr"},
    neighbor_sourced{YType::boolean, "neighbor-sourced"},
    node_id{YType::str, "node-id"},
    poison{YType::boolean, "poison"},
    revision{YType::uint32, "revision"},
    type4{YType::boolean, "type4"}
{

    yang_name = "ipfrr-topo"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::~IpfrrTopo()
{
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::has_data() const
{
    return distance.is_set
	|| distance_reverse.is_set
	|| dr.is_set
	|| neighbor_sourced.is_set
	|| node_id.is_set
	|| poison.is_set
	|| revision.is_set
	|| type4.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(distance_reverse.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(neighbor_sourced.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(poison.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| ydk::is_set(type4.yfilter);
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

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (distance_reverse.is_set || is_set(distance_reverse.yfilter)) leaf_name_data.push_back(distance_reverse.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (neighbor_sourced.is_set || is_set(neighbor_sourced.yfilter)) leaf_name_data.push_back(neighbor_sourced.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (poison.is_set || is_set(poison.yfilter)) leaf_name_data.push_back(poison.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (type4.is_set || is_set(type4.yfilter)) leaf_name_data.push_back(type4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-sourced")
    {
        neighbor_sourced = value;
        neighbor_sourced.value_namespace = name_space;
        neighbor_sourced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poison")
    {
        poison = value;
        poison.value_namespace = name_space;
        poison.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type4")
    {
        type4 = value;
        type4.value_namespace = name_space;
        type4.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "distance-reverse")
    {
        distance_reverse.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "neighbor-sourced")
    {
        neighbor_sourced.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "poison")
    {
        poison.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
    if(value_path == "type4")
    {
        type4.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "distance-reverse" || name == "dr" || name == "neighbor-sourced" || name == "node-id" || name == "poison" || name == "revision" || name == "type4")
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
        for(auto const & c : flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : flood)
    {
        children[c->get_segment_path()] = c;
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
    flood_lsa_count{YType::uint32, "flood-lsa-count"},
    flood_pacing_timer{YType::uint32, "flood-pacing-timer"}
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
	|| flood_lsa_count.is_set
	|| flood_pacing_timer.is_set;
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
	|| ydk::is_set(flood_lsa_count.yfilter)
	|| ydk::is_set(flood_pacing_timer.yfilter);
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
    if (flood_lsa_count.is_set || is_set(flood_lsa_count.yfilter)) leaf_name_data.push_back(flood_lsa_count.get_name_leafdata());
    if (flood_pacing_timer.is_set || is_set(flood_pacing_timer.yfilter)) leaf_name_data.push_back(flood_pacing_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-flood")
    {
        for(auto const & c : area_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood>();
        c->parent = this;
        area_flood.push_back(c);
        return c;
    }

    if(child_yang_name == "as-flood")
    {
        for(auto const & c : as_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : area_flood)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : as_flood)
    {
        children[c->get_segment_path()] = c;
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
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count = value;
        flood_lsa_count.value_namespace = name_space;
        flood_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer = value;
        flood_pacing_timer.value_namespace = name_space;
        flood_pacing_timer.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count.yfilter = yfilter;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-flood" || name == "as-flood" || name == "interface-name" || name == "flood-interface-name" || name == "flood-lsa-count" || name == "flood-pacing-timer")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::AreaFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "area-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::~AreaFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
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

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::AsFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "as-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::~AsFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
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

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceInformation()
    :
    interface_briefs(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs>())
	,interfaces(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces>())
	,virtual_links(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks>())
{
    interface_briefs->parent = this;
    interfaces->parent = this;
    virtual_links->parent = this;

    yang_name = "interface-information"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::~InterfaceInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::has_data() const
{
    return (interface_briefs !=  nullptr && interface_briefs->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (virtual_links !=  nullptr && virtual_links->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::has_operation() const
{
    return is_set(yfilter)
	|| (interface_briefs !=  nullptr && interface_briefs->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (virtual_links !=  nullptr && virtual_links->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-briefs")
    {
        if(interface_briefs == nullptr)
        {
            interface_briefs = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs>();
        }
        return interface_briefs;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "virtual-links")
    {
        if(virtual_links == nullptr)
        {
            virtual_links = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks>();
        }
        return virtual_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_briefs != nullptr)
    {
        children["interface-briefs"] = interface_briefs;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(virtual_links != nullptr)
    {
        children["virtual-links"] = virtual_links;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-briefs" || name == "interfaces" || name == "virtual-links")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBriefs()
{

    yang_name = "interface-briefs"; yang_parent_name = "interface-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::~InterfaceBriefs()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-brief")
    {
        for(auto const & c : interface_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-brief")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_address{YType::str, "interface-address"},
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_madj_count{YType::uint16, "interface-madj-count"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-brief"; yang_parent_name = "interface-briefs"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::has_data() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_address.is_set
	|| interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_fast_detect_hold_down.is_set
	|| interface_link_cost.is_set
	|| interface_madj_count.is_set
	|| interface_mask.is_set
	|| interface_name_xr.is_set
	|| interface_neighbor_count.is_set
	|| interfaceis_madj.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_fast_detect_hold_down.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_madj_count.yfilter)
	|| ydk::is_set(interface_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(interfaceis_madj.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.yfilter)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.yfilter)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.yfilter)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.yfilter)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-madj")
    {
        for(auto const & c : interface_madj)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_madj)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
        interface_fast_detect_hold_down.value_namespace = name_space;
        interface_fast_detect_hold_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
        interface_madj_count.value_namespace = name_space;
        interface_madj_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
        interface_mask.value_namespace = name_space;
        interface_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
        interfaceis_madj.value_namespace = name_space;
        interfaceis_madj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count.yfilter = yfilter;
    }
    if(value_path == "interface-mask")
    {
        interface_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-madj" || name == "interface-name" || name == "interface-address" || name == "interface-adj-neighbor-count" || name == "interface-area" || name == "interface-fast-detect-hold-down" || name == "interface-link-cost" || name == "interface-madj-count" || name == "interface-mask" || name == "interface-name-xr" || name == "interface-neighbor-count" || name == "interfaceis-madj" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::InterfaceMadj()
    :
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    madj_area_id{YType::uint32, "madj-area-id"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-madj"; yang_parent_name = "interface-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_data() const
{
    return interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_link_cost.is_set
	|| interface_neighbor_count.is_set
	|| madj_area_id.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(madj_area_id.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.yfilter)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
        madj_area_id.value_namespace = name_space;
        madj_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-adj-neighbor-count" || name == "interface-area" || name == "interface-link-cost" || name == "interface-neighbor-count" || name == "madj-area-id" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "interface-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::~Interfaces()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    backup_designated_router{YType::boolean, "backup-designated-router"},
    backup_designated_router_address{YType::str, "backup-designated-router-address"},
    backup_designated_router_id{YType::str, "backup-designated-router-id"},
    cfg_cost_fallback{YType::boolean, "cfg-cost-fallback"},
    configured_demand_circuit{YType::boolean, "configured-demand-circuit"},
    configured_ldp_sync{YType::boolean, "configured-ldp-sync"},
    configured_ldp_sync_igp_shortcuts{YType::boolean, "configured-ldp-sync-igp-shortcuts"},
    cost_fallback_active{YType::boolean, "cost-fallback-active"},
    dead_interval{YType::uint32, "dead-interval"},
    designated_router{YType::boolean, "designated-router"},
    designated_router_address{YType::str, "designated-router-address"},
    designated_router_id{YType::str, "designated-router-id"},
    fast_detect_hold_down_time{YType::uint32, "fast-detect-hold-down-time"},
    fast_detect_hold_down_time_remaining{YType::uint32, "fast-detect-hold-down-time-remaining"},
    fast_reroute_topology_independent_lfa{YType::boolean, "fast-reroute-topology-independent-lfa"},
    fast_reroute_type{YType::enumeration, "fast-reroute-type"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_interval_ms{YType::uint32, "hello-interval-ms"},
    interface_ack_list_count{YType::uint32, "interface-ack-list-count"},
    interface_ack_list_high_watermark{YType::uint32, "interface-ack-list-high-watermark"},
    interface_address{YType::str, "interface-address"},
    interface_area{YType::str, "interface-area"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    interface_bkp_labels{YType::uint8, "interface-bkp-labels"},
    interface_cost_fallback{YType::uint16, "interface-cost-fallback"},
    interface_dc_bitless_lsa_count{YType::uint32, "interface-dc-bitless-lsa-count"},
    interface_demand_circuit{YType::boolean, "interface-demand-circuit"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    interface_forw{YType::boolean, "interface-forw"},
    interface_last_nsf{YType::uint32, "interface-last-nsf"},
    interface_ldp_sync{YType::boolean, "interface-ldp-sync"},
    interface_line_state{YType::boolean, "interface-line-state"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_lsa_filter{YType::boolean, "interface-lsa-filter"},
    interface_madj_count{YType::uint16, "interface-madj-count"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_nsf{YType::boolean, "interface-nsf"},
    interface_nsf_enabled{YType::boolean, "interface-nsf-enabled"},
    interface_pri_labels{YType::uint8, "interface-pri-labels"},
    interface_priority{YType::uint8, "interface-priority"},
    interface_retransmission_interrval{YType::uint32, "interface-retransmission-interrval"},
    interface_router_id{YType::str, "interface-router-id"},
    interface_sid{YType::uint32, "interface-sid"},
    interface_sid_n_flag_clear{YType::boolean, "interface-sid-n-flag-clear"},
    interface_sid_php_off{YType::boolean, "interface-sid-php-off"},
    interface_srte_labels{YType::uint8, "interface-srte-labels"},
    interface_state{YType::enumeration, "interface-state"},
    interface_strict_spf_sid{YType::uint32, "interface-strict-spf-sid"},
    interface_strict_spf_sid_n_flag_clear{YType::boolean, "interface-strict-spf-sid-n-flag-clear"},
    interface_strict_spf_sid_php_off{YType::boolean, "interface-strict-spf-sid-php-off"},
    interface_tunnel_flags{YType::uint32, "interface-tunnel-flags"},
    interface_unnum{YType::str, "interface-unnum"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    ip_mtu{YType::uint16, "ip-mtu"},
    is_loopback_stub_network{YType::boolean, "is-loopback-stub-network"},
    maximum_packet_size{YType::uint16, "maximum-packet-size"},
    network_lsa_flush_timer{YType::uint32, "network-lsa-flush-timer"},
    network_type{YType::enumeration, "network-type"},
    next_hello_time{YType::uint32, "next-hello-time"},
    next_hello_time_ms{YType::uint32, "next-hello-time-ms"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"},
    passive_interface{YType::boolean, "passive-interface"},
    prefix_suppress_primary_addresses{YType::boolean, "prefix-suppress-primary-addresses"},
    prefix_suppress_secondary_addresses{YType::boolean, "prefix-suppress-secondary-addresses"},
    registered_for_link_down_fast_detection{YType::boolean, "registered-for-link-down-fast-detection"},
    transmission_delay{YType::uint16, "transmission-delay"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    ttl_security_hop_count{YType::uint32, "ttl-security-hop-count"},
    wait_interval{YType::uint32, "wait-interval"}
    	,
    active_interface(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface>())
	,interface_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation>())
{
    active_interface->parent = this;
    interface_bfd_information->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::~Interface()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip_sec_addr.size(); index++)
    {
        if(ip_sec_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| backup_designated_router.is_set
	|| backup_designated_router_address.is_set
	|| backup_designated_router_id.is_set
	|| cfg_cost_fallback.is_set
	|| configured_demand_circuit.is_set
	|| configured_ldp_sync.is_set
	|| configured_ldp_sync_igp_shortcuts.is_set
	|| cost_fallback_active.is_set
	|| dead_interval.is_set
	|| designated_router.is_set
	|| designated_router_address.is_set
	|| designated_router_id.is_set
	|| fast_detect_hold_down_time.is_set
	|| fast_detect_hold_down_time_remaining.is_set
	|| fast_reroute_topology_independent_lfa.is_set
	|| fast_reroute_type.is_set
	|| hello_interval.is_set
	|| hello_interval_ms.is_set
	|| interface_ack_list_count.is_set
	|| interface_ack_list_high_watermark.is_set
	|| interface_address.is_set
	|| interface_area.is_set
	|| interface_bandwidth.is_set
	|| interface_bkp_labels.is_set
	|| interface_cost_fallback.is_set
	|| interface_dc_bitless_lsa_count.is_set
	|| interface_demand_circuit.is_set
	|| interface_fast_detect_hold_down.is_set
	|| interface_forw.is_set
	|| interface_last_nsf.is_set
	|| interface_ldp_sync.is_set
	|| interface_line_state.is_set
	|| interface_link_cost.is_set
	|| interface_lsa_filter.is_set
	|| interface_madj_count.is_set
	|| interface_mask.is_set
	|| interface_name_xr.is_set
	|| interface_nsf.is_set
	|| interface_nsf_enabled.is_set
	|| interface_pri_labels.is_set
	|| interface_priority.is_set
	|| interface_retransmission_interrval.is_set
	|| interface_router_id.is_set
	|| interface_sid.is_set
	|| interface_sid_n_flag_clear.is_set
	|| interface_sid_php_off.is_set
	|| interface_srte_labels.is_set
	|| interface_state.is_set
	|| interface_strict_spf_sid.is_set
	|| interface_strict_spf_sid_n_flag_clear.is_set
	|| interface_strict_spf_sid_php_off.is_set
	|| interface_tunnel_flags.is_set
	|| interface_unnum.is_set
	|| interfaceis_madj.is_set
	|| ip_mtu.is_set
	|| is_loopback_stub_network.is_set
	|| maximum_packet_size.is_set
	|| network_lsa_flush_timer.is_set
	|| network_type.is_set
	|| next_hello_time.is_set
	|| next_hello_time_ms.is_set
	|| ospf_interface_state.is_set
	|| passive_interface.is_set
	|| prefix_suppress_primary_addresses.is_set
	|| prefix_suppress_secondary_addresses.is_set
	|| registered_for_link_down_fast_detection.is_set
	|| transmission_delay.is_set
	|| ttl_security_enabled.is_set
	|| ttl_security_hop_count.is_set
	|| wait_interval.is_set
	|| (active_interface !=  nullptr && active_interface->has_data())
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip_sec_addr.size(); index++)
    {
        if(ip_sec_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(backup_designated_router.yfilter)
	|| ydk::is_set(backup_designated_router_address.yfilter)
	|| ydk::is_set(backup_designated_router_id.yfilter)
	|| ydk::is_set(cfg_cost_fallback.yfilter)
	|| ydk::is_set(configured_demand_circuit.yfilter)
	|| ydk::is_set(configured_ldp_sync.yfilter)
	|| ydk::is_set(configured_ldp_sync_igp_shortcuts.yfilter)
	|| ydk::is_set(cost_fallback_active.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(designated_router.yfilter)
	|| ydk::is_set(designated_router_address.yfilter)
	|| ydk::is_set(designated_router_id.yfilter)
	|| ydk::is_set(fast_detect_hold_down_time.yfilter)
	|| ydk::is_set(fast_detect_hold_down_time_remaining.yfilter)
	|| ydk::is_set(fast_reroute_topology_independent_lfa.yfilter)
	|| ydk::is_set(fast_reroute_type.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hello_interval_ms.yfilter)
	|| ydk::is_set(interface_ack_list_count.yfilter)
	|| ydk::is_set(interface_ack_list_high_watermark.yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_bandwidth.yfilter)
	|| ydk::is_set(interface_bkp_labels.yfilter)
	|| ydk::is_set(interface_cost_fallback.yfilter)
	|| ydk::is_set(interface_dc_bitless_lsa_count.yfilter)
	|| ydk::is_set(interface_demand_circuit.yfilter)
	|| ydk::is_set(interface_fast_detect_hold_down.yfilter)
	|| ydk::is_set(interface_forw.yfilter)
	|| ydk::is_set(interface_last_nsf.yfilter)
	|| ydk::is_set(interface_ldp_sync.yfilter)
	|| ydk::is_set(interface_line_state.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_lsa_filter.yfilter)
	|| ydk::is_set(interface_madj_count.yfilter)
	|| ydk::is_set(interface_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_nsf.yfilter)
	|| ydk::is_set(interface_nsf_enabled.yfilter)
	|| ydk::is_set(interface_pri_labels.yfilter)
	|| ydk::is_set(interface_priority.yfilter)
	|| ydk::is_set(interface_retransmission_interrval.yfilter)
	|| ydk::is_set(interface_router_id.yfilter)
	|| ydk::is_set(interface_sid.yfilter)
	|| ydk::is_set(interface_sid_n_flag_clear.yfilter)
	|| ydk::is_set(interface_sid_php_off.yfilter)
	|| ydk::is_set(interface_srte_labels.yfilter)
	|| ydk::is_set(interface_state.yfilter)
	|| ydk::is_set(interface_strict_spf_sid.yfilter)
	|| ydk::is_set(interface_strict_spf_sid_n_flag_clear.yfilter)
	|| ydk::is_set(interface_strict_spf_sid_php_off.yfilter)
	|| ydk::is_set(interface_tunnel_flags.yfilter)
	|| ydk::is_set(interface_unnum.yfilter)
	|| ydk::is_set(interfaceis_madj.yfilter)
	|| ydk::is_set(ip_mtu.yfilter)
	|| ydk::is_set(is_loopback_stub_network.yfilter)
	|| ydk::is_set(maximum_packet_size.yfilter)
	|| ydk::is_set(network_lsa_flush_timer.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(next_hello_time.yfilter)
	|| ydk::is_set(next_hello_time_ms.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(prefix_suppress_primary_addresses.yfilter)
	|| ydk::is_set(prefix_suppress_secondary_addresses.yfilter)
	|| ydk::is_set(registered_for_link_down_fast_detection.yfilter)
	|| ydk::is_set(transmission_delay.yfilter)
	|| ydk::is_set(ttl_security_enabled.yfilter)
	|| ydk::is_set(ttl_security_hop_count.yfilter)
	|| ydk::is_set(wait_interval.yfilter)
	|| (active_interface !=  nullptr && active_interface->has_operation())
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_designated_router.is_set || is_set(backup_designated_router.yfilter)) leaf_name_data.push_back(backup_designated_router.get_name_leafdata());
    if (backup_designated_router_address.is_set || is_set(backup_designated_router_address.yfilter)) leaf_name_data.push_back(backup_designated_router_address.get_name_leafdata());
    if (backup_designated_router_id.is_set || is_set(backup_designated_router_id.yfilter)) leaf_name_data.push_back(backup_designated_router_id.get_name_leafdata());
    if (cfg_cost_fallback.is_set || is_set(cfg_cost_fallback.yfilter)) leaf_name_data.push_back(cfg_cost_fallback.get_name_leafdata());
    if (configured_demand_circuit.is_set || is_set(configured_demand_circuit.yfilter)) leaf_name_data.push_back(configured_demand_circuit.get_name_leafdata());
    if (configured_ldp_sync.is_set || is_set(configured_ldp_sync.yfilter)) leaf_name_data.push_back(configured_ldp_sync.get_name_leafdata());
    if (configured_ldp_sync_igp_shortcuts.is_set || is_set(configured_ldp_sync_igp_shortcuts.yfilter)) leaf_name_data.push_back(configured_ldp_sync_igp_shortcuts.get_name_leafdata());
    if (cost_fallback_active.is_set || is_set(cost_fallback_active.yfilter)) leaf_name_data.push_back(cost_fallback_active.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (designated_router.is_set || is_set(designated_router.yfilter)) leaf_name_data.push_back(designated_router.get_name_leafdata());
    if (designated_router_address.is_set || is_set(designated_router_address.yfilter)) leaf_name_data.push_back(designated_router_address.get_name_leafdata());
    if (designated_router_id.is_set || is_set(designated_router_id.yfilter)) leaf_name_data.push_back(designated_router_id.get_name_leafdata());
    if (fast_detect_hold_down_time.is_set || is_set(fast_detect_hold_down_time.yfilter)) leaf_name_data.push_back(fast_detect_hold_down_time.get_name_leafdata());
    if (fast_detect_hold_down_time_remaining.is_set || is_set(fast_detect_hold_down_time_remaining.yfilter)) leaf_name_data.push_back(fast_detect_hold_down_time_remaining.get_name_leafdata());
    if (fast_reroute_topology_independent_lfa.is_set || is_set(fast_reroute_topology_independent_lfa.yfilter)) leaf_name_data.push_back(fast_reroute_topology_independent_lfa.get_name_leafdata());
    if (fast_reroute_type.is_set || is_set(fast_reroute_type.yfilter)) leaf_name_data.push_back(fast_reroute_type.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_interval_ms.is_set || is_set(hello_interval_ms.yfilter)) leaf_name_data.push_back(hello_interval_ms.get_name_leafdata());
    if (interface_ack_list_count.is_set || is_set(interface_ack_list_count.yfilter)) leaf_name_data.push_back(interface_ack_list_count.get_name_leafdata());
    if (interface_ack_list_high_watermark.is_set || is_set(interface_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(interface_ack_list_high_watermark.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.yfilter)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (interface_bkp_labels.is_set || is_set(interface_bkp_labels.yfilter)) leaf_name_data.push_back(interface_bkp_labels.get_name_leafdata());
    if (interface_cost_fallback.is_set || is_set(interface_cost_fallback.yfilter)) leaf_name_data.push_back(interface_cost_fallback.get_name_leafdata());
    if (interface_dc_bitless_lsa_count.is_set || is_set(interface_dc_bitless_lsa_count.yfilter)) leaf_name_data.push_back(interface_dc_bitless_lsa_count.get_name_leafdata());
    if (interface_demand_circuit.is_set || is_set(interface_demand_circuit.yfilter)) leaf_name_data.push_back(interface_demand_circuit.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.yfilter)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_forw.is_set || is_set(interface_forw.yfilter)) leaf_name_data.push_back(interface_forw.get_name_leafdata());
    if (interface_last_nsf.is_set || is_set(interface_last_nsf.yfilter)) leaf_name_data.push_back(interface_last_nsf.get_name_leafdata());
    if (interface_ldp_sync.is_set || is_set(interface_ldp_sync.yfilter)) leaf_name_data.push_back(interface_ldp_sync.get_name_leafdata());
    if (interface_line_state.is_set || is_set(interface_line_state.yfilter)) leaf_name_data.push_back(interface_line_state.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_lsa_filter.is_set || is_set(interface_lsa_filter.yfilter)) leaf_name_data.push_back(interface_lsa_filter.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.yfilter)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.yfilter)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_nsf.is_set || is_set(interface_nsf.yfilter)) leaf_name_data.push_back(interface_nsf.get_name_leafdata());
    if (interface_nsf_enabled.is_set || is_set(interface_nsf_enabled.yfilter)) leaf_name_data.push_back(interface_nsf_enabled.get_name_leafdata());
    if (interface_pri_labels.is_set || is_set(interface_pri_labels.yfilter)) leaf_name_data.push_back(interface_pri_labels.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.yfilter)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (interface_retransmission_interrval.is_set || is_set(interface_retransmission_interrval.yfilter)) leaf_name_data.push_back(interface_retransmission_interrval.get_name_leafdata());
    if (interface_router_id.is_set || is_set(interface_router_id.yfilter)) leaf_name_data.push_back(interface_router_id.get_name_leafdata());
    if (interface_sid.is_set || is_set(interface_sid.yfilter)) leaf_name_data.push_back(interface_sid.get_name_leafdata());
    if (interface_sid_n_flag_clear.is_set || is_set(interface_sid_n_flag_clear.yfilter)) leaf_name_data.push_back(interface_sid_n_flag_clear.get_name_leafdata());
    if (interface_sid_php_off.is_set || is_set(interface_sid_php_off.yfilter)) leaf_name_data.push_back(interface_sid_php_off.get_name_leafdata());
    if (interface_srte_labels.is_set || is_set(interface_srte_labels.yfilter)) leaf_name_data.push_back(interface_srte_labels.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (interface_strict_spf_sid.is_set || is_set(interface_strict_spf_sid.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid.get_name_leafdata());
    if (interface_strict_spf_sid_n_flag_clear.is_set || is_set(interface_strict_spf_sid_n_flag_clear.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid_n_flag_clear.get_name_leafdata());
    if (interface_strict_spf_sid_php_off.is_set || is_set(interface_strict_spf_sid_php_off.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid_php_off.get_name_leafdata());
    if (interface_tunnel_flags.is_set || is_set(interface_tunnel_flags.yfilter)) leaf_name_data.push_back(interface_tunnel_flags.get_name_leafdata());
    if (interface_unnum.is_set || is_set(interface_unnum.yfilter)) leaf_name_data.push_back(interface_unnum.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.yfilter)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (ip_mtu.is_set || is_set(ip_mtu.yfilter)) leaf_name_data.push_back(ip_mtu.get_name_leafdata());
    if (is_loopback_stub_network.is_set || is_set(is_loopback_stub_network.yfilter)) leaf_name_data.push_back(is_loopback_stub_network.get_name_leafdata());
    if (maximum_packet_size.is_set || is_set(maximum_packet_size.yfilter)) leaf_name_data.push_back(maximum_packet_size.get_name_leafdata());
    if (network_lsa_flush_timer.is_set || is_set(network_lsa_flush_timer.yfilter)) leaf_name_data.push_back(network_lsa_flush_timer.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (next_hello_time.is_set || is_set(next_hello_time.yfilter)) leaf_name_data.push_back(next_hello_time.get_name_leafdata());
    if (next_hello_time_ms.is_set || is_set(next_hello_time_ms.yfilter)) leaf_name_data.push_back(next_hello_time_ms.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (prefix_suppress_primary_addresses.is_set || is_set(prefix_suppress_primary_addresses.yfilter)) leaf_name_data.push_back(prefix_suppress_primary_addresses.get_name_leafdata());
    if (prefix_suppress_secondary_addresses.is_set || is_set(prefix_suppress_secondary_addresses.yfilter)) leaf_name_data.push_back(prefix_suppress_secondary_addresses.get_name_leafdata());
    if (registered_for_link_down_fast_detection.is_set || is_set(registered_for_link_down_fast_detection.yfilter)) leaf_name_data.push_back(registered_for_link_down_fast_detection.get_name_leafdata());
    if (transmission_delay.is_set || is_set(transmission_delay.yfilter)) leaf_name_data.push_back(transmission_delay.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.yfilter)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (ttl_security_hop_count.is_set || is_set(ttl_security_hop_count.yfilter)) leaf_name_data.push_back(ttl_security_hop_count.get_name_leafdata());
    if (wait_interval.is_set || is_set(wait_interval.yfilter)) leaf_name_data.push_back(wait_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-interface")
    {
        if(active_interface == nullptr)
        {
            active_interface = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface>();
        }
        return active_interface;
    }

    if(child_yang_name == "interface-bfd-information")
    {
        if(interface_bfd_information == nullptr)
        {
            interface_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation>();
        }
        return interface_bfd_information;
    }

    if(child_yang_name == "interface-madj")
    {
        for(auto const & c : interface_madj)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-neighbor")
    {
        for(auto const & c : interface_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor>();
        c->parent = this;
        interface_neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "ip-sec-addr")
    {
        for(auto const & c : ip_sec_addr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr>();
        c->parent = this;
        ip_sec_addr.push_back(c);
        return c;
    }

    if(child_yang_name == "ipfrr-tiebreakers")
    {
        for(auto const & c : ipfrr_tiebreakers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers>();
        c->parent = this;
        ipfrr_tiebreakers.push_back(c);
        return c;
    }

    if(child_yang_name == "srlg")
    {
        for(auto const & c : srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_interface != nullptr)
    {
        children["active-interface"] = active_interface;
    }

    if(interface_bfd_information != nullptr)
    {
        children["interface-bfd-information"] = interface_bfd_information;
    }

    for (auto const & c : interface_madj)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ip_sec_addr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipfrr_tiebreakers)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router = value;
        backup_designated_router.value_namespace = name_space;
        backup_designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address = value;
        backup_designated_router_address.value_namespace = name_space;
        backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id = value;
        backup_designated_router_id.value_namespace = name_space;
        backup_designated_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback = value;
        cfg_cost_fallback.value_namespace = name_space;
        cfg_cost_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit = value;
        configured_demand_circuit.value_namespace = name_space;
        configured_demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync = value;
        configured_ldp_sync.value_namespace = name_space;
        configured_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-ldp-sync-igp-shortcuts")
    {
        configured_ldp_sync_igp_shortcuts = value;
        configured_ldp_sync_igp_shortcuts.value_namespace = name_space;
        configured_ldp_sync_igp_shortcuts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active = value;
        cost_fallback_active.value_namespace = name_space;
        cost_fallback_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router")
    {
        designated_router = value;
        designated_router.value_namespace = name_space;
        designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address = value;
        designated_router_address.value_namespace = name_space;
        designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id = value;
        designated_router_id.value_namespace = name_space;
        designated_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time = value;
        fast_detect_hold_down_time.value_namespace = name_space;
        fast_detect_hold_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining = value;
        fast_detect_hold_down_time_remaining.value_namespace = name_space;
        fast_detect_hold_down_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa = value;
        fast_reroute_topology_independent_lfa.value_namespace = name_space;
        fast_reroute_topology_independent_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type = value;
        fast_reroute_type.value_namespace = name_space;
        fast_reroute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval-ms")
    {
        hello_interval_ms = value;
        hello_interval_ms.value_namespace = name_space;
        hello_interval_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ack-list-count")
    {
        interface_ack_list_count = value;
        interface_ack_list_count.value_namespace = name_space;
        interface_ack_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ack-list-high-watermark")
    {
        interface_ack_list_high_watermark = value;
        interface_ack_list_high_watermark.value_namespace = name_space;
        interface_ack_list_high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
        interface_bandwidth.value_namespace = name_space;
        interface_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bkp-labels")
    {
        interface_bkp_labels = value;
        interface_bkp_labels.value_namespace = name_space;
        interface_bkp_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback = value;
        interface_cost_fallback.value_namespace = name_space;
        interface_cost_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count = value;
        interface_dc_bitless_lsa_count.value_namespace = name_space;
        interface_dc_bitless_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit = value;
        interface_demand_circuit.value_namespace = name_space;
        interface_demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
        interface_fast_detect_hold_down.value_namespace = name_space;
        interface_fast_detect_hold_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-forw")
    {
        interface_forw = value;
        interface_forw.value_namespace = name_space;
        interface_forw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf = value;
        interface_last_nsf.value_namespace = name_space;
        interface_last_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync = value;
        interface_ldp_sync.value_namespace = name_space;
        interface_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state = value;
        interface_line_state.value_namespace = name_space;
        interface_line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter = value;
        interface_lsa_filter.value_namespace = name_space;
        interface_lsa_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
        interface_madj_count.value_namespace = name_space;
        interface_madj_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
        interface_mask.value_namespace = name_space;
        interface_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf = value;
        interface_nsf.value_namespace = name_space;
        interface_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled = value;
        interface_nsf_enabled.value_namespace = name_space;
        interface_nsf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-pri-labels")
    {
        interface_pri_labels = value;
        interface_pri_labels.value_namespace = name_space;
        interface_pri_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
        interface_priority.value_namespace = name_space;
        interface_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval = value;
        interface_retransmission_interrval.value_namespace = name_space;
        interface_retransmission_interrval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id = value;
        interface_router_id.value_namespace = name_space;
        interface_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid")
    {
        interface_sid = value;
        interface_sid.value_namespace = name_space;
        interface_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear = value;
        interface_sid_n_flag_clear.value_namespace = name_space;
        interface_sid_n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off = value;
        interface_sid_php_off.value_namespace = name_space;
        interface_sid_php_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-srte-labels")
    {
        interface_srte_labels = value;
        interface_srte_labels.value_namespace = name_space;
        interface_srte_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid = value;
        interface_strict_spf_sid.value_namespace = name_space;
        interface_strict_spf_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear = value;
        interface_strict_spf_sid_n_flag_clear.value_namespace = name_space;
        interface_strict_spf_sid_n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off = value;
        interface_strict_spf_sid_php_off.value_namespace = name_space;
        interface_strict_spf_sid_php_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags = value;
        interface_tunnel_flags.value_namespace = name_space;
        interface_tunnel_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-unnum")
    {
        interface_unnum = value;
        interface_unnum.value_namespace = name_space;
        interface_unnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
        interfaceis_madj.value_namespace = name_space;
        interfaceis_madj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu = value;
        ip_mtu.value_namespace = name_space;
        ip_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network = value;
        is_loopback_stub_network.value_namespace = name_space;
        is_loopback_stub_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size = value;
        maximum_packet_size.value_namespace = name_space;
        maximum_packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer = value;
        network_lsa_flush_timer.value_namespace = name_space;
        network_lsa_flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time = value;
        next_hello_time.value_namespace = name_space;
        next_hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello-time-ms")
    {
        next_hello_time_ms = value;
        next_hello_time_ms.value_namespace = name_space;
        next_hello_time_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppress-primary-addresses")
    {
        prefix_suppress_primary_addresses = value;
        prefix_suppress_primary_addresses.value_namespace = name_space;
        prefix_suppress_primary_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppress-secondary-addresses")
    {
        prefix_suppress_secondary_addresses = value;
        prefix_suppress_secondary_addresses.value_namespace = name_space;
        prefix_suppress_secondary_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection = value;
        registered_for_link_down_fast_detection.value_namespace = name_space;
        registered_for_link_down_fast_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay = value;
        transmission_delay.value_namespace = name_space;
        transmission_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
        ttl_security_enabled.value_namespace = name_space;
        ttl_security_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security-hop-count")
    {
        ttl_security_hop_count = value;
        ttl_security_hop_count.value_namespace = name_space;
        ttl_security_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-interval")
    {
        wait_interval = value;
        wait_interval.value_namespace = name_space;
        wait_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id.yfilter = yfilter;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback.yfilter = yfilter;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "configured-ldp-sync-igp-shortcuts")
    {
        configured_ldp_sync_igp_shortcuts.yfilter = yfilter;
    }
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "designated-router")
    {
        designated_router.yfilter = yfilter;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address.yfilter = yfilter;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id.yfilter = yfilter;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time.yfilter = yfilter;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining.yfilter = yfilter;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa.yfilter = yfilter;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval-ms")
    {
        hello_interval_ms.yfilter = yfilter;
    }
    if(value_path == "interface-ack-list-count")
    {
        interface_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "interface-ack-list-high-watermark")
    {
        interface_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth.yfilter = yfilter;
    }
    if(value_path == "interface-bkp-labels")
    {
        interface_bkp_labels.yfilter = yfilter;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback.yfilter = yfilter;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count.yfilter = yfilter;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down.yfilter = yfilter;
    }
    if(value_path == "interface-forw")
    {
        interface_forw.yfilter = yfilter;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf.yfilter = yfilter;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter.yfilter = yfilter;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count.yfilter = yfilter;
    }
    if(value_path == "interface-mask")
    {
        interface_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf.yfilter = yfilter;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled.yfilter = yfilter;
    }
    if(value_path == "interface-pri-labels")
    {
        interface_pri_labels.yfilter = yfilter;
    }
    if(value_path == "interface-priority")
    {
        interface_priority.yfilter = yfilter;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval.yfilter = yfilter;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-sid")
    {
        interface_sid.yfilter = yfilter;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off.yfilter = yfilter;
    }
    if(value_path == "interface-srte-labels")
    {
        interface_srte_labels.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off.yfilter = yfilter;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags.yfilter = yfilter;
    }
    if(value_path == "interface-unnum")
    {
        interface_unnum.yfilter = yfilter;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj.yfilter = yfilter;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu.yfilter = yfilter;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network.yfilter = yfilter;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size.yfilter = yfilter;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time.yfilter = yfilter;
    }
    if(value_path == "next-hello-time-ms")
    {
        next_hello_time_ms.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "prefix-suppress-primary-addresses")
    {
        prefix_suppress_primary_addresses.yfilter = yfilter;
    }
    if(value_path == "prefix-suppress-secondary-addresses")
    {
        prefix_suppress_secondary_addresses.yfilter = yfilter;
    }
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection.yfilter = yfilter;
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay.yfilter = yfilter;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled.yfilter = yfilter;
    }
    if(value_path == "ttl-security-hop-count")
    {
        ttl_security_hop_count.yfilter = yfilter;
    }
    if(value_path == "wait-interval")
    {
        wait_interval.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-interface" || name == "interface-bfd-information" || name == "interface-madj" || name == "interface-neighbor" || name == "ip-sec-addr" || name == "ipfrr-tiebreakers" || name == "srlg" || name == "interface-name" || name == "backup-designated-router" || name == "backup-designated-router-address" || name == "backup-designated-router-id" || name == "cfg-cost-fallback" || name == "configured-demand-circuit" || name == "configured-ldp-sync" || name == "configured-ldp-sync-igp-shortcuts" || name == "cost-fallback-active" || name == "dead-interval" || name == "designated-router" || name == "designated-router-address" || name == "designated-router-id" || name == "fast-detect-hold-down-time" || name == "fast-detect-hold-down-time-remaining" || name == "fast-reroute-topology-independent-lfa" || name == "fast-reroute-type" || name == "hello-interval" || name == "hello-interval-ms" || name == "interface-ack-list-count" || name == "interface-ack-list-high-watermark" || name == "interface-address" || name == "interface-area" || name == "interface-bandwidth" || name == "interface-bkp-labels" || name == "interface-cost-fallback" || name == "interface-dc-bitless-lsa-count" || name == "interface-demand-circuit" || name == "interface-fast-detect-hold-down" || name == "interface-forw" || name == "interface-last-nsf" || name == "interface-ldp-sync" || name == "interface-line-state" || name == "interface-link-cost" || name == "interface-lsa-filter" || name == "interface-madj-count" || name == "interface-mask" || name == "interface-name-xr" || name == "interface-nsf" || name == "interface-nsf-enabled" || name == "interface-pri-labels" || name == "interface-priority" || name == "interface-retransmission-interrval" || name == "interface-router-id" || name == "interface-sid" || name == "interface-sid-n-flag-clear" || name == "interface-sid-php-off" || name == "interface-srte-labels" || name == "interface-state" || name == "interface-strict-spf-sid" || name == "interface-strict-spf-sid-n-flag-clear" || name == "interface-strict-spf-sid-php-off" || name == "interface-tunnel-flags" || name == "interface-unnum" || name == "interfaceis-madj" || name == "ip-mtu" || name == "is-loopback-stub-network" || name == "maximum-packet-size" || name == "network-lsa-flush-timer" || name == "network-type" || name == "next-hello-time" || name == "next-hello-time-ms" || name == "ospf-interface-state" || name == "passive-interface" || name == "prefix-suppress-primary-addresses" || name == "prefix-suppress-secondary-addresses" || name == "registered-for-link-down-fast-detection" || name == "transmission-delay" || name == "ttl-security-enabled" || name == "ttl-security-hop-count" || name == "wait-interval")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::ActiveInterface()
    :
    flood_scan_length{YType::uint32, "flood-scan-length"},
    interface_area_flood_index{YType::uint32, "interface-area-flood-index"},
    interface_area_next_flood{YType::uint32, "interface-area-next-flood"},
    interface_area_next_flood_index{YType::uint32, "interface-area-next-flood-index"},
    interface_as_flood_index{YType::uint32, "interface-as-flood-index"},
    interface_as_next_flood{YType::uint32, "interface-as-next-flood"},
    interface_as_next_flood_index{YType::uint32, "interface-as-next-flood-index"},
    interface_authentication_type{YType::enumeration, "interface-authentication-type"},
    interface_flood_length{YType::uint32, "interface-flood-length"},
    interface_flood_pacing_timer{YType::uint32, "interface-flood-pacing-timer"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    keychain_id{YType::uint64, "keychain-id"},
    last_flood_time{YType::uint32, "last-flood-time"},
    maximum_flood_length{YType::uint32, "maximum-flood-length"},
    maximum_flood_time{YType::uint32, "maximum-flood-time"},
    old_md5_key_neighbor_count{YType::uint32, "old-md5-key-neighbor-count"},
    suppress_hello_count{YType::uint16, "suppress-hello-count"},
    wait_time{YType::uint32, "wait-time"},
    youngest_md_key{YType::boolean, "youngest-md-key"},
    youngest_md_key_id{YType::uint16, "youngest-md-key-id"}
{

    yang_name = "active-interface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::~ActiveInterface()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::has_data() const
{
    for (std::size_t index=0; index<md_keys.size(); index++)
    {
        if(md_keys[index]->has_data())
            return true;
    }
    return flood_scan_length.is_set
	|| interface_area_flood_index.is_set
	|| interface_area_next_flood.is_set
	|| interface_area_next_flood_index.is_set
	|| interface_as_flood_index.is_set
	|| interface_as_next_flood.is_set
	|| interface_as_next_flood_index.is_set
	|| interface_authentication_type.is_set
	|| interface_flood_length.is_set
	|| interface_flood_pacing_timer.is_set
	|| interface_neighbor_count.is_set
	|| keychain_id.is_set
	|| last_flood_time.is_set
	|| maximum_flood_length.is_set
	|| maximum_flood_time.is_set
	|| old_md5_key_neighbor_count.is_set
	|| suppress_hello_count.is_set
	|| wait_time.is_set
	|| youngest_md_key.is_set
	|| youngest_md_key_id.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::has_operation() const
{
    for (std::size_t index=0; index<md_keys.size(); index++)
    {
        if(md_keys[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flood_scan_length.yfilter)
	|| ydk::is_set(interface_area_flood_index.yfilter)
	|| ydk::is_set(interface_area_next_flood.yfilter)
	|| ydk::is_set(interface_area_next_flood_index.yfilter)
	|| ydk::is_set(interface_as_flood_index.yfilter)
	|| ydk::is_set(interface_as_next_flood.yfilter)
	|| ydk::is_set(interface_as_next_flood_index.yfilter)
	|| ydk::is_set(interface_authentication_type.yfilter)
	|| ydk::is_set(interface_flood_length.yfilter)
	|| ydk::is_set(interface_flood_pacing_timer.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(keychain_id.yfilter)
	|| ydk::is_set(last_flood_time.yfilter)
	|| ydk::is_set(maximum_flood_length.yfilter)
	|| ydk::is_set(maximum_flood_time.yfilter)
	|| ydk::is_set(old_md5_key_neighbor_count.yfilter)
	|| ydk::is_set(suppress_hello_count.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(youngest_md_key.yfilter)
	|| ydk::is_set(youngest_md_key_id.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood_scan_length.is_set || is_set(flood_scan_length.yfilter)) leaf_name_data.push_back(flood_scan_length.get_name_leafdata());
    if (interface_area_flood_index.is_set || is_set(interface_area_flood_index.yfilter)) leaf_name_data.push_back(interface_area_flood_index.get_name_leafdata());
    if (interface_area_next_flood.is_set || is_set(interface_area_next_flood.yfilter)) leaf_name_data.push_back(interface_area_next_flood.get_name_leafdata());
    if (interface_area_next_flood_index.is_set || is_set(interface_area_next_flood_index.yfilter)) leaf_name_data.push_back(interface_area_next_flood_index.get_name_leafdata());
    if (interface_as_flood_index.is_set || is_set(interface_as_flood_index.yfilter)) leaf_name_data.push_back(interface_as_flood_index.get_name_leafdata());
    if (interface_as_next_flood.is_set || is_set(interface_as_next_flood.yfilter)) leaf_name_data.push_back(interface_as_next_flood.get_name_leafdata());
    if (interface_as_next_flood_index.is_set || is_set(interface_as_next_flood_index.yfilter)) leaf_name_data.push_back(interface_as_next_flood_index.get_name_leafdata());
    if (interface_authentication_type.is_set || is_set(interface_authentication_type.yfilter)) leaf_name_data.push_back(interface_authentication_type.get_name_leafdata());
    if (interface_flood_length.is_set || is_set(interface_flood_length.yfilter)) leaf_name_data.push_back(interface_flood_length.get_name_leafdata());
    if (interface_flood_pacing_timer.is_set || is_set(interface_flood_pacing_timer.yfilter)) leaf_name_data.push_back(interface_flood_pacing_timer.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (keychain_id.is_set || is_set(keychain_id.yfilter)) leaf_name_data.push_back(keychain_id.get_name_leafdata());
    if (last_flood_time.is_set || is_set(last_flood_time.yfilter)) leaf_name_data.push_back(last_flood_time.get_name_leafdata());
    if (maximum_flood_length.is_set || is_set(maximum_flood_length.yfilter)) leaf_name_data.push_back(maximum_flood_length.get_name_leafdata());
    if (maximum_flood_time.is_set || is_set(maximum_flood_time.yfilter)) leaf_name_data.push_back(maximum_flood_time.get_name_leafdata());
    if (old_md5_key_neighbor_count.is_set || is_set(old_md5_key_neighbor_count.yfilter)) leaf_name_data.push_back(old_md5_key_neighbor_count.get_name_leafdata());
    if (suppress_hello_count.is_set || is_set(suppress_hello_count.yfilter)) leaf_name_data.push_back(suppress_hello_count.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (youngest_md_key.is_set || is_set(youngest_md_key.yfilter)) leaf_name_data.push_back(youngest_md_key.get_name_leafdata());
    if (youngest_md_key_id.is_set || is_set(youngest_md_key_id.yfilter)) leaf_name_data.push_back(youngest_md_key_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md-keys")
    {
        for(auto const & c : md_keys)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys>();
        c->parent = this;
        md_keys.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : md_keys)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flood-scan-length")
    {
        flood_scan_length = value;
        flood_scan_length.value_namespace = name_space;
        flood_scan_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index = value;
        interface_area_flood_index.value_namespace = name_space;
        interface_area_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood = value;
        interface_area_next_flood.value_namespace = name_space;
        interface_area_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index = value;
        interface_area_next_flood_index.value_namespace = name_space;
        interface_area_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index = value;
        interface_as_flood_index.value_namespace = name_space;
        interface_as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood = value;
        interface_as_next_flood.value_namespace = name_space;
        interface_as_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index = value;
        interface_as_next_flood_index.value_namespace = name_space;
        interface_as_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type = value;
        interface_authentication_type.value_namespace = name_space;
        interface_authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length = value;
        interface_flood_length.value_namespace = name_space;
        interface_flood_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer = value;
        interface_flood_pacing_timer.value_namespace = name_space;
        interface_flood_pacing_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-id")
    {
        keychain_id = value;
        keychain_id.value_namespace = name_space;
        keychain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time = value;
        last_flood_time.value_namespace = name_space;
        last_flood_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length = value;
        maximum_flood_length.value_namespace = name_space;
        maximum_flood_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time = value;
        maximum_flood_time.value_namespace = name_space;
        maximum_flood_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count = value;
        old_md5_key_neighbor_count.value_namespace = name_space;
        old_md5_key_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count = value;
        suppress_hello_count.value_namespace = name_space;
        suppress_hello_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key = value;
        youngest_md_key.value_namespace = name_space;
        youngest_md_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id = value;
        youngest_md_key_id.value_namespace = name_space;
        youngest_md_key_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flood-scan-length")
    {
        flood_scan_length.yfilter = yfilter;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood.yfilter = yfilter;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood.yfilter = yfilter;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type.yfilter = yfilter;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length.yfilter = yfilter;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "keychain-id")
    {
        keychain_id.yfilter = yfilter;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time.yfilter = yfilter;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length.yfilter = yfilter;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time.yfilter = yfilter;
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key.yfilter = yfilter;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md-keys" || name == "flood-scan-length" || name == "interface-area-flood-index" || name == "interface-area-next-flood" || name == "interface-area-next-flood-index" || name == "interface-as-flood-index" || name == "interface-as-next-flood" || name == "interface-as-next-flood-index" || name == "interface-authentication-type" || name == "interface-flood-length" || name == "interface-flood-pacing-timer" || name == "interface-neighbor-count" || name == "keychain-id" || name == "last-flood-time" || name == "maximum-flood-length" || name == "maximum-flood-time" || name == "old-md5-key-neighbor-count" || name == "suppress-hello-count" || name == "wait-time" || name == "youngest-md-key" || name == "youngest-md-key-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::MdKeys()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "md-keys"; yang_parent_name = "active-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::~MdKeys()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md-keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::InterfaceBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "interface-bfd-information"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::~InterfaceBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| detection_multiplier.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::InterfaceMadj()
    :
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    madj_area_id{YType::uint32, "madj-area-id"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-madj"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::has_data() const
{
    return interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_link_cost.is_set
	|| interface_neighbor_count.is_set
	|| madj_area_id.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(madj_area_id.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.yfilter)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
        madj_area_id.value_namespace = name_space;
        madj_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-adj-neighbor-count" || name == "interface-area" || name == "interface-link-cost" || name == "interface-neighbor-count" || name == "madj-area-id" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::InterfaceNeighbor()
    :
    interface_neighbor_cost{YType::uint32, "interface-neighbor-cost"},
    interface_neighbor_id{YType::str, "interface-neighbor-id"},
    neighbor_bdr{YType::boolean, "neighbor-bdr"},
    neighbor_dr{YType::boolean, "neighbor-dr"},
    suppress_hello{YType::boolean, "suppress-hello"}
{

    yang_name = "interface-neighbor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::~InterfaceNeighbor()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::has_data() const
{
    return interface_neighbor_cost.is_set
	|| interface_neighbor_id.is_set
	|| neighbor_bdr.is_set
	|| neighbor_dr.is_set
	|| suppress_hello.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_neighbor_cost.yfilter)
	|| ydk::is_set(interface_neighbor_id.yfilter)
	|| ydk::is_set(neighbor_bdr.yfilter)
	|| ydk::is_set(neighbor_dr.yfilter)
	|| ydk::is_set(suppress_hello.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_cost.is_set || is_set(interface_neighbor_cost.yfilter)) leaf_name_data.push_back(interface_neighbor_cost.get_name_leafdata());
    if (interface_neighbor_id.is_set || is_set(interface_neighbor_id.yfilter)) leaf_name_data.push_back(interface_neighbor_id.get_name_leafdata());
    if (neighbor_bdr.is_set || is_set(neighbor_bdr.yfilter)) leaf_name_data.push_back(neighbor_bdr.get_name_leafdata());
    if (neighbor_dr.is_set || is_set(neighbor_dr.yfilter)) leaf_name_data.push_back(neighbor_dr.get_name_leafdata());
    if (suppress_hello.is_set || is_set(suppress_hello.yfilter)) leaf_name_data.push_back(suppress_hello.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost = value;
        interface_neighbor_cost.value_namespace = name_space;
        interface_neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id = value;
        interface_neighbor_id.value_namespace = name_space;
        interface_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr = value;
        neighbor_bdr.value_namespace = name_space;
        neighbor_bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr = value;
        neighbor_dr.value_namespace = name_space;
        neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello = value;
        suppress_hello.value_namespace = name_space;
        suppress_hello.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-cost" || name == "interface-neighbor-id" || name == "neighbor-bdr" || name == "neighbor-dr" || name == "suppress-hello")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::IpSecAddr()
    :
    secondary_addr{YType::str, "secondary-addr"},
    secondary_prefix{YType::uint32, "secondary-prefix"}
{

    yang_name = "ip-sec-addr"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::~IpSecAddr()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::has_data() const
{
    return secondary_addr.is_set
	|| secondary_prefix.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_addr.yfilter)
	|| ydk::is_set(secondary_prefix.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sec-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_addr.is_set || is_set(secondary_addr.yfilter)) leaf_name_data.push_back(secondary_addr.get_name_leafdata());
    if (secondary_prefix.is_set || is_set(secondary_prefix.yfilter)) leaf_name_data.push_back(secondary_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-addr")
    {
        secondary_addr = value;
        secondary_addr.value_namespace = name_space;
        secondary_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-prefix")
    {
        secondary_prefix = value;
        secondary_prefix.value_namespace = name_space;
        secondary_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-addr")
    {
        secondary_addr.yfilter = yfilter;
    }
    if(value_path == "secondary-prefix")
    {
        secondary_prefix.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-addr" || name == "secondary-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::IpfrrTiebreakers()
    :
    tiebreaker_index{YType::uint32, "tiebreaker-index"},
    tiebreaker_type{YType::enumeration, "tiebreaker-type"}
{

    yang_name = "ipfrr-tiebreakers"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::~IpfrrTiebreakers()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::has_data() const
{
    return tiebreaker_index.is_set
	|| tiebreaker_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());
    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
        tiebreaker_index.value_namespace = name_space;
        tiebreaker_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
        tiebreaker_type.value_namespace = name_space;
        tiebreaker_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index.yfilter = yfilter;
    }
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-index" || name == "tiebreaker-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::Srlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srlg"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::~Srlg()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLinks()
{

    yang_name = "virtual-links"; yang_parent_name = "interface-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::~VirtualLinks()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::has_data() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::has_operation() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link")
    {
        for(auto const & c : virtual_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLink()
    :
    virtual_link_name{YType::str, "virtual-link-name"},
    transit_area{YType::str, "transit-area"},
    virtaul_link_retransmission_interval{YType::uint32, "virtaul-link-retransmission-interval"},
    virtual_link_authentication_type{YType::enumeration, "virtual-link-authentication-type"},
    virtual_link_cost{YType::uint16, "virtual-link-cost"},
    virtual_link_dc_bitless_lsa{YType::uint32, "virtual-link-dc-bitless-lsa"},
    virtual_link_dead_interval{YType::uint32, "virtual-link-dead-interval"},
    virtual_link_demand_circuit{YType::boolean, "virtual-link-demand-circuit"},
    virtual_link_hello_interval{YType::uint32, "virtual-link-hello-interval"},
    virtual_link_hello_interval_ms{YType::uint32, "virtual-link-hello-interval-ms"},
    virtual_link_interface_name{YType::str, "virtual-link-interface-name"},
    virtual_link_keychain_id{YType::uint64, "virtual-link-keychain-id"},
    virtual_link_last_nsf{YType::uint32, "virtual-link-last-nsf"},
    virtual_link_name_xr{YType::str, "virtual-link-name-xr"},
    virtual_link_neighbor_id{YType::str, "virtual-link-neighbor-id"},
    virtual_link_next_hello{YType::uint32, "virtual-link-next-hello"},
    virtual_link_next_hello_ms{YType::uint32, "virtual-link-next-hello-ms"},
    virtual_link_nsf{YType::boolean, "virtual-link-nsf"},
    virtual_link_nsf_enabled{YType::boolean, "virtual-link-nsf-enabled"},
    virtual_link_old_md_key_count{YType::uint32, "virtual-link-old-md-key-count"},
    virtual_link_passive{YType::boolean, "virtual-link-passive"},
    virtual_link_state{YType::enumeration, "virtual-link-state"},
    virtual_link_wait_interval{YType::uint32, "virtual-link-wait-interval"},
    virtual_link_youngest_md_key{YType::boolean, "virtual-link-youngest-md-key"},
    virtual_link_youngest_md_key_id{YType::uint16, "virtual-link-youngest-md-key-id"},
    virual_link_transmission_delay{YType::uint16, "virual-link-transmission-delay"}
    	,
    virtual_link_neighbor(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor>())
{
    virtual_link_neighbor->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "virtual-links"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::~VirtualLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::has_data() const
{
    for (std::size_t index=0; index<virtual_link_md_key.size(); index++)
    {
        if(virtual_link_md_key[index]->has_data())
            return true;
    }
    return virtual_link_name.is_set
	|| transit_area.is_set
	|| virtaul_link_retransmission_interval.is_set
	|| virtual_link_authentication_type.is_set
	|| virtual_link_cost.is_set
	|| virtual_link_dc_bitless_lsa.is_set
	|| virtual_link_dead_interval.is_set
	|| virtual_link_demand_circuit.is_set
	|| virtual_link_hello_interval.is_set
	|| virtual_link_hello_interval_ms.is_set
	|| virtual_link_interface_name.is_set
	|| virtual_link_keychain_id.is_set
	|| virtual_link_last_nsf.is_set
	|| virtual_link_name_xr.is_set
	|| virtual_link_neighbor_id.is_set
	|| virtual_link_next_hello.is_set
	|| virtual_link_next_hello_ms.is_set
	|| virtual_link_nsf.is_set
	|| virtual_link_nsf_enabled.is_set
	|| virtual_link_old_md_key_count.is_set
	|| virtual_link_passive.is_set
	|| virtual_link_state.is_set
	|| virtual_link_wait_interval.is_set
	|| virtual_link_youngest_md_key.is_set
	|| virtual_link_youngest_md_key_id.is_set
	|| virual_link_transmission_delay.is_set
	|| (virtual_link_neighbor !=  nullptr && virtual_link_neighbor->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::has_operation() const
{
    for (std::size_t index=0; index<virtual_link_md_key.size(); index++)
    {
        if(virtual_link_md_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(virtual_link_name.yfilter)
	|| ydk::is_set(transit_area.yfilter)
	|| ydk::is_set(virtaul_link_retransmission_interval.yfilter)
	|| ydk::is_set(virtual_link_authentication_type.yfilter)
	|| ydk::is_set(virtual_link_cost.yfilter)
	|| ydk::is_set(virtual_link_dc_bitless_lsa.yfilter)
	|| ydk::is_set(virtual_link_dead_interval.yfilter)
	|| ydk::is_set(virtual_link_demand_circuit.yfilter)
	|| ydk::is_set(virtual_link_hello_interval.yfilter)
	|| ydk::is_set(virtual_link_hello_interval_ms.yfilter)
	|| ydk::is_set(virtual_link_interface_name.yfilter)
	|| ydk::is_set(virtual_link_keychain_id.yfilter)
	|| ydk::is_set(virtual_link_last_nsf.yfilter)
	|| ydk::is_set(virtual_link_name_xr.yfilter)
	|| ydk::is_set(virtual_link_neighbor_id.yfilter)
	|| ydk::is_set(virtual_link_next_hello.yfilter)
	|| ydk::is_set(virtual_link_next_hello_ms.yfilter)
	|| ydk::is_set(virtual_link_nsf.yfilter)
	|| ydk::is_set(virtual_link_nsf_enabled.yfilter)
	|| ydk::is_set(virtual_link_old_md_key_count.yfilter)
	|| ydk::is_set(virtual_link_passive.yfilter)
	|| ydk::is_set(virtual_link_state.yfilter)
	|| ydk::is_set(virtual_link_wait_interval.yfilter)
	|| ydk::is_set(virtual_link_youngest_md_key.yfilter)
	|| ydk::is_set(virtual_link_youngest_md_key_id.yfilter)
	|| ydk::is_set(virual_link_transmission_delay.yfilter)
	|| (virtual_link_neighbor !=  nullptr && virtual_link_neighbor->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[virtual-link-name='" <<virtual_link_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_name.is_set || is_set(virtual_link_name.yfilter)) leaf_name_data.push_back(virtual_link_name.get_name_leafdata());
    if (transit_area.is_set || is_set(transit_area.yfilter)) leaf_name_data.push_back(transit_area.get_name_leafdata());
    if (virtaul_link_retransmission_interval.is_set || is_set(virtaul_link_retransmission_interval.yfilter)) leaf_name_data.push_back(virtaul_link_retransmission_interval.get_name_leafdata());
    if (virtual_link_authentication_type.is_set || is_set(virtual_link_authentication_type.yfilter)) leaf_name_data.push_back(virtual_link_authentication_type.get_name_leafdata());
    if (virtual_link_cost.is_set || is_set(virtual_link_cost.yfilter)) leaf_name_data.push_back(virtual_link_cost.get_name_leafdata());
    if (virtual_link_dc_bitless_lsa.is_set || is_set(virtual_link_dc_bitless_lsa.yfilter)) leaf_name_data.push_back(virtual_link_dc_bitless_lsa.get_name_leafdata());
    if (virtual_link_dead_interval.is_set || is_set(virtual_link_dead_interval.yfilter)) leaf_name_data.push_back(virtual_link_dead_interval.get_name_leafdata());
    if (virtual_link_demand_circuit.is_set || is_set(virtual_link_demand_circuit.yfilter)) leaf_name_data.push_back(virtual_link_demand_circuit.get_name_leafdata());
    if (virtual_link_hello_interval.is_set || is_set(virtual_link_hello_interval.yfilter)) leaf_name_data.push_back(virtual_link_hello_interval.get_name_leafdata());
    if (virtual_link_hello_interval_ms.is_set || is_set(virtual_link_hello_interval_ms.yfilter)) leaf_name_data.push_back(virtual_link_hello_interval_ms.get_name_leafdata());
    if (virtual_link_interface_name.is_set || is_set(virtual_link_interface_name.yfilter)) leaf_name_data.push_back(virtual_link_interface_name.get_name_leafdata());
    if (virtual_link_keychain_id.is_set || is_set(virtual_link_keychain_id.yfilter)) leaf_name_data.push_back(virtual_link_keychain_id.get_name_leafdata());
    if (virtual_link_last_nsf.is_set || is_set(virtual_link_last_nsf.yfilter)) leaf_name_data.push_back(virtual_link_last_nsf.get_name_leafdata());
    if (virtual_link_name_xr.is_set || is_set(virtual_link_name_xr.yfilter)) leaf_name_data.push_back(virtual_link_name_xr.get_name_leafdata());
    if (virtual_link_neighbor_id.is_set || is_set(virtual_link_neighbor_id.yfilter)) leaf_name_data.push_back(virtual_link_neighbor_id.get_name_leafdata());
    if (virtual_link_next_hello.is_set || is_set(virtual_link_next_hello.yfilter)) leaf_name_data.push_back(virtual_link_next_hello.get_name_leafdata());
    if (virtual_link_next_hello_ms.is_set || is_set(virtual_link_next_hello_ms.yfilter)) leaf_name_data.push_back(virtual_link_next_hello_ms.get_name_leafdata());
    if (virtual_link_nsf.is_set || is_set(virtual_link_nsf.yfilter)) leaf_name_data.push_back(virtual_link_nsf.get_name_leafdata());
    if (virtual_link_nsf_enabled.is_set || is_set(virtual_link_nsf_enabled.yfilter)) leaf_name_data.push_back(virtual_link_nsf_enabled.get_name_leafdata());
    if (virtual_link_old_md_key_count.is_set || is_set(virtual_link_old_md_key_count.yfilter)) leaf_name_data.push_back(virtual_link_old_md_key_count.get_name_leafdata());
    if (virtual_link_passive.is_set || is_set(virtual_link_passive.yfilter)) leaf_name_data.push_back(virtual_link_passive.get_name_leafdata());
    if (virtual_link_state.is_set || is_set(virtual_link_state.yfilter)) leaf_name_data.push_back(virtual_link_state.get_name_leafdata());
    if (virtual_link_wait_interval.is_set || is_set(virtual_link_wait_interval.yfilter)) leaf_name_data.push_back(virtual_link_wait_interval.get_name_leafdata());
    if (virtual_link_youngest_md_key.is_set || is_set(virtual_link_youngest_md_key.yfilter)) leaf_name_data.push_back(virtual_link_youngest_md_key.get_name_leafdata());
    if (virtual_link_youngest_md_key_id.is_set || is_set(virtual_link_youngest_md_key_id.yfilter)) leaf_name_data.push_back(virtual_link_youngest_md_key_id.get_name_leafdata());
    if (virual_link_transmission_delay.is_set || is_set(virual_link_transmission_delay.yfilter)) leaf_name_data.push_back(virual_link_transmission_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link-md-key")
    {
        for(auto const & c : virtual_link_md_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey>();
        c->parent = this;
        virtual_link_md_key.push_back(c);
        return c;
    }

    if(child_yang_name == "virtual-link-neighbor")
    {
        if(virtual_link_neighbor == nullptr)
        {
            virtual_link_neighbor = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor>();
        }
        return virtual_link_neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_link_md_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(virtual_link_neighbor != nullptr)
    {
        children["virtual-link-neighbor"] = virtual_link_neighbor;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-link-name")
    {
        virtual_link_name = value;
        virtual_link_name.value_namespace = name_space;
        virtual_link_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit-area")
    {
        transit_area = value;
        transit_area.value_namespace = name_space;
        transit_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtaul-link-retransmission-interval")
    {
        virtaul_link_retransmission_interval = value;
        virtaul_link_retransmission_interval.value_namespace = name_space;
        virtaul_link_retransmission_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-authentication-type")
    {
        virtual_link_authentication_type = value;
        virtual_link_authentication_type.value_namespace = name_space;
        virtual_link_authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-cost")
    {
        virtual_link_cost = value;
        virtual_link_cost.value_namespace = name_space;
        virtual_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-dc-bitless-lsa")
    {
        virtual_link_dc_bitless_lsa = value;
        virtual_link_dc_bitless_lsa.value_namespace = name_space;
        virtual_link_dc_bitless_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-dead-interval")
    {
        virtual_link_dead_interval = value;
        virtual_link_dead_interval.value_namespace = name_space;
        virtual_link_dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-demand-circuit")
    {
        virtual_link_demand_circuit = value;
        virtual_link_demand_circuit.value_namespace = name_space;
        virtual_link_demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-hello-interval")
    {
        virtual_link_hello_interval = value;
        virtual_link_hello_interval.value_namespace = name_space;
        virtual_link_hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-hello-interval-ms")
    {
        virtual_link_hello_interval_ms = value;
        virtual_link_hello_interval_ms.value_namespace = name_space;
        virtual_link_hello_interval_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-interface-name")
    {
        virtual_link_interface_name = value;
        virtual_link_interface_name.value_namespace = name_space;
        virtual_link_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-keychain-id")
    {
        virtual_link_keychain_id = value;
        virtual_link_keychain_id.value_namespace = name_space;
        virtual_link_keychain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-last-nsf")
    {
        virtual_link_last_nsf = value;
        virtual_link_last_nsf.value_namespace = name_space;
        virtual_link_last_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-name-xr")
    {
        virtual_link_name_xr = value;
        virtual_link_name_xr.value_namespace = name_space;
        virtual_link_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-neighbor-id")
    {
        virtual_link_neighbor_id = value;
        virtual_link_neighbor_id.value_namespace = name_space;
        virtual_link_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-next-hello")
    {
        virtual_link_next_hello = value;
        virtual_link_next_hello.value_namespace = name_space;
        virtual_link_next_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-next-hello-ms")
    {
        virtual_link_next_hello_ms = value;
        virtual_link_next_hello_ms.value_namespace = name_space;
        virtual_link_next_hello_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-nsf")
    {
        virtual_link_nsf = value;
        virtual_link_nsf.value_namespace = name_space;
        virtual_link_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-nsf-enabled")
    {
        virtual_link_nsf_enabled = value;
        virtual_link_nsf_enabled.value_namespace = name_space;
        virtual_link_nsf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-old-md-key-count")
    {
        virtual_link_old_md_key_count = value;
        virtual_link_old_md_key_count.value_namespace = name_space;
        virtual_link_old_md_key_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-passive")
    {
        virtual_link_passive = value;
        virtual_link_passive.value_namespace = name_space;
        virtual_link_passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-state")
    {
        virtual_link_state = value;
        virtual_link_state.value_namespace = name_space;
        virtual_link_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-wait-interval")
    {
        virtual_link_wait_interval = value;
        virtual_link_wait_interval.value_namespace = name_space;
        virtual_link_wait_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-youngest-md-key")
    {
        virtual_link_youngest_md_key = value;
        virtual_link_youngest_md_key.value_namespace = name_space;
        virtual_link_youngest_md_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-youngest-md-key-id")
    {
        virtual_link_youngest_md_key_id = value;
        virtual_link_youngest_md_key_id.value_namespace = name_space;
        virtual_link_youngest_md_key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virual-link-transmission-delay")
    {
        virual_link_transmission_delay = value;
        virual_link_transmission_delay.value_namespace = name_space;
        virual_link_transmission_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-link-name")
    {
        virtual_link_name.yfilter = yfilter;
    }
    if(value_path == "transit-area")
    {
        transit_area.yfilter = yfilter;
    }
    if(value_path == "virtaul-link-retransmission-interval")
    {
        virtaul_link_retransmission_interval.yfilter = yfilter;
    }
    if(value_path == "virtual-link-authentication-type")
    {
        virtual_link_authentication_type.yfilter = yfilter;
    }
    if(value_path == "virtual-link-cost")
    {
        virtual_link_cost.yfilter = yfilter;
    }
    if(value_path == "virtual-link-dc-bitless-lsa")
    {
        virtual_link_dc_bitless_lsa.yfilter = yfilter;
    }
    if(value_path == "virtual-link-dead-interval")
    {
        virtual_link_dead_interval.yfilter = yfilter;
    }
    if(value_path == "virtual-link-demand-circuit")
    {
        virtual_link_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "virtual-link-hello-interval")
    {
        virtual_link_hello_interval.yfilter = yfilter;
    }
    if(value_path == "virtual-link-hello-interval-ms")
    {
        virtual_link_hello_interval_ms.yfilter = yfilter;
    }
    if(value_path == "virtual-link-interface-name")
    {
        virtual_link_interface_name.yfilter = yfilter;
    }
    if(value_path == "virtual-link-keychain-id")
    {
        virtual_link_keychain_id.yfilter = yfilter;
    }
    if(value_path == "virtual-link-last-nsf")
    {
        virtual_link_last_nsf.yfilter = yfilter;
    }
    if(value_path == "virtual-link-name-xr")
    {
        virtual_link_name_xr.yfilter = yfilter;
    }
    if(value_path == "virtual-link-neighbor-id")
    {
        virtual_link_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "virtual-link-next-hello")
    {
        virtual_link_next_hello.yfilter = yfilter;
    }
    if(value_path == "virtual-link-next-hello-ms")
    {
        virtual_link_next_hello_ms.yfilter = yfilter;
    }
    if(value_path == "virtual-link-nsf")
    {
        virtual_link_nsf.yfilter = yfilter;
    }
    if(value_path == "virtual-link-nsf-enabled")
    {
        virtual_link_nsf_enabled.yfilter = yfilter;
    }
    if(value_path == "virtual-link-old-md-key-count")
    {
        virtual_link_old_md_key_count.yfilter = yfilter;
    }
    if(value_path == "virtual-link-passive")
    {
        virtual_link_passive.yfilter = yfilter;
    }
    if(value_path == "virtual-link-state")
    {
        virtual_link_state.yfilter = yfilter;
    }
    if(value_path == "virtual-link-wait-interval")
    {
        virtual_link_wait_interval.yfilter = yfilter;
    }
    if(value_path == "virtual-link-youngest-md-key")
    {
        virtual_link_youngest_md_key.yfilter = yfilter;
    }
    if(value_path == "virtual-link-youngest-md-key-id")
    {
        virtual_link_youngest_md_key_id.yfilter = yfilter;
    }
    if(value_path == "virual-link-transmission-delay")
    {
        virual_link_transmission_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link-md-key" || name == "virtual-link-neighbor" || name == "virtual-link-name" || name == "transit-area" || name == "virtaul-link-retransmission-interval" || name == "virtual-link-authentication-type" || name == "virtual-link-cost" || name == "virtual-link-dc-bitless-lsa" || name == "virtual-link-dead-interval" || name == "virtual-link-demand-circuit" || name == "virtual-link-hello-interval" || name == "virtual-link-hello-interval-ms" || name == "virtual-link-interface-name" || name == "virtual-link-keychain-id" || name == "virtual-link-last-nsf" || name == "virtual-link-name-xr" || name == "virtual-link-neighbor-id" || name == "virtual-link-next-hello" || name == "virtual-link-next-hello-ms" || name == "virtual-link-nsf" || name == "virtual-link-nsf-enabled" || name == "virtual-link-old-md-key-count" || name == "virtual-link-passive" || name == "virtual-link-state" || name == "virtual-link-wait-interval" || name == "virtual-link-youngest-md-key" || name == "virtual-link-youngest-md-key-id" || name == "virual-link-transmission-delay")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::VirtualLinkMdKey()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "virtual-link-md-key"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::~VirtualLinkMdKey()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-md-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkNeighbor()
    :
    virtual_link_state{YType::enumeration, "virtual-link-state"},
    virtual_link_suppress_hello{YType::boolean, "virtual-link-suppress-hello"}
    	,
    virtual_link_retransmissoin(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin>())
{
    virtual_link_retransmissoin->parent = this;

    yang_name = "virtual-link-neighbor"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::~VirtualLinkNeighbor()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::has_data() const
{
    return virtual_link_state.is_set
	|| virtual_link_suppress_hello.is_set
	|| (virtual_link_retransmissoin !=  nullptr && virtual_link_retransmissoin->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_link_state.yfilter)
	|| ydk::is_set(virtual_link_suppress_hello.yfilter)
	|| (virtual_link_retransmissoin !=  nullptr && virtual_link_retransmissoin->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_state.is_set || is_set(virtual_link_state.yfilter)) leaf_name_data.push_back(virtual_link_state.get_name_leafdata());
    if (virtual_link_suppress_hello.is_set || is_set(virtual_link_suppress_hello.yfilter)) leaf_name_data.push_back(virtual_link_suppress_hello.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link-retransmissoin")
    {
        if(virtual_link_retransmissoin == nullptr)
        {
            virtual_link_retransmissoin = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin>();
        }
        return virtual_link_retransmissoin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(virtual_link_retransmissoin != nullptr)
    {
        children["virtual-link-retransmissoin"] = virtual_link_retransmissoin;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-link-state")
    {
        virtual_link_state = value;
        virtual_link_state.value_namespace = name_space;
        virtual_link_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-suppress-hello")
    {
        virtual_link_suppress_hello = value;
        virtual_link_suppress_hello.value_namespace = name_space;
        virtual_link_suppress_hello.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-link-state")
    {
        virtual_link_state.yfilter = yfilter;
    }
    if(value_path == "virtual-link-suppress-hello")
    {
        virtual_link_suppress_hello.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link-retransmissoin" || name == "virtual-link-state" || name == "virtual-link-suppress-hello")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::VirtualLinkRetransmissoin()
    :
    area_first_flood_information{YType::uint32, "area-first-flood-information"},
    area_first_flood_information_index{YType::uint32, "area-first-flood-information-index"},
    area_flooding_index{YType::uint32, "area-flooding-index"},
    area_next_flood_information{YType::uint32, "area-next-flood-information"},
    area_next_flood_information_index{YType::uint32, "area-next-flood-information-index"},
    as_first_flood_information{YType::uint32, "as-first-flood-information"},
    as_first_flood_information_index{YType::uint32, "as-first-flood-information-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    as_next_flood_information{YType::uint32, "as-next-flood-information"},
    as_next_flood_information_index{YType::uint32, "as-next-flood-information-index"},
    dbd_retransmission_count{YType::uint32, "dbd-retransmission-count"},
    dbd_retransmission_total_count{YType::uint32, "dbd-retransmission-total-count"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    neighbor_retransmission_count{YType::uint32, "neighbor-retransmission-count"},
    number_of_retransmissions{YType::uint32, "number-of-retransmissions"}
{

    yang_name = "virtual-link-retransmissoin"; yang_parent_name = "virtual-link-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::~VirtualLinkRetransmissoin()
{
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::has_data() const
{
    return area_first_flood_information.is_set
	|| area_first_flood_information_index.is_set
	|| area_flooding_index.is_set
	|| area_next_flood_information.is_set
	|| area_next_flood_information_index.is_set
	|| as_first_flood_information.is_set
	|| as_first_flood_information_index.is_set
	|| as_flood_index.is_set
	|| as_next_flood_information.is_set
	|| as_next_flood_information_index.is_set
	|| dbd_retransmission_count.is_set
	|| dbd_retransmission_total_count.is_set
	|| last_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set
	|| maximum_retransmission_length.is_set
	|| maximum_retransmission_time.is_set
	|| neighbor_retransmission_count.is_set
	|| number_of_retransmissions.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_first_flood_information.yfilter)
	|| ydk::is_set(area_first_flood_information_index.yfilter)
	|| ydk::is_set(area_flooding_index.yfilter)
	|| ydk::is_set(area_next_flood_information.yfilter)
	|| ydk::is_set(area_next_flood_information_index.yfilter)
	|| ydk::is_set(as_first_flood_information.yfilter)
	|| ydk::is_set(as_first_flood_information_index.yfilter)
	|| ydk::is_set(as_flood_index.yfilter)
	|| ydk::is_set(as_next_flood_information.yfilter)
	|| ydk::is_set(as_next_flood_information_index.yfilter)
	|| ydk::is_set(dbd_retransmission_count.yfilter)
	|| ydk::is_set(dbd_retransmission_total_count.yfilter)
	|| ydk::is_set(last_retransmission_length.yfilter)
	|| ydk::is_set(last_retransmission_time.yfilter)
	|| ydk::is_set(lsa_retransmission_timer.yfilter)
	|| ydk::is_set(maximum_retransmission_length.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(neighbor_retransmission_count.yfilter)
	|| ydk::is_set(number_of_retransmissions.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-retransmissoin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood_information.is_set || is_set(area_first_flood_information.yfilter)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.yfilter)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.yfilter)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.yfilter)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.yfilter)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.yfilter)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.yfilter)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.yfilter)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.yfilter)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.yfilter)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.yfilter)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.yfilter)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.yfilter)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.yfilter)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.yfilter)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.yfilter)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information = value;
        area_first_flood_information.value_namespace = name_space;
        area_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index = value;
        area_first_flood_information_index.value_namespace = name_space;
        area_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
        area_flooding_index.value_namespace = name_space;
        area_flooding_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information = value;
        area_next_flood_information.value_namespace = name_space;
        area_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index = value;
        area_next_flood_information_index.value_namespace = name_space;
        area_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information = value;
        as_first_flood_information.value_namespace = name_space;
        as_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index = value;
        as_first_flood_information_index.value_namespace = name_space;
        as_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
        as_flood_index.value_namespace = name_space;
        as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information = value;
        as_next_flood_information.value_namespace = name_space;
        as_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index = value;
        as_next_flood_information_index.value_namespace = name_space;
        as_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count = value;
        dbd_retransmission_count.value_namespace = name_space;
        dbd_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count = value;
        dbd_retransmission_total_count.value_namespace = name_space;
        dbd_retransmission_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
        last_retransmission_length.value_namespace = name_space;
        last_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
        last_retransmission_time.value_namespace = name_space;
        last_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
        lsa_retransmission_timer.value_namespace = name_space;
        lsa_retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
        maximum_retransmission_length.value_namespace = name_space;
        maximum_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count = value;
        neighbor_retransmission_count.value_namespace = name_space;
        neighbor_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions = value;
        number_of_retransmissions.value_namespace = name_space;
        number_of_retransmissions.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-first-flood-information" || name == "area-first-flood-information-index" || name == "area-flooding-index" || name == "area-next-flood-information" || name == "area-next-flood-information-index" || name == "as-first-flood-information" || name == "as-first-flood-information-index" || name == "as-flood-index" || name == "as-next-flood-information" || name == "as-next-flood-information-index" || name == "dbd-retransmission-count" || name == "dbd-retransmission-total-count" || name == "last-retransmission-length" || name == "last-retransmission-time" || name == "lsa-retransmission-timer" || name == "maximum-retransmission-length" || name == "maximum-retransmission-time" || name == "neighbor-retransmission-count" || name == "number-of-retransmissions")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTe()
    :
    mpls_te_fragments(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments>())
	,mpls_te_links(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks>())
{
    mpls_te_fragments->parent = this;
    mpls_te_links->parent = this;

    yang_name = "mpls-te"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::~MplsTe()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::has_data() const
{
    return (mpls_te_fragments !=  nullptr && mpls_te_fragments->has_data())
	|| (mpls_te_links !=  nullptr && mpls_te_links->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_te_fragments !=  nullptr && mpls_te_fragments->has_operation())
	|| (mpls_te_links !=  nullptr && mpls_te_links->has_operation());
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
    if(child_yang_name == "mpls-te-fragments")
    {
        if(mpls_te_fragments == nullptr)
        {
            mpls_te_fragments = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments>();
        }
        return mpls_te_fragments;
    }

    if(child_yang_name == "mpls-te-links")
    {
        if(mpls_te_links == nullptr)
        {
            mpls_te_links = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks>();
        }
        return mpls_te_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_te_fragments != nullptr)
    {
        children["mpls-te-fragments"] = mpls_te_fragments;
    }

    if(mpls_te_links != nullptr)
    {
        children["mpls-te-links"] = mpls_te_links;
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
    if(name == "mpls-te-fragments" || name == "mpls-te-links")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragments()
{

    yang_name = "mpls-te-fragments"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::~MplsTeFragments()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::has_data() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-fragment")
    {
        for(auto const & c : mpls_te_fragment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment>();
        c->parent = this;
        mpls_te_fragment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mpls_te_fragment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-fragment")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment()
    :
    area_id{YType::int32, "area-id"},
    mpls_te_area_id{YType::str, "mpls-te-area-id"},
    mpls_te_area_instance{YType::uint32, "mpls-te-area-instance"},
    mpls_te_enabled{YType::boolean, "mpls-te-enabled"},
    mpls_te_initialized{YType::boolean, "mpls-te-initialized"},
    mpls_te_next_fragment_id{YType::uint32, "mpls-te-next-fragment-id"},
    mpls_te_router_address{YType::str, "mpls-te-router-address"},
    mpls_te_router_id{YType::str, "mpls-te-router-id"},
    spacious_fragment{YType::boolean, "spacious-fragment"}
{

    yang_name = "mpls-te-fragment"; yang_parent_name = "mpls-te-fragments"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::~MplsTeFragment()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::has_data() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| mpls_te_area_id.is_set
	|| mpls_te_area_instance.is_set
	|| mpls_te_enabled.is_set
	|| mpls_te_initialized.is_set
	|| mpls_te_next_fragment_id.is_set
	|| mpls_te_router_address.is_set
	|| mpls_te_router_id.is_set
	|| spacious_fragment.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(mpls_te_area_id.yfilter)
	|| ydk::is_set(mpls_te_area_instance.yfilter)
	|| ydk::is_set(mpls_te_enabled.yfilter)
	|| ydk::is_set(mpls_te_initialized.yfilter)
	|| ydk::is_set(mpls_te_next_fragment_id.yfilter)
	|| ydk::is_set(mpls_te_router_address.yfilter)
	|| ydk::is_set(mpls_te_router_id.yfilter)
	|| ydk::is_set(spacious_fragment.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragment" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (mpls_te_area_id.is_set || is_set(mpls_te_area_id.yfilter)) leaf_name_data.push_back(mpls_te_area_id.get_name_leafdata());
    if (mpls_te_area_instance.is_set || is_set(mpls_te_area_instance.yfilter)) leaf_name_data.push_back(mpls_te_area_instance.get_name_leafdata());
    if (mpls_te_enabled.is_set || is_set(mpls_te_enabled.yfilter)) leaf_name_data.push_back(mpls_te_enabled.get_name_leafdata());
    if (mpls_te_initialized.is_set || is_set(mpls_te_initialized.yfilter)) leaf_name_data.push_back(mpls_te_initialized.get_name_leafdata());
    if (mpls_te_next_fragment_id.is_set || is_set(mpls_te_next_fragment_id.yfilter)) leaf_name_data.push_back(mpls_te_next_fragment_id.get_name_leafdata());
    if (mpls_te_router_address.is_set || is_set(mpls_te_router_address.yfilter)) leaf_name_data.push_back(mpls_te_router_address.get_name_leafdata());
    if (mpls_te_router_id.is_set || is_set(mpls_te_router_id.yfilter)) leaf_name_data.push_back(mpls_te_router_id.get_name_leafdata());
    if (spacious_fragment.is_set || is_set(spacious_fragment.yfilter)) leaf_name_data.push_back(spacious_fragment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-fragment")
    {
        for(auto const & c : mpls_te_fragment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_>();
        c->parent = this;
        mpls_te_fragment.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink>();
        c->parent = this;
        mpls_te_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mpls_te_fragment)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mpls_te_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id = value;
        mpls_te_next_fragment_id.value_namespace = name_space;
        mpls_te_next_fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address = value;
        mpls_te_router_address.value_namespace = name_space;
        mpls_te_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id = value;
        mpls_te_router_id.value_namespace = name_space;
        mpls_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment = value;
        spacious_fragment.value_namespace = name_space;
        spacious_fragment.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled.yfilter = yfilter;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized.yfilter = yfilter;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address.yfilter = yfilter;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id.yfilter = yfilter;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-fragment" || name == "mpls-te-link" || name == "area-id" || name == "mpls-te-area-id" || name == "mpls-te-area-instance" || name == "mpls-te-enabled" || name == "mpls-te-initialized" || name == "mpls-te-next-fragment-id" || name == "mpls-te-router-address" || name == "mpls-te-router-id" || name == "spacious-fragment")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeFragment_()
    :
    dste_model_id{YType::uint8, "dste-model-id"},
    fragment_id{YType::uint32, "fragment-id"},
    fragment_instance{YType::uint32, "fragment-instance"},
    same_fragment_count{YType::uint8, "same-fragment-count"}
{

    yang_name = "mpls-te-fragment"; yang_parent_name = "mpls-te-fragment"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::~MplsTeFragment_()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::has_data() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return dste_model_id.is_set
	|| fragment_id.is_set
	|| fragment_instance.is_set
	|| same_fragment_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dste_model_id.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(fragment_instance.yfilter)
	|| ydk::is_set(same_fragment_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_model_id.is_set || is_set(dste_model_id.yfilter)) leaf_name_data.push_back(dste_model_id.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (fragment_instance.is_set || is_set(fragment_instance.yfilter)) leaf_name_data.push_back(fragment_instance.get_name_leafdata());
    if (same_fragment_count.is_set || is_set(same_fragment_count.yfilter)) leaf_name_data.push_back(same_fragment_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink>();
        c->parent = this;
        mpls_te_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mpls_te_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-model-id")
    {
        dste_model_id = value;
        dste_model_id.value_namespace = name_space;
        dste_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-instance")
    {
        fragment_instance = value;
        fragment_instance.value_namespace = name_space;
        fragment_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "same-fragment-count")
    {
        same_fragment_count = value;
        same_fragment_count.value_namespace = name_space;
        same_fragment_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-model-id")
    {
        dste_model_id.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "fragment-instance")
    {
        fragment_instance.yfilter = yfilter;
    }
    if(value_path == "same-fragment-count")
    {
        same_fragment_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-link" || name == "dste-model-id" || name == "fragment-id" || name == "fragment-instance" || name == "same-fragment-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsTeLink()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    global_unreserve_bw_per_priority->parent = this;
    link_protocol_priority_capability->parent = this;
    link_sw_capability->parent = this;
    sub_pool_unreserve_bw_per_priority->parent = this;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-fragment"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::~MplsTeLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(dste_allocation_model_id.yfilter)
	|| ydk::is_set(dste_in_use.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(input_interface_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(maximum_link_bw.yfilter)
	|| ydk::is_set(maximum_link_reservable_bw.yfilter)
	|| ydk::is_set(maximum_link_sub_reservable_bw.yfilter)
	|| ydk::is_set(mpls_link_instance.yfilter)
	|| ydk::is_set(mpls_link_type.yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(new_link.yfilter)
	|| ydk::is_set(number_of_optional_tl_vs.yfilter)
	|| ydk::is_set(output_interface_id.yfilter)
	|| ydk::is_set(priority_count.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.yfilter)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.yfilter)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.yfilter)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.yfilter)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.yfilter)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.yfilter)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.yfilter)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.yfilter)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.yfilter)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.yfilter)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list == nullptr)
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList>();
        }
        return extended_admin_group_list;
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority == nullptr)
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority>();
        }
        return global_unreserve_bw_per_priority;
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability == nullptr)
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability>();
        }
        return link_protocol_priority_capability;
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability == nullptr)
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability>();
        }
        return link_sw_capability;
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority == nullptr)
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority>();
        }
        return sub_pool_unreserve_bw_per_priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extended_admin_group_list != nullptr)
    {
        children["extended-admin-group-list"] = extended_admin_group_list;
    }

    if(global_unreserve_bw_per_priority != nullptr)
    {
        children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
    }

    if(link_protocol_priority_capability != nullptr)
    {
        children["link-protocol-priority-capability"] = link_protocol_priority_capability;
    }

    if(link_sw_capability != nullptr)
    {
        children["link-sw-capability"] = link_sw_capability;
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    if(sub_pool_unreserve_bw_per_priority != nullptr)
    {
        children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
        dste_allocation_model_id.value_namespace = name_space;
        dste_allocation_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
        dste_in_use.value_namespace = name_space;
        dste_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
        input_interface_id.value_namespace = name_space;
        input_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-link")
    {
        new_link = value;
        new_link.value_namespace = name_space;
        new_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
        number_of_optional_tl_vs.value_namespace = name_space;
        number_of_optional_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
        output_interface_id.value_namespace = name_space;
        output_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
        priority_count.value_namespace = name_space;
        priority_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id.yfilter = yfilter;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
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
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "new-link")
    {
        new_link.yfilter = yfilter;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs.yfilter = yfilter;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id.yfilter = yfilter;
    }
    if(value_path == "priority-count")
    {
        priority_count.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-admin-group-list" || name == "global-unreserve-bw-per-priority" || name == "link-protocol-priority-capability" || name == "link-sw-capability" || name == "mplste-link-opt-tlv" || name == "sub-pool-unreserve-bw-per-priority" || name == "affinity" || name == "dste-allocation-model-id" || name == "dste-in-use" || name == "fragment-id" || name == "igp-metric" || name == "input-interface-id" || name == "link-address" || name == "maximum-link-bw" || name == "maximum-link-reservable-bw" || name == "maximum-link-sub-reservable-bw" || name == "mpls-link-instance" || name == "mpls-link-type" || name == "neighbor-ip-address" || name == "neighbor-system-id" || name == "new-link" || name == "number-of-optional-tl-vs" || name == "output-interface-id" || name == "priority-count" || name == "te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    extended_admin_size{YType::uint32, "extended-admin-size"}
{

    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::has_data() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_data())
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::has_operation() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_admin_size.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.yfilter)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-admin-data")
    {
        for(auto const & c : ext_admin_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData>();
        c->parent = this;
        ext_admin_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ext_admin_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
        extended_admin_size.value_namespace = name_space;
        extended_admin_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-admin-data" || name == "extended-admin-size")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::ExtAdminData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "ext-admin-data"; yang_parent_name = "extended-admin-group-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::~ExtAdminData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-admin-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
{

    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        for(auto const & c : bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bw_per_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "global-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{

    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_protocol_capability.yfilter)
	|| ydk::is_set(link_protocol_priority.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.yfilter)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.yfilter)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protocol-capability" || name == "link-protocol-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::LinkSwCapability()
    :
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
{

    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::has_data() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_data())
            return true;
    }
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::has_operation() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_encoding.yfilter)
	|| ydk::is_set(link_mtu.yfilter)
	|| ydk::is_set(link_switching_capability.yfilter)
	|| ydk::is_set(minimum_lsp_bw.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_encoding.is_set || is_set(link_encoding.yfilter)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.yfilter)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.yfilter)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.yfilter)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-lsp-bw-per-priority")
    {
        for(auto const & c : maximum_lsp_bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority>();
        c->parent = this;
        maximum_lsp_bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : maximum_lsp_bw_per_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
        link_encoding.value_namespace = name_space;
        link_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
        link_mtu.value_namespace = name_space;
        link_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
        link_switching_capability.value_namespace = name_space;
        link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
        minimum_lsp_bw.value_namespace = name_space;
        minimum_lsp_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-encoding")
    {
        link_encoding.yfilter = yfilter;
    }
    if(value_path == "link-mtu")
    {
        link_mtu.yfilter = yfilter;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-lsp-bw-per-priority" || name == "link-encoding" || name == "link-mtu" || name == "link-switching-capability" || name == "minimum-lsp-bw")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::MaximumLspBwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "maximum-lsp-bw-per-priority"; yang_parent_name = "link-sw-capability"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::~MaximumLspBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-lsp-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
{

    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_len.yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
        mplste_link_opt_tlv_len.value_namespace = name_space;
        mplste_link_opt_tlv_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
        mplste_link_opt_tlv_type.value_namespace = name_space;
        mplste_link_opt_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len.yfilter = yfilter;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-opt-tlv-value" || name == "mplste-link-opt-tlv-len" || name == "mplste-link-opt-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    ixcdtlv_value->parent = this;
    srlgtlv_value->parent = this;
    unidtlv_value->parent = this;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_tlv_type.yfilter)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.yfilter)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value == nullptr)
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
        }
        return bctlv_value;
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value == nullptr)
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
        }
        return ixcdtlv_value;
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value == nullptr)
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
        }
        return srlgtlv_value;
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value == nullptr)
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
        }
        return unidtlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bctlv_value != nullptr)
    {
        children["bctlv-value"] = bctlv_value;
    }

    if(ixcdtlv_value != nullptr)
    {
        children["ixcdtlv-value"] = ixcdtlv_value;
    }

    if(srlgtlv_value != nullptr)
    {
        children["srlgtlv-value"] = srlgtlv_value;
    }

    if(unidtlv_value != nullptr)
    {
        children["unidtlv-value"] = unidtlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
        opaque_tlv_type.value_namespace = name_space;
        opaque_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bctlv-value" || name == "ixcdtlv-value" || name == "srlgtlv-value" || name == "unidtlv-value" || name == "opaque-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    num_b_cs{YType::uint32, "num-b-cs"}
{

    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_data())
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.yfilter)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.yfilter)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-bc-bandwidth")
    {
        for(auto const & c : mplste_link_bc_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth>();
        c->parent = this;
        mplste_link_bc_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplste_link_bc_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-bc-bandwidth" || name == "model-id" || name == "num-b-cs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::MplsteLinkBcBandwidth()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "mplste-link-bc-bandwidth"; yang_parent_name = "bctlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::~MplsteLinkBcBandwidth()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-bc-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fixed_scsi_count.yfilter)
	|| ydk::is_set(flex_scsi_count.yfilter)
	|| ydk::is_set(rile_len_code.yfilter)
	|| ydk::is_set(switching_cap.yfilter)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.yfilter)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.yfilter)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.yfilter)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.yfilter)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type == nullptr)
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
        }
        return ixcd_switching_cap_type;
    }

    if(child_yang_name == "max-lspbw")
    {
        for(auto const & c : max_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ixcd_switching_cap_type != nullptr)
    {
        children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
    }

    for (auto const & c : max_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
        rile_len_code.value_namespace = name_space;
        rile_len_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
        switching_cap.value_namespace = name_space;
        switching_cap.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count.yfilter = yfilter;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count.yfilter = yfilter;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code.yfilter = yfilter;
    }
    if(value_path == "switching-cap")
    {
        switching_cap.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcd-switching-cap-type" || name == "max-lspbw" || name == "fixed-scsi-count" || name == "flex-scsi-count" || name == "rile-len-code" || name == "switching-cap")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    ixcdpsc_info->parent = this;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switching_cap_type.yfilter)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.yfilter)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv == nullptr)
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
        }
        return ixcdbw_sub_tlv;
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info == nullptr)
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
        }
        return ixcdpsc_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ixcdbw_sub_tlv != nullptr)
    {
        children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
    }

    if(ixcdpsc_info != nullptr)
    {
        children["ixcdpsc-info"] = ixcdpsc_info;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
        switching_cap_type.value_namespace = name_space;
        switching_cap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcdbw-sub-tlv" || name == "ixcdpsc-info" || name == "switching-cap-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{

    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : arr_bw_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arr-bw-sub-tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_sub_tlv_length.yfilter)
	|| ydk::is_set(bw_sub_tlv_type.yfilter)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.yfilter)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.yfilter)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value == nullptr)
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
        }
        return bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bw_sub_tlv_value != nullptr)
    {
        children["bw-sub-tlv-value"] = bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
        bw_sub_tlv_length.value_namespace = name_space;
        bw_sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
        bw_sub_tlv_type.value_namespace = name_space;
        bw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-sub-tlv-value" || name == "bw-sub-tlv-length" || name == "bw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    flex_bw_sub_tlv_value->parent = this;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ixcdbw_sub_tlv_type.yfilter)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.yfilter)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value == nullptr)
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
        }
        return fixed_bw_sub_tlv_value;
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value == nullptr)
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
        }
        return flex_bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
        ixcdbw_sub_tlv_type.value_namespace = name_space;
        ixcdbw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-bw-sub-tlv-value" || name == "flex-bw-sub-tlv-value" || name == "ixcdbw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_data())
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value == nullptr)
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
        }
        return fixed_sub_tlv_value;
    }

    if(child_yang_name == "unres-oduj-prio")
    {
        for(auto const & c : unres_oduj_prio)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio>();
        c->parent = this;
        unres_oduj_prio.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fixed_sub_tlv_value != nullptr)
    {
        children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
    }

    for (auto const & c : unres_oduj_prio)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-sub-tlv-value" || name == "unres-oduj-prio")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{

    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(tsg.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
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
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-stages" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "res" || name == "sbit" || name == "signal-type" || name == "stage" || name == "tbit" || name == "tsg")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::UnresOdujPrio()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unres-oduj-prio"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::~UnresOdujPrio()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-oduj-prio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_data())
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common == nullptr)
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
        }
        return flex_sub_tlv_value_common;
    }

    if(child_yang_name == "max-lspbw")
    {
        for(auto const & c : max_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    if(child_yang_name == "unres-lspbw")
    {
        for(auto const & c : unres_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw>();
        c->parent = this;
        unres_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flex_sub_tlv_value_common != nullptr)
    {
        children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
    }

    for (auto const & c : max_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unres_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-sub-tlv-value-common" || name == "max-lspbw" || name == "unres-lspbw")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{

    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(tsg.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
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
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-stages" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "res" || name == "sbit" || name == "signal-type" || name == "stage" || name == "tbit" || name == "tsg")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::UnresLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "unres-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::~UnresLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{

    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_lsp_bandwidth.yfilter)
	|| ydk::is_set(psc_interface_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.yfilter)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.yfilter)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-lsp-bandwidth" || name == "psc-interface-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::int64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{

    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_data())
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_srl_gs.yfilter)
	|| ydk::is_set(srlg_len.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.yfilter)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.yfilter)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-srlg-data")
    {
        for(auto const & c : mplste_link_srlg_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData>();
        c->parent = this;
        mplste_link_srlg_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplste_link_srlg_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
        num_srl_gs.value_namespace = name_space;
        num_srl_gs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
        srlg_len.value_namespace = name_space;
        srlg_len.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-srl-gs")
    {
        num_srl_gs.yfilter = yfilter;
    }
    if(value_path == "srlg-len")
    {
        srlg_len.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-srlg-data" || name == "num-srl-gs" || name == "srlg-len")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::MplsteLinkSrlgData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mplste-link-srlg-data"; yang_parent_name = "srlgtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::~MplsteLinkSrlgData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-srlg-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{

    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uni_dir_delay.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.yfilter)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
        uni_dir_delay.value_namespace = name_space;
        uni_dir_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uni-dir-delay")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
{

    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        for(auto const & c : bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bw_per_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "sub-pool-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsTeLink()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    global_unreserve_bw_per_priority->parent = this;
    link_protocol_priority_capability->parent = this;
    link_sw_capability->parent = this;
    sub_pool_unreserve_bw_per_priority->parent = this;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-fragment"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::~MplsTeLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(dste_allocation_model_id.yfilter)
	|| ydk::is_set(dste_in_use.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(input_interface_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(maximum_link_bw.yfilter)
	|| ydk::is_set(maximum_link_reservable_bw.yfilter)
	|| ydk::is_set(maximum_link_sub_reservable_bw.yfilter)
	|| ydk::is_set(mpls_link_instance.yfilter)
	|| ydk::is_set(mpls_link_type.yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(new_link.yfilter)
	|| ydk::is_set(number_of_optional_tl_vs.yfilter)
	|| ydk::is_set(output_interface_id.yfilter)
	|| ydk::is_set(priority_count.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.yfilter)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.yfilter)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.yfilter)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.yfilter)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.yfilter)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.yfilter)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.yfilter)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.yfilter)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.yfilter)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.yfilter)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list == nullptr)
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList>();
        }
        return extended_admin_group_list;
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority == nullptr)
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority>();
        }
        return global_unreserve_bw_per_priority;
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability == nullptr)
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability>();
        }
        return link_protocol_priority_capability;
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability == nullptr)
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability>();
        }
        return link_sw_capability;
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority == nullptr)
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority>();
        }
        return sub_pool_unreserve_bw_per_priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extended_admin_group_list != nullptr)
    {
        children["extended-admin-group-list"] = extended_admin_group_list;
    }

    if(global_unreserve_bw_per_priority != nullptr)
    {
        children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
    }

    if(link_protocol_priority_capability != nullptr)
    {
        children["link-protocol-priority-capability"] = link_protocol_priority_capability;
    }

    if(link_sw_capability != nullptr)
    {
        children["link-sw-capability"] = link_sw_capability;
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    if(sub_pool_unreserve_bw_per_priority != nullptr)
    {
        children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
        dste_allocation_model_id.value_namespace = name_space;
        dste_allocation_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
        dste_in_use.value_namespace = name_space;
        dste_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
        input_interface_id.value_namespace = name_space;
        input_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-link")
    {
        new_link = value;
        new_link.value_namespace = name_space;
        new_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
        number_of_optional_tl_vs.value_namespace = name_space;
        number_of_optional_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
        output_interface_id.value_namespace = name_space;
        output_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
        priority_count.value_namespace = name_space;
        priority_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id.yfilter = yfilter;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
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
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "new-link")
    {
        new_link.yfilter = yfilter;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs.yfilter = yfilter;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id.yfilter = yfilter;
    }
    if(value_path == "priority-count")
    {
        priority_count.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-admin-group-list" || name == "global-unreserve-bw-per-priority" || name == "link-protocol-priority-capability" || name == "link-sw-capability" || name == "mplste-link-opt-tlv" || name == "sub-pool-unreserve-bw-per-priority" || name == "affinity" || name == "dste-allocation-model-id" || name == "dste-in-use" || name == "fragment-id" || name == "igp-metric" || name == "input-interface-id" || name == "link-address" || name == "maximum-link-bw" || name == "maximum-link-reservable-bw" || name == "maximum-link-sub-reservable-bw" || name == "mpls-link-instance" || name == "mpls-link-type" || name == "neighbor-ip-address" || name == "neighbor-system-id" || name == "new-link" || name == "number-of-optional-tl-vs" || name == "output-interface-id" || name == "priority-count" || name == "te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    extended_admin_size{YType::uint32, "extended-admin-size"}
{

    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::has_data() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_data())
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::has_operation() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_admin_size.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.yfilter)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-admin-data")
    {
        for(auto const & c : ext_admin_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData>();
        c->parent = this;
        ext_admin_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ext_admin_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
        extended_admin_size.value_namespace = name_space;
        extended_admin_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-admin-data" || name == "extended-admin-size")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::ExtAdminData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "ext-admin-data"; yang_parent_name = "extended-admin-group-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::~ExtAdminData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-admin-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
{

    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        for(auto const & c : bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bw_per_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "global-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{

    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_protocol_capability.yfilter)
	|| ydk::is_set(link_protocol_priority.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.yfilter)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.yfilter)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protocol-capability" || name == "link-protocol-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::LinkSwCapability()
    :
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
{

    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::has_data() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_data())
            return true;
    }
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::has_operation() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_encoding.yfilter)
	|| ydk::is_set(link_mtu.yfilter)
	|| ydk::is_set(link_switching_capability.yfilter)
	|| ydk::is_set(minimum_lsp_bw.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_encoding.is_set || is_set(link_encoding.yfilter)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.yfilter)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.yfilter)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.yfilter)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-lsp-bw-per-priority")
    {
        for(auto const & c : maximum_lsp_bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority>();
        c->parent = this;
        maximum_lsp_bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : maximum_lsp_bw_per_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
        link_encoding.value_namespace = name_space;
        link_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
        link_mtu.value_namespace = name_space;
        link_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
        link_switching_capability.value_namespace = name_space;
        link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
        minimum_lsp_bw.value_namespace = name_space;
        minimum_lsp_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-encoding")
    {
        link_encoding.yfilter = yfilter;
    }
    if(value_path == "link-mtu")
    {
        link_mtu.yfilter = yfilter;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-lsp-bw-per-priority" || name == "link-encoding" || name == "link-mtu" || name == "link-switching-capability" || name == "minimum-lsp-bw")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::MaximumLspBwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "maximum-lsp-bw-per-priority"; yang_parent_name = "link-sw-capability"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::~MaximumLspBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-lsp-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
{

    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_len.yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
        mplste_link_opt_tlv_len.value_namespace = name_space;
        mplste_link_opt_tlv_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
        mplste_link_opt_tlv_type.value_namespace = name_space;
        mplste_link_opt_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len.yfilter = yfilter;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-opt-tlv-value" || name == "mplste-link-opt-tlv-len" || name == "mplste-link-opt-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    ixcdtlv_value->parent = this;
    srlgtlv_value->parent = this;
    unidtlv_value->parent = this;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_tlv_type.yfilter)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.yfilter)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value == nullptr)
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
        }
        return bctlv_value;
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value == nullptr)
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
        }
        return ixcdtlv_value;
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value == nullptr)
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
        }
        return srlgtlv_value;
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value == nullptr)
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
        }
        return unidtlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bctlv_value != nullptr)
    {
        children["bctlv-value"] = bctlv_value;
    }

    if(ixcdtlv_value != nullptr)
    {
        children["ixcdtlv-value"] = ixcdtlv_value;
    }

    if(srlgtlv_value != nullptr)
    {
        children["srlgtlv-value"] = srlgtlv_value;
    }

    if(unidtlv_value != nullptr)
    {
        children["unidtlv-value"] = unidtlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
        opaque_tlv_type.value_namespace = name_space;
        opaque_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bctlv-value" || name == "ixcdtlv-value" || name == "srlgtlv-value" || name == "unidtlv-value" || name == "opaque-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    num_b_cs{YType::uint32, "num-b-cs"}
{

    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_data())
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.yfilter)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.yfilter)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-bc-bandwidth")
    {
        for(auto const & c : mplste_link_bc_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth>();
        c->parent = this;
        mplste_link_bc_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplste_link_bc_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-bc-bandwidth" || name == "model-id" || name == "num-b-cs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::MplsteLinkBcBandwidth()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "mplste-link-bc-bandwidth"; yang_parent_name = "bctlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::~MplsteLinkBcBandwidth()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-bc-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fixed_scsi_count.yfilter)
	|| ydk::is_set(flex_scsi_count.yfilter)
	|| ydk::is_set(rile_len_code.yfilter)
	|| ydk::is_set(switching_cap.yfilter)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.yfilter)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.yfilter)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.yfilter)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.yfilter)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type == nullptr)
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
        }
        return ixcd_switching_cap_type;
    }

    if(child_yang_name == "max-lspbw")
    {
        for(auto const & c : max_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ixcd_switching_cap_type != nullptr)
    {
        children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
    }

    for (auto const & c : max_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
        rile_len_code.value_namespace = name_space;
        rile_len_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
        switching_cap.value_namespace = name_space;
        switching_cap.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count.yfilter = yfilter;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count.yfilter = yfilter;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code.yfilter = yfilter;
    }
    if(value_path == "switching-cap")
    {
        switching_cap.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcd-switching-cap-type" || name == "max-lspbw" || name == "fixed-scsi-count" || name == "flex-scsi-count" || name == "rile-len-code" || name == "switching-cap")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    ixcdpsc_info->parent = this;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switching_cap_type.yfilter)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.yfilter)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv == nullptr)
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
        }
        return ixcdbw_sub_tlv;
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info == nullptr)
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
        }
        return ixcdpsc_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ixcdbw_sub_tlv != nullptr)
    {
        children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
    }

    if(ixcdpsc_info != nullptr)
    {
        children["ixcdpsc-info"] = ixcdpsc_info;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
        switching_cap_type.value_namespace = name_space;
        switching_cap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcdbw-sub-tlv" || name == "ixcdpsc-info" || name == "switching-cap-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{

    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : arr_bw_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arr-bw-sub-tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_sub_tlv_length.yfilter)
	|| ydk::is_set(bw_sub_tlv_type.yfilter)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.yfilter)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.yfilter)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value == nullptr)
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
        }
        return bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bw_sub_tlv_value != nullptr)
    {
        children["bw-sub-tlv-value"] = bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
        bw_sub_tlv_length.value_namespace = name_space;
        bw_sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
        bw_sub_tlv_type.value_namespace = name_space;
        bw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-sub-tlv-value" || name == "bw-sub-tlv-length" || name == "bw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    flex_bw_sub_tlv_value->parent = this;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ixcdbw_sub_tlv_type.yfilter)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.yfilter)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value == nullptr)
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
        }
        return fixed_bw_sub_tlv_value;
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value == nullptr)
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
        }
        return flex_bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
        ixcdbw_sub_tlv_type.value_namespace = name_space;
        ixcdbw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-bw-sub-tlv-value" || name == "flex-bw-sub-tlv-value" || name == "ixcdbw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_data())
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value == nullptr)
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
        }
        return fixed_sub_tlv_value;
    }

    if(child_yang_name == "unres-oduj-prio")
    {
        for(auto const & c : unres_oduj_prio)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio>();
        c->parent = this;
        unres_oduj_prio.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fixed_sub_tlv_value != nullptr)
    {
        children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
    }

    for (auto const & c : unres_oduj_prio)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-sub-tlv-value" || name == "unres-oduj-prio")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{

    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(tsg.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
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
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-stages" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "res" || name == "sbit" || name == "signal-type" || name == "stage" || name == "tbit" || name == "tsg")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::UnresOdujPrio()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unres-oduj-prio"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::~UnresOdujPrio()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-oduj-prio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_data())
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common == nullptr)
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
        }
        return flex_sub_tlv_value_common;
    }

    if(child_yang_name == "max-lspbw")
    {
        for(auto const & c : max_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    if(child_yang_name == "unres-lspbw")
    {
        for(auto const & c : unres_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw>();
        c->parent = this;
        unres_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flex_sub_tlv_value_common != nullptr)
    {
        children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
    }

    for (auto const & c : max_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unres_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-sub-tlv-value-common" || name == "max-lspbw" || name == "unres-lspbw")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{

    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(tsg.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
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
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-stages" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "res" || name == "sbit" || name == "signal-type" || name == "stage" || name == "tbit" || name == "tsg")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::UnresLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "unres-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::~UnresLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{

    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_lsp_bandwidth.yfilter)
	|| ydk::is_set(psc_interface_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.yfilter)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.yfilter)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-lsp-bandwidth" || name == "psc-interface-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::int64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{

    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_data())
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_srl_gs.yfilter)
	|| ydk::is_set(srlg_len.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.yfilter)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.yfilter)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-srlg-data")
    {
        for(auto const & c : mplste_link_srlg_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData>();
        c->parent = this;
        mplste_link_srlg_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplste_link_srlg_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
        num_srl_gs.value_namespace = name_space;
        num_srl_gs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
        srlg_len.value_namespace = name_space;
        srlg_len.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-srl-gs")
    {
        num_srl_gs.yfilter = yfilter;
    }
    if(value_path == "srlg-len")
    {
        srlg_len.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-srlg-data" || name == "num-srl-gs" || name == "srlg-len")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::MplsteLinkSrlgData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mplste-link-srlg-data"; yang_parent_name = "srlgtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::~MplsteLinkSrlgData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-srlg-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{

    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uni_dir_delay.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.yfilter)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
        uni_dir_delay.value_namespace = name_space;
        uni_dir_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uni-dir-delay")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
{

    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        for(auto const & c : bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bw_per_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "sub-pool-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
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
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : mpls_te_link)
    {
        children[c->get_segment_path()] = c;
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
    mpls_te_area_id{YType::str, "mpls-te-area-id"},
    mpls_te_area_instance{YType::uint32, "mpls-te-area-instance"},
    mpls_te_enabled{YType::boolean, "mpls-te-enabled"},
    mpls_te_initialized{YType::boolean, "mpls-te-initialized"},
    mpls_te_next_fragment_id{YType::uint32, "mpls-te-next-fragment-id"},
    mpls_te_router_address{YType::str, "mpls-te-router-address"},
    mpls_te_router_id{YType::str, "mpls-te-router-id"},
    spacious_fragment{YType::boolean, "spacious-fragment"}
{

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-links"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::~MplsTeLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::has_data() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| mpls_te_area_id.is_set
	|| mpls_te_area_instance.is_set
	|| mpls_te_enabled.is_set
	|| mpls_te_initialized.is_set
	|| mpls_te_next_fragment_id.is_set
	|| mpls_te_router_address.is_set
	|| mpls_te_router_id.is_set
	|| spacious_fragment.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(mpls_te_area_id.yfilter)
	|| ydk::is_set(mpls_te_area_instance.yfilter)
	|| ydk::is_set(mpls_te_enabled.yfilter)
	|| ydk::is_set(mpls_te_initialized.yfilter)
	|| ydk::is_set(mpls_te_next_fragment_id.yfilter)
	|| ydk::is_set(mpls_te_router_address.yfilter)
	|| ydk::is_set(mpls_te_router_id.yfilter)
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
    if (mpls_te_area_id.is_set || is_set(mpls_te_area_id.yfilter)) leaf_name_data.push_back(mpls_te_area_id.get_name_leafdata());
    if (mpls_te_area_instance.is_set || is_set(mpls_te_area_instance.yfilter)) leaf_name_data.push_back(mpls_te_area_instance.get_name_leafdata());
    if (mpls_te_enabled.is_set || is_set(mpls_te_enabled.yfilter)) leaf_name_data.push_back(mpls_te_enabled.get_name_leafdata());
    if (mpls_te_initialized.is_set || is_set(mpls_te_initialized.yfilter)) leaf_name_data.push_back(mpls_te_initialized.get_name_leafdata());
    if (mpls_te_next_fragment_id.is_set || is_set(mpls_te_next_fragment_id.yfilter)) leaf_name_data.push_back(mpls_te_next_fragment_id.get_name_leafdata());
    if (mpls_te_router_address.is_set || is_set(mpls_te_router_address.yfilter)) leaf_name_data.push_back(mpls_te_router_address.get_name_leafdata());
    if (mpls_te_router_id.is_set || is_set(mpls_te_router_id.yfilter)) leaf_name_data.push_back(mpls_te_router_id.get_name_leafdata());
    if (spacious_fragment.is_set || is_set(spacious_fragment.yfilter)) leaf_name_data.push_back(spacious_fragment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-fragment")
    {
        for(auto const & c : mpls_te_fragment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment>();
        c->parent = this;
        mpls_te_fragment.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_>();
        c->parent = this;
        mpls_te_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mpls_te_fragment)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mpls_te_link)
    {
        children[c->get_segment_path()] = c;
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
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id = value;
        mpls_te_next_fragment_id.value_namespace = name_space;
        mpls_te_next_fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address = value;
        mpls_te_router_address.value_namespace = name_space;
        mpls_te_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id = value;
        mpls_te_router_id.value_namespace = name_space;
        mpls_te_router_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled.yfilter = yfilter;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized.yfilter = yfilter;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address.yfilter = yfilter;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id.yfilter = yfilter;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-fragment" || name == "mpls-te-link" || name == "area-id" || name == "mpls-te-area-id" || name == "mpls-te-area-instance" || name == "mpls-te-enabled" || name == "mpls-te-initialized" || name == "mpls-te-next-fragment-id" || name == "mpls-te-router-address" || name == "mpls-te-router-id" || name == "spacious-fragment")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeFragment()
    :
    dste_model_id{YType::uint8, "dste-model-id"},
    fragment_id{YType::uint32, "fragment-id"},
    fragment_instance{YType::uint32, "fragment-instance"},
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
    return dste_model_id.is_set
	|| fragment_id.is_set
	|| fragment_instance.is_set
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
	|| ydk::is_set(dste_model_id.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(fragment_instance.yfilter)
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

    if (dste_model_id.is_set || is_set(dste_model_id.yfilter)) leaf_name_data.push_back(dste_model_id.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (fragment_instance.is_set || is_set(fragment_instance.yfilter)) leaf_name_data.push_back(fragment_instance.get_name_leafdata());
    if (same_fragment_count.is_set || is_set(same_fragment_count.yfilter)) leaf_name_data.push_back(same_fragment_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : mpls_te_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-model-id")
    {
        dste_model_id = value;
        dste_model_id.value_namespace = name_space;
        dste_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-instance")
    {
        fragment_instance = value;
        fragment_instance.value_namespace = name_space;
        fragment_instance.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dste-model-id")
    {
        dste_model_id.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "fragment-instance")
    {
        fragment_instance.yfilter = yfilter;
    }
    if(value_path == "same-fragment-count")
    {
        same_fragment_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-link" || name == "dste-model-id" || name == "fragment-id" || name == "fragment-instance" || name == "same-fragment-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsTeLink_()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    global_unreserve_bw_per_priority->parent = this;
    link_protocol_priority_capability->parent = this;
    link_sw_capability->parent = this;
    sub_pool_unreserve_bw_per_priority->parent = this;

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
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(dste_allocation_model_id.yfilter)
	|| ydk::is_set(dste_in_use.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(input_interface_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(maximum_link_bw.yfilter)
	|| ydk::is_set(maximum_link_reservable_bw.yfilter)
	|| ydk::is_set(maximum_link_sub_reservable_bw.yfilter)
	|| ydk::is_set(mpls_link_instance.yfilter)
	|| ydk::is_set(mpls_link_type.yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(new_link.yfilter)
	|| ydk::is_set(number_of_optional_tl_vs.yfilter)
	|| ydk::is_set(output_interface_id.yfilter)
	|| ydk::is_set(priority_count.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
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

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.yfilter)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.yfilter)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.yfilter)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.yfilter)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.yfilter)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.yfilter)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.yfilter)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.yfilter)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.yfilter)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.yfilter)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list == nullptr)
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList>();
        }
        return extended_admin_group_list;
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority == nullptr)
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority>();
        }
        return global_unreserve_bw_per_priority;
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

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority == nullptr)
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority>();
        }
        return sub_pool_unreserve_bw_per_priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extended_admin_group_list != nullptr)
    {
        children["extended-admin-group-list"] = extended_admin_group_list;
    }

    if(global_unreserve_bw_per_priority != nullptr)
    {
        children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
    }

    if(link_protocol_priority_capability != nullptr)
    {
        children["link-protocol-priority-capability"] = link_protocol_priority_capability;
    }

    if(link_sw_capability != nullptr)
    {
        children["link-sw-capability"] = link_sw_capability;
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    if(sub_pool_unreserve_bw_per_priority != nullptr)
    {
        children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
        dste_allocation_model_id.value_namespace = name_space;
        dste_allocation_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
        dste_in_use.value_namespace = name_space;
        dste_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
        input_interface_id.value_namespace = name_space;
        input_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-link")
    {
        new_link = value;
        new_link.value_namespace = name_space;
        new_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
        number_of_optional_tl_vs.value_namespace = name_space;
        number_of_optional_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
        output_interface_id.value_namespace = name_space;
        output_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
        priority_count.value_namespace = name_space;
        priority_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id.yfilter = yfilter;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
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
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "new-link")
    {
        new_link.yfilter = yfilter;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs.yfilter = yfilter;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id.yfilter = yfilter;
    }
    if(value_path == "priority-count")
    {
        priority_count.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-admin-group-list" || name == "global-unreserve-bw-per-priority" || name == "link-protocol-priority-capability" || name == "link-sw-capability" || name == "mplste-link-opt-tlv" || name == "sub-pool-unreserve-bw-per-priority" || name == "affinity" || name == "dste-allocation-model-id" || name == "dste-in-use" || name == "fragment-id" || name == "igp-metric" || name == "input-interface-id" || name == "link-address" || name == "maximum-link-bw" || name == "maximum-link-reservable-bw" || name == "maximum-link-sub-reservable-bw" || name == "mpls-link-instance" || name == "mpls-link-type" || name == "neighbor-ip-address" || name == "neighbor-system-id" || name == "new-link" || name == "number-of-optional-tl-vs" || name == "output-interface-id" || name == "priority-count" || name == "te-metric")
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
        for(auto const & c : ext_admin_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : ext_admin_data)
    {
        children[c->get_segment_path()] = c;
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
        for(auto const & c : bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : bw_per_priority)
    {
        children[c->get_segment_path()] = c;
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
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
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
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::has_operation() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_encoding.yfilter)
	|| ydk::is_set(link_mtu.yfilter)
	|| ydk::is_set(link_switching_capability.yfilter)
	|| ydk::is_set(minimum_lsp_bw.yfilter);
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

    if (link_encoding.is_set || is_set(link_encoding.yfilter)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.yfilter)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.yfilter)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.yfilter)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-lsp-bw-per-priority")
    {
        for(auto const & c : maximum_lsp_bw_per_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : maximum_lsp_bw_per_priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
        link_encoding.value_namespace = name_space;
        link_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
        link_mtu.value_namespace = name_space;
        link_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
        link_switching_capability.value_namespace = name_space;
        link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
        minimum_lsp_bw.value_namespace = name_space;
        minimum_lsp_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-encoding")
    {
        link_encoding.yfilter = yfilter;
    }
    if(value_path == "link-mtu")
    {
        link_mtu.yfilter = yfilter;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-lsp-bw-per-priority" || name == "link-encoding" || name == "link-mtu" || name == "link-switching-capability" || name == "minimum-lsp-bw")
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

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
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
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_len.yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_type.yfilter);
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

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
        mplste_link_opt_tlv_len.value_namespace = name_space;
        mplste_link_opt_tlv_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
        mplste_link_opt_tlv_type.value_namespace = name_space;
        mplste_link_opt_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len.yfilter = yfilter;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-opt-tlv-value" || name == "mplste-link-opt-tlv-len" || name == "mplste-link-opt-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    ixcdtlv_value->parent = this;
    srlgtlv_value->parent = this;
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
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_tlv_type.yfilter)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
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

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value == nullptr)
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
        }
        return ixcdtlv_value;
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value == nullptr)
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
        }
        return srlgtlv_value;
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
    if(bctlv_value != nullptr)
    {
        children["bctlv-value"] = bctlv_value;
    }

    if(ixcdtlv_value != nullptr)
    {
        children["ixcdtlv-value"] = ixcdtlv_value;
    }

    if(srlgtlv_value != nullptr)
    {
        children["srlgtlv-value"] = srlgtlv_value;
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
    if(name == "bctlv-value" || name == "ixcdtlv-value" || name == "srlgtlv-value" || name == "unidtlv-value" || name == "opaque-tlv-type")
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
        for(auto const & c : mplste_link_bc_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : mplste_link_bc_bandwidth)
    {
        children[c->get_segment_path()] = c;
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

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::MplsteLinkBcBandwidth()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "mplste-link-bc-bandwidth"; yang_parent_name = "bctlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::~MplsteLinkBcBandwidth()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-bc-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fixed_scsi_count.yfilter)
	|| ydk::is_set(flex_scsi_count.yfilter)
	|| ydk::is_set(rile_len_code.yfilter)
	|| ydk::is_set(switching_cap.yfilter)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.yfilter)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.yfilter)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.yfilter)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.yfilter)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type == nullptr)
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
        }
        return ixcd_switching_cap_type;
    }

    if(child_yang_name == "max-lspbw")
    {
        for(auto const & c : max_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ixcd_switching_cap_type != nullptr)
    {
        children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
    }

    for (auto const & c : max_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
        rile_len_code.value_namespace = name_space;
        rile_len_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
        switching_cap.value_namespace = name_space;
        switching_cap.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count.yfilter = yfilter;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count.yfilter = yfilter;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code.yfilter = yfilter;
    }
    if(value_path == "switching-cap")
    {
        switching_cap.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcd-switching-cap-type" || name == "max-lspbw" || name == "fixed-scsi-count" || name == "flex-scsi-count" || name == "rile-len-code" || name == "switching-cap")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    ixcdpsc_info->parent = this;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switching_cap_type.yfilter)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.yfilter)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv == nullptr)
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
        }
        return ixcdbw_sub_tlv;
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info == nullptr)
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
        }
        return ixcdpsc_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ixcdbw_sub_tlv != nullptr)
    {
        children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
    }

    if(ixcdpsc_info != nullptr)
    {
        children["ixcdpsc-info"] = ixcdpsc_info;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
        switching_cap_type.value_namespace = name_space;
        switching_cap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcdbw-sub-tlv" || name == "ixcdpsc-info" || name == "switching-cap-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{

    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : arr_bw_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arr-bw-sub-tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_sub_tlv_length.yfilter)
	|| ydk::is_set(bw_sub_tlv_type.yfilter)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.yfilter)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.yfilter)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value == nullptr)
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
        }
        return bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bw_sub_tlv_value != nullptr)
    {
        children["bw-sub-tlv-value"] = bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
        bw_sub_tlv_length.value_namespace = name_space;
        bw_sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
        bw_sub_tlv_type.value_namespace = name_space;
        bw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-sub-tlv-value" || name == "bw-sub-tlv-length" || name == "bw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    flex_bw_sub_tlv_value->parent = this;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ixcdbw_sub_tlv_type.yfilter)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.yfilter)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value == nullptr)
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
        }
        return fixed_bw_sub_tlv_value;
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value == nullptr)
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
        }
        return flex_bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
        ixcdbw_sub_tlv_type.value_namespace = name_space;
        ixcdbw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-bw-sub-tlv-value" || name == "flex-bw-sub-tlv-value" || name == "ixcdbw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_data())
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value == nullptr)
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
        }
        return fixed_sub_tlv_value;
    }

    if(child_yang_name == "unres-oduj-prio")
    {
        for(auto const & c : unres_oduj_prio)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio>();
        c->parent = this;
        unres_oduj_prio.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fixed_sub_tlv_value != nullptr)
    {
        children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
    }

    for (auto const & c : unres_oduj_prio)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-sub-tlv-value" || name == "unres-oduj-prio")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{

    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(tsg.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
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
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-stages" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "res" || name == "sbit" || name == "signal-type" || name == "stage" || name == "tbit" || name == "tsg")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::UnresOdujPrio()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unres-oduj-prio"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::~UnresOdujPrio()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-oduj-prio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_data())
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common == nullptr)
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
        }
        return flex_sub_tlv_value_common;
    }

    if(child_yang_name == "max-lspbw")
    {
        for(auto const & c : max_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    if(child_yang_name == "unres-lspbw")
    {
        for(auto const & c : unres_lspbw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw>();
        c->parent = this;
        unres_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flex_sub_tlv_value_common != nullptr)
    {
        children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
    }

    for (auto const & c : max_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unres_lspbw)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-sub-tlv-value-common" || name == "max-lspbw" || name == "unres-lspbw")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{

    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(tsg.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
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
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-stages" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "res" || name == "sbit" || name == "signal-type" || name == "stage" || name == "tbit" || name == "tsg")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::UnresLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "unres-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::~UnresLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{

    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_lsp_bandwidth.yfilter)
	|| ydk::is_set(psc_interface_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.yfilter)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.yfilter)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-lsp-bandwidth" || name == "psc-interface-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::int64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{

    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_data())
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_srl_gs.yfilter)
	|| ydk::is_set(srlg_len.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.yfilter)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.yfilter)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-srlg-data")
    {
        for(auto const & c : mplste_link_srlg_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData>();
        c->parent = this;
        mplste_link_srlg_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplste_link_srlg_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
        num_srl_gs.value_namespace = name_space;
        num_srl_gs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
        srlg_len.value_namespace = name_space;
        srlg_len.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-srl-gs")
    {
        num_srl_gs.yfilter = yfilter;
    }
    if(value_path == "srlg-len")
    {
        srlg_len.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-srlg-data" || name == "num-srl-gs" || name == "srlg-len")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::MplsteLinkSrlgData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mplste-link-srlg-data"; yang_parent_name = "srlgtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::~MplsteLinkSrlgData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-srlg-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{

    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uni_dir_delay.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.yfilter)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
        uni_dir_delay.value_namespace = name_space;
        uni_dir_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uni-dir-delay")
        return true;
    return false;
}


}
}

