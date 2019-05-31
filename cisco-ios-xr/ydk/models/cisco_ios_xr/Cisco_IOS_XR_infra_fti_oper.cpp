
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_fti_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_fti_oper {

DciFabricInterconnect::DciFabricInterconnect()
    :
    opflex_session_infos(std::make_shared<DciFabricInterconnect::OpflexSessionInfos>())
    , fabric_vrf_dbs(std::make_shared<DciFabricInterconnect::FabricVrfDbs>())
    , dci_vrfs(std::make_shared<DciFabricInterconnect::DciVrfs>())
    , acp(std::make_shared<DciFabricInterconnect::Acp>())
{
    opflex_session_infos->parent = this;
    fabric_vrf_dbs->parent = this;
    dci_vrfs->parent = this;
    acp->parent = this;

    yang_name = "dci-fabric-interconnect"; yang_parent_name = "Cisco-IOS-XR-infra-fti-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

DciFabricInterconnect::~DciFabricInterconnect()
{
}

bool DciFabricInterconnect::has_data() const
{
    if (is_presence_container) return true;
    return (opflex_session_infos !=  nullptr && opflex_session_infos->has_data())
	|| (fabric_vrf_dbs !=  nullptr && fabric_vrf_dbs->has_data())
	|| (dci_vrfs !=  nullptr && dci_vrfs->has_data())
	|| (acp !=  nullptr && acp->has_data());
}

bool DciFabricInterconnect::has_operation() const
{
    return is_set(yfilter)
	|| (opflex_session_infos !=  nullptr && opflex_session_infos->has_operation())
	|| (fabric_vrf_dbs !=  nullptr && fabric_vrf_dbs->has_operation())
	|| (dci_vrfs !=  nullptr && dci_vrfs->has_operation())
	|| (acp !=  nullptr && acp->has_operation());
}

std::string DciFabricInterconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-oper:dci-fabric-interconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opflex-session-infos")
    {
        if(opflex_session_infos == nullptr)
        {
            opflex_session_infos = std::make_shared<DciFabricInterconnect::OpflexSessionInfos>();
        }
        return opflex_session_infos;
    }

    if(child_yang_name == "fabric-vrf-dbs")
    {
        if(fabric_vrf_dbs == nullptr)
        {
            fabric_vrf_dbs = std::make_shared<DciFabricInterconnect::FabricVrfDbs>();
        }
        return fabric_vrf_dbs;
    }

    if(child_yang_name == "dci-vrfs")
    {
        if(dci_vrfs == nullptr)
        {
            dci_vrfs = std::make_shared<DciFabricInterconnect::DciVrfs>();
        }
        return dci_vrfs;
    }

    if(child_yang_name == "acp")
    {
        if(acp == nullptr)
        {
            acp = std::make_shared<DciFabricInterconnect::Acp>();
        }
        return acp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(opflex_session_infos != nullptr)
    {
        _children["opflex-session-infos"] = opflex_session_infos;
    }

    if(fabric_vrf_dbs != nullptr)
    {
        _children["fabric-vrf-dbs"] = fabric_vrf_dbs;
    }

    if(dci_vrfs != nullptr)
    {
        _children["dci-vrfs"] = dci_vrfs;
    }

    if(acp != nullptr)
    {
        _children["acp"] = acp;
    }

    return _children;
}

void DciFabricInterconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DciFabricInterconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::clone_ptr() const
{
    return std::make_shared<DciFabricInterconnect>();
}

std::string DciFabricInterconnect::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string DciFabricInterconnect::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function DciFabricInterconnect::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DciFabricInterconnect::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool DciFabricInterconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opflex-session-infos" || name == "fabric-vrf-dbs" || name == "dci-vrfs" || name == "acp")
        return true;
    return false;
}

DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfos()
    :
    opflex_session_info(this, {"id1"})
{

    yang_name = "opflex-session-infos"; yang_parent_name = "dci-fabric-interconnect"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::OpflexSessionInfos::~OpflexSessionInfos()
{
}

bool DciFabricInterconnect::OpflexSessionInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opflex_session_info.len(); index++)
    {
        if(opflex_session_info[index]->has_data())
            return true;
    }
    return false;
}

bool DciFabricInterconnect::OpflexSessionInfos::has_operation() const
{
    for (std::size_t index=0; index<opflex_session_info.len(); index++)
    {
        if(opflex_session_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DciFabricInterconnect::OpflexSessionInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-oper:dci-fabric-interconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::OpflexSessionInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opflex-session-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::OpflexSessionInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::OpflexSessionInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opflex-session-info")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo>();
        ent_->parent = this;
        opflex_session_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::OpflexSessionInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : opflex_session_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DciFabricInterconnect::OpflexSessionInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DciFabricInterconnect::OpflexSessionInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DciFabricInterconnect::OpflexSessionInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opflex-session-info")
        return true;
    return false;
}

DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::OpflexSessionInfo()
    :
    id1{YType::uint32, "id1"},
    fabric_id{YType::uint32, "fabric-id"},
    config_state{YType::enumeration, "config-state"},
    last_upd_ts_config{YType::uint64, "last-upd-ts-config"},
    fabric_state{YType::enumeration, "fabric-state"},
    last_upd_ts_fabric{YType::uint64, "last-upd-ts-fabric"}
        ,
    peer_info(this, {})
{

    yang_name = "opflex-session-info"; yang_parent_name = "opflex-session-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::~OpflexSessionInfo()
{
}

bool DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_info.len(); index++)
    {
        if(peer_info[index]->has_data())
            return true;
    }
    return id1.is_set
	|| fabric_id.is_set
	|| config_state.is_set
	|| last_upd_ts_config.is_set
	|| fabric_state.is_set
	|| last_upd_ts_fabric.is_set;
}

bool DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::has_operation() const
{
    for (std::size_t index=0; index<peer_info.len(); index++)
    {
        if(peer_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| ydk::is_set(fabric_id.yfilter)
	|| ydk::is_set(config_state.yfilter)
	|| ydk::is_set(last_upd_ts_config.yfilter)
	|| ydk::is_set(fabric_state.yfilter)
	|| ydk::is_set(last_upd_ts_fabric.yfilter);
}

std::string DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-oper:dci-fabric-interconnect/opflex-session-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opflex-session-info";
    ADD_KEY_TOKEN(id1, "id1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (fabric_id.is_set || is_set(fabric_id.yfilter)) leaf_name_data.push_back(fabric_id.get_name_leafdata());
    if (config_state.is_set || is_set(config_state.yfilter)) leaf_name_data.push_back(config_state.get_name_leafdata());
    if (last_upd_ts_config.is_set || is_set(last_upd_ts_config.yfilter)) leaf_name_data.push_back(last_upd_ts_config.get_name_leafdata());
    if (fabric_state.is_set || is_set(fabric_state.yfilter)) leaf_name_data.push_back(fabric_state.get_name_leafdata());
    if (last_upd_ts_fabric.is_set || is_set(last_upd_ts_fabric.yfilter)) leaf_name_data.push_back(last_upd_ts_fabric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-info")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo>();
        ent_->parent = this;
        peer_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::get_children() const
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

void DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabric-id")
    {
        fabric_id = value;
        fabric_id.value_namespace = name_space;
        fabric_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-state")
    {
        config_state = value;
        config_state.value_namespace = name_space;
        config_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-upd-ts-config")
    {
        last_upd_ts_config = value;
        last_upd_ts_config.value_namespace = name_space;
        last_upd_ts_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabric-state")
    {
        fabric_state = value;
        fabric_state.value_namespace = name_space;
        fabric_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-upd-ts-fabric")
    {
        last_upd_ts_fabric = value;
        last_upd_ts_fabric.value_namespace = name_space;
        last_upd_ts_fabric.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
    if(value_path == "fabric-id")
    {
        fabric_id.yfilter = yfilter;
    }
    if(value_path == "config-state")
    {
        config_state.yfilter = yfilter;
    }
    if(value_path == "last-upd-ts-config")
    {
        last_upd_ts_config.yfilter = yfilter;
    }
    if(value_path == "fabric-state")
    {
        fabric_state.yfilter = yfilter;
    }
    if(value_path == "last-upd-ts-fabric")
    {
        last_upd_ts_fabric.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-info" || name == "id1" || name == "fabric-id" || name == "config-state" || name == "last-upd-ts-config" || name == "fabric-state" || name == "last-upd-ts-fabric")
        return true;
    return false;
}

DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo::PeerInfo()
    :
    peer_ip{YType::str, "peer-ip"},
    peer_port{YType::uint32, "peer-port"},
    peer_state{YType::enumeration, "peer-state"},
    last_upd_ts_peer_status{YType::uint64, "last-upd-ts-peer-status"}
{

    yang_name = "peer-info"; yang_parent_name = "opflex-session-info"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo::~PeerInfo()
{
}

bool DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo::has_data() const
{
    if (is_presence_container) return true;
    return peer_ip.is_set
	|| peer_port.is_set
	|| peer_state.is_set
	|| last_upd_ts_peer_status.is_set;
}

bool DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_ip.yfilter)
	|| ydk::is_set(peer_port.yfilter)
	|| ydk::is_set(peer_state.yfilter)
	|| ydk::is_set(last_upd_ts_peer_status.yfilter);
}

std::string DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_ip.is_set || is_set(peer_ip.yfilter)) leaf_name_data.push_back(peer_ip.get_name_leafdata());
    if (peer_port.is_set || is_set(peer_port.yfilter)) leaf_name_data.push_back(peer_port.get_name_leafdata());
    if (peer_state.is_set || is_set(peer_state.yfilter)) leaf_name_data.push_back(peer_state.get_name_leafdata());
    if (last_upd_ts_peer_status.is_set || is_set(last_upd_ts_peer_status.yfilter)) leaf_name_data.push_back(last_upd_ts_peer_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-ip")
    {
        peer_ip = value;
        peer_ip.value_namespace = name_space;
        peer_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-port")
    {
        peer_port = value;
        peer_port.value_namespace = name_space;
        peer_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-state")
    {
        peer_state = value;
        peer_state.value_namespace = name_space;
        peer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-upd-ts-peer-status")
    {
        last_upd_ts_peer_status = value;
        last_upd_ts_peer_status.value_namespace = name_space;
        last_upd_ts_peer_status.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-ip")
    {
        peer_ip.yfilter = yfilter;
    }
    if(value_path == "peer-port")
    {
        peer_port.yfilter = yfilter;
    }
    if(value_path == "peer-state")
    {
        peer_state.yfilter = yfilter;
    }
    if(value_path == "last-upd-ts-peer-status")
    {
        last_upd_ts_peer_status.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::OpflexSessionInfos::OpflexSessionInfo::PeerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-ip" || name == "peer-port" || name == "peer-state" || name == "last-upd-ts-peer-status")
        return true;
    return false;
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDbs()
    :
    fabric_vrf_db(this, {"id1"})
{

    yang_name = "fabric-vrf-dbs"; yang_parent_name = "dci-fabric-interconnect"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::FabricVrfDbs::~FabricVrfDbs()
{
}

bool DciFabricInterconnect::FabricVrfDbs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabric_vrf_db.len(); index++)
    {
        if(fabric_vrf_db[index]->has_data())
            return true;
    }
    return false;
}

bool DciFabricInterconnect::FabricVrfDbs::has_operation() const
{
    for (std::size_t index=0; index<fabric_vrf_db.len(); index++)
    {
        if(fabric_vrf_db[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DciFabricInterconnect::FabricVrfDbs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-oper:dci-fabric-interconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::FabricVrfDbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric-vrf-dbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::FabricVrfDbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::FabricVrfDbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric-vrf-db")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::FabricVrfDbs::FabricVrfDb>();
        ent_->parent = this;
        fabric_vrf_db.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::FabricVrfDbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fabric_vrf_db.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DciFabricInterconnect::FabricVrfDbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DciFabricInterconnect::FabricVrfDbs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DciFabricInterconnect::FabricVrfDbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric-vrf-db")
        return true;
    return false;
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrfDb()
    :
    id1{YType::uint32, "id1"},
    fabric_id{YType::uint32, "fabric-id"}
        ,
    fabric_vrf(this, {})
{

    yang_name = "fabric-vrf-db"; yang_parent_name = "fabric-vrf-dbs"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::~FabricVrfDb()
{
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabric_vrf.len(); index++)
    {
        if(fabric_vrf[index]->has_data())
            return true;
    }
    return id1.is_set
	|| fabric_id.is_set;
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::has_operation() const
{
    for (std::size_t index=0; index<fabric_vrf.len(); index++)
    {
        if(fabric_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| ydk::is_set(fabric_id.yfilter);
}

std::string DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-oper:dci-fabric-interconnect/fabric-vrf-dbs/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric-vrf-db";
    ADD_KEY_TOKEN(id1, "id1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (fabric_id.is_set || is_set(fabric_id.yfilter)) leaf_name_data.push_back(fabric_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric-vrf")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf>();
        ent_->parent = this;
        fabric_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fabric_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabric-id")
    {
        fabric_id = value;
        fabric_id.value_namespace = name_space;
        fabric_id.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
    if(value_path == "fabric-id")
    {
        fabric_id.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric-vrf" || name == "id1" || name == "fabric-id")
        return true;
    return false;
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::FabricVrf()
    :
    fabric_vrf{YType::str, "fabric-vrf"},
    dci_vrf{YType::str, "dci-vrf"},
    fabric_vrf_flags{YType::str, "fabric-vrf-flags"}
        ,
    v4_import_rt(this, {})
    , v4_export_rt(this, {})
    , v6_import_rt(this, {})
    , v6_export_rt(this, {})
{

    yang_name = "fabric-vrf"; yang_parent_name = "fabric-vrf-db"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::~FabricVrf()
{
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<v4_import_rt.len(); index++)
    {
        if(v4_import_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<v4_export_rt.len(); index++)
    {
        if(v4_export_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<v6_import_rt.len(); index++)
    {
        if(v6_import_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<v6_export_rt.len(); index++)
    {
        if(v6_export_rt[index]->has_data())
            return true;
    }
    return fabric_vrf.is_set
	|| dci_vrf.is_set
	|| fabric_vrf_flags.is_set;
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::has_operation() const
{
    for (std::size_t index=0; index<v4_import_rt.len(); index++)
    {
        if(v4_import_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<v4_export_rt.len(); index++)
    {
        if(v4_export_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<v6_import_rt.len(); index++)
    {
        if(v6_import_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<v6_export_rt.len(); index++)
    {
        if(v6_export_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fabric_vrf.yfilter)
	|| ydk::is_set(dci_vrf.yfilter)
	|| ydk::is_set(fabric_vrf_flags.yfilter);
}

std::string DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric-vrf";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabric_vrf.is_set || is_set(fabric_vrf.yfilter)) leaf_name_data.push_back(fabric_vrf.get_name_leafdata());
    if (dci_vrf.is_set || is_set(dci_vrf.yfilter)) leaf_name_data.push_back(dci_vrf.get_name_leafdata());
    if (fabric_vrf_flags.is_set || is_set(fabric_vrf_flags.yfilter)) leaf_name_data.push_back(fabric_vrf_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v4-import-rt")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt>();
        ent_->parent = this;
        v4_import_rt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "v4-export-rt")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt>();
        ent_->parent = this;
        v4_export_rt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "v6-import-rt")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt>();
        ent_->parent = this;
        v6_import_rt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "v6-export-rt")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt>();
        ent_->parent = this;
        v6_export_rt.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : v4_import_rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : v4_export_rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : v6_import_rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : v6_export_rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabric-vrf")
    {
        fabric_vrf = value;
        fabric_vrf.value_namespace = name_space;
        fabric_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dci-vrf")
    {
        dci_vrf = value;
        dci_vrf.value_namespace = name_space;
        dci_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabric-vrf-flags")
    {
        fabric_vrf_flags = value;
        fabric_vrf_flags.value_namespace = name_space;
        fabric_vrf_flags.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabric-vrf")
    {
        fabric_vrf.yfilter = yfilter;
    }
    if(value_path == "dci-vrf")
    {
        dci_vrf.yfilter = yfilter;
    }
    if(value_path == "fabric-vrf-flags")
    {
        fabric_vrf_flags.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v4-import-rt" || name == "v4-export-rt" || name == "v6-import-rt" || name == "v6-export-rt" || name == "fabric-vrf" || name == "dci-vrf" || name == "fabric-vrf-flags")
        return true;
    return false;
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt::V4ImportRt()
    :
    rt_value{YType::str, "rt-value"},
    rt_flags{YType::str, "rt-flags"}
{

    yang_name = "v4-import-rt"; yang_parent_name = "fabric-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt::~V4ImportRt()
{
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set
	|| rt_flags.is_set;
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter)
	|| ydk::is_set(rt_flags.yfilter);
}

std::string DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-import-rt";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());
    if (rt_flags.is_set || is_set(rt_flags.yfilter)) leaf_name_data.push_back(rt_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-flags")
    {
        rt_flags = value;
        rt_flags.value_namespace = name_space;
        rt_flags.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
    if(value_path == "rt-flags")
    {
        rt_flags.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ImportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value" || name == "rt-flags")
        return true;
    return false;
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt::V4ExportRt()
    :
    rt_value{YType::str, "rt-value"},
    rt_flags{YType::str, "rt-flags"}
{

    yang_name = "v4-export-rt"; yang_parent_name = "fabric-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt::~V4ExportRt()
{
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set
	|| rt_flags.is_set;
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter)
	|| ydk::is_set(rt_flags.yfilter);
}

std::string DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-export-rt";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());
    if (rt_flags.is_set || is_set(rt_flags.yfilter)) leaf_name_data.push_back(rt_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-flags")
    {
        rt_flags = value;
        rt_flags.value_namespace = name_space;
        rt_flags.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
    if(value_path == "rt-flags")
    {
        rt_flags.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V4ExportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value" || name == "rt-flags")
        return true;
    return false;
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt::V6ImportRt()
    :
    rt_value{YType::str, "rt-value"},
    rt_flags{YType::str, "rt-flags"}
{

    yang_name = "v6-import-rt"; yang_parent_name = "fabric-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt::~V6ImportRt()
{
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set
	|| rt_flags.is_set;
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter)
	|| ydk::is_set(rt_flags.yfilter);
}

std::string DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-import-rt";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());
    if (rt_flags.is_set || is_set(rt_flags.yfilter)) leaf_name_data.push_back(rt_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-flags")
    {
        rt_flags = value;
        rt_flags.value_namespace = name_space;
        rt_flags.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
    if(value_path == "rt-flags")
    {
        rt_flags.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ImportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value" || name == "rt-flags")
        return true;
    return false;
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt::V6ExportRt()
    :
    rt_value{YType::str, "rt-value"},
    rt_flags{YType::str, "rt-flags"}
{

    yang_name = "v6-export-rt"; yang_parent_name = "fabric-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt::~V6ExportRt()
{
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set
	|| rt_flags.is_set;
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter)
	|| ydk::is_set(rt_flags.yfilter);
}

std::string DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-export-rt";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());
    if (rt_flags.is_set || is_set(rt_flags.yfilter)) leaf_name_data.push_back(rt_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-flags")
    {
        rt_flags = value;
        rt_flags.value_namespace = name_space;
        rt_flags.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
    if(value_path == "rt-flags")
    {
        rt_flags.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::FabricVrfDbs::FabricVrfDb::FabricVrf::V6ExportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value" || name == "rt-flags")
        return true;
    return false;
}

DciFabricInterconnect::DciVrfs::DciVrfs()
    :
    dci_vrf(this, {"vrf1"})
{

    yang_name = "dci-vrfs"; yang_parent_name = "dci-fabric-interconnect"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::DciVrfs::~DciVrfs()
{
}

bool DciFabricInterconnect::DciVrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dci_vrf.len(); index++)
    {
        if(dci_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool DciFabricInterconnect::DciVrfs::has_operation() const
{
    for (std::size_t index=0; index<dci_vrf.len(); index++)
    {
        if(dci_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DciFabricInterconnect::DciVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-oper:dci-fabric-interconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::DciVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dci-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::DciVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::DciVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dci-vrf")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::DciVrfs::DciVrf>();
        ent_->parent = this;
        dci_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::DciVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dci_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DciFabricInterconnect::DciVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DciFabricInterconnect::DciVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DciFabricInterconnect::DciVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dci-vrf")
        return true;
    return false;
}

DciFabricInterconnect::DciVrfs::DciVrf::DciVrf()
    :
    vrf1{YType::str, "vrf1"},
    dci_vrf{YType::str, "dci-vrf"},
    num_fabric_vrf{YType::uint32, "num-fabric-vrf"},
    faric_vrfs_id_name{YType::str, "faric-vrfs-id-name"},
    vni_id{YType::uint32, "vni-id"},
    bd_name{YType::str, "bd-name"},
    bvi_id{YType::uint32, "bvi-id"},
    bvi_ip{YType::str, "bvi-ip"},
    bvi_ip_v6{YType::boolean, "bvi-ip-v6"},
    dci_vrf_flags{YType::str, "dci-vrf-flags"}
        ,
    v4_import_rt(this, {})
    , v4_export_rt(this, {})
    , v6_import_rt(this, {})
    , v6_export_rt(this, {})
{

    yang_name = "dci-vrf"; yang_parent_name = "dci-vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::DciVrfs::DciVrf::~DciVrf()
{
}

bool DciFabricInterconnect::DciVrfs::DciVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<v4_import_rt.len(); index++)
    {
        if(v4_import_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<v4_export_rt.len(); index++)
    {
        if(v4_export_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<v6_import_rt.len(); index++)
    {
        if(v6_import_rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<v6_export_rt.len(); index++)
    {
        if(v6_export_rt[index]->has_data())
            return true;
    }
    return vrf1.is_set
	|| dci_vrf.is_set
	|| num_fabric_vrf.is_set
	|| faric_vrfs_id_name.is_set
	|| vni_id.is_set
	|| bd_name.is_set
	|| bvi_id.is_set
	|| bvi_ip.is_set
	|| bvi_ip_v6.is_set
	|| dci_vrf_flags.is_set;
}

bool DciFabricInterconnect::DciVrfs::DciVrf::has_operation() const
{
    for (std::size_t index=0; index<v4_import_rt.len(); index++)
    {
        if(v4_import_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<v4_export_rt.len(); index++)
    {
        if(v4_export_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<v6_import_rt.len(); index++)
    {
        if(v6_import_rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<v6_export_rt.len(); index++)
    {
        if(v6_export_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf1.yfilter)
	|| ydk::is_set(dci_vrf.yfilter)
	|| ydk::is_set(num_fabric_vrf.yfilter)
	|| ydk::is_set(faric_vrfs_id_name.yfilter)
	|| ydk::is_set(vni_id.yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(bvi_id.yfilter)
	|| ydk::is_set(bvi_ip.yfilter)
	|| ydk::is_set(bvi_ip_v6.yfilter)
	|| ydk::is_set(dci_vrf_flags.yfilter);
}

std::string DciFabricInterconnect::DciVrfs::DciVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-oper:dci-fabric-interconnect/dci-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::DciVrfs::DciVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dci-vrf";
    ADD_KEY_TOKEN(vrf1, "vrf1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::DciVrfs::DciVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf1.is_set || is_set(vrf1.yfilter)) leaf_name_data.push_back(vrf1.get_name_leafdata());
    if (dci_vrf.is_set || is_set(dci_vrf.yfilter)) leaf_name_data.push_back(dci_vrf.get_name_leafdata());
    if (num_fabric_vrf.is_set || is_set(num_fabric_vrf.yfilter)) leaf_name_data.push_back(num_fabric_vrf.get_name_leafdata());
    if (faric_vrfs_id_name.is_set || is_set(faric_vrfs_id_name.yfilter)) leaf_name_data.push_back(faric_vrfs_id_name.get_name_leafdata());
    if (vni_id.is_set || is_set(vni_id.yfilter)) leaf_name_data.push_back(vni_id.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (bvi_id.is_set || is_set(bvi_id.yfilter)) leaf_name_data.push_back(bvi_id.get_name_leafdata());
    if (bvi_ip.is_set || is_set(bvi_ip.yfilter)) leaf_name_data.push_back(bvi_ip.get_name_leafdata());
    if (bvi_ip_v6.is_set || is_set(bvi_ip_v6.yfilter)) leaf_name_data.push_back(bvi_ip_v6.get_name_leafdata());
    if (dci_vrf_flags.is_set || is_set(dci_vrf_flags.yfilter)) leaf_name_data.push_back(dci_vrf_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::DciVrfs::DciVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v4-import-rt")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt>();
        ent_->parent = this;
        v4_import_rt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "v4-export-rt")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt>();
        ent_->parent = this;
        v4_export_rt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "v6-import-rt")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt>();
        ent_->parent = this;
        v6_import_rt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "v6-export-rt")
    {
        auto ent_ = std::make_shared<DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt>();
        ent_->parent = this;
        v6_export_rt.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::DciVrfs::DciVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : v4_import_rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : v4_export_rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : v6_import_rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : v6_export_rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DciFabricInterconnect::DciVrfs::DciVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf1")
    {
        vrf1 = value;
        vrf1.value_namespace = name_space;
        vrf1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dci-vrf")
    {
        dci_vrf = value;
        dci_vrf.value_namespace = name_space;
        dci_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-fabric-vrf")
    {
        num_fabric_vrf = value;
        num_fabric_vrf.value_namespace = name_space;
        num_fabric_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faric-vrfs-id-name")
    {
        faric_vrfs_id_name = value;
        faric_vrfs_id_name.value_namespace = name_space;
        faric_vrfs_id_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-id")
    {
        vni_id = value;
        vni_id.value_namespace = name_space;
        vni_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-id")
    {
        bvi_id = value;
        bvi_id.value_namespace = name_space;
        bvi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-ip")
    {
        bvi_ip = value;
        bvi_ip.value_namespace = name_space;
        bvi_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-ip-v6")
    {
        bvi_ip_v6 = value;
        bvi_ip_v6.value_namespace = name_space;
        bvi_ip_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dci-vrf-flags")
    {
        dci_vrf_flags = value;
        dci_vrf_flags.value_namespace = name_space;
        dci_vrf_flags.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::DciVrfs::DciVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf1")
    {
        vrf1.yfilter = yfilter;
    }
    if(value_path == "dci-vrf")
    {
        dci_vrf.yfilter = yfilter;
    }
    if(value_path == "num-fabric-vrf")
    {
        num_fabric_vrf.yfilter = yfilter;
    }
    if(value_path == "faric-vrfs-id-name")
    {
        faric_vrfs_id_name.yfilter = yfilter;
    }
    if(value_path == "vni-id")
    {
        vni_id.yfilter = yfilter;
    }
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "bvi-id")
    {
        bvi_id.yfilter = yfilter;
    }
    if(value_path == "bvi-ip")
    {
        bvi_ip.yfilter = yfilter;
    }
    if(value_path == "bvi-ip-v6")
    {
        bvi_ip_v6.yfilter = yfilter;
    }
    if(value_path == "dci-vrf-flags")
    {
        dci_vrf_flags.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::DciVrfs::DciVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v4-import-rt" || name == "v4-export-rt" || name == "v6-import-rt" || name == "v6-export-rt" || name == "vrf1" || name == "dci-vrf" || name == "num-fabric-vrf" || name == "faric-vrfs-id-name" || name == "vni-id" || name == "bd-name" || name == "bvi-id" || name == "bvi-ip" || name == "bvi-ip-v6" || name == "dci-vrf-flags")
        return true;
    return false;
}

DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt::V4ImportRt()
    :
    rt_value{YType::str, "rt-value"},
    rt_flags{YType::str, "rt-flags"}
{

    yang_name = "v4-import-rt"; yang_parent_name = "dci-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt::~V4ImportRt()
{
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set
	|| rt_flags.is_set;
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter)
	|| ydk::is_set(rt_flags.yfilter);
}

std::string DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-import-rt";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());
    if (rt_flags.is_set || is_set(rt_flags.yfilter)) leaf_name_data.push_back(rt_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-flags")
    {
        rt_flags = value;
        rt_flags.value_namespace = name_space;
        rt_flags.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
    if(value_path == "rt-flags")
    {
        rt_flags.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V4ImportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value" || name == "rt-flags")
        return true;
    return false;
}

DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt::V4ExportRt()
    :
    rt_value{YType::str, "rt-value"},
    rt_flags{YType::str, "rt-flags"}
{

    yang_name = "v4-export-rt"; yang_parent_name = "dci-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt::~V4ExportRt()
{
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set
	|| rt_flags.is_set;
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter)
	|| ydk::is_set(rt_flags.yfilter);
}

std::string DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-export-rt";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());
    if (rt_flags.is_set || is_set(rt_flags.yfilter)) leaf_name_data.push_back(rt_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-flags")
    {
        rt_flags = value;
        rt_flags.value_namespace = name_space;
        rt_flags.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
    if(value_path == "rt-flags")
    {
        rt_flags.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V4ExportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value" || name == "rt-flags")
        return true;
    return false;
}

DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt::V6ImportRt()
    :
    rt_value{YType::str, "rt-value"},
    rt_flags{YType::str, "rt-flags"}
{

    yang_name = "v6-import-rt"; yang_parent_name = "dci-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt::~V6ImportRt()
{
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set
	|| rt_flags.is_set;
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter)
	|| ydk::is_set(rt_flags.yfilter);
}

std::string DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-import-rt";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());
    if (rt_flags.is_set || is_set(rt_flags.yfilter)) leaf_name_data.push_back(rt_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-flags")
    {
        rt_flags = value;
        rt_flags.value_namespace = name_space;
        rt_flags.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
    if(value_path == "rt-flags")
    {
        rt_flags.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V6ImportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value" || name == "rt-flags")
        return true;
    return false;
}

DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt::V6ExportRt()
    :
    rt_value{YType::str, "rt-value"},
    rt_flags{YType::str, "rt-flags"}
{

    yang_name = "v6-export-rt"; yang_parent_name = "dci-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt::~V6ExportRt()
{
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set
	|| rt_flags.is_set;
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter)
	|| ydk::is_set(rt_flags.yfilter);
}

std::string DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-export-rt";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());
    if (rt_flags.is_set || is_set(rt_flags.yfilter)) leaf_name_data.push_back(rt_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-flags")
    {
        rt_flags = value;
        rt_flags.value_namespace = name_space;
        rt_flags.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
    if(value_path == "rt-flags")
    {
        rt_flags.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::DciVrfs::DciVrf::V6ExportRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value" || name == "rt-flags")
        return true;
    return false;
}

DciFabricInterconnect::Acp::Acp()
    :
    vni_min{YType::uint32, "vni-min"},
    vni_max{YType::uint32, "vni-max"},
    vni_bits{YType::uint32, "vni-bits"},
    bvi_min{YType::uint32, "bvi-min"},
    bvi_max{YType::uint32, "bvi-max"},
    bvi_bits{YType::uint32, "bvi-bits"},
    bd_min{YType::uint32, "bd-min"},
    bd_max{YType::uint32, "bd-max"},
    bd_bits{YType::uint32, "bd-bits"},
    vniused_range{YType::str, "vniused-range"},
    bviused_range{YType::str, "bviused-range"},
    bdused_range{YType::str, "bdused-range"}
{

    yang_name = "acp"; yang_parent_name = "dci-fabric-interconnect"; is_top_level_class = false; has_list_ancestor = false; 
}

DciFabricInterconnect::Acp::~Acp()
{
}

bool DciFabricInterconnect::Acp::has_data() const
{
    if (is_presence_container) return true;
    return vni_min.is_set
	|| vni_max.is_set
	|| vni_bits.is_set
	|| bvi_min.is_set
	|| bvi_max.is_set
	|| bvi_bits.is_set
	|| bd_min.is_set
	|| bd_max.is_set
	|| bd_bits.is_set
	|| vniused_range.is_set
	|| bviused_range.is_set
	|| bdused_range.is_set;
}

bool DciFabricInterconnect::Acp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni_min.yfilter)
	|| ydk::is_set(vni_max.yfilter)
	|| ydk::is_set(vni_bits.yfilter)
	|| ydk::is_set(bvi_min.yfilter)
	|| ydk::is_set(bvi_max.yfilter)
	|| ydk::is_set(bvi_bits.yfilter)
	|| ydk::is_set(bd_min.yfilter)
	|| ydk::is_set(bd_max.yfilter)
	|| ydk::is_set(bd_bits.yfilter)
	|| ydk::is_set(vniused_range.yfilter)
	|| ydk::is_set(bviused_range.yfilter)
	|| ydk::is_set(bdused_range.yfilter);
}

std::string DciFabricInterconnect::Acp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-fti-oper:dci-fabric-interconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string DciFabricInterconnect::Acp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DciFabricInterconnect::Acp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni_min.is_set || is_set(vni_min.yfilter)) leaf_name_data.push_back(vni_min.get_name_leafdata());
    if (vni_max.is_set || is_set(vni_max.yfilter)) leaf_name_data.push_back(vni_max.get_name_leafdata());
    if (vni_bits.is_set || is_set(vni_bits.yfilter)) leaf_name_data.push_back(vni_bits.get_name_leafdata());
    if (bvi_min.is_set || is_set(bvi_min.yfilter)) leaf_name_data.push_back(bvi_min.get_name_leafdata());
    if (bvi_max.is_set || is_set(bvi_max.yfilter)) leaf_name_data.push_back(bvi_max.get_name_leafdata());
    if (bvi_bits.is_set || is_set(bvi_bits.yfilter)) leaf_name_data.push_back(bvi_bits.get_name_leafdata());
    if (bd_min.is_set || is_set(bd_min.yfilter)) leaf_name_data.push_back(bd_min.get_name_leafdata());
    if (bd_max.is_set || is_set(bd_max.yfilter)) leaf_name_data.push_back(bd_max.get_name_leafdata());
    if (bd_bits.is_set || is_set(bd_bits.yfilter)) leaf_name_data.push_back(bd_bits.get_name_leafdata());
    if (vniused_range.is_set || is_set(vniused_range.yfilter)) leaf_name_data.push_back(vniused_range.get_name_leafdata());
    if (bviused_range.is_set || is_set(bviused_range.yfilter)) leaf_name_data.push_back(bviused_range.get_name_leafdata());
    if (bdused_range.is_set || is_set(bdused_range.yfilter)) leaf_name_data.push_back(bdused_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DciFabricInterconnect::Acp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DciFabricInterconnect::Acp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DciFabricInterconnect::Acp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni-min")
    {
        vni_min = value;
        vni_min.value_namespace = name_space;
        vni_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-max")
    {
        vni_max = value;
        vni_max.value_namespace = name_space;
        vni_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-bits")
    {
        vni_bits = value;
        vni_bits.value_namespace = name_space;
        vni_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-min")
    {
        bvi_min = value;
        bvi_min.value_namespace = name_space;
        bvi_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-max")
    {
        bvi_max = value;
        bvi_max.value_namespace = name_space;
        bvi_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-bits")
    {
        bvi_bits = value;
        bvi_bits.value_namespace = name_space;
        bvi_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-min")
    {
        bd_min = value;
        bd_min.value_namespace = name_space;
        bd_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-max")
    {
        bd_max = value;
        bd_max.value_namespace = name_space;
        bd_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-bits")
    {
        bd_bits = value;
        bd_bits.value_namespace = name_space;
        bd_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vniused-range")
    {
        vniused_range = value;
        vniused_range.value_namespace = name_space;
        vniused_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bviused-range")
    {
        bviused_range = value;
        bviused_range.value_namespace = name_space;
        bviused_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdused-range")
    {
        bdused_range = value;
        bdused_range.value_namespace = name_space;
        bdused_range.value_namespace_prefix = name_space_prefix;
    }
}

void DciFabricInterconnect::Acp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni-min")
    {
        vni_min.yfilter = yfilter;
    }
    if(value_path == "vni-max")
    {
        vni_max.yfilter = yfilter;
    }
    if(value_path == "vni-bits")
    {
        vni_bits.yfilter = yfilter;
    }
    if(value_path == "bvi-min")
    {
        bvi_min.yfilter = yfilter;
    }
    if(value_path == "bvi-max")
    {
        bvi_max.yfilter = yfilter;
    }
    if(value_path == "bvi-bits")
    {
        bvi_bits.yfilter = yfilter;
    }
    if(value_path == "bd-min")
    {
        bd_min.yfilter = yfilter;
    }
    if(value_path == "bd-max")
    {
        bd_max.yfilter = yfilter;
    }
    if(value_path == "bd-bits")
    {
        bd_bits.yfilter = yfilter;
    }
    if(value_path == "vniused-range")
    {
        vniused_range.yfilter = yfilter;
    }
    if(value_path == "bviused-range")
    {
        bviused_range.yfilter = yfilter;
    }
    if(value_path == "bdused-range")
    {
        bdused_range.yfilter = yfilter;
    }
}

bool DciFabricInterconnect::Acp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vni-min" || name == "vni-max" || name == "vni-bits" || name == "bvi-min" || name == "bvi-max" || name == "bvi-bits" || name == "bd-min" || name == "bd-max" || name == "bd-bits" || name == "vniused-range" || name == "bviused-range" || name == "bdused-range")
        return true;
    return false;
}

const Enum::YLeaf FtiBagFabricPeerState::fti_bag_fabric_peer_status_disconnected {0, "fti-bag-fabric-peer-status-disconnected"};
const Enum::YLeaf FtiBagFabricPeerState::fti_bag_fabric_peer_status_connecting {1, "fti-bag-fabric-peer-status-connecting"};
const Enum::YLeaf FtiBagFabricPeerState::fti_bag_fabric_peer_status_connected {2, "fti-bag-fabric-peer-status-connected"};
const Enum::YLeaf FtiBagFabricPeerState::fti_bag_fabric_peer_status_ready {3, "fti-bag-fabric-peer-status-ready"};
const Enum::YLeaf FtiBagFabricPeerState::fti_bag_fabric_peer_status_closing {4, "fti-bag-fabric-peer-status-closing"};

const Enum::YLeaf FtiBagFabricState::fti_bag_fabric_state_active_down {0, "fti-bag-fabric-state-active-down"};
const Enum::YLeaf FtiBagFabricState::fti_bag_fabric_state_active_degraded {1, "fti-bag-fabric-state-active-degraded"};
const Enum::YLeaf FtiBagFabricState::fti_bag_fabric_state_active_healthy {2, "fti-bag-fabric-state-active-healthy"};
const Enum::YLeaf FtiBagFabricState::fti_bag_fabric_state_inactive {3, "fti-bag-fabric-state-inactive"};

const Enum::YLeaf FtiBagFabricConfigState::fti_bag_config_complete {0, "fti-bag-config-complete"};
const Enum::YLeaf FtiBagFabricConfigState::fti_bag_config_incomplete {1, "fti-bag-config-incomplete"};


}
}

