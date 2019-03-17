
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_xtc_oper_0.hpp"
#include "Cisco_IOS_XR_infra_xtc_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_oper {

PceLspData::PceLspData()
    :
    tunnel_infos(std::make_shared<PceLspData::TunnelInfos>())
    , lsp_summary(std::make_shared<PceLspData::LspSummary>())
    , tunnel_detail_infos(std::make_shared<PceLspData::TunnelDetailInfos>())
{
    tunnel_infos->parent = this;
    lsp_summary->parent = this;
    tunnel_detail_infos->parent = this;

    yang_name = "pce-lsp-data"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PceLspData::~PceLspData()
{
}

bool PceLspData::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel_infos !=  nullptr && tunnel_infos->has_data())
	|| (lsp_summary !=  nullptr && lsp_summary->has_data())
	|| (tunnel_detail_infos !=  nullptr && tunnel_detail_infos->has_data());
}

bool PceLspData::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_infos !=  nullptr && tunnel_infos->has_operation())
	|| (lsp_summary !=  nullptr && lsp_summary->has_operation())
	|| (tunnel_detail_infos !=  nullptr && tunnel_detail_infos->has_operation());
}

std::string PceLspData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-infos")
    {
        if(tunnel_infos == nullptr)
        {
            tunnel_infos = std::make_shared<PceLspData::TunnelInfos>();
        }
        return tunnel_infos;
    }

    if(child_yang_name == "lsp-summary")
    {
        if(lsp_summary == nullptr)
        {
            lsp_summary = std::make_shared<PceLspData::LspSummary>();
        }
        return lsp_summary;
    }

    if(child_yang_name == "tunnel-detail-infos")
    {
        if(tunnel_detail_infos == nullptr)
        {
            tunnel_detail_infos = std::make_shared<PceLspData::TunnelDetailInfos>();
        }
        return tunnel_detail_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel_infos != nullptr)
    {
        _children["tunnel-infos"] = tunnel_infos;
    }

    if(lsp_summary != nullptr)
    {
        _children["lsp-summary"] = lsp_summary;
    }

    if(tunnel_detail_infos != nullptr)
    {
        _children["tunnel-detail-infos"] = tunnel_detail_infos;
    }

    return _children;
}

void PceLspData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceLspData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> PceLspData::clone_ptr() const
{
    return std::make_shared<PceLspData>();
}

std::string PceLspData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PceLspData::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PceLspData::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PceLspData::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PceLspData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-infos" || name == "lsp-summary" || name == "tunnel-detail-infos")
        return true;
    return false;
}

PceLspData::TunnelInfos::TunnelInfos()
    :
    tunnel_info(this, {"peer_address", "plsp_id", "tunnel_name"})
{

    yang_name = "tunnel-infos"; yang_parent_name = "pce-lsp-data"; is_top_level_class = false; has_list_ancestor = false; 
}

PceLspData::TunnelInfos::~TunnelInfos()
{
}

bool PceLspData::TunnelInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_info.len(); index++)
    {
        if(tunnel_info[index]->has_data())
            return true;
    }
    return false;
}

bool PceLspData::TunnelInfos::has_operation() const
{
    for (std::size_t index=0; index<tunnel_info.len(); index++)
    {
        if(tunnel_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PceLspData::TunnelInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::TunnelInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-info")
    {
        auto ent_ = std::make_shared<PceLspData::TunnelInfos::TunnelInfo>();
        ent_->parent = this;
        tunnel_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceLspData::TunnelInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceLspData::TunnelInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceLspData::TunnelInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-info")
        return true;
    return false;
}

PceLspData::TunnelInfos::TunnelInfo::TunnelInfo()
    :
    peer_address{YType::str, "peer-address"},
    plsp_id{YType::uint32, "plsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"}
        ,
    pcc_address(std::make_shared<PceLspData::TunnelInfos::TunnelInfo::PccAddress>())
    , brief_lsp_information(this, {})
{
    pcc_address->parent = this;

    yang_name = "tunnel-info"; yang_parent_name = "tunnel-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

PceLspData::TunnelInfos::TunnelInfo::~TunnelInfo()
{
}

bool PceLspData::TunnelInfos::TunnelInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<brief_lsp_information.len(); index++)
    {
        if(brief_lsp_information[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| plsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_name_xr.is_set
	|| (pcc_address !=  nullptr && pcc_address->has_data());
}

bool PceLspData::TunnelInfos::TunnelInfo::has_operation() const
{
    for (std::size_t index=0; index<brief_lsp_information.len(); index++)
    {
        if(brief_lsp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(plsp_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter)
	|| (pcc_address !=  nullptr && pcc_address->has_operation());
}

std::string PceLspData::TunnelInfos::TunnelInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/tunnel-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::TunnelInfos::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info";
    ADD_KEY_TOKEN(peer_address, "peer-address");
    ADD_KEY_TOKEN(plsp_id, "plsp-id");
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelInfos::TunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelInfos::TunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcc-address")
    {
        if(pcc_address == nullptr)
        {
            pcc_address = std::make_shared<PceLspData::TunnelInfos::TunnelInfo::PccAddress>();
        }
        return pcc_address;
    }

    if(child_yang_name == "brief-lsp-information")
    {
        auto ent_ = std::make_shared<PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation>();
        ent_->parent = this;
        brief_lsp_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelInfos::TunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pcc_address != nullptr)
    {
        _children["pcc-address"] = pcc_address;
    }

    count_ = 0;
    for (auto ent_ : brief_lsp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceLspData::TunnelInfos::TunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelInfos::TunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
}

bool PceLspData::TunnelInfos::TunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcc-address" || name == "brief-lsp-information" || name == "peer-address" || name == "plsp-id" || name == "tunnel-name" || name == "tunnel-name-xr")
        return true;
    return false;
}

PceLspData::TunnelInfos::TunnelInfo::PccAddress::PccAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "pcc-address"; yang_parent_name = "tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelInfos::TunnelInfo::PccAddress::~PccAddress()
{
}

bool PceLspData::TunnelInfos::TunnelInfo::PccAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelInfos::TunnelInfo::PccAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelInfos::TunnelInfo::PccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelInfos::TunnelInfo::PccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelInfos::TunnelInfo::PccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelInfos::TunnelInfo::PccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelInfos::TunnelInfo::PccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelInfos::TunnelInfo::PccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelInfos::TunnelInfo::PccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::BriefLspInformation()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    lspid{YType::uint32, "lspid"},
    binding_sid{YType::uint32, "binding-sid"},
    lsp_setup_type{YType::enumeration, "lsp-setup-type"},
    operational_state{YType::enumeration, "operational-state"},
    administrative_state{YType::enumeration, "administrative-state"},
    msd{YType::uint32, "msd"},
    absolute_margin{YType::uint32, "absolute-margin"},
    relative_margin{YType::uint32, "relative-margin"}
        ,
    source_address(std::make_shared<PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress>())
    , destination_address(std::make_shared<PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress>())
{
    source_address->parent = this;
    destination_address->parent = this;

    yang_name = "brief-lsp-information"; yang_parent_name = "tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::~BriefLspInformation()
{
}

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| lspid.is_set
	|| binding_sid.is_set
	|| lsp_setup_type.is_set
	|| operational_state.is_set
	|| administrative_state.is_set
	|| msd.is_set
	|| absolute_margin.is_set
	|| relative_margin.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(lsp_setup_type.yfilter)
	|| ydk::is_set(operational_state.yfilter)
	|| ydk::is_set(administrative_state.yfilter)
	|| ydk::is_set(msd.yfilter)
	|| ydk::is_set(absolute_margin.yfilter)
	|| ydk::is_set(relative_margin.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (lsp_setup_type.is_set || is_set(lsp_setup_type.yfilter)) leaf_name_data.push_back(lsp_setup_type.get_name_leafdata());
    if (operational_state.is_set || is_set(operational_state.yfilter)) leaf_name_data.push_back(operational_state.get_name_leafdata());
    if (administrative_state.is_set || is_set(administrative_state.yfilter)) leaf_name_data.push_back(administrative_state.get_name_leafdata());
    if (msd.is_set || is_set(msd.yfilter)) leaf_name_data.push_back(msd.get_name_leafdata());
    if (absolute_margin.is_set || is_set(absolute_margin.yfilter)) leaf_name_data.push_back(absolute_margin.get_name_leafdata());
    if (relative_margin.is_set || is_set(relative_margin.yfilter)) leaf_name_data.push_back(relative_margin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type = value;
        lsp_setup_type.value_namespace = name_space;
        lsp_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-state")
    {
        operational_state = value;
        operational_state.value_namespace = name_space;
        operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-state")
    {
        administrative_state = value;
        administrative_state.value_namespace = name_space;
        administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msd")
    {
        msd = value;
        msd.value_namespace = name_space;
        msd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-margin")
    {
        absolute_margin = value;
        absolute_margin.value_namespace = name_space;
        absolute_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-margin")
    {
        relative_margin = value;
        relative_margin.value_namespace = name_space;
        relative_margin.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type.yfilter = yfilter;
    }
    if(value_path == "operational-state")
    {
        operational_state.yfilter = yfilter;
    }
    if(value_path == "administrative-state")
    {
        administrative_state.yfilter = yfilter;
    }
    if(value_path == "msd")
    {
        msd.yfilter = yfilter;
    }
    if(value_path == "absolute-margin")
    {
        absolute_margin.yfilter = yfilter;
    }
    if(value_path == "relative-margin")
    {
        relative_margin.yfilter = yfilter;
    }
}

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "lspid" || name == "binding-sid" || name == "lsp-setup-type" || name == "operational-state" || name == "administrative-state" || name == "msd" || name == "absolute-margin" || name == "relative-margin")
        return true;
    return false;
}

PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "brief-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::~SourceAddress()
{
}

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::DestinationAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "brief-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::~DestinationAddress()
{
}

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::LspSummary::LspSummary()
    :
    all_ls_ps(std::make_shared<PceLspData::LspSummary::AllLsPs>())
    , peer_ls_ps_info(this, {})
{
    all_ls_ps->parent = this;

    yang_name = "lsp-summary"; yang_parent_name = "pce-lsp-data"; is_top_level_class = false; has_list_ancestor = false; 
}

PceLspData::LspSummary::~LspSummary()
{
}

bool PceLspData::LspSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_ls_ps_info.len(); index++)
    {
        if(peer_ls_ps_info[index]->has_data())
            return true;
    }
    return (all_ls_ps !=  nullptr && all_ls_ps->has_data());
}

bool PceLspData::LspSummary::has_operation() const
{
    for (std::size_t index=0; index<peer_ls_ps_info.len(); index++)
    {
        if(peer_ls_ps_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all_ls_ps !=  nullptr && all_ls_ps->has_operation());
}

std::string PceLspData::LspSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::LspSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::LspSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::LspSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-ls-ps")
    {
        if(all_ls_ps == nullptr)
        {
            all_ls_ps = std::make_shared<PceLspData::LspSummary::AllLsPs>();
        }
        return all_ls_ps;
    }

    if(child_yang_name == "peer-ls-ps-info")
    {
        auto ent_ = std::make_shared<PceLspData::LspSummary::PeerLsPsInfo>();
        ent_->parent = this;
        peer_ls_ps_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::LspSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all_ls_ps != nullptr)
    {
        _children["all-ls-ps"] = all_ls_ps;
    }

    count_ = 0;
    for (auto ent_ : peer_ls_ps_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceLspData::LspSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceLspData::LspSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceLspData::LspSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-ls-ps" || name == "peer-ls-ps-info")
        return true;
    return false;
}

PceLspData::LspSummary::AllLsPs::AllLsPs()
    :
    all_ls_ps{YType::uint32, "all-ls-ps"},
    up_ls_ps{YType::uint32, "up-ls-ps"},
    admin_up_ls_ps{YType::uint32, "admin-up-ls-ps"},
    sr_ls_ps{YType::uint32, "sr-ls-ps"},
    rsvp_ls_ps{YType::uint32, "rsvp-ls-ps"}
{

    yang_name = "all-ls-ps"; yang_parent_name = "lsp-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

PceLspData::LspSummary::AllLsPs::~AllLsPs()
{
}

bool PceLspData::LspSummary::AllLsPs::has_data() const
{
    if (is_presence_container) return true;
    return all_ls_ps.is_set
	|| up_ls_ps.is_set
	|| admin_up_ls_ps.is_set
	|| sr_ls_ps.is_set
	|| rsvp_ls_ps.is_set;
}

bool PceLspData::LspSummary::AllLsPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_ls_ps.yfilter)
	|| ydk::is_set(up_ls_ps.yfilter)
	|| ydk::is_set(admin_up_ls_ps.yfilter)
	|| ydk::is_set(sr_ls_ps.yfilter)
	|| ydk::is_set(rsvp_ls_ps.yfilter);
}

std::string PceLspData::LspSummary::AllLsPs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/lsp-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::LspSummary::AllLsPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-ls-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::LspSummary::AllLsPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_ls_ps.is_set || is_set(all_ls_ps.yfilter)) leaf_name_data.push_back(all_ls_ps.get_name_leafdata());
    if (up_ls_ps.is_set || is_set(up_ls_ps.yfilter)) leaf_name_data.push_back(up_ls_ps.get_name_leafdata());
    if (admin_up_ls_ps.is_set || is_set(admin_up_ls_ps.yfilter)) leaf_name_data.push_back(admin_up_ls_ps.get_name_leafdata());
    if (sr_ls_ps.is_set || is_set(sr_ls_ps.yfilter)) leaf_name_data.push_back(sr_ls_ps.get_name_leafdata());
    if (rsvp_ls_ps.is_set || is_set(rsvp_ls_ps.yfilter)) leaf_name_data.push_back(rsvp_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::LspSummary::AllLsPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::LspSummary::AllLsPs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::LspSummary::AllLsPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps = value;
        all_ls_ps.value_namespace = name_space;
        all_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps = value;
        up_ls_ps.value_namespace = name_space;
        up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps = value;
        admin_up_ls_ps.value_namespace = name_space;
        admin_up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps = value;
        sr_ls_ps.value_namespace = name_space;
        sr_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps = value;
        rsvp_ls_ps.value_namespace = name_space;
        rsvp_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::LspSummary::AllLsPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps.yfilter = yfilter;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps.yfilter = yfilter;
    }
}

bool PceLspData::LspSummary::AllLsPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-ls-ps" || name == "up-ls-ps" || name == "admin-up-ls-ps" || name == "sr-ls-ps" || name == "rsvp-ls-ps")
        return true;
    return false;
}

PceLspData::LspSummary::PeerLsPsInfo::PeerLsPsInfo()
    :
    lsp_summary(std::make_shared<PceLspData::LspSummary::PeerLsPsInfo::LspSummary_>())
    , peer_address(std::make_shared<PceLspData::LspSummary::PeerLsPsInfo::PeerAddress>())
{
    lsp_summary->parent = this;
    peer_address->parent = this;

    yang_name = "peer-ls-ps-info"; yang_parent_name = "lsp-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

PceLspData::LspSummary::PeerLsPsInfo::~PeerLsPsInfo()
{
}

bool PceLspData::LspSummary::PeerLsPsInfo::has_data() const
{
    if (is_presence_container) return true;
    return (lsp_summary !=  nullptr && lsp_summary->has_data())
	|| (peer_address !=  nullptr && peer_address->has_data());
}

bool PceLspData::LspSummary::PeerLsPsInfo::has_operation() const
{
    return is_set(yfilter)
	|| (lsp_summary !=  nullptr && lsp_summary->has_operation())
	|| (peer_address !=  nullptr && peer_address->has_operation());
}

std::string PceLspData::LspSummary::PeerLsPsInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/lsp-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::LspSummary::PeerLsPsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ls-ps-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::LspSummary::PeerLsPsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::LspSummary::PeerLsPsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-summary")
    {
        if(lsp_summary == nullptr)
        {
            lsp_summary = std::make_shared<PceLspData::LspSummary::PeerLsPsInfo::LspSummary_>();
        }
        return lsp_summary;
    }

    if(child_yang_name == "peer-address")
    {
        if(peer_address == nullptr)
        {
            peer_address = std::make_shared<PceLspData::LspSummary::PeerLsPsInfo::PeerAddress>();
        }
        return peer_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::LspSummary::PeerLsPsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_summary != nullptr)
    {
        _children["lsp-summary"] = lsp_summary;
    }

    if(peer_address != nullptr)
    {
        _children["peer-address"] = peer_address;
    }

    return _children;
}

void PceLspData::LspSummary::PeerLsPsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceLspData::LspSummary::PeerLsPsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceLspData::LspSummary::PeerLsPsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-summary" || name == "peer-address")
        return true;
    return false;
}

PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::LspSummary_()
    :
    all_ls_ps{YType::uint32, "all-ls-ps"},
    up_ls_ps{YType::uint32, "up-ls-ps"},
    admin_up_ls_ps{YType::uint32, "admin-up-ls-ps"},
    sr_ls_ps{YType::uint32, "sr-ls-ps"},
    rsvp_ls_ps{YType::uint32, "rsvp-ls-ps"}
{

    yang_name = "lsp-summary"; yang_parent_name = "peer-ls-ps-info"; is_top_level_class = false; has_list_ancestor = false; 
}

PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::~LspSummary_()
{
}

bool PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::has_data() const
{
    if (is_presence_container) return true;
    return all_ls_ps.is_set
	|| up_ls_ps.is_set
	|| admin_up_ls_ps.is_set
	|| sr_ls_ps.is_set
	|| rsvp_ls_ps.is_set;
}

bool PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_ls_ps.yfilter)
	|| ydk::is_set(up_ls_ps.yfilter)
	|| ydk::is_set(admin_up_ls_ps.yfilter)
	|| ydk::is_set(sr_ls_ps.yfilter)
	|| ydk::is_set(rsvp_ls_ps.yfilter);
}

std::string PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/lsp-summary/peer-ls-ps-info/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_ls_ps.is_set || is_set(all_ls_ps.yfilter)) leaf_name_data.push_back(all_ls_ps.get_name_leafdata());
    if (up_ls_ps.is_set || is_set(up_ls_ps.yfilter)) leaf_name_data.push_back(up_ls_ps.get_name_leafdata());
    if (admin_up_ls_ps.is_set || is_set(admin_up_ls_ps.yfilter)) leaf_name_data.push_back(admin_up_ls_ps.get_name_leafdata());
    if (sr_ls_ps.is_set || is_set(sr_ls_ps.yfilter)) leaf_name_data.push_back(sr_ls_ps.get_name_leafdata());
    if (rsvp_ls_ps.is_set || is_set(rsvp_ls_ps.yfilter)) leaf_name_data.push_back(rsvp_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps = value;
        all_ls_ps.value_namespace = name_space;
        all_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps = value;
        up_ls_ps.value_namespace = name_space;
        up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps = value;
        admin_up_ls_ps.value_namespace = name_space;
        admin_up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps = value;
        sr_ls_ps.value_namespace = name_space;
        sr_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps = value;
        rsvp_ls_ps.value_namespace = name_space;
        rsvp_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps.yfilter = yfilter;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps.yfilter = yfilter;
    }
}

bool PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-ls-ps" || name == "up-ls-ps" || name == "admin-up-ls-ps" || name == "sr-ls-ps" || name == "rsvp-ls-ps")
        return true;
    return false;
}

PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::PeerAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "peer-address"; yang_parent_name = "peer-ls-ps-info"; is_top_level_class = false; has_list_ancestor = false; 
}

PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::~PeerAddress()
{
}

bool PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/lsp-summary/peer-ls-ps-info/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::LspSummary::PeerLsPsInfo::PeerAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfos()
    :
    tunnel_detail_info(this, {"peer_address", "plsp_id", "tunnel_name"})
{

    yang_name = "tunnel-detail-infos"; yang_parent_name = "pce-lsp-data"; is_top_level_class = false; has_list_ancestor = false; 
}

PceLspData::TunnelDetailInfos::~TunnelDetailInfos()
{
}

bool PceLspData::TunnelDetailInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_detail_info.len(); index++)
    {
        if(tunnel_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool PceLspData::TunnelDetailInfos::has_operation() const
{
    for (std::size_t index=0; index<tunnel_detail_info.len(); index++)
    {
        if(tunnel_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PceLspData::TunnelDetailInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::TunnelDetailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-detail-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-detail-info")
    {
        auto ent_ = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo>();
        ent_->parent = this;
        tunnel_detail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel_detail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceLspData::TunnelDetailInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceLspData::TunnelDetailInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-detail-info")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::TunnelDetailInfo()
    :
    peer_address{YType::str, "peer-address"},
    plsp_id{YType::uint32, "plsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"},
    xtc_controlled{YType::boolean, "xtc-controlled"},
    color{YType::uint32, "color"}
        ,
    pcc_address(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress>())
    , private_lsp_information(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation>())
    , detail_lsp_information(this, {})
{
    pcc_address->parent = this;
    private_lsp_information->parent = this;

    yang_name = "tunnel-detail-info"; yang_parent_name = "tunnel-detail-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::~TunnelDetailInfo()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail_lsp_information.len(); index++)
    {
        if(detail_lsp_information[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| plsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_name_xr.is_set
	|| xtc_controlled.is_set
	|| color.is_set
	|| (pcc_address !=  nullptr && pcc_address->has_data())
	|| (private_lsp_information !=  nullptr && private_lsp_information->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<detail_lsp_information.len(); index++)
    {
        if(detail_lsp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(plsp_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter)
	|| ydk::is_set(xtc_controlled.yfilter)
	|| ydk::is_set(color.yfilter)
	|| (pcc_address !=  nullptr && pcc_address->has_operation())
	|| (private_lsp_information !=  nullptr && private_lsp_information->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/tunnel-detail-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-detail-info";
    ADD_KEY_TOKEN(peer_address, "peer-address");
    ADD_KEY_TOKEN(plsp_id, "plsp-id");
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());
    if (xtc_controlled.is_set || is_set(xtc_controlled.yfilter)) leaf_name_data.push_back(xtc_controlled.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcc-address")
    {
        if(pcc_address == nullptr)
        {
            pcc_address = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress>();
        }
        return pcc_address;
    }

    if(child_yang_name == "private-lsp-information")
    {
        if(private_lsp_information == nullptr)
        {
            private_lsp_information = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation>();
        }
        return private_lsp_information;
    }

    if(child_yang_name == "detail-lsp-information")
    {
        auto ent_ = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation>();
        ent_->parent = this;
        detail_lsp_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pcc_address != nullptr)
    {
        _children["pcc-address"] = pcc_address;
    }

    if(private_lsp_information != nullptr)
    {
        _children["private-lsp-information"] = private_lsp_information;
    }

    count_ = 0;
    for (auto ent_ : detail_lsp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xtc-controlled")
    {
        xtc_controlled = value;
        xtc_controlled.value_namespace = name_space;
        xtc_controlled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "xtc-controlled")
    {
        xtc_controlled.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcc-address" || name == "private-lsp-information" || name == "detail-lsp-information" || name == "peer-address" || name == "plsp-id" || name == "tunnel-name" || name == "tunnel-name-xr" || name == "xtc-controlled" || name == "color")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress::PccAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "pcc-address"; yang_parent_name = "tunnel-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress::~PccAddress()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::PrivateLspInformation()
    :
    event_buffer(this, {})
{

    yang_name = "private-lsp-information"; yang_parent_name = "tunnel-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::~PrivateLspInformation()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event_buffer.len(); index++)
    {
        if(event_buffer[index]->has_data())
            return true;
    }
    return false;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::has_operation() const
{
    for (std::size_t index=0; index<event_buffer.len(); index++)
    {
        if(event_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-buffer")
    {
        auto ent_ = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer>();
        ent_->parent = this;
        event_buffer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-buffer")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::EventBuffer()
    :
    event_id{YType::uint32, "event-id"},
    event_message{YType::str, "event-message"},
    time_stamp{YType::uint32, "time-stamp"}
{

    yang_name = "event-buffer"; yang_parent_name = "private-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::~EventBuffer()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::has_data() const
{
    if (is_presence_container) return true;
    return event_id.is_set
	|| event_message.is_set
	|| time_stamp.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(event_message.yfilter)
	|| ydk::is_set(time_stamp.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (event_message.is_set || is_set(event_message.yfilter)) leaf_name_data.push_back(event_message.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-message")
    {
        event_message = value;
        event_message.value_namespace = name_space;
        event_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "event-message")
    {
        event_message.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-id" || name == "event-message" || name == "time-stamp")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::DetailLspInformation()
    :
    signaled_bandwidth_specified{YType::boolean, "signaled-bandwidth-specified"},
    signaled_bandwidth{YType::uint64, "signaled-bandwidth"},
    actual_bandwidth_specified{YType::boolean, "actual-bandwidth-specified"},
    actual_bandwidth{YType::uint64, "actual-bandwidth"},
    lsp_role{YType::uint32, "lsp-role"},
    computing_pce{YType::uint32, "computing-pce"},
    srlg_info{YType::uint32, "srlg-info"}
        ,
    brief_lsp_information(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation>())
    , er_os(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs>())
    , lsppcep_information(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation>())
    , lsp_association_info(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo>())
    , lsp_attributes(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes>())
    , sub_delegated_pce(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce>())
    , state_sync_pce(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce>())
    , reporting_pcc_address(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress>())
    , rro(this, {})
{
    brief_lsp_information->parent = this;
    er_os->parent = this;
    lsppcep_information->parent = this;
    lsp_association_info->parent = this;
    lsp_attributes->parent = this;
    sub_delegated_pce->parent = this;
    state_sync_pce->parent = this;
    reporting_pcc_address->parent = this;

    yang_name = "detail-lsp-information"; yang_parent_name = "tunnel-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::~DetailLspInformation()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rro.len(); index++)
    {
        if(rro[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlg_info.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return signaled_bandwidth_specified.is_set
	|| signaled_bandwidth.is_set
	|| actual_bandwidth_specified.is_set
	|| actual_bandwidth.is_set
	|| lsp_role.is_set
	|| computing_pce.is_set
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_data())
	|| (er_os !=  nullptr && er_os->has_data())
	|| (lsppcep_information !=  nullptr && lsppcep_information->has_data())
	|| (lsp_association_info !=  nullptr && lsp_association_info->has_data())
	|| (lsp_attributes !=  nullptr && lsp_attributes->has_data())
	|| (sub_delegated_pce !=  nullptr && sub_delegated_pce->has_data())
	|| (state_sync_pce !=  nullptr && state_sync_pce->has_data())
	|| (reporting_pcc_address !=  nullptr && reporting_pcc_address->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::has_operation() const
{
    for (std::size_t index=0; index<rro.len(); index++)
    {
        if(rro[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlg_info.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(signaled_bandwidth_specified.yfilter)
	|| ydk::is_set(signaled_bandwidth.yfilter)
	|| ydk::is_set(actual_bandwidth_specified.yfilter)
	|| ydk::is_set(actual_bandwidth.yfilter)
	|| ydk::is_set(lsp_role.yfilter)
	|| ydk::is_set(computing_pce.yfilter)
	|| ydk::is_set(srlg_info.yfilter)
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_operation())
	|| (er_os !=  nullptr && er_os->has_operation())
	|| (lsppcep_information !=  nullptr && lsppcep_information->has_operation())
	|| (lsp_association_info !=  nullptr && lsp_association_info->has_operation())
	|| (lsp_attributes !=  nullptr && lsp_attributes->has_operation())
	|| (sub_delegated_pce !=  nullptr && sub_delegated_pce->has_operation())
	|| (state_sync_pce !=  nullptr && state_sync_pce->has_operation())
	|| (reporting_pcc_address !=  nullptr && reporting_pcc_address->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-lsp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signaled_bandwidth_specified.is_set || is_set(signaled_bandwidth_specified.yfilter)) leaf_name_data.push_back(signaled_bandwidth_specified.get_name_leafdata());
    if (signaled_bandwidth.is_set || is_set(signaled_bandwidth.yfilter)) leaf_name_data.push_back(signaled_bandwidth.get_name_leafdata());
    if (actual_bandwidth_specified.is_set || is_set(actual_bandwidth_specified.yfilter)) leaf_name_data.push_back(actual_bandwidth_specified.get_name_leafdata());
    if (actual_bandwidth.is_set || is_set(actual_bandwidth.yfilter)) leaf_name_data.push_back(actual_bandwidth.get_name_leafdata());
    if (lsp_role.is_set || is_set(lsp_role.yfilter)) leaf_name_data.push_back(lsp_role.get_name_leafdata());
    if (computing_pce.is_set || is_set(computing_pce.yfilter)) leaf_name_data.push_back(computing_pce.get_name_leafdata());

    auto srlg_info_name_datas = srlg_info.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_info_name_datas.begin(), srlg_info_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-lsp-information")
    {
        if(brief_lsp_information == nullptr)
        {
            brief_lsp_information = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation>();
        }
        return brief_lsp_information;
    }

    if(child_yang_name == "er-os")
    {
        if(er_os == nullptr)
        {
            er_os = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs>();
        }
        return er_os;
    }

    if(child_yang_name == "lsppcep-information")
    {
        if(lsppcep_information == nullptr)
        {
            lsppcep_information = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation>();
        }
        return lsppcep_information;
    }

    if(child_yang_name == "lsp-association-info")
    {
        if(lsp_association_info == nullptr)
        {
            lsp_association_info = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo>();
        }
        return lsp_association_info;
    }

    if(child_yang_name == "lsp-attributes")
    {
        if(lsp_attributes == nullptr)
        {
            lsp_attributes = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes>();
        }
        return lsp_attributes;
    }

    if(child_yang_name == "sub-delegated-pce")
    {
        if(sub_delegated_pce == nullptr)
        {
            sub_delegated_pce = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce>();
        }
        return sub_delegated_pce;
    }

    if(child_yang_name == "state-sync-pce")
    {
        if(state_sync_pce == nullptr)
        {
            state_sync_pce = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce>();
        }
        return state_sync_pce;
    }

    if(child_yang_name == "reporting-pcc-address")
    {
        if(reporting_pcc_address == nullptr)
        {
            reporting_pcc_address = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress>();
        }
        return reporting_pcc_address;
    }

    if(child_yang_name == "rro")
    {
        auto ent_ = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro>();
        ent_->parent = this;
        rro.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief_lsp_information != nullptr)
    {
        _children["brief-lsp-information"] = brief_lsp_information;
    }

    if(er_os != nullptr)
    {
        _children["er-os"] = er_os;
    }

    if(lsppcep_information != nullptr)
    {
        _children["lsppcep-information"] = lsppcep_information;
    }

    if(lsp_association_info != nullptr)
    {
        _children["lsp-association-info"] = lsp_association_info;
    }

    if(lsp_attributes != nullptr)
    {
        _children["lsp-attributes"] = lsp_attributes;
    }

    if(sub_delegated_pce != nullptr)
    {
        _children["sub-delegated-pce"] = sub_delegated_pce;
    }

    if(state_sync_pce != nullptr)
    {
        _children["state-sync-pce"] = state_sync_pce;
    }

    if(reporting_pcc_address != nullptr)
    {
        _children["reporting-pcc-address"] = reporting_pcc_address;
    }

    count_ = 0;
    for (auto ent_ : rro.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signaled-bandwidth-specified")
    {
        signaled_bandwidth_specified = value;
        signaled_bandwidth_specified.value_namespace = name_space;
        signaled_bandwidth_specified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth = value;
        signaled_bandwidth.value_namespace = name_space;
        signaled_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-bandwidth-specified")
    {
        actual_bandwidth_specified = value;
        actual_bandwidth_specified.value_namespace = name_space;
        actual_bandwidth_specified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-bandwidth")
    {
        actual_bandwidth = value;
        actual_bandwidth.value_namespace = name_space;
        actual_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-role")
    {
        lsp_role = value;
        lsp_role.value_namespace = name_space;
        lsp_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computing-pce")
    {
        computing_pce = value;
        computing_pce.value_namespace = name_space;
        computing_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-info")
    {
        srlg_info.append(value);
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signaled-bandwidth-specified")
    {
        signaled_bandwidth_specified.yfilter = yfilter;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth.yfilter = yfilter;
    }
    if(value_path == "actual-bandwidth-specified")
    {
        actual_bandwidth_specified.yfilter = yfilter;
    }
    if(value_path == "actual-bandwidth")
    {
        actual_bandwidth.yfilter = yfilter;
    }
    if(value_path == "lsp-role")
    {
        lsp_role.yfilter = yfilter;
    }
    if(value_path == "computing-pce")
    {
        computing_pce.yfilter = yfilter;
    }
    if(value_path == "srlg-info")
    {
        srlg_info.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-lsp-information" || name == "er-os" || name == "lsppcep-information" || name == "lsp-association-info" || name == "lsp-attributes" || name == "sub-delegated-pce" || name == "state-sync-pce" || name == "reporting-pcc-address" || name == "rro" || name == "signaled-bandwidth-specified" || name == "signaled-bandwidth" || name == "actual-bandwidth-specified" || name == "actual-bandwidth" || name == "lsp-role" || name == "computing-pce" || name == "srlg-info")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::BriefLspInformation()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    lspid{YType::uint32, "lspid"},
    binding_sid{YType::uint32, "binding-sid"},
    lsp_setup_type{YType::enumeration, "lsp-setup-type"},
    operational_state{YType::enumeration, "operational-state"},
    administrative_state{YType::enumeration, "administrative-state"},
    msd{YType::uint32, "msd"},
    absolute_margin{YType::uint32, "absolute-margin"},
    relative_margin{YType::uint32, "relative-margin"}
        ,
    source_address(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress>())
    , destination_address(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress>())
{
    source_address->parent = this;
    destination_address->parent = this;

    yang_name = "brief-lsp-information"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::~BriefLspInformation()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| lspid.is_set
	|| binding_sid.is_set
	|| lsp_setup_type.is_set
	|| operational_state.is_set
	|| administrative_state.is_set
	|| msd.is_set
	|| absolute_margin.is_set
	|| relative_margin.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(lsp_setup_type.yfilter)
	|| ydk::is_set(operational_state.yfilter)
	|| ydk::is_set(administrative_state.yfilter)
	|| ydk::is_set(msd.yfilter)
	|| ydk::is_set(absolute_margin.yfilter)
	|| ydk::is_set(relative_margin.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (lsp_setup_type.is_set || is_set(lsp_setup_type.yfilter)) leaf_name_data.push_back(lsp_setup_type.get_name_leafdata());
    if (operational_state.is_set || is_set(operational_state.yfilter)) leaf_name_data.push_back(operational_state.get_name_leafdata());
    if (administrative_state.is_set || is_set(administrative_state.yfilter)) leaf_name_data.push_back(administrative_state.get_name_leafdata());
    if (msd.is_set || is_set(msd.yfilter)) leaf_name_data.push_back(msd.get_name_leafdata());
    if (absolute_margin.is_set || is_set(absolute_margin.yfilter)) leaf_name_data.push_back(absolute_margin.get_name_leafdata());
    if (relative_margin.is_set || is_set(relative_margin.yfilter)) leaf_name_data.push_back(relative_margin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type = value;
        lsp_setup_type.value_namespace = name_space;
        lsp_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-state")
    {
        operational_state = value;
        operational_state.value_namespace = name_space;
        operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-state")
    {
        administrative_state = value;
        administrative_state.value_namespace = name_space;
        administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msd")
    {
        msd = value;
        msd.value_namespace = name_space;
        msd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-margin")
    {
        absolute_margin = value;
        absolute_margin.value_namespace = name_space;
        absolute_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-margin")
    {
        relative_margin = value;
        relative_margin.value_namespace = name_space;
        relative_margin.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type.yfilter = yfilter;
    }
    if(value_path == "operational-state")
    {
        operational_state.yfilter = yfilter;
    }
    if(value_path == "administrative-state")
    {
        administrative_state.yfilter = yfilter;
    }
    if(value_path == "msd")
    {
        msd.yfilter = yfilter;
    }
    if(value_path == "absolute-margin")
    {
        absolute_margin.yfilter = yfilter;
    }
    if(value_path == "relative-margin")
    {
        relative_margin.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "lspid" || name == "binding-sid" || name == "lsp-setup-type" || name == "operational-state" || name == "administrative-state" || name == "msd" || name == "absolute-margin" || name == "relative-margin")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "brief-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::~SourceAddress()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::DestinationAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "brief-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::~DestinationAddress()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ErOs()
    :
    reported_metric_type{YType::uint32, "reported-metric-type"},
    reported_metric_value{YType::uint32, "reported-metric-value"},
    computed_metric_type{YType::uint32, "computed-metric-type"},
    computed_metric_value{YType::uint32, "computed-metric-value"},
    computed_hop_list_time{YType::uint32, "computed-hop-list-time"}
        ,
    reported_rsvp_path(this, {})
    , reported_sr_path(this, {})
    , computed_rsvp_path(this, {})
    , computed_sr_path(this, {})
{

    yang_name = "er-os"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::~ErOs()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reported_rsvp_path.len(); index++)
    {
        if(reported_rsvp_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reported_sr_path.len(); index++)
    {
        if(reported_sr_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<computed_rsvp_path.len(); index++)
    {
        if(computed_rsvp_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<computed_sr_path.len(); index++)
    {
        if(computed_sr_path[index]->has_data())
            return true;
    }
    return reported_metric_type.is_set
	|| reported_metric_value.is_set
	|| computed_metric_type.is_set
	|| computed_metric_value.is_set
	|| computed_hop_list_time.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::has_operation() const
{
    for (std::size_t index=0; index<reported_rsvp_path.len(); index++)
    {
        if(reported_rsvp_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reported_sr_path.len(); index++)
    {
        if(reported_sr_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<computed_rsvp_path.len(); index++)
    {
        if(computed_rsvp_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<computed_sr_path.len(); index++)
    {
        if(computed_sr_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reported_metric_type.yfilter)
	|| ydk::is_set(reported_metric_value.yfilter)
	|| ydk::is_set(computed_metric_type.yfilter)
	|| ydk::is_set(computed_metric_value.yfilter)
	|| ydk::is_set(computed_hop_list_time.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "er-os";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reported_metric_type.is_set || is_set(reported_metric_type.yfilter)) leaf_name_data.push_back(reported_metric_type.get_name_leafdata());
    if (reported_metric_value.is_set || is_set(reported_metric_value.yfilter)) leaf_name_data.push_back(reported_metric_value.get_name_leafdata());
    if (computed_metric_type.is_set || is_set(computed_metric_type.yfilter)) leaf_name_data.push_back(computed_metric_type.get_name_leafdata());
    if (computed_metric_value.is_set || is_set(computed_metric_value.yfilter)) leaf_name_data.push_back(computed_metric_value.get_name_leafdata());
    if (computed_hop_list_time.is_set || is_set(computed_hop_list_time.yfilter)) leaf_name_data.push_back(computed_hop_list_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reported-rsvp-path")
    {
        auto ent_ = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath>();
        ent_->parent = this;
        reported_rsvp_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "reported-sr-path")
    {
        auto ent_ = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath>();
        ent_->parent = this;
        reported_sr_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "computed-rsvp-path")
    {
        auto ent_ = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath>();
        ent_->parent = this;
        computed_rsvp_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "computed-sr-path")
    {
        auto ent_ = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath>();
        ent_->parent = this;
        computed_sr_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reported_rsvp_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : reported_sr_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : computed_rsvp_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : computed_sr_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reported-metric-type")
    {
        reported_metric_type = value;
        reported_metric_type.value_namespace = name_space;
        reported_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported-metric-value")
    {
        reported_metric_value = value;
        reported_metric_value.value_namespace = name_space;
        reported_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computed-metric-type")
    {
        computed_metric_type = value;
        computed_metric_type.value_namespace = name_space;
        computed_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computed-metric-value")
    {
        computed_metric_value = value;
        computed_metric_value.value_namespace = name_space;
        computed_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computed-hop-list-time")
    {
        computed_hop_list_time = value;
        computed_hop_list_time.value_namespace = name_space;
        computed_hop_list_time.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reported-metric-type")
    {
        reported_metric_type.yfilter = yfilter;
    }
    if(value_path == "reported-metric-value")
    {
        reported_metric_value.yfilter = yfilter;
    }
    if(value_path == "computed-metric-type")
    {
        computed_metric_type.yfilter = yfilter;
    }
    if(value_path == "computed-metric-value")
    {
        computed_metric_value.yfilter = yfilter;
    }
    if(value_path == "computed-hop-list-time")
    {
        computed_hop_list_time.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reported-rsvp-path" || name == "reported-sr-path" || name == "computed-rsvp-path" || name == "computed-sr-path" || name == "reported-metric-type" || name == "reported-metric-value" || name == "computed-metric-type" || name == "computed-metric-value" || name == "computed-hop-list-time")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::ReportedRsvpPath()
    :
    hop_address{YType::str, "hop-address"}
{

    yang_name = "reported-rsvp-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::~ReportedRsvpPath()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::has_data() const
{
    if (is_presence_container) return true;
    return hop_address.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_address.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reported-rsvp-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-address")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::ReportedSrPath()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"}
        ,
    local_addr(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr>())
    , remote_addr(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr>())
{
    local_addr->parent = this;
    remote_addr->parent = this;

    yang_name = "reported-sr-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::~ReportedSrPath()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| (local_addr !=  nullptr && local_addr->has_data())
	|| (remote_addr !=  nullptr && remote_addr->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (local_addr !=  nullptr && local_addr->has_operation())
	|| (remote_addr !=  nullptr && remote_addr->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reported-sr-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-addr")
    {
        if(local_addr == nullptr)
        {
            local_addr = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr>();
        }
        return local_addr;
    }

    if(child_yang_name == "remote-addr")
    {
        if(remote_addr == nullptr)
        {
            remote_addr = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr>();
        }
        return remote_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_addr != nullptr)
    {
        _children["local-addr"] = local_addr;
    }

    if(remote_addr != nullptr)
    {
        _children["remote-addr"] = remote_addr;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-addr" || name == "remote-addr" || name == "sid-type" || name == "mpls-label")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::LocalAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-addr"; yang_parent_name = "reported-sr-path"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::~LocalAddr()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::RemoteAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "remote-addr"; yang_parent_name = "reported-sr-path"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::~RemoteAddr()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::ComputedRsvpPath()
    :
    hop_address{YType::str, "hop-address"}
{

    yang_name = "computed-rsvp-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::~ComputedRsvpPath()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::has_data() const
{
    if (is_presence_container) return true;
    return hop_address.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_address.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "computed-rsvp-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-address")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::ComputedSrPath()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"}
        ,
    local_addr(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr>())
    , remote_addr(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr>())
{
    local_addr->parent = this;
    remote_addr->parent = this;

    yang_name = "computed-sr-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::~ComputedSrPath()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| (local_addr !=  nullptr && local_addr->has_data())
	|| (remote_addr !=  nullptr && remote_addr->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (local_addr !=  nullptr && local_addr->has_operation())
	|| (remote_addr !=  nullptr && remote_addr->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "computed-sr-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-addr")
    {
        if(local_addr == nullptr)
        {
            local_addr = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr>();
        }
        return local_addr;
    }

    if(child_yang_name == "remote-addr")
    {
        if(remote_addr == nullptr)
        {
            remote_addr = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr>();
        }
        return remote_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_addr != nullptr)
    {
        _children["local-addr"] = local_addr;
    }

    if(remote_addr != nullptr)
    {
        _children["remote-addr"] = remote_addr;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-addr" || name == "remote-addr" || name == "sid-type" || name == "mpls-label")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::LocalAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-addr"; yang_parent_name = "computed-sr-path"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::~LocalAddr()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::RemoteAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "remote-addr"; yang_parent_name = "computed-sr-path"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::~RemoteAddr()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::LsppcepInformation()
    :
    pcepid{YType::uint32, "pcepid"},
    pcep_flag_d{YType::boolean, "pcep-flag-d"},
    pcep_flag_s{YType::boolean, "pcep-flag-s"},
    pcep_flag_r{YType::boolean, "pcep-flag-r"},
    pcep_flag_a{YType::boolean, "pcep-flag-a"},
    pcep_flag_o{YType::uint8, "pcep-flag-o"},
    pcep_flag_c{YType::uint8, "pcep-flag-c"}
        ,
    rsvp_error(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError>())
{
    rsvp_error->parent = this;

    yang_name = "lsppcep-information"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::~LsppcepInformation()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::has_data() const
{
    if (is_presence_container) return true;
    return pcepid.is_set
	|| pcep_flag_d.is_set
	|| pcep_flag_s.is_set
	|| pcep_flag_r.is_set
	|| pcep_flag_a.is_set
	|| pcep_flag_o.is_set
	|| pcep_flag_c.is_set
	|| (rsvp_error !=  nullptr && rsvp_error->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcepid.yfilter)
	|| ydk::is_set(pcep_flag_d.yfilter)
	|| ydk::is_set(pcep_flag_s.yfilter)
	|| ydk::is_set(pcep_flag_r.yfilter)
	|| ydk::is_set(pcep_flag_a.yfilter)
	|| ydk::is_set(pcep_flag_o.yfilter)
	|| ydk::is_set(pcep_flag_c.yfilter)
	|| (rsvp_error !=  nullptr && rsvp_error->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsppcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcepid.is_set || is_set(pcepid.yfilter)) leaf_name_data.push_back(pcepid.get_name_leafdata());
    if (pcep_flag_d.is_set || is_set(pcep_flag_d.yfilter)) leaf_name_data.push_back(pcep_flag_d.get_name_leafdata());
    if (pcep_flag_s.is_set || is_set(pcep_flag_s.yfilter)) leaf_name_data.push_back(pcep_flag_s.get_name_leafdata());
    if (pcep_flag_r.is_set || is_set(pcep_flag_r.yfilter)) leaf_name_data.push_back(pcep_flag_r.get_name_leafdata());
    if (pcep_flag_a.is_set || is_set(pcep_flag_a.yfilter)) leaf_name_data.push_back(pcep_flag_a.get_name_leafdata());
    if (pcep_flag_o.is_set || is_set(pcep_flag_o.yfilter)) leaf_name_data.push_back(pcep_flag_o.get_name_leafdata());
    if (pcep_flag_c.is_set || is_set(pcep_flag_c.yfilter)) leaf_name_data.push_back(pcep_flag_c.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-error")
    {
        if(rsvp_error == nullptr)
        {
            rsvp_error = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError>();
        }
        return rsvp_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_error != nullptr)
    {
        _children["rsvp-error"] = rsvp_error;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcepid")
    {
        pcepid = value;
        pcepid.value_namespace = name_space;
        pcepid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-d")
    {
        pcep_flag_d = value;
        pcep_flag_d.value_namespace = name_space;
        pcep_flag_d.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-s")
    {
        pcep_flag_s = value;
        pcep_flag_s.value_namespace = name_space;
        pcep_flag_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-r")
    {
        pcep_flag_r = value;
        pcep_flag_r.value_namespace = name_space;
        pcep_flag_r.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-a")
    {
        pcep_flag_a = value;
        pcep_flag_a.value_namespace = name_space;
        pcep_flag_a.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-o")
    {
        pcep_flag_o = value;
        pcep_flag_o.value_namespace = name_space;
        pcep_flag_o.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-c")
    {
        pcep_flag_c = value;
        pcep_flag_c.value_namespace = name_space;
        pcep_flag_c.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcepid")
    {
        pcepid.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-d")
    {
        pcep_flag_d.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-s")
    {
        pcep_flag_s.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-r")
    {
        pcep_flag_r.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-a")
    {
        pcep_flag_a.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-o")
    {
        pcep_flag_o.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-c")
    {
        pcep_flag_c.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-error" || name == "pcepid" || name == "pcep-flag-d" || name == "pcep-flag-s" || name == "pcep-flag-r" || name == "pcep-flag-a" || name == "pcep-flag-o" || name == "pcep-flag-c")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::RsvpError()
    :
    node_address{YType::str, "node-address"},
    error_flags{YType::uint8, "error-flags"},
    error_code{YType::uint8, "error-code"},
    error_value{YType::uint16, "error-value"}
{

    yang_name = "rsvp-error"; yang_parent_name = "lsppcep-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::~RsvpError()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::has_data() const
{
    if (is_presence_container) return true;
    return node_address.is_set
	|| error_flags.is_set
	|| error_code.is_set
	|| error_value.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_address.yfilter)
	|| ydk::is_set(error_flags.yfilter)
	|| ydk::is_set(error_code.yfilter)
	|| ydk::is_set(error_value.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_address.is_set || is_set(node_address.yfilter)) leaf_name_data.push_back(node_address.get_name_leafdata());
    if (error_flags.is_set || is_set(error_flags.yfilter)) leaf_name_data.push_back(error_flags.get_name_leafdata());
    if (error_code.is_set || is_set(error_code.yfilter)) leaf_name_data.push_back(error_code.get_name_leafdata());
    if (error_value.is_set || is_set(error_value.yfilter)) leaf_name_data.push_back(error_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-address")
    {
        node_address = value;
        node_address.value_namespace = name_space;
        node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-flags")
    {
        error_flags = value;
        error_flags.value_namespace = name_space;
        error_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-code")
    {
        error_code = value;
        error_code.value_namespace = name_space;
        error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-value")
    {
        error_value = value;
        error_value.value_namespace = name_space;
        error_value.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-address")
    {
        node_address.yfilter = yfilter;
    }
    if(value_path == "error-flags")
    {
        error_flags.yfilter = yfilter;
    }
    if(value_path == "error-code")
    {
        error_code.yfilter = yfilter;
    }
    if(value_path == "error-value")
    {
        error_value.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-address" || name == "error-flags" || name == "error-code" || name == "error-value")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::LspAssociationInfo()
    :
    association_type{YType::uint32, "association-type"},
    association_id{YType::uint32, "association-id"}
        ,
    association_source(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource>())
{
    association_source->parent = this;

    yang_name = "lsp-association-info"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::~LspAssociationInfo()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::has_data() const
{
    if (is_presence_container) return true;
    return association_type.is_set
	|| association_id.is_set
	|| (association_source !=  nullptr && association_source->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association_type.yfilter)
	|| ydk::is_set(association_id.yfilter)
	|| (association_source !=  nullptr && association_source->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-association-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_type.is_set || is_set(association_type.yfilter)) leaf_name_data.push_back(association_type.get_name_leafdata());
    if (association_id.is_set || is_set(association_id.yfilter)) leaf_name_data.push_back(association_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-source")
    {
        if(association_source == nullptr)
        {
            association_source = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource>();
        }
        return association_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(association_source != nullptr)
    {
        _children["association-source"] = association_source;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-type")
    {
        association_type = value;
        association_type.value_namespace = name_space;
        association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-id")
    {
        association_id = value;
        association_id.value_namespace = name_space;
        association_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-type")
    {
        association_type.yfilter = yfilter;
    }
    if(value_path == "association-id")
    {
        association_id.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-source" || name == "association-type" || name == "association-id")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::AssociationSource()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "association-source"; yang_parent_name = "lsp-association-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::~AssociationSource()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::LspAttributes()
    :
    affinity_exclude_any{YType::uint32, "affinity-exclude-any"},
    affinity_include_any{YType::uint32, "affinity-include-any"},
    affinity_include_all{YType::uint32, "affinity-include-all"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    local_protection{YType::boolean, "local-protection"}
{

    yang_name = "lsp-attributes"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::~LspAttributes()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::has_data() const
{
    if (is_presence_container) return true;
    return affinity_exclude_any.is_set
	|| affinity_include_any.is_set
	|| affinity_include_all.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| local_protection.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_exclude_any.yfilter)
	|| ydk::is_set(affinity_include_any.yfilter)
	|| ydk::is_set(affinity_include_all.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(local_protection.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_exclude_any.is_set || is_set(affinity_exclude_any.yfilter)) leaf_name_data.push_back(affinity_exclude_any.get_name_leafdata());
    if (affinity_include_any.is_set || is_set(affinity_include_any.yfilter)) leaf_name_data.push_back(affinity_include_any.get_name_leafdata());
    if (affinity_include_all.is_set || is_set(affinity_include_all.yfilter)) leaf_name_data.push_back(affinity_include_all.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (local_protection.is_set || is_set(local_protection.yfilter)) leaf_name_data.push_back(local_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-exclude-any")
    {
        affinity_exclude_any = value;
        affinity_exclude_any.value_namespace = name_space;
        affinity_exclude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-include-any")
    {
        affinity_include_any = value;
        affinity_include_any.value_namespace = name_space;
        affinity_include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-include-all")
    {
        affinity_include_all = value;
        affinity_include_all.value_namespace = name_space;
        affinity_include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-protection")
    {
        local_protection = value;
        local_protection.value_namespace = name_space;
        local_protection.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-exclude-any")
    {
        affinity_exclude_any.yfilter = yfilter;
    }
    if(value_path == "affinity-include-any")
    {
        affinity_include_any.yfilter = yfilter;
    }
    if(value_path == "affinity-include-all")
    {
        affinity_include_all.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "local-protection")
    {
        local_protection.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-exclude-any" || name == "affinity-include-any" || name == "affinity-include-all" || name == "setup-priority" || name == "hold-priority" || name == "local-protection")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::SubDelegatedPce()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sub-delegated-pce"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::~SubDelegatedPce()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-delegated-pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::StateSyncPce()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "state-sync-pce"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::~StateSyncPce()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-sync-pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::ReportingPccAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "reporting-pcc-address"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::~ReportingPccAddress()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reporting-pcc-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::Rro()
    :
    rro_type{YType::enumeration, "rro-type"},
    ipv4_address{YType::str, "ipv4-address"},
    mpls_label{YType::uint32, "mpls-label"},
    flags{YType::uint8, "flags"}
        ,
    sr_rro(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro>())
{
    sr_rro->parent = this;

    yang_name = "rro"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::~Rro()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::has_data() const
{
    if (is_presence_container) return true;
    return rro_type.is_set
	|| ipv4_address.is_set
	|| mpls_label.is_set
	|| flags.is_set
	|| (sr_rro !=  nullptr && sr_rro->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (sr_rro !=  nullptr && sr_rro->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-rro")
    {
        if(sr_rro == nullptr)
        {
            sr_rro = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro>();
        }
        return sr_rro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_rro != nullptr)
    {
        _children["sr-rro"] = sr_rro;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-rro" || name == "rro-type" || name == "ipv4-address" || name == "mpls-label" || name == "flags")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::SrRro()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"}
        ,
    local_addr(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr>())
    , remote_addr(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr>())
{
    local_addr->parent = this;
    remote_addr->parent = this;

    yang_name = "sr-rro"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::~SrRro()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| (local_addr !=  nullptr && local_addr->has_data())
	|| (remote_addr !=  nullptr && remote_addr->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (local_addr !=  nullptr && local_addr->has_operation())
	|| (remote_addr !=  nullptr && remote_addr->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-addr")
    {
        if(local_addr == nullptr)
        {
            local_addr = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr>();
        }
        return local_addr;
    }

    if(child_yang_name == "remote-addr")
    {
        if(remote_addr == nullptr)
        {
            remote_addr = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr>();
        }
        return remote_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_addr != nullptr)
    {
        _children["local-addr"] = local_addr;
    }

    if(remote_addr != nullptr)
    {
        _children["remote-addr"] = remote_addr;
    }

    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-addr" || name == "remote-addr" || name == "sid-type" || name == "mpls-label")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::LocalAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-addr"; yang_parent_name = "sr-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::~LocalAddr()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::RemoteAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "remote-addr"; yang_parent_name = "sr-rro"; is_top_level_class = false; has_list_ancestor = true; 
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::~RemoteAddr()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PcePeer::PcePeer()
    :
    peer_detail_infos(std::make_shared<PcePeer::PeerDetailInfos>())
    , peer_infos(std::make_shared<PcePeer::PeerInfos>())
{
    peer_detail_infos->parent = this;
    peer_infos->parent = this;

    yang_name = "pce-peer"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PcePeer::~PcePeer()
{
}

bool PcePeer::has_data() const
{
    if (is_presence_container) return true;
    return (peer_detail_infos !=  nullptr && peer_detail_infos->has_data())
	|| (peer_infos !=  nullptr && peer_infos->has_data());
}

bool PcePeer::has_operation() const
{
    return is_set(yfilter)
	|| (peer_detail_infos !=  nullptr && peer_detail_infos->has_operation())
	|| (peer_infos !=  nullptr && peer_infos->has_operation());
}

std::string PcePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-detail-infos")
    {
        if(peer_detail_infos == nullptr)
        {
            peer_detail_infos = std::make_shared<PcePeer::PeerDetailInfos>();
        }
        return peer_detail_infos;
    }

    if(child_yang_name == "peer-infos")
    {
        if(peer_infos == nullptr)
        {
            peer_infos = std::make_shared<PcePeer::PeerInfos>();
        }
        return peer_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_detail_infos != nullptr)
    {
        _children["peer-detail-infos"] = peer_detail_infos;
    }

    if(peer_infos != nullptr)
    {
        _children["peer-infos"] = peer_infos;
    }

    return _children;
}

void PcePeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PcePeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> PcePeer::clone_ptr() const
{
    return std::make_shared<PcePeer>();
}

std::string PcePeer::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PcePeer::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PcePeer::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PcePeer::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PcePeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-detail-infos" || name == "peer-infos")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfos()
    :
    peer_detail_info(this, {"peer_address"})
{

    yang_name = "peer-detail-infos"; yang_parent_name = "pce-peer"; is_top_level_class = false; has_list_ancestor = false; 
}

PcePeer::PeerDetailInfos::~PeerDetailInfos()
{
}

bool PcePeer::PeerDetailInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_detail_info.len(); index++)
    {
        if(peer_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool PcePeer::PeerDetailInfos::has_operation() const
{
    for (std::size_t index=0; index<peer_detail_info.len(); index++)
    {
        if(peer_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PcePeer::PeerDetailInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string PcePeer::PeerDetailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-detail-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::PeerDetailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-detail-info")
    {
        auto ent_ = std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo>();
        ent_->parent = this;
        peer_detail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::PeerDetailInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_detail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PcePeer::PeerDetailInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PcePeer::PeerDetailInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PcePeer::PeerDetailInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-detail-info")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::PeerDetailInfo()
    :
    peer_address{YType::str, "peer-address"},
    peer_protocol{YType::enumeration, "peer-protocol"},
    max_sid_depth{YType::uint32, "max-sid-depth"}
        ,
    peer_address_xr(std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr>())
    , detail_pcep_information(std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation>())
{
    peer_address_xr->parent = this;
    detail_pcep_information->parent = this;

    yang_name = "peer-detail-info"; yang_parent_name = "peer-detail-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

PcePeer::PeerDetailInfos::PeerDetailInfo::~PeerDetailInfo()
{
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return peer_address.is_set
	|| peer_protocol.is_set
	|| max_sid_depth.is_set
	|| (peer_address_xr !=  nullptr && peer_address_xr->has_data())
	|| (detail_pcep_information !=  nullptr && detail_pcep_information->has_data());
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(peer_protocol.yfilter)
	|| ydk::is_set(max_sid_depth.yfilter)
	|| (peer_address_xr !=  nullptr && peer_address_xr->has_operation())
	|| (detail_pcep_information !=  nullptr && detail_pcep_information->has_operation());
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-peer/peer-detail-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-detail-info";
    ADD_KEY_TOKEN(peer_address, "peer-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::PeerDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_protocol.is_set || is_set(peer_protocol.yfilter)) leaf_name_data.push_back(peer_protocol.get_name_leafdata());
    if (max_sid_depth.is_set || is_set(max_sid_depth.yfilter)) leaf_name_data.push_back(max_sid_depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::PeerDetailInfos::PeerDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-address-xr")
    {
        if(peer_address_xr == nullptr)
        {
            peer_address_xr = std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr>();
        }
        return peer_address_xr;
    }

    if(child_yang_name == "detail-pcep-information")
    {
        if(detail_pcep_information == nullptr)
        {
            detail_pcep_information = std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation>();
        }
        return detail_pcep_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::PeerDetailInfos::PeerDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_address_xr != nullptr)
    {
        _children["peer-address-xr"] = peer_address_xr;
    }

    if(detail_pcep_information != nullptr)
    {
        _children["detail-pcep-information"] = detail_pcep_information;
    }

    return _children;
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol = value;
        peer_protocol.value_namespace = name_space;
        peer_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sid-depth")
    {
        max_sid_depth = value;
        max_sid_depth.value_namespace = name_space;
        max_sid_depth.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol.yfilter = yfilter;
    }
    if(value_path == "max-sid-depth")
    {
        max_sid_depth.yfilter = yfilter;
    }
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address-xr" || name == "detail-pcep-information" || name == "peer-address" || name == "peer-protocol" || name == "max-sid-depth")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::PeerAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "peer-address-xr"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::~PeerAddressXr()
{
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::DetailPcepInformation()
    :
    error{YType::str, "error"},
    speaker_id{YType::str, "speaker-id"},
    pcep_up_time{YType::uint32, "pcep-up-time"},
    keepalives{YType::uint32, "keepalives"},
    md5_enabled{YType::boolean, "md5-enabled"},
    keychain_enabled{YType::boolean, "keychain-enabled"},
    negotiated_local_keepalive{YType::uint32, "negotiated-local-keepalive"},
    negotiated_remote_keepalive{YType::uint32, "negotiated-remote-keepalive"},
    negotiated_dead_time{YType::uint32, "negotiated-dead-time"},
    pce_request_rx{YType::uint32, "pce-request-rx"},
    pce_request_tx{YType::uint32, "pce-request-tx"},
    pce_reply_rx{YType::uint32, "pce-reply-rx"},
    pce_reply_tx{YType::uint32, "pce-reply-tx"},
    pce_error_rx{YType::uint32, "pce-error-rx"},
    pce_error_tx{YType::uint32, "pce-error-tx"},
    pce_open_tx{YType::uint32, "pce-open-tx"},
    pce_open_rx{YType::uint32, "pce-open-rx"},
    pce_report_rx{YType::uint32, "pce-report-rx"},
    pce_report_tx{YType::uint32, "pce-report-tx"},
    pce_update_rx{YType::uint32, "pce-update-rx"},
    pce_update_tx{YType::uint32, "pce-update-tx"},
    pce_initiate_rx{YType::uint32, "pce-initiate-rx"},
    pce_initiate_tx{YType::uint32, "pce-initiate-tx"},
    pce_keepalive_tx{YType::uint64, "pce-keepalive-tx"},
    pce_keepalive_rx{YType::uint64, "pce-keepalive-rx"},
    local_session_id{YType::uint8, "local-session-id"},
    remote_session_id{YType::uint8, "remote-session-id"},
    minimum_keepalive_interval{YType::uint8, "minimum-keepalive-interval"},
    maximum_dead_interval{YType::uint8, "maximum-dead-interval"},
    max_sid_depth{YType::uint8, "max-sid-depth"}
        ,
    brief_pcep_information(std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation>())
    , last_error_rx(std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx>())
    , last_error_tx(std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx>())
{
    brief_pcep_information->parent = this;
    last_error_rx->parent = this;
    last_error_tx->parent = this;

    yang_name = "detail-pcep-information"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::~DetailPcepInformation()
{
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_data() const
{
    if (is_presence_container) return true;
    return error.is_set
	|| speaker_id.is_set
	|| pcep_up_time.is_set
	|| keepalives.is_set
	|| md5_enabled.is_set
	|| keychain_enabled.is_set
	|| negotiated_local_keepalive.is_set
	|| negotiated_remote_keepalive.is_set
	|| negotiated_dead_time.is_set
	|| pce_request_rx.is_set
	|| pce_request_tx.is_set
	|| pce_reply_rx.is_set
	|| pce_reply_tx.is_set
	|| pce_error_rx.is_set
	|| pce_error_tx.is_set
	|| pce_open_tx.is_set
	|| pce_open_rx.is_set
	|| pce_report_rx.is_set
	|| pce_report_tx.is_set
	|| pce_update_rx.is_set
	|| pce_update_tx.is_set
	|| pce_initiate_rx.is_set
	|| pce_initiate_tx.is_set
	|| pce_keepalive_tx.is_set
	|| pce_keepalive_rx.is_set
	|| local_session_id.is_set
	|| remote_session_id.is_set
	|| minimum_keepalive_interval.is_set
	|| maximum_dead_interval.is_set
	|| max_sid_depth.is_set
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_data())
	|| (last_error_rx !=  nullptr && last_error_rx->has_data())
	|| (last_error_tx !=  nullptr && last_error_tx->has_data());
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(speaker_id.yfilter)
	|| ydk::is_set(pcep_up_time.yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(md5_enabled.yfilter)
	|| ydk::is_set(keychain_enabled.yfilter)
	|| ydk::is_set(negotiated_local_keepalive.yfilter)
	|| ydk::is_set(negotiated_remote_keepalive.yfilter)
	|| ydk::is_set(negotiated_dead_time.yfilter)
	|| ydk::is_set(pce_request_rx.yfilter)
	|| ydk::is_set(pce_request_tx.yfilter)
	|| ydk::is_set(pce_reply_rx.yfilter)
	|| ydk::is_set(pce_reply_tx.yfilter)
	|| ydk::is_set(pce_error_rx.yfilter)
	|| ydk::is_set(pce_error_tx.yfilter)
	|| ydk::is_set(pce_open_tx.yfilter)
	|| ydk::is_set(pce_open_rx.yfilter)
	|| ydk::is_set(pce_report_rx.yfilter)
	|| ydk::is_set(pce_report_tx.yfilter)
	|| ydk::is_set(pce_update_rx.yfilter)
	|| ydk::is_set(pce_update_tx.yfilter)
	|| ydk::is_set(pce_initiate_rx.yfilter)
	|| ydk::is_set(pce_initiate_tx.yfilter)
	|| ydk::is_set(pce_keepalive_tx.yfilter)
	|| ydk::is_set(pce_keepalive_rx.yfilter)
	|| ydk::is_set(local_session_id.yfilter)
	|| ydk::is_set(remote_session_id.yfilter)
	|| ydk::is_set(minimum_keepalive_interval.yfilter)
	|| ydk::is_set(maximum_dead_interval.yfilter)
	|| ydk::is_set(max_sid_depth.yfilter)
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_operation())
	|| (last_error_rx !=  nullptr && last_error_rx->has_operation())
	|| (last_error_tx !=  nullptr && last_error_tx->has_operation());
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-pcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.yfilter)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (pcep_up_time.is_set || is_set(pcep_up_time.yfilter)) leaf_name_data.push_back(pcep_up_time.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (md5_enabled.is_set || is_set(md5_enabled.yfilter)) leaf_name_data.push_back(md5_enabled.get_name_leafdata());
    if (keychain_enabled.is_set || is_set(keychain_enabled.yfilter)) leaf_name_data.push_back(keychain_enabled.get_name_leafdata());
    if (negotiated_local_keepalive.is_set || is_set(negotiated_local_keepalive.yfilter)) leaf_name_data.push_back(negotiated_local_keepalive.get_name_leafdata());
    if (negotiated_remote_keepalive.is_set || is_set(negotiated_remote_keepalive.yfilter)) leaf_name_data.push_back(negotiated_remote_keepalive.get_name_leafdata());
    if (negotiated_dead_time.is_set || is_set(negotiated_dead_time.yfilter)) leaf_name_data.push_back(negotiated_dead_time.get_name_leafdata());
    if (pce_request_rx.is_set || is_set(pce_request_rx.yfilter)) leaf_name_data.push_back(pce_request_rx.get_name_leafdata());
    if (pce_request_tx.is_set || is_set(pce_request_tx.yfilter)) leaf_name_data.push_back(pce_request_tx.get_name_leafdata());
    if (pce_reply_rx.is_set || is_set(pce_reply_rx.yfilter)) leaf_name_data.push_back(pce_reply_rx.get_name_leafdata());
    if (pce_reply_tx.is_set || is_set(pce_reply_tx.yfilter)) leaf_name_data.push_back(pce_reply_tx.get_name_leafdata());
    if (pce_error_rx.is_set || is_set(pce_error_rx.yfilter)) leaf_name_data.push_back(pce_error_rx.get_name_leafdata());
    if (pce_error_tx.is_set || is_set(pce_error_tx.yfilter)) leaf_name_data.push_back(pce_error_tx.get_name_leafdata());
    if (pce_open_tx.is_set || is_set(pce_open_tx.yfilter)) leaf_name_data.push_back(pce_open_tx.get_name_leafdata());
    if (pce_open_rx.is_set || is_set(pce_open_rx.yfilter)) leaf_name_data.push_back(pce_open_rx.get_name_leafdata());
    if (pce_report_rx.is_set || is_set(pce_report_rx.yfilter)) leaf_name_data.push_back(pce_report_rx.get_name_leafdata());
    if (pce_report_tx.is_set || is_set(pce_report_tx.yfilter)) leaf_name_data.push_back(pce_report_tx.get_name_leafdata());
    if (pce_update_rx.is_set || is_set(pce_update_rx.yfilter)) leaf_name_data.push_back(pce_update_rx.get_name_leafdata());
    if (pce_update_tx.is_set || is_set(pce_update_tx.yfilter)) leaf_name_data.push_back(pce_update_tx.get_name_leafdata());
    if (pce_initiate_rx.is_set || is_set(pce_initiate_rx.yfilter)) leaf_name_data.push_back(pce_initiate_rx.get_name_leafdata());
    if (pce_initiate_tx.is_set || is_set(pce_initiate_tx.yfilter)) leaf_name_data.push_back(pce_initiate_tx.get_name_leafdata());
    if (pce_keepalive_tx.is_set || is_set(pce_keepalive_tx.yfilter)) leaf_name_data.push_back(pce_keepalive_tx.get_name_leafdata());
    if (pce_keepalive_rx.is_set || is_set(pce_keepalive_rx.yfilter)) leaf_name_data.push_back(pce_keepalive_rx.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.yfilter)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.yfilter)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (minimum_keepalive_interval.is_set || is_set(minimum_keepalive_interval.yfilter)) leaf_name_data.push_back(minimum_keepalive_interval.get_name_leafdata());
    if (maximum_dead_interval.is_set || is_set(maximum_dead_interval.yfilter)) leaf_name_data.push_back(maximum_dead_interval.get_name_leafdata());
    if (max_sid_depth.is_set || is_set(max_sid_depth.yfilter)) leaf_name_data.push_back(max_sid_depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-pcep-information")
    {
        if(brief_pcep_information == nullptr)
        {
            brief_pcep_information = std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation>();
        }
        return brief_pcep_information;
    }

    if(child_yang_name == "last-error-rx")
    {
        if(last_error_rx == nullptr)
        {
            last_error_rx = std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx>();
        }
        return last_error_rx;
    }

    if(child_yang_name == "last-error-tx")
    {
        if(last_error_tx == nullptr)
        {
            last_error_tx = std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx>();
        }
        return last_error_tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief_pcep_information != nullptr)
    {
        _children["brief-pcep-information"] = brief_pcep_information;
    }

    if(last_error_rx != nullptr)
    {
        _children["last-error-rx"] = last_error_rx;
    }

    if(last_error_tx != nullptr)
    {
        _children["last-error-tx"] = last_error_tx;
    }

    return _children;
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
        speaker_id.value_namespace = name_space;
        speaker_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time = value;
        pcep_up_time.value_namespace = name_space;
        pcep_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled = value;
        md5_enabled.value_namespace = name_space;
        md5_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled = value;
        keychain_enabled.value_namespace = name_space;
        keychain_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-keepalive")
    {
        negotiated_local_keepalive = value;
        negotiated_local_keepalive.value_namespace = name_space;
        negotiated_local_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-keepalive")
    {
        negotiated_remote_keepalive = value;
        negotiated_remote_keepalive.value_namespace = name_space;
        negotiated_remote_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-dead-time")
    {
        negotiated_dead_time = value;
        negotiated_dead_time.value_namespace = name_space;
        negotiated_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-request-rx")
    {
        pce_request_rx = value;
        pce_request_rx.value_namespace = name_space;
        pce_request_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-request-tx")
    {
        pce_request_tx = value;
        pce_request_tx.value_namespace = name_space;
        pce_request_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-reply-rx")
    {
        pce_reply_rx = value;
        pce_reply_rx.value_namespace = name_space;
        pce_reply_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-reply-tx")
    {
        pce_reply_tx = value;
        pce_reply_tx.value_namespace = name_space;
        pce_reply_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-error-rx")
    {
        pce_error_rx = value;
        pce_error_rx.value_namespace = name_space;
        pce_error_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-error-tx")
    {
        pce_error_tx = value;
        pce_error_tx.value_namespace = name_space;
        pce_error_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx = value;
        pce_open_tx.value_namespace = name_space;
        pce_open_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx = value;
        pce_open_rx.value_namespace = name_space;
        pce_open_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-report-rx")
    {
        pce_report_rx = value;
        pce_report_rx.value_namespace = name_space;
        pce_report_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-report-tx")
    {
        pce_report_tx = value;
        pce_report_tx.value_namespace = name_space;
        pce_report_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-update-rx")
    {
        pce_update_rx = value;
        pce_update_rx.value_namespace = name_space;
        pce_update_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-update-tx")
    {
        pce_update_tx = value;
        pce_update_tx.value_namespace = name_space;
        pce_update_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-initiate-rx")
    {
        pce_initiate_rx = value;
        pce_initiate_rx.value_namespace = name_space;
        pce_initiate_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-initiate-tx")
    {
        pce_initiate_tx = value;
        pce_initiate_tx.value_namespace = name_space;
        pce_initiate_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx = value;
        pce_keepalive_tx.value_namespace = name_space;
        pce_keepalive_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx = value;
        pce_keepalive_rx.value_namespace = name_space;
        pce_keepalive_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
        local_session_id.value_namespace = name_space;
        local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
        remote_session_id.value_namespace = name_space;
        remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-keepalive-interval")
    {
        minimum_keepalive_interval = value;
        minimum_keepalive_interval.value_namespace = name_space;
        minimum_keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-dead-interval")
    {
        maximum_dead_interval = value;
        maximum_dead_interval.value_namespace = name_space;
        maximum_dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sid-depth")
    {
        max_sid_depth = value;
        max_sid_depth.value_namespace = name_space;
        max_sid_depth.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "speaker-id")
    {
        speaker_id.yfilter = yfilter;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time.yfilter = yfilter;
    }
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled.yfilter = yfilter;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-keepalive")
    {
        negotiated_local_keepalive.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-keepalive")
    {
        negotiated_remote_keepalive.yfilter = yfilter;
    }
    if(value_path == "negotiated-dead-time")
    {
        negotiated_dead_time.yfilter = yfilter;
    }
    if(value_path == "pce-request-rx")
    {
        pce_request_rx.yfilter = yfilter;
    }
    if(value_path == "pce-request-tx")
    {
        pce_request_tx.yfilter = yfilter;
    }
    if(value_path == "pce-reply-rx")
    {
        pce_reply_rx.yfilter = yfilter;
    }
    if(value_path == "pce-reply-tx")
    {
        pce_reply_tx.yfilter = yfilter;
    }
    if(value_path == "pce-error-rx")
    {
        pce_error_rx.yfilter = yfilter;
    }
    if(value_path == "pce-error-tx")
    {
        pce_error_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx.yfilter = yfilter;
    }
    if(value_path == "pce-report-rx")
    {
        pce_report_rx.yfilter = yfilter;
    }
    if(value_path == "pce-report-tx")
    {
        pce_report_tx.yfilter = yfilter;
    }
    if(value_path == "pce-update-rx")
    {
        pce_update_rx.yfilter = yfilter;
    }
    if(value_path == "pce-update-tx")
    {
        pce_update_tx.yfilter = yfilter;
    }
    if(value_path == "pce-initiate-rx")
    {
        pce_initiate_rx.yfilter = yfilter;
    }
    if(value_path == "pce-initiate-tx")
    {
        pce_initiate_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx.yfilter = yfilter;
    }
    if(value_path == "local-session-id")
    {
        local_session_id.yfilter = yfilter;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id.yfilter = yfilter;
    }
    if(value_path == "minimum-keepalive-interval")
    {
        minimum_keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "maximum-dead-interval")
    {
        maximum_dead_interval.yfilter = yfilter;
    }
    if(value_path == "max-sid-depth")
    {
        max_sid_depth.yfilter = yfilter;
    }
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-pcep-information" || name == "last-error-rx" || name == "last-error-tx" || name == "error" || name == "speaker-id" || name == "pcep-up-time" || name == "keepalives" || name == "md5-enabled" || name == "keychain-enabled" || name == "negotiated-local-keepalive" || name == "negotiated-remote-keepalive" || name == "negotiated-dead-time" || name == "pce-request-rx" || name == "pce-request-tx" || name == "pce-reply-rx" || name == "pce-reply-tx" || name == "pce-error-rx" || name == "pce-error-tx" || name == "pce-open-tx" || name == "pce-open-rx" || name == "pce-report-rx" || name == "pce-report-tx" || name == "pce-update-rx" || name == "pce-update-tx" || name == "pce-initiate-rx" || name == "pce-initiate-tx" || name == "pce-keepalive-tx" || name == "pce-keepalive-rx" || name == "local-session-id" || name == "remote-session-id" || name == "minimum-keepalive-interval" || name == "maximum-dead-interval" || name == "max-sid-depth")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::BriefPcepInformation()
    :
    pcep_state{YType::enumeration, "pcep-state"},
    stateful{YType::boolean, "stateful"},
    capability_update{YType::boolean, "capability-update"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_triggered_sync{YType::boolean, "capability-triggered-sync"},
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_delta_sync{YType::boolean, "capability-delta-sync"}
{

    yang_name = "brief-pcep-information"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::~BriefPcepInformation()
{
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_data() const
{
    if (is_presence_container) return true;
    return pcep_state.is_set
	|| stateful.is_set
	|| capability_update.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_triggered_sync.is_set
	|| capability_db_version.is_set
	|| capability_delta_sync.is_set;
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcep_state.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(capability_triggered_sync.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(capability_delta_sync.yfilter);
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-pcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcep_state.is_set || is_set(pcep_state.yfilter)) leaf_name_data.push_back(pcep_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_triggered_sync.is_set || is_set(capability_triggered_sync.yfilter)) leaf_name_data.push_back(capability_triggered_sync.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_delta_sync.is_set || is_set(capability_delta_sync.yfilter)) leaf_name_data.push_back(capability_delta_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcep-state")
    {
        pcep_state = value;
        pcep_state.value_namespace = name_space;
        pcep_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync = value;
        capability_triggered_sync.value_namespace = name_space;
        capability_triggered_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync = value;
        capability_delta_sync.value_namespace = name_space;
        capability_delta_sync.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcep-state")
    {
        pcep_state.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync.yfilter = yfilter;
    }
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcep-state" || name == "stateful" || name == "capability-update" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "capability-triggered-sync" || name == "capability-db-version" || name == "capability-delta-sync")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::LastErrorRx()
    :
    pc_error_type{YType::uint8, "pc-error-type"},
    pc_error_value{YType::uint8, "pc-error-value"}
{

    yang_name = "last-error-rx"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::~LastErrorRx()
{
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_data() const
{
    if (is_presence_container) return true;
    return pc_error_type.is_set
	|| pc_error_value.is_set;
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pc_error_type.yfilter)
	|| ydk::is_set(pc_error_value.yfilter);
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pc_error_type.is_set || is_set(pc_error_type.yfilter)) leaf_name_data.push_back(pc_error_type.get_name_leafdata());
    if (pc_error_value.is_set || is_set(pc_error_value.yfilter)) leaf_name_data.push_back(pc_error_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type = value;
        pc_error_type.value_namespace = name_space;
        pc_error_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value = value;
        pc_error_value.value_namespace = name_space;
        pc_error_value.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type.yfilter = yfilter;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value.yfilter = yfilter;
    }
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pc-error-type" || name == "pc-error-value")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::LastErrorTx()
    :
    pc_error_type{YType::uint8, "pc-error-type"},
    pc_error_value{YType::uint8, "pc-error-value"}
{

    yang_name = "last-error-tx"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::~LastErrorTx()
{
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_data() const
{
    if (is_presence_container) return true;
    return pc_error_type.is_set
	|| pc_error_value.is_set;
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pc_error_type.yfilter)
	|| ydk::is_set(pc_error_value.yfilter);
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pc_error_type.is_set || is_set(pc_error_type.yfilter)) leaf_name_data.push_back(pc_error_type.get_name_leafdata());
    if (pc_error_value.is_set || is_set(pc_error_value.yfilter)) leaf_name_data.push_back(pc_error_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type = value;
        pc_error_type.value_namespace = name_space;
        pc_error_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value = value;
        pc_error_value.value_namespace = name_space;
        pc_error_value.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type.yfilter = yfilter;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value.yfilter = yfilter;
    }
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pc-error-type" || name == "pc-error-value")
        return true;
    return false;
}

PcePeer::PeerInfos::PeerInfos()
    :
    peer_info(this, {"peer_address"})
{

    yang_name = "peer-infos"; yang_parent_name = "pce-peer"; is_top_level_class = false; has_list_ancestor = false; 
}

PcePeer::PeerInfos::~PeerInfos()
{
}

bool PcePeer::PeerInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_info.len(); index++)
    {
        if(peer_info[index]->has_data())
            return true;
    }
    return false;
}

bool PcePeer::PeerInfos::has_operation() const
{
    for (std::size_t index=0; index<peer_info.len(); index++)
    {
        if(peer_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PcePeer::PeerInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string PcePeer::PeerInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::PeerInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-info")
    {
        auto ent_ = std::make_shared<PcePeer::PeerInfos::PeerInfo>();
        ent_->parent = this;
        peer_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::PeerInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PcePeer::PeerInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PcePeer::PeerInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PcePeer::PeerInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-info")
        return true;
    return false;
}

PcePeer::PeerInfos::PeerInfo::PeerInfo()
    :
    peer_address{YType::str, "peer-address"},
    peer_protocol{YType::enumeration, "peer-protocol"}
        ,
    peer_address_xr(std::make_shared<PcePeer::PeerInfos::PeerInfo::PeerAddressXr>())
    , brief_pcep_information(std::make_shared<PcePeer::PeerInfos::PeerInfo::BriefPcepInformation>())
{
    peer_address_xr->parent = this;
    brief_pcep_information->parent = this;

    yang_name = "peer-info"; yang_parent_name = "peer-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

PcePeer::PeerInfos::PeerInfo::~PeerInfo()
{
}

bool PcePeer::PeerInfos::PeerInfo::has_data() const
{
    if (is_presence_container) return true;
    return peer_address.is_set
	|| peer_protocol.is_set
	|| (peer_address_xr !=  nullptr && peer_address_xr->has_data())
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_data());
}

bool PcePeer::PeerInfos::PeerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(peer_protocol.yfilter)
	|| (peer_address_xr !=  nullptr && peer_address_xr->has_operation())
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_operation());
}

std::string PcePeer::PeerInfos::PeerInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-peer/peer-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string PcePeer::PeerInfos::PeerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-info";
    ADD_KEY_TOKEN(peer_address, "peer-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerInfos::PeerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_protocol.is_set || is_set(peer_protocol.yfilter)) leaf_name_data.push_back(peer_protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::PeerInfos::PeerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-address-xr")
    {
        if(peer_address_xr == nullptr)
        {
            peer_address_xr = std::make_shared<PcePeer::PeerInfos::PeerInfo::PeerAddressXr>();
        }
        return peer_address_xr;
    }

    if(child_yang_name == "brief-pcep-information")
    {
        if(brief_pcep_information == nullptr)
        {
            brief_pcep_information = std::make_shared<PcePeer::PeerInfos::PeerInfo::BriefPcepInformation>();
        }
        return brief_pcep_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::PeerInfos::PeerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_address_xr != nullptr)
    {
        _children["peer-address-xr"] = peer_address_xr;
    }

    if(brief_pcep_information != nullptr)
    {
        _children["brief-pcep-information"] = brief_pcep_information;
    }

    return _children;
}

void PcePeer::PeerInfos::PeerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol = value;
        peer_protocol.value_namespace = name_space;
        peer_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerInfos::PeerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol.yfilter = yfilter;
    }
}

bool PcePeer::PeerInfos::PeerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address-xr" || name == "brief-pcep-information" || name == "peer-address" || name == "peer-protocol")
        return true;
    return false;
}

PcePeer::PeerInfos::PeerInfo::PeerAddressXr::PeerAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "peer-address-xr"; yang_parent_name = "peer-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PcePeer::PeerInfos::PeerInfo::PeerAddressXr::~PeerAddressXr()
{
}

bool PcePeer::PeerInfos::PeerInfo::PeerAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PcePeer::PeerInfos::PeerInfo::PeerAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PcePeer::PeerInfos::PeerInfo::PeerAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerInfos::PeerInfo::PeerAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::PeerInfos::PeerInfo::PeerAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::PeerInfos::PeerInfo::PeerAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PcePeer::PeerInfos::PeerInfo::PeerAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PcePeer::PeerInfos::PeerInfo::PeerAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PcePeer::PeerInfos::PeerInfo::PeerAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::BriefPcepInformation()
    :
    pcep_state{YType::enumeration, "pcep-state"},
    stateful{YType::boolean, "stateful"},
    capability_update{YType::boolean, "capability-update"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_triggered_sync{YType::boolean, "capability-triggered-sync"},
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_delta_sync{YType::boolean, "capability-delta-sync"}
{

    yang_name = "brief-pcep-information"; yang_parent_name = "peer-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::~BriefPcepInformation()
{
}

bool PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::has_data() const
{
    if (is_presence_container) return true;
    return pcep_state.is_set
	|| stateful.is_set
	|| capability_update.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_triggered_sync.is_set
	|| capability_db_version.is_set
	|| capability_delta_sync.is_set;
}

bool PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcep_state.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(capability_triggered_sync.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(capability_delta_sync.yfilter);
}

std::string PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-pcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcep_state.is_set || is_set(pcep_state.yfilter)) leaf_name_data.push_back(pcep_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_triggered_sync.is_set || is_set(capability_triggered_sync.yfilter)) leaf_name_data.push_back(capability_triggered_sync.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_delta_sync.is_set || is_set(capability_delta_sync.yfilter)) leaf_name_data.push_back(capability_delta_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcep-state")
    {
        pcep_state = value;
        pcep_state.value_namespace = name_space;
        pcep_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync = value;
        capability_triggered_sync.value_namespace = name_space;
        capability_triggered_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync = value;
        capability_delta_sync.value_namespace = name_space;
        capability_delta_sync.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcep-state")
    {
        pcep_state.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync.yfilter = yfilter;
    }
}

bool PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcep-state" || name == "stateful" || name == "capability-update" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "capability-triggered-sync" || name == "capability-db-version" || name == "capability-delta-sync")
        return true;
    return false;
}

PceTopology::PceTopology()
    :
    topology_summary(std::make_shared<PceTopology::TopologySummary>())
    , topology_nodes(std::make_shared<PceTopology::TopologyNodes>())
    , prefix_infos(std::make_shared<PceTopology::PrefixInfos>())
{
    topology_summary->parent = this;
    topology_nodes->parent = this;
    prefix_infos->parent = this;

    yang_name = "pce-topology"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PceTopology::~PceTopology()
{
}

bool PceTopology::has_data() const
{
    if (is_presence_container) return true;
    return (topology_summary !=  nullptr && topology_summary->has_data())
	|| (topology_nodes !=  nullptr && topology_nodes->has_data())
	|| (prefix_infos !=  nullptr && prefix_infos->has_data());
}

bool PceTopology::has_operation() const
{
    return is_set(yfilter)
	|| (topology_summary !=  nullptr && topology_summary->has_operation())
	|| (topology_nodes !=  nullptr && topology_nodes->has_operation())
	|| (prefix_infos !=  nullptr && prefix_infos->has_operation());
}

std::string PceTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-summary")
    {
        if(topology_summary == nullptr)
        {
            topology_summary = std::make_shared<PceTopology::TopologySummary>();
        }
        return topology_summary;
    }

    if(child_yang_name == "topology-nodes")
    {
        if(topology_nodes == nullptr)
        {
            topology_nodes = std::make_shared<PceTopology::TopologyNodes>();
        }
        return topology_nodes;
    }

    if(child_yang_name == "prefix-infos")
    {
        if(prefix_infos == nullptr)
        {
            prefix_infos = std::make_shared<PceTopology::PrefixInfos>();
        }
        return prefix_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(topology_summary != nullptr)
    {
        _children["topology-summary"] = topology_summary;
    }

    if(topology_nodes != nullptr)
    {
        _children["topology-nodes"] = topology_nodes;
    }

    if(prefix_infos != nullptr)
    {
        _children["prefix-infos"] = prefix_infos;
    }

    return _children;
}

void PceTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> PceTopology::clone_ptr() const
{
    return std::make_shared<PceTopology>();
}

std::string PceTopology::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PceTopology::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PceTopology::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PceTopology::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PceTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-summary" || name == "topology-nodes" || name == "prefix-infos")
        return true;
    return false;
}

PceTopology::TopologySummary::TopologySummary()
    :
    nodes{YType::uint32, "nodes"},
    lookup_nodes{YType::uint32, "lookup-nodes"},
    prefixes{YType::uint32, "prefixes"},
    prefix_sids{YType::uint32, "prefix-sids"},
    regular_prefix_sids{YType::uint32, "regular-prefix-sids"},
    strict_prefix_sids{YType::uint32, "strict-prefix-sids"},
    links{YType::uint32, "links"},
    epe_links{YType::uint32, "epe-links"},
    adjacency_sids{YType::uint32, "adjacency-sids"},
    epesids{YType::uint32, "epesids"},
    protected_adjacency_sids{YType::uint32, "protected-adjacency-sids"},
    un_protected_adjacency_sids{YType::uint32, "un-protected-adjacency-sids"},
    topology_consistent{YType::boolean, "topology-consistent"}
        ,
    stats_topology_update(std::make_shared<PceTopology::TopologySummary::StatsTopologyUpdate>())
{
    stats_topology_update->parent = this;

    yang_name = "topology-summary"; yang_parent_name = "pce-topology"; is_top_level_class = false; has_list_ancestor = false; 
}

PceTopology::TopologySummary::~TopologySummary()
{
}

bool PceTopology::TopologySummary::has_data() const
{
    if (is_presence_container) return true;
    return nodes.is_set
	|| lookup_nodes.is_set
	|| prefixes.is_set
	|| prefix_sids.is_set
	|| regular_prefix_sids.is_set
	|| strict_prefix_sids.is_set
	|| links.is_set
	|| epe_links.is_set
	|| adjacency_sids.is_set
	|| epesids.is_set
	|| protected_adjacency_sids.is_set
	|| un_protected_adjacency_sids.is_set
	|| topology_consistent.is_set
	|| (stats_topology_update !=  nullptr && stats_topology_update->has_data());
}

bool PceTopology::TopologySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nodes.yfilter)
	|| ydk::is_set(lookup_nodes.yfilter)
	|| ydk::is_set(prefixes.yfilter)
	|| ydk::is_set(prefix_sids.yfilter)
	|| ydk::is_set(regular_prefix_sids.yfilter)
	|| ydk::is_set(strict_prefix_sids.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(epe_links.yfilter)
	|| ydk::is_set(adjacency_sids.yfilter)
	|| ydk::is_set(epesids.yfilter)
	|| ydk::is_set(protected_adjacency_sids.yfilter)
	|| ydk::is_set(un_protected_adjacency_sids.yfilter)
	|| ydk::is_set(topology_consistent.yfilter)
	|| (stats_topology_update !=  nullptr && stats_topology_update->has_operation());
}

std::string PceTopology::TopologySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nodes.is_set || is_set(nodes.yfilter)) leaf_name_data.push_back(nodes.get_name_leafdata());
    if (lookup_nodes.is_set || is_set(lookup_nodes.yfilter)) leaf_name_data.push_back(lookup_nodes.get_name_leafdata());
    if (prefixes.is_set || is_set(prefixes.yfilter)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (prefix_sids.is_set || is_set(prefix_sids.yfilter)) leaf_name_data.push_back(prefix_sids.get_name_leafdata());
    if (regular_prefix_sids.is_set || is_set(regular_prefix_sids.yfilter)) leaf_name_data.push_back(regular_prefix_sids.get_name_leafdata());
    if (strict_prefix_sids.is_set || is_set(strict_prefix_sids.yfilter)) leaf_name_data.push_back(strict_prefix_sids.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (epe_links.is_set || is_set(epe_links.yfilter)) leaf_name_data.push_back(epe_links.get_name_leafdata());
    if (adjacency_sids.is_set || is_set(adjacency_sids.yfilter)) leaf_name_data.push_back(adjacency_sids.get_name_leafdata());
    if (epesids.is_set || is_set(epesids.yfilter)) leaf_name_data.push_back(epesids.get_name_leafdata());
    if (protected_adjacency_sids.is_set || is_set(protected_adjacency_sids.yfilter)) leaf_name_data.push_back(protected_adjacency_sids.get_name_leafdata());
    if (un_protected_adjacency_sids.is_set || is_set(un_protected_adjacency_sids.yfilter)) leaf_name_data.push_back(un_protected_adjacency_sids.get_name_leafdata());
    if (topology_consistent.is_set || is_set(topology_consistent.yfilter)) leaf_name_data.push_back(topology_consistent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats-topology-update")
    {
        if(stats_topology_update == nullptr)
        {
            stats_topology_update = std::make_shared<PceTopology::TopologySummary::StatsTopologyUpdate>();
        }
        return stats_topology_update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stats_topology_update != nullptr)
    {
        _children["stats-topology-update"] = stats_topology_update;
    }

    return _children;
}

void PceTopology::TopologySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nodes")
    {
        nodes = value;
        nodes.value_namespace = name_space;
        nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-nodes")
    {
        lookup_nodes = value;
        lookup_nodes.value_namespace = name_space;
        lookup_nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes")
    {
        prefixes = value;
        prefixes.value_namespace = name_space;
        prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids = value;
        prefix_sids.value_namespace = name_space;
        prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regular-prefix-sids")
    {
        regular_prefix_sids = value;
        regular_prefix_sids.value_namespace = name_space;
        regular_prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-prefix-sids")
    {
        strict_prefix_sids = value;
        strict_prefix_sids.value_namespace = name_space;
        strict_prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epe-links")
    {
        epe_links = value;
        epe_links.value_namespace = name_space;
        epe_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sids")
    {
        adjacency_sids = value;
        adjacency_sids.value_namespace = name_space;
        adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epesids")
    {
        epesids = value;
        epesids.value_namespace = name_space;
        epesids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-adjacency-sids")
    {
        protected_adjacency_sids = value;
        protected_adjacency_sids.value_namespace = name_space;
        protected_adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "un-protected-adjacency-sids")
    {
        un_protected_adjacency_sids = value;
        un_protected_adjacency_sids.value_namespace = name_space;
        un_protected_adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-consistent")
    {
        topology_consistent = value;
        topology_consistent.value_namespace = name_space;
        topology_consistent.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nodes")
    {
        nodes.yfilter = yfilter;
    }
    if(value_path == "lookup-nodes")
    {
        lookup_nodes.yfilter = yfilter;
    }
    if(value_path == "prefixes")
    {
        prefixes.yfilter = yfilter;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids.yfilter = yfilter;
    }
    if(value_path == "regular-prefix-sids")
    {
        regular_prefix_sids.yfilter = yfilter;
    }
    if(value_path == "strict-prefix-sids")
    {
        strict_prefix_sids.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "epe-links")
    {
        epe_links.yfilter = yfilter;
    }
    if(value_path == "adjacency-sids")
    {
        adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "epesids")
    {
        epesids.yfilter = yfilter;
    }
    if(value_path == "protected-adjacency-sids")
    {
        protected_adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "un-protected-adjacency-sids")
    {
        un_protected_adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "topology-consistent")
    {
        topology_consistent.yfilter = yfilter;
    }
}

bool PceTopology::TopologySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-topology-update" || name == "nodes" || name == "lookup-nodes" || name == "prefixes" || name == "prefix-sids" || name == "regular-prefix-sids" || name == "strict-prefix-sids" || name == "links" || name == "epe-links" || name == "adjacency-sids" || name == "epesids" || name == "protected-adjacency-sids" || name == "un-protected-adjacency-sids" || name == "topology-consistent")
        return true;
    return false;
}

PceTopology::TopologySummary::StatsTopologyUpdate::StatsTopologyUpdate()
    :
    num_nodes_added{YType::uint32, "num-nodes-added"},
    num_nodes_deleted{YType::uint32, "num-nodes-deleted"},
    num_links_added{YType::uint32, "num-links-added"},
    num_links_deleted{YType::uint32, "num-links-deleted"},
    num_prefixes_added{YType::uint32, "num-prefixes-added"},
    num_prefixes_deleted{YType::uint32, "num-prefixes-deleted"}
{

    yang_name = "stats-topology-update"; yang_parent_name = "topology-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

PceTopology::TopologySummary::StatsTopologyUpdate::~StatsTopologyUpdate()
{
}

bool PceTopology::TopologySummary::StatsTopologyUpdate::has_data() const
{
    if (is_presence_container) return true;
    return num_nodes_added.is_set
	|| num_nodes_deleted.is_set
	|| num_links_added.is_set
	|| num_links_deleted.is_set
	|| num_prefixes_added.is_set
	|| num_prefixes_deleted.is_set;
}

bool PceTopology::TopologySummary::StatsTopologyUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_nodes_added.yfilter)
	|| ydk::is_set(num_nodes_deleted.yfilter)
	|| ydk::is_set(num_links_added.yfilter)
	|| ydk::is_set(num_links_deleted.yfilter)
	|| ydk::is_set(num_prefixes_added.yfilter)
	|| ydk::is_set(num_prefixes_deleted.yfilter);
}

std::string PceTopology::TopologySummary::StatsTopologyUpdate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/topology-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologySummary::StatsTopologyUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-topology-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologySummary::StatsTopologyUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nodes_added.is_set || is_set(num_nodes_added.yfilter)) leaf_name_data.push_back(num_nodes_added.get_name_leafdata());
    if (num_nodes_deleted.is_set || is_set(num_nodes_deleted.yfilter)) leaf_name_data.push_back(num_nodes_deleted.get_name_leafdata());
    if (num_links_added.is_set || is_set(num_links_added.yfilter)) leaf_name_data.push_back(num_links_added.get_name_leafdata());
    if (num_links_deleted.is_set || is_set(num_links_deleted.yfilter)) leaf_name_data.push_back(num_links_deleted.get_name_leafdata());
    if (num_prefixes_added.is_set || is_set(num_prefixes_added.yfilter)) leaf_name_data.push_back(num_prefixes_added.get_name_leafdata());
    if (num_prefixes_deleted.is_set || is_set(num_prefixes_deleted.yfilter)) leaf_name_data.push_back(num_prefixes_deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologySummary::StatsTopologyUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologySummary::StatsTopologyUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologySummary::StatsTopologyUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-nodes-added")
    {
        num_nodes_added = value;
        num_nodes_added.value_namespace = name_space;
        num_nodes_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-nodes-deleted")
    {
        num_nodes_deleted = value;
        num_nodes_deleted.value_namespace = name_space;
        num_nodes_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-links-added")
    {
        num_links_added = value;
        num_links_added.value_namespace = name_space;
        num_links_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-links-deleted")
    {
        num_links_deleted = value;
        num_links_deleted.value_namespace = name_space;
        num_links_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-prefixes-added")
    {
        num_prefixes_added = value;
        num_prefixes_added.value_namespace = name_space;
        num_prefixes_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-prefixes-deleted")
    {
        num_prefixes_deleted = value;
        num_prefixes_deleted.value_namespace = name_space;
        num_prefixes_deleted.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologySummary::StatsTopologyUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-nodes-added")
    {
        num_nodes_added.yfilter = yfilter;
    }
    if(value_path == "num-nodes-deleted")
    {
        num_nodes_deleted.yfilter = yfilter;
    }
    if(value_path == "num-links-added")
    {
        num_links_added.yfilter = yfilter;
    }
    if(value_path == "num-links-deleted")
    {
        num_links_deleted.yfilter = yfilter;
    }
    if(value_path == "num-prefixes-added")
    {
        num_prefixes_added.yfilter = yfilter;
    }
    if(value_path == "num-prefixes-deleted")
    {
        num_prefixes_deleted.yfilter = yfilter;
    }
}

bool PceTopology::TopologySummary::StatsTopologyUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-nodes-added" || name == "num-nodes-deleted" || name == "num-links-added" || name == "num-links-deleted" || name == "num-prefixes-added" || name == "num-prefixes-deleted")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNodes()
    :
    topology_node(this, {"node_identifier"})
{

    yang_name = "topology-nodes"; yang_parent_name = "pce-topology"; is_top_level_class = false; has_list_ancestor = false; 
}

PceTopology::TopologyNodes::~TopologyNodes()
{
}

bool PceTopology::TopologyNodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_node.len(); index++)
    {
        if(topology_node[index]->has_data())
            return true;
    }
    return false;
}

bool PceTopology::TopologyNodes::has_operation() const
{
    for (std::size_t index=0; index<topology_node.len(); index++)
    {
        if(topology_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PceTopology::TopologyNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologyNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode>();
        ent_->parent = this;
        topology_node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : topology_node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceTopology::TopologyNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceTopology::TopologyNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceTopology::TopologyNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::TopologyNode()
    :
    node_identifier{YType::uint32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"},
    overload{YType::boolean, "overload"}
        ,
    node_protocol_identifier(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier>())
    , prefixe(this, {})
    , ipv4_link(this, {})
    , ipv6_link(this, {})
{
    node_protocol_identifier->parent = this;

    yang_name = "topology-node"; yang_parent_name = "topology-nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

PceTopology::TopologyNodes::TopologyNode::~TopologyNode()
{
}

bool PceTopology::TopologyNodes::TopologyNode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixe.len(); index++)
    {
        if(prefixe[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_link.len(); index++)
    {
        if(ipv4_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.len(); index++)
    {
        if(ipv6_link[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| overload.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::has_operation() const
{
    for (std::size_t index=0; index<prefixe.len(); index++)
    {
        if(prefixe[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_link.len(); index++)
    {
        if(ipv4_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.len(); index++)
    {
        if(ipv6_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(node_identifier_xr.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/topology-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologyNodes::TopologyNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node";
    ADD_KEY_TOKEN(node_identifier, "node-identifier");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.yfilter)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier == nullptr)
        {
            node_protocol_identifier = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier>();
        }
        return node_protocol_identifier;
    }

    if(child_yang_name == "prefixe")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe>();
        ent_->parent = this;
        prefixe.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-link")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link>();
        ent_->parent = this;
        ipv4_link.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-link")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link>();
        ent_->parent = this;
        ipv6_link.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_protocol_identifier != nullptr)
    {
        _children["node-protocol-identifier"] = node_protocol_identifier;
    }

    count_ = 0;
    for (auto ent_ : prefixe.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
        node_identifier_xr.value_namespace = name_space;
        node_identifier_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-protocol-identifier" || name == "prefixe" || name == "ipv4-link" || name == "ipv6-link" || name == "node-identifier" || name == "node-identifier-xr" || name == "overload")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
        ,
    igp_information(this, {})
    , srgb_information(this, {})
{

    yang_name = "node-protocol-identifier"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation>();
        ent_->parent = this;
        igp_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srgb-information")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation>();
        ent_->parent = this;
        srgb_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : igp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srgb_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::~NodeId()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"},
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| size.is_set
	|| domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "start" || name == "size" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::~NodeId()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::Prefixe()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    pfx_sid(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid>())
    , node_id(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId>())
{
    pfx_sid->parent = this;
    node_id->parent = this;

    yang_name = "prefixe"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::~Prefixe()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (pfx_sid !=  nullptr && pfx_sid->has_data())
	|| (node_id !=  nullptr && node_id->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (pfx_sid !=  nullptr && pfx_sid->has_operation())
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Prefixe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixe";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Prefixe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Prefixe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfx-sid")
    {
        if(pfx_sid == nullptr)
        {
            pfx_sid = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid>();
        }
        return pfx_sid;
    }

    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Prefixe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pfx_sid != nullptr)
    {
        _children["pfx-sid"] = pfx_sid;
    }

    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfx-sid" || name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::PfxSid()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    rflag{YType::boolean, "rflag"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    eflag{YType::boolean, "eflag"},
    vflag{YType::boolean, "vflag"},
    lflag{YType::boolean, "lflag"}
        ,
    sid_prefix(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "pfx-sid"; yang_parent_name = "prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::~PfxSid()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfx-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_prefix != nullptr)
    {
        _children["sid-prefix"] = sid_prefix;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "mpls-label" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "pfx-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::~SidPrefix()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::~NodeId()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis>())
    , ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::Ipv4Link()
    :
    local_ipv4_address{YType::str, "local-ipv4-address"},
    remote_ipv4_address{YType::str, "remote-ipv4-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"},
    administrative_groups{YType::uint32, "administrative-groups"},
    srlgs{YType::uint32, "srlgs"}
        ,
    local_igp_information(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>())
    , remote_node_protocol_identifier(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>())
    , performance_metrics(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics>())
    , adjacency_sid(this, {})
{
    local_igp_information->parent = this;
    remote_node_protocol_identifier->parent = this;
    performance_metrics->parent = this;

    yang_name = "ipv4-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::~Ipv4Link()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_ipv4_address.is_set
	|| remote_ipv4_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| administrative_groups.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data())
	|| (performance_metrics !=  nullptr && performance_metrics->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_ipv4_address.yfilter)
	|| ydk::is_set(remote_ipv4_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(administrative_groups.yfilter)
	|| ydk::is_set(srlgs.yfilter)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation())
	|| (performance_metrics !=  nullptr && performance_metrics->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ipv4_address.is_set || is_set(local_ipv4_address.yfilter)) leaf_name_data.push_back(local_ipv4_address.get_name_leafdata());
    if (remote_ipv4_address.is_set || is_set(remote_ipv4_address.yfilter)) leaf_name_data.push_back(remote_ipv4_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.yfilter)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (administrative_groups.is_set || is_set(administrative_groups.yfilter)) leaf_name_data.push_back(administrative_groups.get_name_leafdata());

    auto srlgs_name_datas = srlgs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlgs_name_datas.begin(), srlgs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information == nullptr)
        {
            local_igp_information = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>();
        }
        return local_igp_information;
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier == nullptr)
        {
            remote_node_protocol_identifier = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>();
        }
        return remote_node_protocol_identifier;
    }

    if(child_yang_name == "performance-metrics")
    {
        if(performance_metrics == nullptr)
        {
            performance_metrics = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics>();
        }
        return performance_metrics;
    }

    if(child_yang_name == "adjacency-sid")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid>();
        ent_->parent = this;
        adjacency_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_igp_information != nullptr)
    {
        _children["local-igp-information"] = local_igp_information;
    }

    if(remote_node_protocol_identifier != nullptr)
    {
        _children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
    }

    if(performance_metrics != nullptr)
    {
        _children["performance-metrics"] = performance_metrics;
    }

    count_ = 0;
    for (auto ent_ : adjacency_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address = value;
        local_ipv4_address.value_namespace = name_space;
        local_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address = value;
        remote_ipv4_address.value_namespace = name_space;
        remote_ipv4_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
        maximum_link_bandwidth.value_namespace = name_space;
        maximum_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-groups")
    {
        administrative_groups = value;
        administrative_groups.value_namespace = name_space;
        administrative_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlgs")
    {
        srlgs.append(value);
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "administrative-groups")
    {
        administrative_groups.yfilter = yfilter;
    }
    if(value_path == "srlgs")
    {
        srlgs.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-igp-information" || name == "remote-node-protocol-identifier" || name == "performance-metrics" || name == "adjacency-sid" || name == "local-ipv4-address" || name == "remote-ipv4-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bandwidth" || name == "max-reservable-bandwidth" || name == "administrative-groups" || name == "srlgs")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::LocalIgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "local-igp-information"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "local-igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::~NodeId()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
        ,
    igp_information(this, {})
    , srgb_information(this, {})
{

    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        ent_->parent = this;
        igp_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srgb-information")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation>();
        ent_->parent = this;
        srgb_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : igp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srgb_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "igp-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::~NodeId()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"},
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| size.is_set
	|| domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "start" || name == "size" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::~NodeId()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::PerformanceMetrics()
    :
    unidirectional_min_delay{YType::uint32, "unidirectional-min-delay"}
{

    yang_name = "performance-metrics"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::~PerformanceMetrics()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::has_data() const
{
    if (is_presence_container) return true;
    return unidirectional_min_delay.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unidirectional_min_delay.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unidirectional_min_delay.is_set || is_set(unidirectional_min_delay.yfilter)) leaf_name_data.push_back(unidirectional_min_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unidirectional-min-delay")
    {
        unidirectional_min_delay = value;
        unidirectional_min_delay.value_namespace = name_space;
        unidirectional_min_delay.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unidirectional-min-delay")
    {
        unidirectional_min_delay.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unidirectional-min-delay")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::AdjacencySid()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    rflag{YType::boolean, "rflag"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    eflag{YType::boolean, "eflag"},
    vflag{YType::boolean, "vflag"},
    lflag{YType::boolean, "lflag"}
        ,
    sid_prefix(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::~AdjacencySid()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_prefix != nullptr)
    {
        _children["sid-prefix"] = sid_prefix;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "mpls-label" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::Ipv6Link()
    :
    local_ipv6_address{YType::str, "local-ipv6-address"},
    remote_ipv6_address{YType::str, "remote-ipv6-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"}
        ,
    local_igp_information(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>())
    , remote_node_protocol_identifier(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>())
    , adjacency_sid(this, {})
{
    local_igp_information->parent = this;
    remote_node_protocol_identifier->parent = this;

    yang_name = "ipv6-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::~Ipv6Link()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    return local_ipv6_address.is_set
	|| remote_ipv6_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_ipv6_address.yfilter)
	|| ydk::is_set(remote_ipv6_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ipv6_address.is_set || is_set(local_ipv6_address.yfilter)) leaf_name_data.push_back(local_ipv6_address.get_name_leafdata());
    if (remote_ipv6_address.is_set || is_set(remote_ipv6_address.yfilter)) leaf_name_data.push_back(remote_ipv6_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.yfilter)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information == nullptr)
        {
            local_igp_information = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>();
        }
        return local_igp_information;
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier == nullptr)
        {
            remote_node_protocol_identifier = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>();
        }
        return remote_node_protocol_identifier;
    }

    if(child_yang_name == "adjacency-sid")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid>();
        ent_->parent = this;
        adjacency_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_igp_information != nullptr)
    {
        _children["local-igp-information"] = local_igp_information;
    }

    if(remote_node_protocol_identifier != nullptr)
    {
        _children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
    }

    count_ = 0;
    for (auto ent_ : adjacency_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ipv6-address")
    {
        local_ipv6_address = value;
        local_ipv6_address.value_namespace = name_space;
        local_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv6-address")
    {
        remote_ipv6_address = value;
        remote_ipv6_address.value_namespace = name_space;
        remote_ipv6_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
        maximum_link_bandwidth.value_namespace = name_space;
        maximum_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ipv6-address")
    {
        local_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "remote-ipv6-address")
    {
        remote_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-igp-information" || name == "remote-node-protocol-identifier" || name == "adjacency-sid" || name == "local-ipv6-address" || name == "remote-ipv6-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bandwidth" || name == "max-reservable-bandwidth")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::LocalIgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "local-igp-information"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "local-igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::~NodeId()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
        ,
    igp_information(this, {})
    , srgb_information(this, {})
{

    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        ent_->parent = this;
        igp_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srgb-information")
    {
        auto ent_ = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation>();
        ent_->parent = this;
        srgb_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : igp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srgb_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "igp-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::~NodeId()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"},
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| size.is_set
	|| domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "start" || name == "size" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::~NodeId()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::AdjacencySid()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    rflag{YType::boolean, "rflag"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    eflag{YType::boolean, "eflag"},
    vflag{YType::boolean, "vflag"},
    lflag{YType::boolean, "lflag"}
        ,
    sid_prefix(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::~AdjacencySid()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_prefix != nullptr)
    {
        _children["sid-prefix"] = sid_prefix;
    }

    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "mpls-label" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfos()
    :
    prefix_info(this, {"node_identifier"})
{

    yang_name = "prefix-infos"; yang_parent_name = "pce-topology"; is_top_level_class = false; has_list_ancestor = false; 
}

PceTopology::PrefixInfos::~PrefixInfos()
{
}

bool PceTopology::PrefixInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_info.len(); index++)
    {
        if(prefix_info[index]->has_data())
            return true;
    }
    return false;
}

bool PceTopology::PrefixInfos::has_operation() const
{
    for (std::size_t index=0; index<prefix_info.len(); index++)
    {
        if(prefix_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PceTopology::PrefixInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::PrefixInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-info")
    {
        auto ent_ = std::make_shared<PceTopology::PrefixInfos::PrefixInfo>();
        ent_->parent = this;
        prefix_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceTopology::PrefixInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceTopology::PrefixInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceTopology::PrefixInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-info")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::PrefixInfo()
    :
    node_identifier{YType::uint32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"}
        ,
    node_protocol_identifier(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>())
    , address(this, {})
{
    node_protocol_identifier->parent = this;

    yang_name = "prefix-info"; yang_parent_name = "prefix-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

PceTopology::PrefixInfos::PrefixInfo::~PrefixInfo()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(node_identifier_xr.yfilter)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/prefix-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::PrefixInfos::PrefixInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-info";
    ADD_KEY_TOKEN(node_identifier, "node-identifier");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.yfilter)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier == nullptr)
        {
            node_protocol_identifier = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>();
        }
        return node_protocol_identifier;
    }

    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_protocol_identifier != nullptr)
    {
        _children["node-protocol-identifier"] = node_protocol_identifier;
    }

    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
        node_identifier_xr.value_namespace = name_space;
        node_identifier_xr.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-protocol-identifier" || name == "address" || name == "node-identifier" || name == "node-identifier-xr")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
        ,
    igp_information(this, {})
    , srgb_information(this, {})
{

    yang_name = "node-protocol-identifier"; yang_parent_name = "prefix-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto ent_ = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation>();
        ent_->parent = this;
        igp_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srgb-information")
    {
        auto ent_ = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation>();
        ent_->parent = this;
        srgb_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : igp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srgb_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::~NodeId()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::~Igp()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"},
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| size.is_set
	|| domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "start" || name == "size" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::~NodeId()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::~Igp()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::~Isis()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::Address::Address()
    :
    ip(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::Address::Ip>())
{
    ip->parent = this;

    yang_name = "address"; yang_parent_name = "prefix-info"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::Address::~Address()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::Address::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceTopology::PrefixInfos::PrefixInfo::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::Address::Ip::Ip()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

PceTopology::PrefixInfos::PrefixInfo::Address::Ip::~Ip()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::Ip::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::Address::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::Address::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PceTopology::PrefixInfos::PrefixInfo::Address::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PceTopology::PrefixInfos::PrefixInfo::Address::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PceTopology::PrefixInfos::PrefixInfo::Address::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void PceTopology::PrefixInfos::PrefixInfo::Address::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool PceTopology::PrefixInfos::PrefixInfo::Address::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::Pce()
    :
    cspf_sr_mpls(std::make_shared<Pce::CspfSrMpls>())
    , verification_events(std::make_shared<Pce::VerificationEvents>())
    , association_infos(std::make_shared<Pce::AssociationInfos>())
    , cspf(std::make_shared<Pce::Cspf>())
    , topology_summary(std::make_shared<Pce::TopologySummary>())
    , tunnel_infos(std::make_shared<Pce::TunnelInfos>())
    , peer_detail_infos(std::make_shared<Pce::PeerDetailInfos>())
    , topology_nodes(std::make_shared<Pce::TopologyNodes>())
    , prefix_infos(std::make_shared<Pce::PrefixInfos>())
    , lsp_summary(std::make_shared<Pce::LspSummary>())
    , peer_infos(std::make_shared<Pce::PeerInfos>())
    , tunnel_detail_infos(std::make_shared<Pce::TunnelDetailInfos>())
{
    cspf_sr_mpls->parent = this;
    verification_events->parent = this;
    association_infos->parent = this;
    cspf->parent = this;
    topology_summary->parent = this;
    tunnel_infos->parent = this;
    peer_detail_infos->parent = this;
    topology_nodes->parent = this;
    prefix_infos->parent = this;
    lsp_summary->parent = this;
    peer_infos->parent = this;
    tunnel_detail_infos->parent = this;

    yang_name = "pce"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Pce::~Pce()
{
}

bool Pce::has_data() const
{
    if (is_presence_container) return true;
    return (cspf_sr_mpls !=  nullptr && cspf_sr_mpls->has_data())
	|| (verification_events !=  nullptr && verification_events->has_data())
	|| (association_infos !=  nullptr && association_infos->has_data())
	|| (cspf !=  nullptr && cspf->has_data())
	|| (topology_summary !=  nullptr && topology_summary->has_data())
	|| (tunnel_infos !=  nullptr && tunnel_infos->has_data())
	|| (peer_detail_infos !=  nullptr && peer_detail_infos->has_data())
	|| (topology_nodes !=  nullptr && topology_nodes->has_data())
	|| (prefix_infos !=  nullptr && prefix_infos->has_data())
	|| (lsp_summary !=  nullptr && lsp_summary->has_data())
	|| (peer_infos !=  nullptr && peer_infos->has_data())
	|| (tunnel_detail_infos !=  nullptr && tunnel_detail_infos->has_data());
}

bool Pce::has_operation() const
{
    return is_set(yfilter)
	|| (cspf_sr_mpls !=  nullptr && cspf_sr_mpls->has_operation())
	|| (verification_events !=  nullptr && verification_events->has_operation())
	|| (association_infos !=  nullptr && association_infos->has_operation())
	|| (cspf !=  nullptr && cspf->has_operation())
	|| (topology_summary !=  nullptr && topology_summary->has_operation())
	|| (tunnel_infos !=  nullptr && tunnel_infos->has_operation())
	|| (peer_detail_infos !=  nullptr && peer_detail_infos->has_operation())
	|| (topology_nodes !=  nullptr && topology_nodes->has_operation())
	|| (prefix_infos !=  nullptr && prefix_infos->has_operation())
	|| (lsp_summary !=  nullptr && lsp_summary->has_operation())
	|| (peer_infos !=  nullptr && peer_infos->has_operation())
	|| (tunnel_detail_infos !=  nullptr && tunnel_detail_infos->has_operation());
}

std::string Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspf-sr-mpls")
    {
        if(cspf_sr_mpls == nullptr)
        {
            cspf_sr_mpls = std::make_shared<Pce::CspfSrMpls>();
        }
        return cspf_sr_mpls;
    }

    if(child_yang_name == "verification-events")
    {
        if(verification_events == nullptr)
        {
            verification_events = std::make_shared<Pce::VerificationEvents>();
        }
        return verification_events;
    }

    if(child_yang_name == "association-infos")
    {
        if(association_infos == nullptr)
        {
            association_infos = std::make_shared<Pce::AssociationInfos>();
        }
        return association_infos;
    }

    if(child_yang_name == "cspf")
    {
        if(cspf == nullptr)
        {
            cspf = std::make_shared<Pce::Cspf>();
        }
        return cspf;
    }

    if(child_yang_name == "topology-summary")
    {
        if(topology_summary == nullptr)
        {
            topology_summary = std::make_shared<Pce::TopologySummary>();
        }
        return topology_summary;
    }

    if(child_yang_name == "tunnel-infos")
    {
        if(tunnel_infos == nullptr)
        {
            tunnel_infos = std::make_shared<Pce::TunnelInfos>();
        }
        return tunnel_infos;
    }

    if(child_yang_name == "peer-detail-infos")
    {
        if(peer_detail_infos == nullptr)
        {
            peer_detail_infos = std::make_shared<Pce::PeerDetailInfos>();
        }
        return peer_detail_infos;
    }

    if(child_yang_name == "topology-nodes")
    {
        if(topology_nodes == nullptr)
        {
            topology_nodes = std::make_shared<Pce::TopologyNodes>();
        }
        return topology_nodes;
    }

    if(child_yang_name == "prefix-infos")
    {
        if(prefix_infos == nullptr)
        {
            prefix_infos = std::make_shared<Pce::PrefixInfos>();
        }
        return prefix_infos;
    }

    if(child_yang_name == "lsp-summary")
    {
        if(lsp_summary == nullptr)
        {
            lsp_summary = std::make_shared<Pce::LspSummary>();
        }
        return lsp_summary;
    }

    if(child_yang_name == "peer-infos")
    {
        if(peer_infos == nullptr)
        {
            peer_infos = std::make_shared<Pce::PeerInfos>();
        }
        return peer_infos;
    }

    if(child_yang_name == "tunnel-detail-infos")
    {
        if(tunnel_detail_infos == nullptr)
        {
            tunnel_detail_infos = std::make_shared<Pce::TunnelDetailInfos>();
        }
        return tunnel_detail_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cspf_sr_mpls != nullptr)
    {
        _children["cspf-sr-mpls"] = cspf_sr_mpls;
    }

    if(verification_events != nullptr)
    {
        _children["verification-events"] = verification_events;
    }

    if(association_infos != nullptr)
    {
        _children["association-infos"] = association_infos;
    }

    if(cspf != nullptr)
    {
        _children["cspf"] = cspf;
    }

    if(topology_summary != nullptr)
    {
        _children["topology-summary"] = topology_summary;
    }

    if(tunnel_infos != nullptr)
    {
        _children["tunnel-infos"] = tunnel_infos;
    }

    if(peer_detail_infos != nullptr)
    {
        _children["peer-detail-infos"] = peer_detail_infos;
    }

    if(topology_nodes != nullptr)
    {
        _children["topology-nodes"] = topology_nodes;
    }

    if(prefix_infos != nullptr)
    {
        _children["prefix-infos"] = prefix_infos;
    }

    if(lsp_summary != nullptr)
    {
        _children["lsp-summary"] = lsp_summary;
    }

    if(peer_infos != nullptr)
    {
        _children["peer-infos"] = peer_infos;
    }

    if(tunnel_detail_infos != nullptr)
    {
        _children["tunnel-detail-infos"] = tunnel_detail_infos;
    }

    return _children;
}

void Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Pce::clone_ptr() const
{
    return std::make_shared<Pce>();
}

std::string Pce::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pce::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pce::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Pce::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspf-sr-mpls" || name == "verification-events" || name == "association-infos" || name == "cspf" || name == "topology-summary" || name == "tunnel-infos" || name == "peer-detail-infos" || name == "topology-nodes" || name == "prefix-infos" || name == "lsp-summary" || name == "peer-infos" || name == "tunnel-detail-infos")
        return true;
    return false;
}

Pce::CspfSrMpls::CspfSrMpls()
    :
    cspf_sr_mpls_paths(std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths>())
{
    cspf_sr_mpls_paths->parent = this;

    yang_name = "cspf-sr-mpls"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::CspfSrMpls::~CspfSrMpls()
{
}

bool Pce::CspfSrMpls::has_data() const
{
    if (is_presence_container) return true;
    return (cspf_sr_mpls_paths !=  nullptr && cspf_sr_mpls_paths->has_data());
}

bool Pce::CspfSrMpls::has_operation() const
{
    return is_set(yfilter)
	|| (cspf_sr_mpls_paths !=  nullptr && cspf_sr_mpls_paths->has_operation());
}

std::string Pce::CspfSrMpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::CspfSrMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspf-sr-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::CspfSrMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::CspfSrMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspf-sr-mpls-paths")
    {
        if(cspf_sr_mpls_paths == nullptr)
        {
            cspf_sr_mpls_paths = std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths>();
        }
        return cspf_sr_mpls_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::CspfSrMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cspf_sr_mpls_paths != nullptr)
    {
        _children["cspf-sr-mpls-paths"] = cspf_sr_mpls_paths;
    }

    return _children;
}

void Pce::CspfSrMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::CspfSrMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::CspfSrMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspf-sr-mpls-paths")
        return true;
    return false;
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPaths()
    :
    cspf_sr_mpls_path(this, {})
{

    yang_name = "cspf-sr-mpls-paths"; yang_parent_name = "cspf-sr-mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::CspfSrMpls::CspfSrMplsPaths::~CspfSrMplsPaths()
{
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cspf_sr_mpls_path.len(); index++)
    {
        if(cspf_sr_mpls_path[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::has_operation() const
{
    for (std::size_t index=0; index<cspf_sr_mpls_path.len(); index++)
    {
        if(cspf_sr_mpls_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf-sr-mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspf-sr-mpls-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::CspfSrMpls::CspfSrMplsPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::CspfSrMpls::CspfSrMplsPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspf-sr-mpls-path")
    {
        auto ent_ = std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath>();
        ent_->parent = this;
        cspf_sr_mpls_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::CspfSrMpls::CspfSrMplsPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cspf_sr_mpls_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::CspfSrMpls::CspfSrMplsPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::CspfSrMpls::CspfSrMplsPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspf-sr-mpls-path")
        return true;
    return false;
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::CspfSrMplsPath()
    :
    af{YType::uint32, "af"},
    source1{YType::str, "source1"},
    destination1{YType::str, "destination1"},
    metric_type{YType::uint32, "metric-type"},
    source2{YType::str, "source2"},
    destination2{YType::str, "destination2"},
    disjoint_level{YType::uint32, "disjoint-level"},
    disjoint_strict{YType::uint32, "disjoint-strict"},
    shortest_path{YType::uint32, "shortest-path"},
    msd1{YType::uint32, "msd1"},
    msd2{YType::uint32, "msd2"},
    relative_margin{YType::uint32, "relative-margin"},
    absolute_margin{YType::uint32, "absolute-margin"},
    affinity_include_all{YType::uint32, "affinity-include-all"},
    affinity_include_any{YType::uint32, "affinity-include-any"},
    affinity_exclude_any{YType::uint32, "affinity-exclude-any"},
    cspf_result{YType::enumeration, "cspf-result"},
    iterations_done{YType::uint32, "iterations-done"}
        ,
    output_path(this, {})
{

    yang_name = "cspf-sr-mpls-path"; yang_parent_name = "cspf-sr-mpls-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::~CspfSrMplsPath()
{
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<output_path.len(); index++)
    {
        if(output_path[index]->has_data())
            return true;
    }
    return af.is_set
	|| source1.is_set
	|| destination1.is_set
	|| metric_type.is_set
	|| source2.is_set
	|| destination2.is_set
	|| disjoint_level.is_set
	|| disjoint_strict.is_set
	|| shortest_path.is_set
	|| msd1.is_set
	|| msd2.is_set
	|| relative_margin.is_set
	|| absolute_margin.is_set
	|| affinity_include_all.is_set
	|| affinity_include_any.is_set
	|| affinity_exclude_any.is_set
	|| cspf_result.is_set
	|| iterations_done.is_set;
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::has_operation() const
{
    for (std::size_t index=0; index<output_path.len(); index++)
    {
        if(output_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(source1.yfilter)
	|| ydk::is_set(destination1.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(source2.yfilter)
	|| ydk::is_set(destination2.yfilter)
	|| ydk::is_set(disjoint_level.yfilter)
	|| ydk::is_set(disjoint_strict.yfilter)
	|| ydk::is_set(shortest_path.yfilter)
	|| ydk::is_set(msd1.yfilter)
	|| ydk::is_set(msd2.yfilter)
	|| ydk::is_set(relative_margin.yfilter)
	|| ydk::is_set(absolute_margin.yfilter)
	|| ydk::is_set(affinity_include_all.yfilter)
	|| ydk::is_set(affinity_include_any.yfilter)
	|| ydk::is_set(affinity_exclude_any.yfilter)
	|| ydk::is_set(cspf_result.yfilter)
	|| ydk::is_set(iterations_done.yfilter);
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf-sr-mpls/cspf-sr-mpls-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspf-sr-mpls-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (source1.is_set || is_set(source1.yfilter)) leaf_name_data.push_back(source1.get_name_leafdata());
    if (destination1.is_set || is_set(destination1.yfilter)) leaf_name_data.push_back(destination1.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (source2.is_set || is_set(source2.yfilter)) leaf_name_data.push_back(source2.get_name_leafdata());
    if (destination2.is_set || is_set(destination2.yfilter)) leaf_name_data.push_back(destination2.get_name_leafdata());
    if (disjoint_level.is_set || is_set(disjoint_level.yfilter)) leaf_name_data.push_back(disjoint_level.get_name_leafdata());
    if (disjoint_strict.is_set || is_set(disjoint_strict.yfilter)) leaf_name_data.push_back(disjoint_strict.get_name_leafdata());
    if (shortest_path.is_set || is_set(shortest_path.yfilter)) leaf_name_data.push_back(shortest_path.get_name_leafdata());
    if (msd1.is_set || is_set(msd1.yfilter)) leaf_name_data.push_back(msd1.get_name_leafdata());
    if (msd2.is_set || is_set(msd2.yfilter)) leaf_name_data.push_back(msd2.get_name_leafdata());
    if (relative_margin.is_set || is_set(relative_margin.yfilter)) leaf_name_data.push_back(relative_margin.get_name_leafdata());
    if (absolute_margin.is_set || is_set(absolute_margin.yfilter)) leaf_name_data.push_back(absolute_margin.get_name_leafdata());
    if (affinity_include_all.is_set || is_set(affinity_include_all.yfilter)) leaf_name_data.push_back(affinity_include_all.get_name_leafdata());
    if (affinity_include_any.is_set || is_set(affinity_include_any.yfilter)) leaf_name_data.push_back(affinity_include_any.get_name_leafdata());
    if (affinity_exclude_any.is_set || is_set(affinity_exclude_any.yfilter)) leaf_name_data.push_back(affinity_exclude_any.get_name_leafdata());
    if (cspf_result.is_set || is_set(cspf_result.yfilter)) leaf_name_data.push_back(cspf_result.get_name_leafdata());
    if (iterations_done.is_set || is_set(iterations_done.yfilter)) leaf_name_data.push_back(iterations_done.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-path")
    {
        auto ent_ = std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath>();
        ent_->parent = this;
        output_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : output_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source1")
    {
        source1 = value;
        source1.value_namespace = name_space;
        source1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination1")
    {
        destination1 = value;
        destination1.value_namespace = name_space;
        destination1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source2")
    {
        source2 = value;
        source2.value_namespace = name_space;
        source2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination2")
    {
        destination2 = value;
        destination2.value_namespace = name_space;
        destination2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disjoint-level")
    {
        disjoint_level = value;
        disjoint_level.value_namespace = name_space;
        disjoint_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disjoint-strict")
    {
        disjoint_strict = value;
        disjoint_strict.value_namespace = name_space;
        disjoint_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shortest-path")
    {
        shortest_path = value;
        shortest_path.value_namespace = name_space;
        shortest_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msd1")
    {
        msd1 = value;
        msd1.value_namespace = name_space;
        msd1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msd2")
    {
        msd2 = value;
        msd2.value_namespace = name_space;
        msd2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-margin")
    {
        relative_margin = value;
        relative_margin.value_namespace = name_space;
        relative_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-margin")
    {
        absolute_margin = value;
        absolute_margin.value_namespace = name_space;
        absolute_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-include-all")
    {
        affinity_include_all = value;
        affinity_include_all.value_namespace = name_space;
        affinity_include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-include-any")
    {
        affinity_include_any = value;
        affinity_include_any.value_namespace = name_space;
        affinity_include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-exclude-any")
    {
        affinity_exclude_any = value;
        affinity_exclude_any.value_namespace = name_space;
        affinity_exclude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspf-result")
    {
        cspf_result = value;
        cspf_result.value_namespace = name_space;
        cspf_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iterations-done")
    {
        iterations_done = value;
        iterations_done.value_namespace = name_space;
        iterations_done.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "source1")
    {
        source1.yfilter = yfilter;
    }
    if(value_path == "destination1")
    {
        destination1.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "source2")
    {
        source2.yfilter = yfilter;
    }
    if(value_path == "destination2")
    {
        destination2.yfilter = yfilter;
    }
    if(value_path == "disjoint-level")
    {
        disjoint_level.yfilter = yfilter;
    }
    if(value_path == "disjoint-strict")
    {
        disjoint_strict.yfilter = yfilter;
    }
    if(value_path == "shortest-path")
    {
        shortest_path.yfilter = yfilter;
    }
    if(value_path == "msd1")
    {
        msd1.yfilter = yfilter;
    }
    if(value_path == "msd2")
    {
        msd2.yfilter = yfilter;
    }
    if(value_path == "relative-margin")
    {
        relative_margin.yfilter = yfilter;
    }
    if(value_path == "absolute-margin")
    {
        absolute_margin.yfilter = yfilter;
    }
    if(value_path == "affinity-include-all")
    {
        affinity_include_all.yfilter = yfilter;
    }
    if(value_path == "affinity-include-any")
    {
        affinity_include_any.yfilter = yfilter;
    }
    if(value_path == "affinity-exclude-any")
    {
        affinity_exclude_any.yfilter = yfilter;
    }
    if(value_path == "cspf-result")
    {
        cspf_result.yfilter = yfilter;
    }
    if(value_path == "iterations-done")
    {
        iterations_done.yfilter = yfilter;
    }
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-path" || name == "af" || name == "source1" || name == "destination1" || name == "metric-type" || name == "source2" || name == "destination2" || name == "disjoint-level" || name == "disjoint-strict" || name == "shortest-path" || name == "msd1" || name == "msd2" || name == "relative-margin" || name == "absolute-margin" || name == "affinity-include-all" || name == "affinity-include-any" || name == "affinity-exclude-any" || name == "cspf-result" || name == "iterations-done")
        return true;
    return false;
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::OutputPath()
    :
    cost{YType::uint64, "cost"}
        ,
    source(std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source>())
    , destination(std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination>())
    , hops(this, {})
{
    source->parent = this;
    destination->parent = this;

    yang_name = "output-path"; yang_parent_name = "cspf-sr-mpls-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::~OutputPath()
{
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hops.len(); index++)
    {
        if(hops[index]->has_data())
            return true;
    }
    return cost.is_set
	|| (source !=  nullptr && source->has_data())
	|| (destination !=  nullptr && destination->has_data());
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::has_operation() const
{
    for (std::size_t index=0; index<hops.len(); index++)
    {
        if(hops[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf-sr-mpls/cspf-sr-mpls-paths/cspf-sr-mpls-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source>();
        }
        return source;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "hops")
    {
        auto ent_ = std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops>();
        ent_->parent = this;
        hops.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    count_ = 0;
    for (auto ent_ : hops.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination" || name == "hops" || name == "cost")
        return true;
    return false;
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::Source()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source"; yang_parent_name = "output-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::~Source()
{
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf-sr-mpls/cspf-sr-mpls-paths/cspf-sr-mpls-path/output-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::Destination()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination"; yang_parent_name = "output-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::~Destination()
{
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf-sr-mpls/cspf-sr-mpls-paths/cspf-sr-mpls-path/output-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
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

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::Hops()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"}
        ,
    local_addr(std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr>())
    , remote_addr(std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr>())
{
    local_addr->parent = this;
    remote_addr->parent = this;

    yang_name = "hops"; yang_parent_name = "output-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::~Hops()
{
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| (local_addr !=  nullptr && local_addr->has_data())
	|| (remote_addr !=  nullptr && remote_addr->has_data());
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (local_addr !=  nullptr && local_addr->has_operation())
	|| (remote_addr !=  nullptr && remote_addr->has_operation());
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf-sr-mpls/cspf-sr-mpls-paths/cspf-sr-mpls-path/output-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-addr")
    {
        if(local_addr == nullptr)
        {
            local_addr = std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr>();
        }
        return local_addr;
    }

    if(child_yang_name == "remote-addr")
    {
        if(remote_addr == nullptr)
        {
            remote_addr = std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr>();
        }
        return remote_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_addr != nullptr)
    {
        _children["local-addr"] = local_addr;
    }

    if(remote_addr != nullptr)
    {
        _children["remote-addr"] = remote_addr;
    }

    return _children;
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-addr" || name == "remote-addr" || name == "sid-type" || name == "mpls-label")
        return true;
    return false;
}

const Enum::YLeaf LspState::lsp_down {0, "lsp-down"};
const Enum::YLeaf LspState::lsp_up {1, "lsp-up"};

const Enum::YLeaf PceRro::rro_type_ipv4_address {0, "rro-type-ipv4-address"};
const Enum::YLeaf PceRro::rro_type_mpls_label {1, "rro-type-mpls-label"};
const Enum::YLeaf PceRro::rro_type_sripv4_node_sid {2, "rro-type-sripv4-node-sid"};
const Enum::YLeaf PceRro::rro_type_sripv4_adjacency_sid {3, "rro-type-sripv4-adjacency-sid"};
const Enum::YLeaf PceRro::rro_type_sr_nai_null {4, "rro-type-sr-nai-null"};

const Enum::YLeaf PceCspfRc::pce_cspf_not_set {0, "pce-cspf-not-set"};
const Enum::YLeaf PceCspfRc::pce_cspf_src_not_found {1, "pce-cspf-src-not-found"};
const Enum::YLeaf PceCspfRc::pce_cspf_dst_not_found {2, "pce-cspf-dst-not-found"};
const Enum::YLeaf PceCspfRc::pce_cspf_second_src_not_found {3, "pce-cspf-second-src-not-found"};
const Enum::YLeaf PceCspfRc::pce_cspf_second_dst_not_found {4, "pce-cspf-second-dst-not-found"};
const Enum::YLeaf PceCspfRc::pce_cspf_no_mem {5, "pce-cspf-no-mem"};
const Enum::YLeaf PceCspfRc::pce_cspf_ex_path_not_resolved {6, "pce-cspf-ex-path-not-resolved"};
const Enum::YLeaf PceCspfRc::pce_cspf_no_path {7, "pce-cspf-no-path"};
const Enum::YLeaf PceCspfRc::pce_cspf_sp_success {8, "pce-cspf-sp-success"};
const Enum::YLeaf PceCspfRc::pce_cspf_error {9, "pce-cspf-error"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_srlg_node_node {10, "pce-cspf-fallback-srlg-node-node"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_srlg_node_link {11, "pce-cspf-fallback-srlg-node-link"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_srlg_node_sp {12, "pce-cspf-fallback-srlg-node-sp"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_node_link {13, "pce-cspf-fallback-node-link"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_link_sp {14, "pce-cspf-fallback-link-sp"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_node_sp {15, "pce-cspf-fallback-node-sp"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_srlg_link {16, "pce-cspf-fallback-srlg-link"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_srlg_sp {17, "pce-cspf-fallback-srlg-sp"};
const Enum::YLeaf PceCspfRc::pce_cspf_dp_success {18, "pce-cspf-dp-success"};

const Enum::YLeaf PceSrSid::ipv4_node_sid {0, "ipv4-node-sid"};
const Enum::YLeaf PceSrSid::ipv4_adjacency_sid {1, "ipv4-adjacency-sid"};
const Enum::YLeaf PceSrSid::ipv6_node_sid {2, "ipv6-node-sid"};
const Enum::YLeaf PceSrSid::ipv6_adjacency_sid {3, "ipv6-adjacency-sid"};
const Enum::YLeaf PceSrSid::unknown_sid {4, "unknown-sid"};

const Enum::YLeaf PceHeadendSwap::pcehs_none {0, "pcehs-none"};
const Enum::YLeaf PceHeadendSwap::pcehs_plain {1, "pcehs-plain"};
const Enum::YLeaf PceHeadendSwap::pcehs_rwi {2, "pcehs-rwi"};

const Enum::YLeaf PcepLspState::lsp_down {0, "lsp-down"};
const Enum::YLeaf PcepLspState::lsp_up {1, "lsp-up"};
const Enum::YLeaf PcepLspState::lsp_active {2, "lsp-active"};
const Enum::YLeaf PcepLspState::lsp_going_down {3, "lsp-going-down"};
const Enum::YLeaf PcepLspState::lsp_being_signaled {4, "lsp-being-signaled"};

const Enum::YLeaf PceIgpInfoId::isis {1, "isis"};
const Enum::YLeaf PceIgpInfoId::ospf {2, "ospf"};
const Enum::YLeaf PceIgpInfoId::bgp {3, "bgp"};

const Enum::YLeaf PceProto::pcep {0, "pcep"};
const Enum::YLeaf PceProto::netconf {1, "netconf"};

const Enum::YLeaf PcepState::tcp_close {0, "tcp-close"};
const Enum::YLeaf PcepState::tcp_listen {1, "tcp-listen"};
const Enum::YLeaf PcepState::tcp_connect {2, "tcp-connect"};
const Enum::YLeaf PcepState::pcep_closed {3, "pcep-closed"};
const Enum::YLeaf PcepState::pcep_opening {4, "pcep-opening"};
const Enum::YLeaf PcepState::pcep_open {5, "pcep-open"};

const Enum::YLeaf Sid::sr_protected_adj_sid {1, "sr-protected-adj-sid"};
const Enum::YLeaf Sid::sr_unprotected_adj_sid {2, "sr-unprotected-adj-sid"};
const Enum::YLeaf Sid::sr_bgp_egress_peer_engineering_sid {3, "sr-bgp-egress-peer-engineering-sid"};
const Enum::YLeaf Sid::sr_reqular_prefix_sid {4, "sr-reqular-prefix-sid"};
const Enum::YLeaf Sid::sr_strict_prefix_sid {5, "sr-strict-prefix-sid"};

const Enum::YLeaf LspSetup::setup_rsvp {0, "setup-rsvp"};
const Enum::YLeaf LspSetup::setup_sr {1, "setup-sr"};
const Enum::YLeaf LspSetup::setup_unknown {2, "setup-unknown"};

const Enum::YLeaf PceAsso::unknown {0, "unknown"};
const Enum::YLeaf PceAsso::link {1, "link"};
const Enum::YLeaf PceAsso::node {2, "node"};
const Enum::YLeaf PceAsso::srlg {3, "srlg"};

const Enum::YLeaf PceAfId::none {0, "none"};
const Enum::YLeaf PceAfId::ipv4 {1, "ipv4"};
const Enum::YLeaf PceAfId::ipv6 {2, "ipv6"};


}
}

