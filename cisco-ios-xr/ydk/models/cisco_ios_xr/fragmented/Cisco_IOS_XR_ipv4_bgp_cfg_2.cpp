
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroups()
    :
    session_group(this, {"session_group_name"})
{

    yang_name = "session-groups"; yang_parent_name = "bgp-entity"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::~SessionGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_group.len(); index++)
    {
        if(session_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::has_operation() const
{
    for (std::size_t index=0; index<session_group.len(); index++)
    {
        if(session_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-group")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup>();
        ent_->parent = this;
        session_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-group")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SessionGroup()
    :
    session_group_name{YType::str, "session-group-name"},
    session_group_add_member{YType::str, "session-group-add-member"},
    internal_vpn_client_ibgp_ce{YType::boolean, "internal-vpn-client-ibgp-ce"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    shutdown{YType::boolean, "shutdown"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    neighbor_graceful_restart{YType::enumeration, "neighbor-graceful-restart"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    max_peers{YType::uint32, "max-peers"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    ttl_security{YType::boolean, "ttl-security"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    remote_as_list{YType::str, "remote-as-list"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    update_source_interface{YType::str, "update-source-interface"},
    create{YType::empty, "create"}
        ,
    local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress>())
    , bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates>())
    , ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop>())
    , remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs>())
    , local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs>())
    , password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password>())
    , advertisement_interval(nullptr) // presence node
    , neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId>())
    , tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss>())
    , tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos>())
    , update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering>())
    , msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut>())
    , ao_keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain>())
    , receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize>())
    , msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn>())
    , send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize>())
    , timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers>())
    , keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain>())
    , graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance>())
{
    local_address->parent = this;
    bmp_activates->parent = this;
    ebgp_multihop->parent = this;
    remote_as->parent = this;
    local_as->parent = this;
    password->parent = this;
    neighbor_cluster_id->parent = this;
    tcpmss->parent = this;
    tos->parent = this;
    update_in_filtering->parent = this;
    msg_log_out->parent = this;
    ao_keychain->parent = this;
    receive_buffer_size->parent = this;
    msg_log_in->parent = this;
    send_buffer_size->parent = this;
    timers->parent = this;
    keychain->parent = this;
    graceful_maintenance->parent = this;

    yang_name = "session-group"; yang_parent_name = "session-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::~SessionGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::has_data() const
{
    if (is_presence_container) return true;
    return session_group_name.is_set
	|| session_group_add_member.is_set
	|| internal_vpn_client_ibgp_ce.is_set
	|| egress_peer_engineering.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| shutdown.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| neighbor_graceful_restart.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| session_open_mode.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| suppress_all_capabilities.is_set
	|| max_peers.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| additional_paths_send_capability.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| bfd_enable_modes.is_set
	|| ttl_security.is_set
	|| neighbor_graceful_restart_time.is_set
	|| bfd_multiplier.is_set
	|| bfd_minimum_interval.is_set
	|| remote_as_list.is_set
	|| additional_paths_receive_capability.is_set
	|| ignore_connected_check_ebgp.is_set
	|| suppress_four_byte_as_capability.is_set
	|| update_source_interface.is_set
	|| create.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (ao_keychain !=  nullptr && ao_keychain->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_group_name.yfilter)
	|| ydk::is_set(session_group_add_member.yfilter)
	|| ydk::is_set(internal_vpn_client_ibgp_ce.yfilter)
	|| ydk::is_set(egress_peer_engineering.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ebgp_recv_dmz.yfilter)
	|| ydk::is_set(neighbor_graceful_restart.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(idle_watch_time.yfilter)
	|| ydk::is_set(session_open_mode.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(ebgp_send_dmz_enable_modes.yfilter)
	|| ydk::is_set(suppress_all_capabilities.yfilter)
	|| ydk::is_set(max_peers.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(additional_paths_send_capability.yfilter)
	|| ydk::is_set(propagate_dmz_link_bandwidth.yfilter)
	|| ydk::is_set(bfd_enable_modes.yfilter)
	|| ydk::is_set(ttl_security.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_time.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(bfd_minimum_interval.yfilter)
	|| ydk::is_set(remote_as_list.yfilter)
	|| ydk::is_set(additional_paths_receive_capability.yfilter)
	|| ydk::is_set(ignore_connected_check_ebgp.yfilter)
	|| ydk::is_set(suppress_four_byte_as_capability.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| ydk::is_set(create.yfilter)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (ao_keychain !=  nullptr && ao_keychain->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-group";
    ADD_KEY_TOKEN(session_group_name, "session-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_group_name.is_set || is_set(session_group_name.yfilter)) leaf_name_data.push_back(session_group_name.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.yfilter)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (internal_vpn_client_ibgp_ce.is_set || is_set(internal_vpn_client_ibgp_ce.yfilter)) leaf_name_data.push_back(internal_vpn_client_ibgp_ce.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.yfilter)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.yfilter)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.yfilter)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.yfilter)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.yfilter)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.yfilter)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.yfilter)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.yfilter)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.yfilter)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.yfilter)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.yfilter)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.yfilter)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.yfilter)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.yfilter)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.yfilter)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.yfilter)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates == nullptr)
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates>();
        }
        return bmp_activates;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password>();
        }
        return password;
    }

    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval == nullptr)
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval>();
        }
        return advertisement_interval;
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id == nullptr)
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId>();
        }
        return neighbor_cluster_id;
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss == nullptr)
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss>();
        }
        return tcpmss;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering == nullptr)
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering>();
        }
        return update_in_filtering;
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out == nullptr)
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut>();
        }
        return msg_log_out;
    }

    if(child_yang_name == "ao-keychain")
    {
        if(ao_keychain == nullptr)
        {
            ao_keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain>();
        }
        return ao_keychain;
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size == nullptr)
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize>();
        }
        return receive_buffer_size;
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in == nullptr)
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn>();
        }
        return msg_log_in;
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size == nullptr)
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize>();
        }
        return send_buffer_size;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "keychain")
    {
        if(keychain == nullptr)
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain>();
        }
        return keychain;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_address != nullptr)
    {
        _children["local-address"] = local_address;
    }

    if(bmp_activates != nullptr)
    {
        _children["bmp-activates"] = bmp_activates;
    }

    if(ebgp_multihop != nullptr)
    {
        _children["ebgp-multihop"] = ebgp_multihop;
    }

    if(remote_as != nullptr)
    {
        _children["remote-as"] = remote_as;
    }

    if(local_as != nullptr)
    {
        _children["local-as"] = local_as;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(advertisement_interval != nullptr)
    {
        _children["advertisement-interval"] = advertisement_interval;
    }

    if(neighbor_cluster_id != nullptr)
    {
        _children["neighbor-cluster-id"] = neighbor_cluster_id;
    }

    if(tcpmss != nullptr)
    {
        _children["tcpmss"] = tcpmss;
    }

    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    if(update_in_filtering != nullptr)
    {
        _children["update-in-filtering"] = update_in_filtering;
    }

    if(msg_log_out != nullptr)
    {
        _children["msg-log-out"] = msg_log_out;
    }

    if(ao_keychain != nullptr)
    {
        _children["ao-keychain"] = ao_keychain;
    }

    if(receive_buffer_size != nullptr)
    {
        _children["receive-buffer-size"] = receive_buffer_size;
    }

    if(msg_log_in != nullptr)
    {
        _children["msg-log-in"] = msg_log_in;
    }

    if(send_buffer_size != nullptr)
    {
        _children["send-buffer-size"] = send_buffer_size;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(keychain != nullptr)
    {
        _children["keychain"] = keychain;
    }

    if(graceful_maintenance != nullptr)
    {
        _children["graceful-maintenance"] = graceful_maintenance;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-group-name")
    {
        session_group_name = value;
        session_group_name.value_namespace = name_space;
        session_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
        session_group_add_member.value_namespace = name_space;
        session_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce = value;
        internal_vpn_client_ibgp_ce.value_namespace = name_space;
        internal_vpn_client_ibgp_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
        egress_peer_engineering.value_namespace = name_space;
        egress_peer_engineering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
        neighbor_graceful_restart_stalepath_time.value_namespace = name_space;
        neighbor_graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
        ebgp_recv_dmz.value_namespace = name_space;
        ebgp_recv_dmz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
        neighbor_graceful_restart.value_namespace = name_space;
        neighbor_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
        idle_watch_time.value_namespace = name_space;
        idle_watch_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
        session_open_mode.value_namespace = name_space;
        session_open_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
        ebgp_send_dmz_enable_modes.value_namespace = name_space;
        ebgp_send_dmz_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
        suppress_all_capabilities.value_namespace = name_space;
        suppress_all_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
        max_peers.value_namespace = name_space;
        max_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
        additional_paths_send_capability.value_namespace = name_space;
        additional_paths_send_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
        propagate_dmz_link_bandwidth.value_namespace = name_space;
        propagate_dmz_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
        bfd_enable_modes.value_namespace = name_space;
        bfd_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
        ttl_security.value_namespace = name_space;
        ttl_security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
        neighbor_graceful_restart_time.value_namespace = name_space;
        neighbor_graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
        bfd_minimum_interval.value_namespace = name_space;
        bfd_minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
        remote_as_list.value_namespace = name_space;
        remote_as_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
        additional_paths_receive_capability.value_namespace = name_space;
        additional_paths_receive_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
        ignore_connected_check_ebgp.value_namespace = name_space;
        ignore_connected_check_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
        suppress_four_byte_as_capability.value_namespace = name_space;
        suppress_four_byte_as_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-group-name")
    {
        session_group_name.yfilter = yfilter;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member.yfilter = yfilter;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce.yfilter = yfilter;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time.yfilter = yfilter;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes.yfilter = yfilter;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities.yfilter = yfilter;
    }
    if(value_path == "max-peers")
    {
        max_peers.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability.yfilter = yfilter;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes.yfilter = yfilter;
    }
    if(value_path == "ttl-security")
    {
        ttl_security.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval.yfilter = yfilter;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability.yfilter = yfilter;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp.yfilter = yfilter;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "bmp-activates" || name == "ebgp-multihop" || name == "remote-as" || name == "local-as" || name == "password" || name == "advertisement-interval" || name == "neighbor-cluster-id" || name == "tcpmss" || name == "tos" || name == "update-in-filtering" || name == "msg-log-out" || name == "ao-keychain" || name == "receive-buffer-size" || name == "msg-log-in" || name == "send-buffer-size" || name == "timers" || name == "keychain" || name == "graceful-maintenance" || name == "session-group-name" || name == "session-group-add-member" || name == "internal-vpn-client-ibgp-ce" || name == "egress-peer-engineering" || name == "neighbor-graceful-restart-stalepath-time" || name == "shutdown" || name == "description" || name == "ebgp-recv-dmz" || name == "neighbor-graceful-restart" || name == "enforce-first-as" || name == "idle-watch-time" || name == "session-open-mode" || name == "rpki-origin-as-validation-disable" || name == "ebgp-send-dmz-enable-modes" || name == "suppress-all-capabilities" || name == "max-peers" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "additional-paths-send-capability" || name == "propagate-dmz-link-bandwidth" || name == "bfd-enable-modes" || name == "ttl-security" || name == "neighbor-graceful-restart-time" || name == "bfd-multiplier" || name == "bfd-minimum-interval" || name == "remote-as-list" || name == "additional-paths-receive-capability" || name == "ignore-connected-check-ebgp" || name == "suppress-four-byte-as-capability" || name == "update-source-interface" || name == "create")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{

    yang_name = "local-address"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address_disable.yfilter)
	|| ydk::is_set(local_ip_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.yfilter)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
        local_address_disable.value_namespace = name_space;
        local_address_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address-disable" || name == "local-ip-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivates()
    :
    bmp_activate(this, {"server_id"})
{

    yang_name = "bmp-activates"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bmp_activate.len(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.len(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-activate")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate>();
        ent_->parent = this;
        bmp_activate.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bmp_activate.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{

    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::has_data() const
{
    if (is_presence_container) return true;
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate";
    ADD_KEY_TOKEN(server_id, "server-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-id")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::has_data() const
{
    if (is_presence_container) return true;
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop_count.yfilter)
	|| ydk::is_set(mpls_deactivation.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.yfilter)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.yfilter)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
        max_hop_count.value_namespace = name_space;
        max_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
        mpls_deactivation.value_namespace = name_space;
        mpls_deactivation.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count.yfilter = yfilter;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop-count" || name == "mpls-deactivation")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "remote-as"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    no_prepend{YType::empty, "no-prepend"},
    disable{YType::empty, "disable"},
    replace_as{YType::empty, "replace-as"},
    dual_as{YType::empty, "dual-as"}
{

    yang_name = "local-as"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set
	|| no_prepend.is_set
	|| disable.is_set
	|| replace_as.is_set
	|| dual_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(replace_as.yfilter)
	|| ydk::is_set(dual_as.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "no-prepend" || name == "disable" || name == "replace-as" || name == "dual-as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::Password()
    :
    password_disable{YType::boolean, "password-disable"},
    password{YType::str, "password"}
{

    yang_name = "password"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::has_data() const
{
    if (is_presence_container) return true;
    return password_disable.is_set
	|| password.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password_disable.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password_disable.is_set || is_set(password_disable.yfilter)) leaf_name_data.push_back(password_disable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password-disable")
    {
        password_disable = value;
        password_disable.value_namespace = name_space;
        password_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password-disable")
    {
        password_disable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-disable" || name == "password")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{

    yang_name = "advertisement-interval"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::has_data() const
{
    if (is_presence_container) return true;
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(minimum_interval_msecs.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.yfilter)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
        minimum_interval_msecs.value_namespace = name_space;
        minimum_interval_msecs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-interval" || name == "minimum-interval-msecs")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_number{YType::uint32, "cluster-id-number"},
    cluster_id_address{YType::str, "cluster-id-address"}
{

    yang_name = "neighbor-cluster-id"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::has_data() const
{
    if (is_presence_container) return true;
    return cluster_id_number.is_set
	|| cluster_id_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_number.yfilter)
	|| ydk::is_set(cluster_id_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());
    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-number" || name == "cluster-id-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::Tcpmss()
    :
    tcpmss_disable{YType::boolean, "tcpmss-disable"},
    mss{YType::uint32, "mss"}
{

    yang_name = "tcpmss"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::has_data() const
{
    if (is_presence_container) return true;
    return tcpmss_disable.is_set
	|| mss.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcpmss_disable.yfilter)
	|| ydk::is_set(mss.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcpmss_disable.is_set || is_set(tcpmss_disable.yfilter)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());
    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
        tcpmss_disable.value_namespace = name_space;
        tcpmss_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable.yfilter = yfilter;
    }
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpmss-disable" || name == "mss")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "tos"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
        ,
    update_in_filtering_message_buffers(nullptr) // presence node
{

    yang_name = "update-in-filtering"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(update_in_filtering_attribute_filter_group.yfilter)
	|| ydk::is_set(update_in_filtering_syslog_disable.yfilter)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.yfilter)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.yfilter)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers == nullptr)
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
        }
        return update_in_filtering_message_buffers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update_in_filtering_message_buffers != nullptr)
    {
        _children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
        update_in_filtering_attribute_filter_group.value_namespace = name_space;
        update_in_filtering_attribute_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
        update_in_filtering_syslog_disable.value_namespace = name_space;
        update_in_filtering_syslog_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-in-filtering-message-buffers" || name == "enable" || name == "update-in-filtering-attribute-filter-group" || name == "update-in-filtering-syslog-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    number_of_buffers{YType::uint32, "number-of-buffers"},
    non_circular_buffer{YType::boolean, "non-circular-buffer"}
{

    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    if (is_presence_container) return true;
    return number_of_buffers.is_set
	|| non_circular_buffer.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_of_buffers.yfilter)
	|| ydk::is_set(non_circular_buffer.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_buffers.is_set || is_set(number_of_buffers.yfilter)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());
    if (non_circular_buffer.is_set || is_set(non_circular_buffer.yfilter)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
        number_of_buffers.value_namespace = name_space;
        number_of_buffers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
        non_circular_buffer.value_namespace = name_space;
        non_circular_buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-of-buffers")
    {
        number_of_buffers.yfilter = yfilter;
    }
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-of-buffers" || name == "non-circular-buffer")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-out"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::has_data() const
{
    if (is_presence_container) return true;
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain::AoKeychain()
    :
    ao_keychain_disable{YType::boolean, "ao-keychain-disable"},
    ao_keychain_name{YType::str, "ao-keychain-name"},
    ao_include_tcp_options{YType::boolean, "ao-include-tcp-options"},
    ao_accept_mismatch_connection{YType::boolean, "ao-accept-mismatch-connection"}
{

    yang_name = "ao-keychain"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain::~AoKeychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain::has_data() const
{
    if (is_presence_container) return true;
    return ao_keychain_disable.is_set
	|| ao_keychain_name.is_set
	|| ao_include_tcp_options.is_set
	|| ao_accept_mismatch_connection.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ao_keychain_disable.yfilter)
	|| ydk::is_set(ao_keychain_name.yfilter)
	|| ydk::is_set(ao_include_tcp_options.yfilter)
	|| ydk::is_set(ao_accept_mismatch_connection.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ao-keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ao_keychain_disable.is_set || is_set(ao_keychain_disable.yfilter)) leaf_name_data.push_back(ao_keychain_disable.get_name_leafdata());
    if (ao_keychain_name.is_set || is_set(ao_keychain_name.yfilter)) leaf_name_data.push_back(ao_keychain_name.get_name_leafdata());
    if (ao_include_tcp_options.is_set || is_set(ao_include_tcp_options.yfilter)) leaf_name_data.push_back(ao_include_tcp_options.get_name_leafdata());
    if (ao_accept_mismatch_connection.is_set || is_set(ao_accept_mismatch_connection.yfilter)) leaf_name_data.push_back(ao_accept_mismatch_connection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ao-keychain-disable")
    {
        ao_keychain_disable = value;
        ao_keychain_disable.value_namespace = name_space;
        ao_keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ao-keychain-name")
    {
        ao_keychain_name = value;
        ao_keychain_name.value_namespace = name_space;
        ao_keychain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ao-include-tcp-options")
    {
        ao_include_tcp_options = value;
        ao_include_tcp_options.value_namespace = name_space;
        ao_include_tcp_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ao-accept-mismatch-connection")
    {
        ao_accept_mismatch_connection = value;
        ao_accept_mismatch_connection.value_namespace = name_space;
        ao_accept_mismatch_connection.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ao-keychain-disable")
    {
        ao_keychain_disable.yfilter = yfilter;
    }
    if(value_path == "ao-keychain-name")
    {
        ao_keychain_name.yfilter = yfilter;
    }
    if(value_path == "ao-include-tcp-options")
    {
        ao_include_tcp_options.yfilter = yfilter;
    }
    if(value_path == "ao-accept-mismatch-connection")
    {
        ao_accept_mismatch_connection.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AoKeychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ao-keychain-disable" || name == "ao-keychain-name" || name == "ao-include-tcp-options" || name == "ao-accept-mismatch-connection")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::ReceiveBufferSize()
    :
    socket_receive_size{YType::uint32, "socket-receive-size"},
    bgp_receive_size{YType::uint32, "bgp-receive-size"}
{

    yang_name = "receive-buffer-size"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::has_data() const
{
    if (is_presence_container) return true;
    return socket_receive_size.is_set
	|| bgp_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(socket_receive_size.yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());
    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "socket-receive-size" || name == "bgp-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-in"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::has_data() const
{
    if (is_presence_container) return true;
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::SendBufferSize()
    :
    socket_send_size{YType::uint32, "socket-send-size"},
    bgp_send_size{YType::uint32, "bgp-send-size"}
{

    yang_name = "send-buffer-size"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::has_data() const
{
    if (is_presence_container) return true;
    return socket_send_size.is_set
	|| bgp_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(socket_send_size.yfilter)
	|| ydk::is_set(bgp_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());
    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "socket-send-size" || name == "bgp-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::Timers()
    :
    keepalive_interval{YType::uint32, "keepalive-interval"},
    hold_time{YType::uint32, "hold-time"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "timers"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::has_data() const
{
    if (is_presence_container) return true;
    return keepalive_interval.is_set
	|| hold_time.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive-interval" || name == "hold-time" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "keychain"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::has_data() const
{
    if (is_presence_container) return true;
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain_disable.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.yfilter)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
        keychain_disable.value_namespace = name_space;
        keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain-disable" || name == "keychain-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
        ,
    graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
    , graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
{
    graceful_maintenance_local_preference->parent = this;
    graceful_maintenance_as_prepends->parent = this;

    yang_name = "graceful-maintenance"; yang_parent_name = "session-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data())
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(graceful_maintenance_activate.yfilter)
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation())
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.yfilter)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference == nullptr)
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
        }
        return graceful_maintenance_local_preference;
    }

    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends == nullptr)
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
        }
        return graceful_maintenance_as_prepends;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_maintenance_local_preference != nullptr)
    {
        _children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
    }

    if(graceful_maintenance_as_prepends != nullptr)
    {
        _children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
        graceful_maintenance_activate.value_namespace = name_space;
        graceful_maintenance_activate.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-maintenance-local-preference" || name == "graceful-maintenance-as-prepends" || name == "enable" || name == "graceful-maintenance-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{

    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    if (is_presence_container) return true;
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_loc_pref_disable.yfilter)
	|| ydk::is_set(local_preference.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.yfilter)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
        gshut_loc_pref_disable.value_namespace = name_space;
        gshut_loc_pref_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-loc-pref-disable" || name == "local-preference")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"},
    as_prepends{YType::uint32, "as-prepends"}
{

    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    if (is_presence_container) return true;
    return gshut_prepends_disable.is_set
	|| as_prepends.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_prepends_disable.yfilter)
	|| ydk::is_set(as_prepends.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.yfilter)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());
    if (as_prepends.is_set || is_set(as_prepends.yfilter)) leaf_name_data.push_back(as_prepends.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
        gshut_prepends_disable.value_namespace = name_space;
        gshut_prepends_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-prepends")
    {
        as_prepends = value;
        as_prepends.value_namespace = name_space;
        as_prepends.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable.yfilter = yfilter;
    }
    if(value_path == "as-prepends")
    {
        as_prepends.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-prepends-disable" || name == "as-prepends")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Global()
    :
    graceful_restart{YType::empty, "graceful-restart"},
    update_out_logging{YType::empty, "update-out-logging"},
    install_diversion{YType::empty, "install-diversion"},
    next_hop_trigger_delay{YType::uint32, "next-hop-trigger-delay"},
    nsr{YType::boolean, "nsr"},
    neighbor_logging_detail{YType::empty, "neighbor-logging-detail"},
    mvpn{YType::empty, "mvpn"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    global_scan_time{YType::uint32, "global-scan-time"},
    rpki_origin_as_validation_time{YType::uint32, "rpki-origin-as-validation-time"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    graceful_restart_purge_time{YType::uint32, "graceful-restart-purge-time"},
    enforce_ibgp_out_policy{YType::empty, "enforce-ibgp-out-policy"},
    update_limit_process{YType::uint32, "update-limit-process"},
    graceful_restart_time{YType::uint32, "graceful-restart-time"},
    update_error_handling_basic_ibgp_disable{YType::empty, "update-error-handling-basic-ibgp-disable"},
    read_only{YType::empty, "read-only"},
    graceful_restart_stalepath_time{YType::uint32, "graceful-restart-stalepath-time"},
    update_error_handling_extended_ebgp{YType::empty, "update-error-handling-extended-ebgp"},
    update_error_handling_basic_ebgp_disable{YType::empty, "update-error-handling-basic-ebgp-disable"},
    graceful_reset{YType::empty, "graceful-reset"},
    igp_loop_check{YType::empty, "igp-loop-check"},
    update_error_handling_extended_ibgp{YType::empty, "update-error-handling-extended-ibgp"},
    router_id{YType::str, "router-id"},
    disable_enforce_first_as{YType::empty, "disable-enforce-first-as"},
    best_path_cost_community{YType::empty, "best-path-cost-community"},
    best_path_aigp_ignore{YType::empty, "best-path-aigp-ignore"},
    best_path_as_path_length{YType::empty, "best-path-as-path-length"},
    igp_redist_internal{YType::empty, "igp-redist-internal"},
    multi_path_as_path_ignore_onwards{YType::empty, "multi-path-as-path-ignore-onwards"},
    disable_fast_external_fallover{YType::empty, "disable-fast-external-fallover"},
    unsafe_ebgp_policy{YType::empty, "unsafe-ebgp-policy"},
    default_metric{YType::uint32, "default-metric"},
    default_info_originate{YType::empty, "default-info-originate"},
    rpki_origin_as_validity_signal_ibgp{YType::empty, "rpki-origin-as-validity-signal-ibgp"},
    rpki_bestpath_use_origin_as_validity{YType::empty, "rpki-bestpath-use-origin-as-validity"},
    best_path_confederation_paths{YType::empty, "best-path-confederation-paths"},
    best_path_as_multipath_relax{YType::empty, "best-path-as-multipath-relax"},
    disable_auto_soft_reset{YType::empty, "disable-auto-soft-reset"},
    disable_msg_log{YType::empty, "disable-msg-log"},
    best_path_igp_metric_ignore{YType::empty, "best-path-igp-metric-ignore"},
    next_hop_res_allow_default{YType::empty, "next-hop-res-allow-default"},
    next_hop_mpls_fwd_ibgp{YType::empty, "next-hop-mpls-fwd-ibgp"},
    disable_neighbor_logging{YType::empty, "disable-neighbor-logging"},
    best_path_med_always{YType::empty, "best-path-med-always"},
    best_path_router_id{YType::empty, "best-path-router-id"},
    best_path_med_missing{YType::empty, "best-path-med-missing"},
    local_preference{YType::uint32, "local-preference"}
        ,
    cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId>())
    , write_limit(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit>())
    , update_delay(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay>())
    , as_league(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague>())
    , rpki_servers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers>())
    , as_list_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups>())
    , limits(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits>())
    , confederation_domain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain>())
    , confederation_peer_ases(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses>())
    , attribute_filter_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups>())
    , global_graceful_maintenance_activate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate>())
    , global_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs>())
    , rpki_static_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes>())
    , mpls_activated_interfaces(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces>())
    , global_timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers>())
    , bfd(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd>())
    , send_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes>())
    , receive_socket_buffer_sizes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes>())
{
    cluster_id->parent = this;
    write_limit->parent = this;
    update_delay->parent = this;
    as_league->parent = this;
    rpki_servers->parent = this;
    as_list_groups->parent = this;
    limits->parent = this;
    confederation_domain->parent = this;
    confederation_peer_ases->parent = this;
    attribute_filter_groups->parent = this;
    global_graceful_maintenance_activate->parent = this;
    global_afs->parent = this;
    rpki_static_routes->parent = this;
    mpls_activated_interfaces->parent = this;
    global_timers->parent = this;
    bfd->parent = this;
    send_socket_buffer_sizes->parent = this;
    receive_socket_buffer_sizes->parent = this;

    yang_name = "global"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::~Global()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::has_data() const
{
    if (is_presence_container) return true;
    return graceful_restart.is_set
	|| update_out_logging.is_set
	|| install_diversion.is_set
	|| next_hop_trigger_delay.is_set
	|| nsr.is_set
	|| neighbor_logging_detail.is_set
	|| mvpn.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| global_scan_time.is_set
	|| rpki_origin_as_validation_time.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| graceful_restart_purge_time.is_set
	|| enforce_ibgp_out_policy.is_set
	|| update_limit_process.is_set
	|| graceful_restart_time.is_set
	|| update_error_handling_basic_ibgp_disable.is_set
	|| read_only.is_set
	|| graceful_restart_stalepath_time.is_set
	|| update_error_handling_extended_ebgp.is_set
	|| update_error_handling_basic_ebgp_disable.is_set
	|| graceful_reset.is_set
	|| igp_loop_check.is_set
	|| update_error_handling_extended_ibgp.is_set
	|| router_id.is_set
	|| disable_enforce_first_as.is_set
	|| best_path_cost_community.is_set
	|| best_path_aigp_ignore.is_set
	|| best_path_as_path_length.is_set
	|| igp_redist_internal.is_set
	|| multi_path_as_path_ignore_onwards.is_set
	|| disable_fast_external_fallover.is_set
	|| unsafe_ebgp_policy.is_set
	|| default_metric.is_set
	|| default_info_originate.is_set
	|| rpki_origin_as_validity_signal_ibgp.is_set
	|| rpki_bestpath_use_origin_as_validity.is_set
	|| best_path_confederation_paths.is_set
	|| best_path_as_multipath_relax.is_set
	|| disable_auto_soft_reset.is_set
	|| disable_msg_log.is_set
	|| best_path_igp_metric_ignore.is_set
	|| next_hop_res_allow_default.is_set
	|| next_hop_mpls_fwd_ibgp.is_set
	|| disable_neighbor_logging.is_set
	|| best_path_med_always.is_set
	|| best_path_router_id.is_set
	|| best_path_med_missing.is_set
	|| local_preference.is_set
	|| (cluster_id !=  nullptr && cluster_id->has_data())
	|| (write_limit !=  nullptr && write_limit->has_data())
	|| (update_delay !=  nullptr && update_delay->has_data())
	|| (as_league !=  nullptr && as_league->has_data())
	|| (rpki_servers !=  nullptr && rpki_servers->has_data())
	|| (as_list_groups !=  nullptr && as_list_groups->has_data())
	|| (limits !=  nullptr && limits->has_data())
	|| (confederation_domain !=  nullptr && confederation_domain->has_data())
	|| (confederation_peer_ases !=  nullptr && confederation_peer_ases->has_data())
	|| (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_data())
	|| (global_graceful_maintenance_activate !=  nullptr && global_graceful_maintenance_activate->has_data())
	|| (global_afs !=  nullptr && global_afs->has_data())
	|| (rpki_static_routes !=  nullptr && rpki_static_routes->has_data())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_data())
	|| (global_timers !=  nullptr && global_timers->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_data())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(graceful_restart.yfilter)
	|| ydk::is_set(update_out_logging.yfilter)
	|| ydk::is_set(install_diversion.yfilter)
	|| ydk::is_set(next_hop_trigger_delay.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(neighbor_logging_detail.yfilter)
	|| ydk::is_set(mvpn.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(global_scan_time.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_time.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(graceful_restart_purge_time.yfilter)
	|| ydk::is_set(enforce_ibgp_out_policy.yfilter)
	|| ydk::is_set(update_limit_process.yfilter)
	|| ydk::is_set(graceful_restart_time.yfilter)
	|| ydk::is_set(update_error_handling_basic_ibgp_disable.yfilter)
	|| ydk::is_set(read_only.yfilter)
	|| ydk::is_set(graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(update_error_handling_extended_ebgp.yfilter)
	|| ydk::is_set(update_error_handling_basic_ebgp_disable.yfilter)
	|| ydk::is_set(graceful_reset.yfilter)
	|| ydk::is_set(igp_loop_check.yfilter)
	|| ydk::is_set(update_error_handling_extended_ibgp.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(disable_enforce_first_as.yfilter)
	|| ydk::is_set(best_path_cost_community.yfilter)
	|| ydk::is_set(best_path_aigp_ignore.yfilter)
	|| ydk::is_set(best_path_as_path_length.yfilter)
	|| ydk::is_set(igp_redist_internal.yfilter)
	|| ydk::is_set(multi_path_as_path_ignore_onwards.yfilter)
	|| ydk::is_set(disable_fast_external_fallover.yfilter)
	|| ydk::is_set(unsafe_ebgp_policy.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(default_info_originate.yfilter)
	|| ydk::is_set(rpki_origin_as_validity_signal_ibgp.yfilter)
	|| ydk::is_set(rpki_bestpath_use_origin_as_validity.yfilter)
	|| ydk::is_set(best_path_confederation_paths.yfilter)
	|| ydk::is_set(best_path_as_multipath_relax.yfilter)
	|| ydk::is_set(disable_auto_soft_reset.yfilter)
	|| ydk::is_set(disable_msg_log.yfilter)
	|| ydk::is_set(best_path_igp_metric_ignore.yfilter)
	|| ydk::is_set(next_hop_res_allow_default.yfilter)
	|| ydk::is_set(next_hop_mpls_fwd_ibgp.yfilter)
	|| ydk::is_set(disable_neighbor_logging.yfilter)
	|| ydk::is_set(best_path_med_always.yfilter)
	|| ydk::is_set(best_path_router_id.yfilter)
	|| ydk::is_set(best_path_med_missing.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| (cluster_id !=  nullptr && cluster_id->has_operation())
	|| (write_limit !=  nullptr && write_limit->has_operation())
	|| (update_delay !=  nullptr && update_delay->has_operation())
	|| (as_league !=  nullptr && as_league->has_operation())
	|| (rpki_servers !=  nullptr && rpki_servers->has_operation())
	|| (as_list_groups !=  nullptr && as_list_groups->has_operation())
	|| (limits !=  nullptr && limits->has_operation())
	|| (confederation_domain !=  nullptr && confederation_domain->has_operation())
	|| (confederation_peer_ases !=  nullptr && confederation_peer_ases->has_operation())
	|| (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_operation())
	|| (global_graceful_maintenance_activate !=  nullptr && global_graceful_maintenance_activate->has_operation())
	|| (global_afs !=  nullptr && global_afs->has_operation())
	|| (rpki_static_routes !=  nullptr && rpki_static_routes->has_operation())
	|| (mpls_activated_interfaces !=  nullptr && mpls_activated_interfaces->has_operation())
	|| (global_timers !=  nullptr && global_timers->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (send_socket_buffer_sizes !=  nullptr && send_socket_buffer_sizes->has_operation())
	|| (receive_socket_buffer_sizes !=  nullptr && receive_socket_buffer_sizes->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (graceful_restart.is_set || is_set(graceful_restart.yfilter)) leaf_name_data.push_back(graceful_restart.get_name_leafdata());
    if (update_out_logging.is_set || is_set(update_out_logging.yfilter)) leaf_name_data.push_back(update_out_logging.get_name_leafdata());
    if (install_diversion.is_set || is_set(install_diversion.yfilter)) leaf_name_data.push_back(install_diversion.get_name_leafdata());
    if (next_hop_trigger_delay.is_set || is_set(next_hop_trigger_delay.yfilter)) leaf_name_data.push_back(next_hop_trigger_delay.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (neighbor_logging_detail.is_set || is_set(neighbor_logging_detail.yfilter)) leaf_name_data.push_back(neighbor_logging_detail.get_name_leafdata());
    if (mvpn.is_set || is_set(mvpn.yfilter)) leaf_name_data.push_back(mvpn.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (global_scan_time.is_set || is_set(global_scan_time.yfilter)) leaf_name_data.push_back(global_scan_time.get_name_leafdata());
    if (rpki_origin_as_validation_time.is_set || is_set(rpki_origin_as_validation_time.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_time.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (graceful_restart_purge_time.is_set || is_set(graceful_restart_purge_time.yfilter)) leaf_name_data.push_back(graceful_restart_purge_time.get_name_leafdata());
    if (enforce_ibgp_out_policy.is_set || is_set(enforce_ibgp_out_policy.yfilter)) leaf_name_data.push_back(enforce_ibgp_out_policy.get_name_leafdata());
    if (update_limit_process.is_set || is_set(update_limit_process.yfilter)) leaf_name_data.push_back(update_limit_process.get_name_leafdata());
    if (graceful_restart_time.is_set || is_set(graceful_restart_time.yfilter)) leaf_name_data.push_back(graceful_restart_time.get_name_leafdata());
    if (update_error_handling_basic_ibgp_disable.is_set || is_set(update_error_handling_basic_ibgp_disable.yfilter)) leaf_name_data.push_back(update_error_handling_basic_ibgp_disable.get_name_leafdata());
    if (read_only.is_set || is_set(read_only.yfilter)) leaf_name_data.push_back(read_only.get_name_leafdata());
    if (graceful_restart_stalepath_time.is_set || is_set(graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(graceful_restart_stalepath_time.get_name_leafdata());
    if (update_error_handling_extended_ebgp.is_set || is_set(update_error_handling_extended_ebgp.yfilter)) leaf_name_data.push_back(update_error_handling_extended_ebgp.get_name_leafdata());
    if (update_error_handling_basic_ebgp_disable.is_set || is_set(update_error_handling_basic_ebgp_disable.yfilter)) leaf_name_data.push_back(update_error_handling_basic_ebgp_disable.get_name_leafdata());
    if (graceful_reset.is_set || is_set(graceful_reset.yfilter)) leaf_name_data.push_back(graceful_reset.get_name_leafdata());
    if (igp_loop_check.is_set || is_set(igp_loop_check.yfilter)) leaf_name_data.push_back(igp_loop_check.get_name_leafdata());
    if (update_error_handling_extended_ibgp.is_set || is_set(update_error_handling_extended_ibgp.yfilter)) leaf_name_data.push_back(update_error_handling_extended_ibgp.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (disable_enforce_first_as.is_set || is_set(disable_enforce_first_as.yfilter)) leaf_name_data.push_back(disable_enforce_first_as.get_name_leafdata());
    if (best_path_cost_community.is_set || is_set(best_path_cost_community.yfilter)) leaf_name_data.push_back(best_path_cost_community.get_name_leafdata());
    if (best_path_aigp_ignore.is_set || is_set(best_path_aigp_ignore.yfilter)) leaf_name_data.push_back(best_path_aigp_ignore.get_name_leafdata());
    if (best_path_as_path_length.is_set || is_set(best_path_as_path_length.yfilter)) leaf_name_data.push_back(best_path_as_path_length.get_name_leafdata());
    if (igp_redist_internal.is_set || is_set(igp_redist_internal.yfilter)) leaf_name_data.push_back(igp_redist_internal.get_name_leafdata());
    if (multi_path_as_path_ignore_onwards.is_set || is_set(multi_path_as_path_ignore_onwards.yfilter)) leaf_name_data.push_back(multi_path_as_path_ignore_onwards.get_name_leafdata());
    if (disable_fast_external_fallover.is_set || is_set(disable_fast_external_fallover.yfilter)) leaf_name_data.push_back(disable_fast_external_fallover.get_name_leafdata());
    if (unsafe_ebgp_policy.is_set || is_set(unsafe_ebgp_policy.yfilter)) leaf_name_data.push_back(unsafe_ebgp_policy.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (default_info_originate.is_set || is_set(default_info_originate.yfilter)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (rpki_origin_as_validity_signal_ibgp.is_set || is_set(rpki_origin_as_validity_signal_ibgp.yfilter)) leaf_name_data.push_back(rpki_origin_as_validity_signal_ibgp.get_name_leafdata());
    if (rpki_bestpath_use_origin_as_validity.is_set || is_set(rpki_bestpath_use_origin_as_validity.yfilter)) leaf_name_data.push_back(rpki_bestpath_use_origin_as_validity.get_name_leafdata());
    if (best_path_confederation_paths.is_set || is_set(best_path_confederation_paths.yfilter)) leaf_name_data.push_back(best_path_confederation_paths.get_name_leafdata());
    if (best_path_as_multipath_relax.is_set || is_set(best_path_as_multipath_relax.yfilter)) leaf_name_data.push_back(best_path_as_multipath_relax.get_name_leafdata());
    if (disable_auto_soft_reset.is_set || is_set(disable_auto_soft_reset.yfilter)) leaf_name_data.push_back(disable_auto_soft_reset.get_name_leafdata());
    if (disable_msg_log.is_set || is_set(disable_msg_log.yfilter)) leaf_name_data.push_back(disable_msg_log.get_name_leafdata());
    if (best_path_igp_metric_ignore.is_set || is_set(best_path_igp_metric_ignore.yfilter)) leaf_name_data.push_back(best_path_igp_metric_ignore.get_name_leafdata());
    if (next_hop_res_allow_default.is_set || is_set(next_hop_res_allow_default.yfilter)) leaf_name_data.push_back(next_hop_res_allow_default.get_name_leafdata());
    if (next_hop_mpls_fwd_ibgp.is_set || is_set(next_hop_mpls_fwd_ibgp.yfilter)) leaf_name_data.push_back(next_hop_mpls_fwd_ibgp.get_name_leafdata());
    if (disable_neighbor_logging.is_set || is_set(disable_neighbor_logging.yfilter)) leaf_name_data.push_back(disable_neighbor_logging.get_name_leafdata());
    if (best_path_med_always.is_set || is_set(best_path_med_always.yfilter)) leaf_name_data.push_back(best_path_med_always.get_name_leafdata());
    if (best_path_router_id.is_set || is_set(best_path_router_id.yfilter)) leaf_name_data.push_back(best_path_router_id.get_name_leafdata());
    if (best_path_med_missing.is_set || is_set(best_path_med_missing.yfilter)) leaf_name_data.push_back(best_path_med_missing.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster-id")
    {
        if(cluster_id == nullptr)
        {
            cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId>();
        }
        return cluster_id;
    }

    if(child_yang_name == "write-limit")
    {
        if(write_limit == nullptr)
        {
            write_limit = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit>();
        }
        return write_limit;
    }

    if(child_yang_name == "update-delay")
    {
        if(update_delay == nullptr)
        {
            update_delay = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay>();
        }
        return update_delay;
    }

    if(child_yang_name == "as-league")
    {
        if(as_league == nullptr)
        {
            as_league = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague>();
        }
        return as_league;
    }

    if(child_yang_name == "rpki-servers")
    {
        if(rpki_servers == nullptr)
        {
            rpki_servers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers>();
        }
        return rpki_servers;
    }

    if(child_yang_name == "as-list-groups")
    {
        if(as_list_groups == nullptr)
        {
            as_list_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups>();
        }
        return as_list_groups;
    }

    if(child_yang_name == "limits")
    {
        if(limits == nullptr)
        {
            limits = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits>();
        }
        return limits;
    }

    if(child_yang_name == "confederation-domain")
    {
        if(confederation_domain == nullptr)
        {
            confederation_domain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain>();
        }
        return confederation_domain;
    }

    if(child_yang_name == "confederation-peer-ases")
    {
        if(confederation_peer_ases == nullptr)
        {
            confederation_peer_ases = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses>();
        }
        return confederation_peer_ases;
    }

    if(child_yang_name == "attribute-filter-groups")
    {
        if(attribute_filter_groups == nullptr)
        {
            attribute_filter_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups>();
        }
        return attribute_filter_groups;
    }

    if(child_yang_name == "global-graceful-maintenance-activate")
    {
        if(global_graceful_maintenance_activate == nullptr)
        {
            global_graceful_maintenance_activate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate>();
        }
        return global_graceful_maintenance_activate;
    }

    if(child_yang_name == "global-afs")
    {
        if(global_afs == nullptr)
        {
            global_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs>();
        }
        return global_afs;
    }

    if(child_yang_name == "rpki-static-routes")
    {
        if(rpki_static_routes == nullptr)
        {
            rpki_static_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes>();
        }
        return rpki_static_routes;
    }

    if(child_yang_name == "mpls-activated-interfaces")
    {
        if(mpls_activated_interfaces == nullptr)
        {
            mpls_activated_interfaces = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces>();
        }
        return mpls_activated_interfaces;
    }

    if(child_yang_name == "global-timers")
    {
        if(global_timers == nullptr)
        {
            global_timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers>();
        }
        return global_timers;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "send-socket-buffer-sizes")
    {
        if(send_socket_buffer_sizes == nullptr)
        {
            send_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes>();
        }
        return send_socket_buffer_sizes;
    }

    if(child_yang_name == "receive-socket-buffer-sizes")
    {
        if(receive_socket_buffer_sizes == nullptr)
        {
            receive_socket_buffer_sizes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes>();
        }
        return receive_socket_buffer_sizes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cluster_id != nullptr)
    {
        _children["cluster-id"] = cluster_id;
    }

    if(write_limit != nullptr)
    {
        _children["write-limit"] = write_limit;
    }

    if(update_delay != nullptr)
    {
        _children["update-delay"] = update_delay;
    }

    if(as_league != nullptr)
    {
        _children["as-league"] = as_league;
    }

    if(rpki_servers != nullptr)
    {
        _children["rpki-servers"] = rpki_servers;
    }

    if(as_list_groups != nullptr)
    {
        _children["as-list-groups"] = as_list_groups;
    }

    if(limits != nullptr)
    {
        _children["limits"] = limits;
    }

    if(confederation_domain != nullptr)
    {
        _children["confederation-domain"] = confederation_domain;
    }

    if(confederation_peer_ases != nullptr)
    {
        _children["confederation-peer-ases"] = confederation_peer_ases;
    }

    if(attribute_filter_groups != nullptr)
    {
        _children["attribute-filter-groups"] = attribute_filter_groups;
    }

    if(global_graceful_maintenance_activate != nullptr)
    {
        _children["global-graceful-maintenance-activate"] = global_graceful_maintenance_activate;
    }

    if(global_afs != nullptr)
    {
        _children["global-afs"] = global_afs;
    }

    if(rpki_static_routes != nullptr)
    {
        _children["rpki-static-routes"] = rpki_static_routes;
    }

    if(mpls_activated_interfaces != nullptr)
    {
        _children["mpls-activated-interfaces"] = mpls_activated_interfaces;
    }

    if(global_timers != nullptr)
    {
        _children["global-timers"] = global_timers;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(send_socket_buffer_sizes != nullptr)
    {
        _children["send-socket-buffer-sizes"] = send_socket_buffer_sizes;
    }

    if(receive_socket_buffer_sizes != nullptr)
    {
        _children["receive-socket-buffer-sizes"] = receive_socket_buffer_sizes;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "graceful-restart")
    {
        graceful_restart = value;
        graceful_restart.value_namespace = name_space;
        graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-logging")
    {
        update_out_logging = value;
        update_out_logging.value_namespace = name_space;
        update_out_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-diversion")
    {
        install_diversion = value;
        install_diversion.value_namespace = name_space;
        install_diversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-trigger-delay")
    {
        next_hop_trigger_delay = value;
        next_hop_trigger_delay.value_namespace = name_space;
        next_hop_trigger_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-logging-detail")
    {
        neighbor_logging_detail = value;
        neighbor_logging_detail.value_namespace = name_space;
        neighbor_logging_detail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn")
    {
        mvpn = value;
        mvpn.value_namespace = name_space;
        mvpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-scan-time")
    {
        global_scan_time = value;
        global_scan_time.value_namespace = name_space;
        global_scan_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-time")
    {
        rpki_origin_as_validation_time = value;
        rpki_origin_as_validation_time.value_namespace = name_space;
        rpki_origin_as_validation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-purge-time")
    {
        graceful_restart_purge_time = value;
        graceful_restart_purge_time.value_namespace = name_space;
        graceful_restart_purge_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-ibgp-out-policy")
    {
        enforce_ibgp_out_policy = value;
        enforce_ibgp_out_policy.value_namespace = name_space;
        enforce_ibgp_out_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-limit-process")
    {
        update_limit_process = value;
        update_limit_process.value_namespace = name_space;
        update_limit_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-time")
    {
        graceful_restart_time = value;
        graceful_restart_time.value_namespace = name_space;
        graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-basic-ibgp-disable")
    {
        update_error_handling_basic_ibgp_disable = value;
        update_error_handling_basic_ibgp_disable.value_namespace = name_space;
        update_error_handling_basic_ibgp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-only")
    {
        read_only = value;
        read_only.value_namespace = name_space;
        read_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart-stalepath-time")
    {
        graceful_restart_stalepath_time = value;
        graceful_restart_stalepath_time.value_namespace = name_space;
        graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-extended-ebgp")
    {
        update_error_handling_extended_ebgp = value;
        update_error_handling_extended_ebgp.value_namespace = name_space;
        update_error_handling_extended_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-basic-ebgp-disable")
    {
        update_error_handling_basic_ebgp_disable = value;
        update_error_handling_basic_ebgp_disable.value_namespace = name_space;
        update_error_handling_basic_ebgp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-reset")
    {
        graceful_reset = value;
        graceful_reset.value_namespace = name_space;
        graceful_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-loop-check")
    {
        igp_loop_check = value;
        igp_loop_check.value_namespace = name_space;
        igp_loop_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-extended-ibgp")
    {
        update_error_handling_extended_ibgp = value;
        update_error_handling_extended_ibgp.value_namespace = name_space;
        update_error_handling_extended_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-enforce-first-as")
    {
        disable_enforce_first_as = value;
        disable_enforce_first_as.value_namespace = name_space;
        disable_enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-cost-community")
    {
        best_path_cost_community = value;
        best_path_cost_community.value_namespace = name_space;
        best_path_cost_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-aigp-ignore")
    {
        best_path_aigp_ignore = value;
        best_path_aigp_ignore.value_namespace = name_space;
        best_path_aigp_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-as-path-length")
    {
        best_path_as_path_length = value;
        best_path_as_path_length.value_namespace = name_space;
        best_path_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-redist-internal")
    {
        igp_redist_internal = value;
        igp_redist_internal.value_namespace = name_space;
        igp_redist_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-path-as-path-ignore-onwards")
    {
        multi_path_as_path_ignore_onwards = value;
        multi_path_as_path_ignore_onwards.value_namespace = name_space;
        multi_path_as_path_ignore_onwards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-fast-external-fallover")
    {
        disable_fast_external_fallover = value;
        disable_fast_external_fallover.value_namespace = name_space;
        disable_fast_external_fallover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsafe-ebgp-policy")
    {
        unsafe_ebgp_policy = value;
        unsafe_ebgp_policy.value_namespace = name_space;
        unsafe_ebgp_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
        default_info_originate.value_namespace = name_space;
        default_info_originate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp = value;
        rpki_origin_as_validity_signal_ibgp.value_namespace = name_space;
        rpki_origin_as_validity_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity = value;
        rpki_bestpath_use_origin_as_validity.value_namespace = name_space;
        rpki_bestpath_use_origin_as_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-confederation-paths")
    {
        best_path_confederation_paths = value;
        best_path_confederation_paths.value_namespace = name_space;
        best_path_confederation_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-as-multipath-relax")
    {
        best_path_as_multipath_relax = value;
        best_path_as_multipath_relax.value_namespace = name_space;
        best_path_as_multipath_relax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-auto-soft-reset")
    {
        disable_auto_soft_reset = value;
        disable_auto_soft_reset.value_namespace = name_space;
        disable_auto_soft_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-msg-log")
    {
        disable_msg_log = value;
        disable_msg_log.value_namespace = name_space;
        disable_msg_log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-igp-metric-ignore")
    {
        best_path_igp_metric_ignore = value;
        best_path_igp_metric_ignore.value_namespace = name_space;
        best_path_igp_metric_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-res-allow-default")
    {
        next_hop_res_allow_default = value;
        next_hop_res_allow_default.value_namespace = name_space;
        next_hop_res_allow_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-mpls-fwd-ibgp")
    {
        next_hop_mpls_fwd_ibgp = value;
        next_hop_mpls_fwd_ibgp.value_namespace = name_space;
        next_hop_mpls_fwd_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-neighbor-logging")
    {
        disable_neighbor_logging = value;
        disable_neighbor_logging.value_namespace = name_space;
        disable_neighbor_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-med-always")
    {
        best_path_med_always = value;
        best_path_med_always.value_namespace = name_space;
        best_path_med_always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-router-id")
    {
        best_path_router_id = value;
        best_path_router_id.value_namespace = name_space;
        best_path_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-med-missing")
    {
        best_path_med_missing = value;
        best_path_med_missing.value_namespace = name_space;
        best_path_med_missing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "graceful-restart")
    {
        graceful_restart.yfilter = yfilter;
    }
    if(value_path == "update-out-logging")
    {
        update_out_logging.yfilter = yfilter;
    }
    if(value_path == "install-diversion")
    {
        install_diversion.yfilter = yfilter;
    }
    if(value_path == "next-hop-trigger-delay")
    {
        next_hop_trigger_delay.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "neighbor-logging-detail")
    {
        neighbor_logging_detail.yfilter = yfilter;
    }
    if(value_path == "mvpn")
    {
        mvpn.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "global-scan-time")
    {
        global_scan_time.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-time")
    {
        rpki_origin_as_validation_time.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-purge-time")
    {
        graceful_restart_purge_time.yfilter = yfilter;
    }
    if(value_path == "enforce-ibgp-out-policy")
    {
        enforce_ibgp_out_policy.yfilter = yfilter;
    }
    if(value_path == "update-limit-process")
    {
        update_limit_process.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-time")
    {
        graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-basic-ibgp-disable")
    {
        update_error_handling_basic_ibgp_disable.yfilter = yfilter;
    }
    if(value_path == "read-only")
    {
        read_only.yfilter = yfilter;
    }
    if(value_path == "graceful-restart-stalepath-time")
    {
        graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-extended-ebgp")
    {
        update_error_handling_extended_ebgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-basic-ebgp-disable")
    {
        update_error_handling_basic_ebgp_disable.yfilter = yfilter;
    }
    if(value_path == "graceful-reset")
    {
        graceful_reset.yfilter = yfilter;
    }
    if(value_path == "igp-loop-check")
    {
        igp_loop_check.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-extended-ibgp")
    {
        update_error_handling_extended_ibgp.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "disable-enforce-first-as")
    {
        disable_enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "best-path-cost-community")
    {
        best_path_cost_community.yfilter = yfilter;
    }
    if(value_path == "best-path-aigp-ignore")
    {
        best_path_aigp_ignore.yfilter = yfilter;
    }
    if(value_path == "best-path-as-path-length")
    {
        best_path_as_path_length.yfilter = yfilter;
    }
    if(value_path == "igp-redist-internal")
    {
        igp_redist_internal.yfilter = yfilter;
    }
    if(value_path == "multi-path-as-path-ignore-onwards")
    {
        multi_path_as_path_ignore_onwards.yfilter = yfilter;
    }
    if(value_path == "disable-fast-external-fallover")
    {
        disable_fast_external_fallover.yfilter = yfilter;
    }
    if(value_path == "unsafe-ebgp-policy")
    {
        unsafe_ebgp_policy.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "default-info-originate")
    {
        default_info_originate.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity.yfilter = yfilter;
    }
    if(value_path == "best-path-confederation-paths")
    {
        best_path_confederation_paths.yfilter = yfilter;
    }
    if(value_path == "best-path-as-multipath-relax")
    {
        best_path_as_multipath_relax.yfilter = yfilter;
    }
    if(value_path == "disable-auto-soft-reset")
    {
        disable_auto_soft_reset.yfilter = yfilter;
    }
    if(value_path == "disable-msg-log")
    {
        disable_msg_log.yfilter = yfilter;
    }
    if(value_path == "best-path-igp-metric-ignore")
    {
        best_path_igp_metric_ignore.yfilter = yfilter;
    }
    if(value_path == "next-hop-res-allow-default")
    {
        next_hop_res_allow_default.yfilter = yfilter;
    }
    if(value_path == "next-hop-mpls-fwd-ibgp")
    {
        next_hop_mpls_fwd_ibgp.yfilter = yfilter;
    }
    if(value_path == "disable-neighbor-logging")
    {
        disable_neighbor_logging.yfilter = yfilter;
    }
    if(value_path == "best-path-med-always")
    {
        best_path_med_always.yfilter = yfilter;
    }
    if(value_path == "best-path-router-id")
    {
        best_path_router_id.yfilter = yfilter;
    }
    if(value_path == "best-path-med-missing")
    {
        best_path_med_missing.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id" || name == "write-limit" || name == "update-delay" || name == "as-league" || name == "rpki-servers" || name == "as-list-groups" || name == "limits" || name == "confederation-domain" || name == "confederation-peer-ases" || name == "attribute-filter-groups" || name == "global-graceful-maintenance-activate" || name == "global-afs" || name == "rpki-static-routes" || name == "mpls-activated-interfaces" || name == "global-timers" || name == "bfd" || name == "send-socket-buffer-sizes" || name == "receive-socket-buffer-sizes" || name == "graceful-restart" || name == "update-out-logging" || name == "install-diversion" || name == "next-hop-trigger-delay" || name == "nsr" || name == "neighbor-logging-detail" || name == "mvpn" || name == "rpki-origin-as-validation-disable" || name == "global-scan-time" || name == "rpki-origin-as-validation-time" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "graceful-restart-purge-time" || name == "enforce-ibgp-out-policy" || name == "update-limit-process" || name == "graceful-restart-time" || name == "update-error-handling-basic-ibgp-disable" || name == "read-only" || name == "graceful-restart-stalepath-time" || name == "update-error-handling-extended-ebgp" || name == "update-error-handling-basic-ebgp-disable" || name == "graceful-reset" || name == "igp-loop-check" || name == "update-error-handling-extended-ibgp" || name == "router-id" || name == "disable-enforce-first-as" || name == "best-path-cost-community" || name == "best-path-aigp-ignore" || name == "best-path-as-path-length" || name == "igp-redist-internal" || name == "multi-path-as-path-ignore-onwards" || name == "disable-fast-external-fallover" || name == "unsafe-ebgp-policy" || name == "default-metric" || name == "default-info-originate" || name == "rpki-origin-as-validity-signal-ibgp" || name == "rpki-bestpath-use-origin-as-validity" || name == "best-path-confederation-paths" || name == "best-path-as-multipath-relax" || name == "disable-auto-soft-reset" || name == "disable-msg-log" || name == "best-path-igp-metric-ignore" || name == "next-hop-res-allow-default" || name == "next-hop-mpls-fwd-ibgp" || name == "disable-neighbor-logging" || name == "best-path-med-always" || name == "best-path-router-id" || name == "best-path-med-missing" || name == "local-preference")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::ClusterId()
    :
    cluster_id_number{YType::uint32, "cluster-id-number"},
    cluster_id_address{YType::str, "cluster-id-address"}
{

    yang_name = "cluster-id"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::~ClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::has_data() const
{
    if (is_presence_container) return true;
    return cluster_id_number.is_set
	|| cluster_id_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_number.yfilter)
	|| ydk::is_set(cluster_id_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());
    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-number" || name == "cluster-id-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::WriteLimit()
    :
    formatted_messages{YType::uint32, "formatted-messages"},
    enqueued_messages{YType::uint32, "enqueued-messages"},
    desynchronize{YType::boolean, "desynchronize"}
{

    yang_name = "write-limit"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::~WriteLimit()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::has_data() const
{
    if (is_presence_container) return true;
    return formatted_messages.is_set
	|| enqueued_messages.is_set
	|| desynchronize.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(formatted_messages.yfilter)
	|| ydk::is_set(enqueued_messages.yfilter)
	|| ydk::is_set(desynchronize.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "write-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (formatted_messages.is_set || is_set(formatted_messages.yfilter)) leaf_name_data.push_back(formatted_messages.get_name_leafdata());
    if (enqueued_messages.is_set || is_set(enqueued_messages.yfilter)) leaf_name_data.push_back(enqueued_messages.get_name_leafdata());
    if (desynchronize.is_set || is_set(desynchronize.yfilter)) leaf_name_data.push_back(desynchronize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "formatted-messages")
    {
        formatted_messages = value;
        formatted_messages.value_namespace = name_space;
        formatted_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enqueued-messages")
    {
        enqueued_messages = value;
        enqueued_messages.value_namespace = name_space;
        enqueued_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desynchronize")
    {
        desynchronize = value;
        desynchronize.value_namespace = name_space;
        desynchronize.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "formatted-messages")
    {
        formatted_messages.yfilter = yfilter;
    }
    if(value_path == "enqueued-messages")
    {
        enqueued_messages.yfilter = yfilter;
    }
    if(value_path == "desynchronize")
    {
        desynchronize.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "formatted-messages" || name == "enqueued-messages" || name == "desynchronize")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::UpdateDelay()
    :
    delay{YType::uint32, "delay"},
    always{YType::boolean, "always"}
{

    yang_name = "update-delay"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::~UpdateDelay()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "always")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::AsLeague()
    :
    enable{YType::empty, "enable"}
        ,
    peers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers>())
{
    peers->parent = this;

    yang_name = "as-league"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::~AsLeague()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (peers !=  nullptr && peers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-league";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peers != nullptr)
    {
        _children["peers"] = peers;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "enable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peers()
    :
    peer(this, {"as_xx", "as_yy"})
{

    yang_name = "peers"; yang_parent_name = "as-league"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::~Peers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer>();
        ent_->parent = this;
        peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::Peer()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::~Peer()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(as_yy, "as-yy");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServers()
    :
    rpki_server(this, {"server"})
{

    yang_name = "rpki-servers"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::~RpkiServers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpki_server.len(); index++)
    {
        if(rpki_server[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::has_operation() const
{
    for (std::size_t index=0; index<rpki_server.len(); index++)
    {
        if(rpki_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-server")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer>();
        ent_->parent = this;
        rpki_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpki_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-server")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::RpkiServer()
    :
    server{YType::str, "server"},
    enable{YType::empty, "enable"},
    shutdown{YType::empty, "shutdown"},
    password{YType::str, "password"},
    response_time{YType::uint32, "response-time"},
    username{YType::str, "username"},
    refresh_time{YType::uint32, "refresh-time"},
    purge_time{YType::uint32, "purge-time"}
        ,
    transport(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport>())
{
    transport->parent = this;

    yang_name = "rpki-server"; yang_parent_name = "rpki-servers"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::~RpkiServer()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::has_data() const
{
    if (is_presence_container) return true;
    return server.is_set
	|| enable.is_set
	|| shutdown.is_set
	|| password.is_set
	|| response_time.is_set
	|| username.is_set
	|| refresh_time.is_set
	|| purge_time.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(refresh_time.yfilter)
	|| ydk::is_set(purge_time.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-server";
    ADD_KEY_TOKEN(server, "server");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.yfilter)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-time")
    {
        refresh_time = value;
        refresh_time.value_namespace = name_space;
        refresh_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "refresh-time")
    {
        refresh_time.yfilter = yfilter;
    }
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "server" || name == "enable" || name == "shutdown" || name == "password" || name == "response-time" || name == "username" || name == "refresh-time" || name == "purge-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::Transport()
    :
    transport{YType::enumeration, "transport"},
    port{YType::uint16, "port"}
{

    yang_name = "transport"; yang_parent_name = "rpki-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::~Transport()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::has_data() const
{
    if (is_presence_container) return true;
    return transport.is_set
	|| port.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "port")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroups()
    :
    as_list_group(this, {"as_list_group_name"})
{

    yang_name = "as-list-groups"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::~AsListGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<as_list_group.len(); index++)
    {
        if(as_list_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::has_operation() const
{
    for (std::size_t index=0; index<as_list_group.len(); index++)
    {
        if(as_list_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-list-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-list-group")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup>();
        ent_->parent = this;
        as_list_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : as_list_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-list-group")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::AsListGroup()
    :
    as_list_group_name{YType::str, "as-list-group-name"},
    enable{YType::empty, "enable"}
        ,
    ases(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases>())
{
    ases->parent = this;

    yang_name = "as-list-group"; yang_parent_name = "as-list-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::~AsListGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::has_data() const
{
    if (is_presence_container) return true;
    return as_list_group_name.is_set
	|| enable.is_set
	|| (ases !=  nullptr && ases->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_list_group_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (ases !=  nullptr && ases->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-list-group";
    ADD_KEY_TOKEN(as_list_group_name, "as-list-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_list_group_name.is_set || is_set(as_list_group_name.yfilter)) leaf_name_data.push_back(as_list_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ases")
    {
        if(ases == nullptr)
        {
            ases = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases>();
        }
        return ases;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ases != nullptr)
    {
        _children["ases"] = ases;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-list-group-name")
    {
        as_list_group_name = value;
        as_list_group_name.value_namespace = name_space;
        as_list_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-list-group-name")
    {
        as_list_group_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ases" || name == "as-list-group-name" || name == "enable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::Ases()
    :
    as(this, {"as_xx", "as_yy"})
{

    yang_name = "ases"; yang_parent_name = "as-list-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::~Ases()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<as.len(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::has_operation() const
{
    for (std::size_t index=0; index<as.len(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As>();
        ent_->parent = this;
        as.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::As()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "as"; yang_parent_name = "ases"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::~As()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(as_yy, "as-yy");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsListGroups::AsListGroup::Ases::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::Limits()
    :
    maximum_neighbors{YType::uint32, "maximum-neighbors"}
{

    yang_name = "limits"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::~Limits()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::has_data() const
{
    if (is_presence_container) return true;
    return maximum_neighbors.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_neighbors.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_neighbors.is_set || is_set(maximum_neighbors.yfilter)) leaf_name_data.push_back(maximum_neighbors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-neighbors")
    {
        maximum_neighbors = value;
        maximum_neighbors.value_namespace = name_space;
        maximum_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-neighbors")
    {
        maximum_neighbors.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-neighbors")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::ConfederationDomain()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "confederation-domain"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::~ConfederationDomain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAses()
    :
    confederation_peer_as(this, {"as_xx", "as_yy"})
{

    yang_name = "confederation-peer-ases"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::~ConfederationPeerAses()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<confederation_peer_as.len(); index++)
    {
        if(confederation_peer_as[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::has_operation() const
{
    for (std::size_t index=0; index<confederation_peer_as.len(); index++)
    {
        if(confederation_peer_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation-peer-ases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confederation-peer-as")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs>();
        ent_->parent = this;
        confederation_peer_as.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : confederation_peer_as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confederation-peer-as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::ConfederationPeerAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "confederation-peer-as"; yang_parent_name = "confederation-peer-ases"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::~ConfederationPeerAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::has_data() const
{
    if (is_presence_container) return true;
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation-peer-as";
    ADD_KEY_TOKEN(as_xx, "as-xx");
    ADD_KEY_TOKEN(as_yy, "as-yy");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroups()
    :
    attribute_filter_group(this, {"attribute_filter_group_name"})
{

    yang_name = "attribute-filter-groups"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::~AttributeFilterGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_filter_group.len(); index++)
    {
        if(attribute_filter_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter_group.len(); index++)
    {
        if(attribute_filter_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter-group")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup>();
        ent_->parent = this;
        attribute_filter_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute_filter_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-group")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterGroup()
    :
    attribute_filter_group_name{YType::str, "attribute-filter-group-name"},
    enable{YType::empty, "enable"}
        ,
    attribute_filters(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters>())
{
    attribute_filters->parent = this;

    yang_name = "attribute-filter-group"; yang_parent_name = "attribute-filter-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::~AttributeFilterGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::has_data() const
{
    if (is_presence_container) return true;
    return attribute_filter_group_name.is_set
	|| enable.is_set
	|| (attribute_filters !=  nullptr && attribute_filters->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_filter_group_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (attribute_filters !=  nullptr && attribute_filters->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-group";
    ADD_KEY_TOKEN(attribute_filter_group_name, "attribute-filter-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_filter_group_name.is_set || is_set(attribute_filter_group_name.yfilter)) leaf_name_data.push_back(attribute_filter_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filters")
    {
        if(attribute_filters == nullptr)
        {
            attribute_filters = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters>();
        }
        return attribute_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_filters != nullptr)
    {
        _children["attribute-filters"] = attribute_filters;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name = value;
        attribute_filter_group_name.value_namespace = name_space;
        attribute_filter_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filters" || name == "attribute-filter-group-name" || name == "enable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilters()
    :
    attribute_filter(this, {"attribute_start", "attribute_end"})
{

    yang_name = "attribute-filters"; yang_parent_name = "attribute-filter-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::~AttributeFilters()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_filter.len(); index++)
    {
        if(attribute_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter.len(); index++)
    {
        if(attribute_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter>();
        ent_->parent = this;
        attribute_filter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute_filter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::AttributeFilter()
    :
    attribute_start{YType::uint32, "attribute-start"},
    attribute_end{YType::uint32, "attribute-end"},
    filter_action{YType::enumeration, "filter-action"}
{

    yang_name = "attribute-filter"; yang_parent_name = "attribute-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::~AttributeFilter()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::has_data() const
{
    if (is_presence_container) return true;
    return attribute_start.is_set
	|| attribute_end.is_set
	|| filter_action.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_start.yfilter)
	|| ydk::is_set(attribute_end.yfilter)
	|| ydk::is_set(filter_action.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter";
    ADD_KEY_TOKEN(attribute_start, "attribute-start");
    ADD_KEY_TOKEN(attribute_end, "attribute-end");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_start.is_set || is_set(attribute_start.yfilter)) leaf_name_data.push_back(attribute_start.get_name_leafdata());
    if (attribute_end.is_set || is_set(attribute_end.yfilter)) leaf_name_data.push_back(attribute_end.get_name_leafdata());
    if (filter_action.is_set || is_set(filter_action.yfilter)) leaf_name_data.push_back(filter_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-start")
    {
        attribute_start = value;
        attribute_start.value_namespace = name_space;
        attribute_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-end")
    {
        attribute_end = value;
        attribute_end.value_namespace = name_space;
        attribute_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-action")
    {
        filter_action = value;
        filter_action.value_namespace = name_space;
        filter_action.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-start")
    {
        attribute_start.yfilter = yfilter;
    }
    if(value_path == "attribute-end")
    {
        attribute_end.yfilter = yfilter;
    }
    if(value_path == "filter-action")
    {
        filter_action.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-start" || name == "attribute-end" || name == "filter-action")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::GlobalGracefulMaintenanceActivate()
    :
    all_neighbors{YType::boolean, "all-neighbors"},
    retain_routes{YType::boolean, "retain-routes"}
{

    yang_name = "global-graceful-maintenance-activate"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::~GlobalGracefulMaintenanceActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::has_data() const
{
    if (is_presence_container) return true;
    return all_neighbors.is_set
	|| retain_routes.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_neighbors.yfilter)
	|| ydk::is_set(retain_routes.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-graceful-maintenance-activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_neighbors.is_set || is_set(all_neighbors.yfilter)) leaf_name_data.push_back(all_neighbors.get_name_leafdata());
    if (retain_routes.is_set || is_set(retain_routes.yfilter)) leaf_name_data.push_back(retain_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-neighbors")
    {
        all_neighbors = value;
        all_neighbors.value_namespace = name_space;
        all_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retain-routes")
    {
        retain_routes = value;
        retain_routes.value_namespace = name_space;
        retain_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-neighbors")
    {
        all_neighbors.yfilter = yfilter;
    }
    if(value_path == "retain-routes")
    {
        retain_routes.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-neighbors" || name == "retain-routes")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAfs()
    :
    global_af(this, {"af_name"})
{

    yang_name = "global-afs"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::~GlobalAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_af.len(); index++)
    {
        if(global_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::has_operation() const
{
    for (std::size_t index=0; index<global_af.len(); index++)
    {
        if(global_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-af")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf>();
        ent_->parent = this;
        global_af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : global_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::GlobalAf()
    :
    af_name{YType::enumeration, "af-name"},
    rnh_install_format{YType::enumeration, "rnh-install-format"},
    inter_as_install{YType::empty, "inter-as-install"},
    segmented_mcast{YType::empty, "segmented-mcast"},
    implicit_import{YType::empty, "implicit-import"},
    disable_default_martian_check{YType::empty, "disable-default-martian-check"},
    next_hop_critical_trigger_delay{YType::uint32, "next-hop-critical-trigger-delay"},
    next_hop_non_critical_trigger_delay{YType::uint32, "next-hop-non-critical-trigger-delay"},
    label_security_rpf{YType::empty, "label-security-rpf"},
    use_igpsr_label{YType::empty, "use-igpsr-label"},
    label_retain{YType::uint32, "label-retain"},
    scan_time{YType::uint32, "scan-time"},
    source_route_target_policy{YType::str, "source-route-target-policy"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    update_limit_sub_group_ebgp{YType::uint32, "update-limit-sub-group-ebgp"},
    update_limit_address_family{YType::uint32, "update-limit-address-family"},
    update_limit_sub_group_ibgp{YType::uint32, "update-limit-sub-group-ibgp"},
    disable_client_to_client_rr{YType::empty, "disable-client-to-client-rr"},
    next_hop_route_policy{YType::str, "next-hop-route-policy"},
    global_table_mcast{YType::empty, "global-table-mcast"},
    wait_rib_install{YType::empty, "wait-rib-install"},
    prefix_sid_map{YType::empty, "prefix-sid-map"},
    rpki_origin_as_validation_enable{YType::empty, "rpki-origin-as-validation-enable"},
    dynamic_med_interval{YType::uint32, "dynamic-med-interval"},
    enable{YType::empty, "enable"},
    table_policy{YType::str, "table-policy"},
    attribute_download{YType::empty, "attribute-download"},
    best_external{YType::boolean, "best-external"},
    rpki_origin_as_validity_signal_ibgp{YType::empty, "rpki-origin-as-validity-signal-ibgp"},
    additional_paths_receive{YType::enumeration, "additional-paths-receive"},
    permanent_network{YType::str, "permanent-network"},
    rpki_bestpath_use_origin_as_validity{YType::empty, "rpki-bestpath-use-origin-as-validity"},
    srv6_label_allocation_mode{YType::str, "srv6-label-allocation-mode"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    next_hop_resolution_prefix_length_minimum{YType::uint32, "next-hop-resolution-prefix-length-minimum"},
    reset_weight_on_import{YType::boolean, "reset-weight-on-import"},
    additional_paths_send{YType::enumeration, "additional-paths-send"},
    advertise_local_labeled_route_safi_unicast{YType::enumeration, "advertise-local-labeled-route-safi-unicast"},
    disable_as_path_loop_check{YType::empty, "disable-as-path-loop-check"}
        ,
    isis_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes>())
    , domain_distinguisher(nullptr) // presence node
    , vrf_all(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll>())
    , disable_cluster_client_to_client_rrs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs>())
    , label_delay(nullptr) // presence node
    , ebgp(nullptr) // presence node
    , eibgp(nullptr) // presence node
    , retain_rt(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt>())
    , ibgp(nullptr) // presence node
    , import_delay(nullptr) // presence node
    , aggregate_addresses(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses>())
    , optimal_route_reflector_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups>())
    , dampening(nullptr) // presence node
    , rip_routes(nullptr) // presence node
    , lisp_routes(nullptr) // presence node
    , static_routes(nullptr) // presence node
    , distance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance>())
    , application_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes>())
    , label_mode(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode>())
    , eigrp_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes>())
    , sourced_networks(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks>())
    , connected_routes(nullptr) // presence node
    , allocate_label(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel>())
    , additional_paths_selection(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection>())
    , ospf_routes(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes>())
    , mobile_routes(nullptr) // presence node
    , subscriber_routes(nullptr) // presence node
{
    isis_routes->parent = this;
    vrf_all->parent = this;
    disable_cluster_client_to_client_rrs->parent = this;
    retain_rt->parent = this;
    aggregate_addresses->parent = this;
    optimal_route_reflector_groups->parent = this;
    distance->parent = this;
    application_routes->parent = this;
    label_mode->parent = this;
    eigrp_routes->parent = this;
    sourced_networks->parent = this;
    allocate_label->parent = this;
    additional_paths_selection->parent = this;
    ospf_routes->parent = this;

    yang_name = "global-af"; yang_parent_name = "global-afs"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::~GlobalAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| rnh_install_format.is_set
	|| inter_as_install.is_set
	|| segmented_mcast.is_set
	|| implicit_import.is_set
	|| disable_default_martian_check.is_set
	|| next_hop_critical_trigger_delay.is_set
	|| next_hop_non_critical_trigger_delay.is_set
	|| label_security_rpf.is_set
	|| use_igpsr_label.is_set
	|| label_retain.is_set
	|| scan_time.is_set
	|| source_route_target_policy.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| update_limit_sub_group_ebgp.is_set
	|| update_limit_address_family.is_set
	|| update_limit_sub_group_ibgp.is_set
	|| disable_client_to_client_rr.is_set
	|| next_hop_route_policy.is_set
	|| global_table_mcast.is_set
	|| wait_rib_install.is_set
	|| prefix_sid_map.is_set
	|| rpki_origin_as_validation_enable.is_set
	|| dynamic_med_interval.is_set
	|| enable.is_set
	|| table_policy.is_set
	|| attribute_download.is_set
	|| best_external.is_set
	|| rpki_origin_as_validity_signal_ibgp.is_set
	|| additional_paths_receive.is_set
	|| permanent_network.is_set
	|| rpki_bestpath_use_origin_as_validity.is_set
	|| srv6_label_allocation_mode.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| next_hop_resolution_prefix_length_minimum.is_set
	|| reset_weight_on_import.is_set
	|| additional_paths_send.is_set
	|| advertise_local_labeled_route_safi_unicast.is_set
	|| disable_as_path_loop_check.is_set
	|| (isis_routes !=  nullptr && isis_routes->has_data())
	|| (domain_distinguisher !=  nullptr && domain_distinguisher->has_data())
	|| (vrf_all !=  nullptr && vrf_all->has_data())
	|| (disable_cluster_client_to_client_rrs !=  nullptr && disable_cluster_client_to_client_rrs->has_data())
	|| (label_delay !=  nullptr && label_delay->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (eibgp !=  nullptr && eibgp->has_data())
	|| (retain_rt !=  nullptr && retain_rt->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (import_delay !=  nullptr && import_delay->has_data())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_data())
	|| (optimal_route_reflector_groups !=  nullptr && optimal_route_reflector_groups->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (rip_routes !=  nullptr && rip_routes->has_data())
	|| (lisp_routes !=  nullptr && lisp_routes->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (application_routes !=  nullptr && application_routes->has_data())
	|| (label_mode !=  nullptr && label_mode->has_data())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_data())
	|| (sourced_networks !=  nullptr && sourced_networks->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (allocate_label !=  nullptr && allocate_label->has_data())
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_data())
	|| (ospf_routes !=  nullptr && ospf_routes->has_data())
	|| (mobile_routes !=  nullptr && mobile_routes->has_data())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rnh_install_format.yfilter)
	|| ydk::is_set(inter_as_install.yfilter)
	|| ydk::is_set(segmented_mcast.yfilter)
	|| ydk::is_set(implicit_import.yfilter)
	|| ydk::is_set(disable_default_martian_check.yfilter)
	|| ydk::is_set(next_hop_critical_trigger_delay.yfilter)
	|| ydk::is_set(next_hop_non_critical_trigger_delay.yfilter)
	|| ydk::is_set(label_security_rpf.yfilter)
	|| ydk::is_set(use_igpsr_label.yfilter)
	|| ydk::is_set(label_retain.yfilter)
	|| ydk::is_set(scan_time.yfilter)
	|| ydk::is_set(source_route_target_policy.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(update_limit_sub_group_ebgp.yfilter)
	|| ydk::is_set(update_limit_address_family.yfilter)
	|| ydk::is_set(update_limit_sub_group_ibgp.yfilter)
	|| ydk::is_set(disable_client_to_client_rr.yfilter)
	|| ydk::is_set(next_hop_route_policy.yfilter)
	|| ydk::is_set(global_table_mcast.yfilter)
	|| ydk::is_set(wait_rib_install.yfilter)
	|| ydk::is_set(prefix_sid_map.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_enable.yfilter)
	|| ydk::is_set(dynamic_med_interval.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| ydk::is_set(attribute_download.yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| ydk::is_set(rpki_origin_as_validity_signal_ibgp.yfilter)
	|| ydk::is_set(additional_paths_receive.yfilter)
	|| ydk::is_set(permanent_network.yfilter)
	|| ydk::is_set(rpki_bestpath_use_origin_as_validity.yfilter)
	|| ydk::is_set(srv6_label_allocation_mode.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(next_hop_resolution_prefix_length_minimum.yfilter)
	|| ydk::is_set(reset_weight_on_import.yfilter)
	|| ydk::is_set(additional_paths_send.yfilter)
	|| ydk::is_set(advertise_local_labeled_route_safi_unicast.yfilter)
	|| ydk::is_set(disable_as_path_loop_check.yfilter)
	|| (isis_routes !=  nullptr && isis_routes->has_operation())
	|| (domain_distinguisher !=  nullptr && domain_distinguisher->has_operation())
	|| (vrf_all !=  nullptr && vrf_all->has_operation())
	|| (disable_cluster_client_to_client_rrs !=  nullptr && disable_cluster_client_to_client_rrs->has_operation())
	|| (label_delay !=  nullptr && label_delay->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (eibgp !=  nullptr && eibgp->has_operation())
	|| (retain_rt !=  nullptr && retain_rt->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (import_delay !=  nullptr && import_delay->has_operation())
	|| (aggregate_addresses !=  nullptr && aggregate_addresses->has_operation())
	|| (optimal_route_reflector_groups !=  nullptr && optimal_route_reflector_groups->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (rip_routes !=  nullptr && rip_routes->has_operation())
	|| (lisp_routes !=  nullptr && lisp_routes->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (application_routes !=  nullptr && application_routes->has_operation())
	|| (label_mode !=  nullptr && label_mode->has_operation())
	|| (eigrp_routes !=  nullptr && eigrp_routes->has_operation())
	|| (sourced_networks !=  nullptr && sourced_networks->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (allocate_label !=  nullptr && allocate_label->has_operation())
	|| (additional_paths_selection !=  nullptr && additional_paths_selection->has_operation())
	|| (ospf_routes !=  nullptr && ospf_routes->has_operation())
	|| (mobile_routes !=  nullptr && mobile_routes->has_operation())
	|| (subscriber_routes !=  nullptr && subscriber_routes->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rnh_install_format.is_set || is_set(rnh_install_format.yfilter)) leaf_name_data.push_back(rnh_install_format.get_name_leafdata());
    if (inter_as_install.is_set || is_set(inter_as_install.yfilter)) leaf_name_data.push_back(inter_as_install.get_name_leafdata());
    if (segmented_mcast.is_set || is_set(segmented_mcast.yfilter)) leaf_name_data.push_back(segmented_mcast.get_name_leafdata());
    if (implicit_import.is_set || is_set(implicit_import.yfilter)) leaf_name_data.push_back(implicit_import.get_name_leafdata());
    if (disable_default_martian_check.is_set || is_set(disable_default_martian_check.yfilter)) leaf_name_data.push_back(disable_default_martian_check.get_name_leafdata());
    if (next_hop_critical_trigger_delay.is_set || is_set(next_hop_critical_trigger_delay.yfilter)) leaf_name_data.push_back(next_hop_critical_trigger_delay.get_name_leafdata());
    if (next_hop_non_critical_trigger_delay.is_set || is_set(next_hop_non_critical_trigger_delay.yfilter)) leaf_name_data.push_back(next_hop_non_critical_trigger_delay.get_name_leafdata());
    if (label_security_rpf.is_set || is_set(label_security_rpf.yfilter)) leaf_name_data.push_back(label_security_rpf.get_name_leafdata());
    if (use_igpsr_label.is_set || is_set(use_igpsr_label.yfilter)) leaf_name_data.push_back(use_igpsr_label.get_name_leafdata());
    if (label_retain.is_set || is_set(label_retain.yfilter)) leaf_name_data.push_back(label_retain.get_name_leafdata());
    if (scan_time.is_set || is_set(scan_time.yfilter)) leaf_name_data.push_back(scan_time.get_name_leafdata());
    if (source_route_target_policy.is_set || is_set(source_route_target_policy.yfilter)) leaf_name_data.push_back(source_route_target_policy.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (update_limit_sub_group_ebgp.is_set || is_set(update_limit_sub_group_ebgp.yfilter)) leaf_name_data.push_back(update_limit_sub_group_ebgp.get_name_leafdata());
    if (update_limit_address_family.is_set || is_set(update_limit_address_family.yfilter)) leaf_name_data.push_back(update_limit_address_family.get_name_leafdata());
    if (update_limit_sub_group_ibgp.is_set || is_set(update_limit_sub_group_ibgp.yfilter)) leaf_name_data.push_back(update_limit_sub_group_ibgp.get_name_leafdata());
    if (disable_client_to_client_rr.is_set || is_set(disable_client_to_client_rr.yfilter)) leaf_name_data.push_back(disable_client_to_client_rr.get_name_leafdata());
    if (next_hop_route_policy.is_set || is_set(next_hop_route_policy.yfilter)) leaf_name_data.push_back(next_hop_route_policy.get_name_leafdata());
    if (global_table_mcast.is_set || is_set(global_table_mcast.yfilter)) leaf_name_data.push_back(global_table_mcast.get_name_leafdata());
    if (wait_rib_install.is_set || is_set(wait_rib_install.yfilter)) leaf_name_data.push_back(wait_rib_install.get_name_leafdata());
    if (prefix_sid_map.is_set || is_set(prefix_sid_map.yfilter)) leaf_name_data.push_back(prefix_sid_map.get_name_leafdata());
    if (rpki_origin_as_validation_enable.is_set || is_set(rpki_origin_as_validation_enable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_enable.get_name_leafdata());
    if (dynamic_med_interval.is_set || is_set(dynamic_med_interval.yfilter)) leaf_name_data.push_back(dynamic_med_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());
    if (attribute_download.is_set || is_set(attribute_download.yfilter)) leaf_name_data.push_back(attribute_download.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (rpki_origin_as_validity_signal_ibgp.is_set || is_set(rpki_origin_as_validity_signal_ibgp.yfilter)) leaf_name_data.push_back(rpki_origin_as_validity_signal_ibgp.get_name_leafdata());
    if (additional_paths_receive.is_set || is_set(additional_paths_receive.yfilter)) leaf_name_data.push_back(additional_paths_receive.get_name_leafdata());
    if (permanent_network.is_set || is_set(permanent_network.yfilter)) leaf_name_data.push_back(permanent_network.get_name_leafdata());
    if (rpki_bestpath_use_origin_as_validity.is_set || is_set(rpki_bestpath_use_origin_as_validity.yfilter)) leaf_name_data.push_back(rpki_bestpath_use_origin_as_validity.get_name_leafdata());
    if (srv6_label_allocation_mode.is_set || is_set(srv6_label_allocation_mode.yfilter)) leaf_name_data.push_back(srv6_label_allocation_mode.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (next_hop_resolution_prefix_length_minimum.is_set || is_set(next_hop_resolution_prefix_length_minimum.yfilter)) leaf_name_data.push_back(next_hop_resolution_prefix_length_minimum.get_name_leafdata());
    if (reset_weight_on_import.is_set || is_set(reset_weight_on_import.yfilter)) leaf_name_data.push_back(reset_weight_on_import.get_name_leafdata());
    if (additional_paths_send.is_set || is_set(additional_paths_send.yfilter)) leaf_name_data.push_back(additional_paths_send.get_name_leafdata());
    if (advertise_local_labeled_route_safi_unicast.is_set || is_set(advertise_local_labeled_route_safi_unicast.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route_safi_unicast.get_name_leafdata());
    if (disable_as_path_loop_check.is_set || is_set(disable_as_path_loop_check.yfilter)) leaf_name_data.push_back(disable_as_path_loop_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-routes")
    {
        if(isis_routes == nullptr)
        {
            isis_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes>();
        }
        return isis_routes;
    }

    if(child_yang_name == "domain-distinguisher")
    {
        if(domain_distinguisher == nullptr)
        {
            domain_distinguisher = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher>();
        }
        return domain_distinguisher;
    }

    if(child_yang_name == "vrf-all")
    {
        if(vrf_all == nullptr)
        {
            vrf_all = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll>();
        }
        return vrf_all;
    }

    if(child_yang_name == "disable-cluster-client-to-client-rrs")
    {
        if(disable_cluster_client_to_client_rrs == nullptr)
        {
            disable_cluster_client_to_client_rrs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs>();
        }
        return disable_cluster_client_to_client_rrs;
    }

    if(child_yang_name == "label-delay")
    {
        if(label_delay == nullptr)
        {
            label_delay = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay>();
        }
        return label_delay;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "eibgp")
    {
        if(eibgp == nullptr)
        {
            eibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp>();
        }
        return eibgp;
    }

    if(child_yang_name == "retain-rt")
    {
        if(retain_rt == nullptr)
        {
            retain_rt = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt>();
        }
        return retain_rt;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "import-delay")
    {
        if(import_delay == nullptr)
        {
            import_delay = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay>();
        }
        return import_delay;
    }

    if(child_yang_name == "aggregate-addresses")
    {
        if(aggregate_addresses == nullptr)
        {
            aggregate_addresses = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses>();
        }
        return aggregate_addresses;
    }

    if(child_yang_name == "optimal-route-reflector-groups")
    {
        if(optimal_route_reflector_groups == nullptr)
        {
            optimal_route_reflector_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups>();
        }
        return optimal_route_reflector_groups;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "rip-routes")
    {
        if(rip_routes == nullptr)
        {
            rip_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes>();
        }
        return rip_routes;
    }

    if(child_yang_name == "lisp-routes")
    {
        if(lisp_routes == nullptr)
        {
            lisp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes>();
        }
        return lisp_routes;
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes == nullptr)
        {
            static_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes>();
        }
        return static_routes;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "application-routes")
    {
        if(application_routes == nullptr)
        {
            application_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes>();
        }
        return application_routes;
    }

    if(child_yang_name == "label-mode")
    {
        if(label_mode == nullptr)
        {
            label_mode = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode>();
        }
        return label_mode;
    }

    if(child_yang_name == "eigrp-routes")
    {
        if(eigrp_routes == nullptr)
        {
            eigrp_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes>();
        }
        return eigrp_routes;
    }

    if(child_yang_name == "sourced-networks")
    {
        if(sourced_networks == nullptr)
        {
            sourced_networks = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks>();
        }
        return sourced_networks;
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes == nullptr)
        {
            connected_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes>();
        }
        return connected_routes;
    }

    if(child_yang_name == "allocate-label")
    {
        if(allocate_label == nullptr)
        {
            allocate_label = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel>();
        }
        return allocate_label;
    }

    if(child_yang_name == "additional-paths-selection")
    {
        if(additional_paths_selection == nullptr)
        {
            additional_paths_selection = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection>();
        }
        return additional_paths_selection;
    }

    if(child_yang_name == "ospf-routes")
    {
        if(ospf_routes == nullptr)
        {
            ospf_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes>();
        }
        return ospf_routes;
    }

    if(child_yang_name == "mobile-routes")
    {
        if(mobile_routes == nullptr)
        {
            mobile_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes>();
        }
        return mobile_routes;
    }

    if(child_yang_name == "subscriber-routes")
    {
        if(subscriber_routes == nullptr)
        {
            subscriber_routes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes>();
        }
        return subscriber_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis_routes != nullptr)
    {
        _children["isis-routes"] = isis_routes;
    }

    if(domain_distinguisher != nullptr)
    {
        _children["domain-distinguisher"] = domain_distinguisher;
    }

    if(vrf_all != nullptr)
    {
        _children["vrf-all"] = vrf_all;
    }

    if(disable_cluster_client_to_client_rrs != nullptr)
    {
        _children["disable-cluster-client-to-client-rrs"] = disable_cluster_client_to_client_rrs;
    }

    if(label_delay != nullptr)
    {
        _children["label-delay"] = label_delay;
    }

    if(ebgp != nullptr)
    {
        _children["ebgp"] = ebgp;
    }

    if(eibgp != nullptr)
    {
        _children["eibgp"] = eibgp;
    }

    if(retain_rt != nullptr)
    {
        _children["retain-rt"] = retain_rt;
    }

    if(ibgp != nullptr)
    {
        _children["ibgp"] = ibgp;
    }

    if(import_delay != nullptr)
    {
        _children["import-delay"] = import_delay;
    }

    if(aggregate_addresses != nullptr)
    {
        _children["aggregate-addresses"] = aggregate_addresses;
    }

    if(optimal_route_reflector_groups != nullptr)
    {
        _children["optimal-route-reflector-groups"] = optimal_route_reflector_groups;
    }

    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    if(rip_routes != nullptr)
    {
        _children["rip-routes"] = rip_routes;
    }

    if(lisp_routes != nullptr)
    {
        _children["lisp-routes"] = lisp_routes;
    }

    if(static_routes != nullptr)
    {
        _children["static-routes"] = static_routes;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    if(application_routes != nullptr)
    {
        _children["application-routes"] = application_routes;
    }

    if(label_mode != nullptr)
    {
        _children["label-mode"] = label_mode;
    }

    if(eigrp_routes != nullptr)
    {
        _children["eigrp-routes"] = eigrp_routes;
    }

    if(sourced_networks != nullptr)
    {
        _children["sourced-networks"] = sourced_networks;
    }

    if(connected_routes != nullptr)
    {
        _children["connected-routes"] = connected_routes;
    }

    if(allocate_label != nullptr)
    {
        _children["allocate-label"] = allocate_label;
    }

    if(additional_paths_selection != nullptr)
    {
        _children["additional-paths-selection"] = additional_paths_selection;
    }

    if(ospf_routes != nullptr)
    {
        _children["ospf-routes"] = ospf_routes;
    }

    if(mobile_routes != nullptr)
    {
        _children["mobile-routes"] = mobile_routes;
    }

    if(subscriber_routes != nullptr)
    {
        _children["subscriber-routes"] = subscriber_routes;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-install-format")
    {
        rnh_install_format = value;
        rnh_install_format.value_namespace = name_space;
        rnh_install_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-as-install")
    {
        inter_as_install = value;
        inter_as_install.value_namespace = name_space;
        inter_as_install.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segmented-mcast")
    {
        segmented_mcast = value;
        segmented_mcast.value_namespace = name_space;
        segmented_mcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-import")
    {
        implicit_import = value;
        implicit_import.value_namespace = name_space;
        implicit_import.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-default-martian-check")
    {
        disable_default_martian_check = value;
        disable_default_martian_check.value_namespace = name_space;
        disable_default_martian_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-critical-trigger-delay")
    {
        next_hop_critical_trigger_delay = value;
        next_hop_critical_trigger_delay.value_namespace = name_space;
        next_hop_critical_trigger_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-non-critical-trigger-delay")
    {
        next_hop_non_critical_trigger_delay = value;
        next_hop_non_critical_trigger_delay.value_namespace = name_space;
        next_hop_non_critical_trigger_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-security-rpf")
    {
        label_security_rpf = value;
        label_security_rpf.value_namespace = name_space;
        label_security_rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-igpsr-label")
    {
        use_igpsr_label = value;
        use_igpsr_label.value_namespace = name_space;
        use_igpsr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-retain")
    {
        label_retain = value;
        label_retain.value_namespace = name_space;
        label_retain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-time")
    {
        scan_time = value;
        scan_time.value_namespace = name_space;
        scan_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-route-target-policy")
    {
        source_route_target_policy = value;
        source_route_target_policy.value_namespace = name_space;
        source_route_target_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-limit-sub-group-ebgp")
    {
        update_limit_sub_group_ebgp = value;
        update_limit_sub_group_ebgp.value_namespace = name_space;
        update_limit_sub_group_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-limit-address-family")
    {
        update_limit_address_family = value;
        update_limit_address_family.value_namespace = name_space;
        update_limit_address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-limit-sub-group-ibgp")
    {
        update_limit_sub_group_ibgp = value;
        update_limit_sub_group_ibgp.value_namespace = name_space;
        update_limit_sub_group_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-client-to-client-rr")
    {
        disable_client_to_client_rr = value;
        disable_client_to_client_rr.value_namespace = name_space;
        disable_client_to_client_rr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-route-policy")
    {
        next_hop_route_policy = value;
        next_hop_route_policy.value_namespace = name_space;
        next_hop_route_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-table-mcast")
    {
        global_table_mcast = value;
        global_table_mcast.value_namespace = name_space;
        global_table_mcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-rib-install")
    {
        wait_rib_install = value;
        wait_rib_install.value_namespace = name_space;
        wait_rib_install.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-sid-map")
    {
        prefix_sid_map = value;
        prefix_sid_map.value_namespace = name_space;
        prefix_sid_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-enable")
    {
        rpki_origin_as_validation_enable = value;
        rpki_origin_as_validation_enable.value_namespace = name_space;
        rpki_origin_as_validation_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic-med-interval")
    {
        dynamic_med_interval = value;
        dynamic_med_interval.value_namespace = name_space;
        dynamic_med_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-download")
    {
        attribute_download = value;
        attribute_download.value_namespace = name_space;
        attribute_download.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp = value;
        rpki_origin_as_validity_signal_ibgp.value_namespace = name_space;
        rpki_origin_as_validity_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive")
    {
        additional_paths_receive = value;
        additional_paths_receive.value_namespace = name_space;
        additional_paths_receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent-network")
    {
        permanent_network = value;
        permanent_network.value_namespace = name_space;
        permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity = value;
        rpki_bestpath_use_origin_as_validity.value_namespace = name_space;
        rpki_bestpath_use_origin_as_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-label-allocation-mode")
    {
        srv6_label_allocation_mode = value;
        srv6_label_allocation_mode.value_namespace = name_space;
        srv6_label_allocation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-resolution-prefix-length-minimum")
    {
        next_hop_resolution_prefix_length_minimum = value;
        next_hop_resolution_prefix_length_minimum.value_namespace = name_space;
        next_hop_resolution_prefix_length_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-weight-on-import")
    {
        reset_weight_on_import = value;
        reset_weight_on_import.value_namespace = name_space;
        reset_weight_on_import.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send")
    {
        additional_paths_send = value;
        additional_paths_send.value_namespace = name_space;
        additional_paths_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route-safi-unicast")
    {
        advertise_local_labeled_route_safi_unicast = value;
        advertise_local_labeled_route_safi_unicast.value_namespace = name_space;
        advertise_local_labeled_route_safi_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-as-path-loop-check")
    {
        disable_as_path_loop_check = value;
        disable_as_path_loop_check.value_namespace = name_space;
        disable_as_path_loop_check.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rnh-install-format")
    {
        rnh_install_format.yfilter = yfilter;
    }
    if(value_path == "inter-as-install")
    {
        inter_as_install.yfilter = yfilter;
    }
    if(value_path == "segmented-mcast")
    {
        segmented_mcast.yfilter = yfilter;
    }
    if(value_path == "implicit-import")
    {
        implicit_import.yfilter = yfilter;
    }
    if(value_path == "disable-default-martian-check")
    {
        disable_default_martian_check.yfilter = yfilter;
    }
    if(value_path == "next-hop-critical-trigger-delay")
    {
        next_hop_critical_trigger_delay.yfilter = yfilter;
    }
    if(value_path == "next-hop-non-critical-trigger-delay")
    {
        next_hop_non_critical_trigger_delay.yfilter = yfilter;
    }
    if(value_path == "label-security-rpf")
    {
        label_security_rpf.yfilter = yfilter;
    }
    if(value_path == "use-igpsr-label")
    {
        use_igpsr_label.yfilter = yfilter;
    }
    if(value_path == "label-retain")
    {
        label_retain.yfilter = yfilter;
    }
    if(value_path == "scan-time")
    {
        scan_time.yfilter = yfilter;
    }
    if(value_path == "source-route-target-policy")
    {
        source_route_target_policy.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "update-limit-sub-group-ebgp")
    {
        update_limit_sub_group_ebgp.yfilter = yfilter;
    }
    if(value_path == "update-limit-address-family")
    {
        update_limit_address_family.yfilter = yfilter;
    }
    if(value_path == "update-limit-sub-group-ibgp")
    {
        update_limit_sub_group_ibgp.yfilter = yfilter;
    }
    if(value_path == "disable-client-to-client-rr")
    {
        disable_client_to_client_rr.yfilter = yfilter;
    }
    if(value_path == "next-hop-route-policy")
    {
        next_hop_route_policy.yfilter = yfilter;
    }
    if(value_path == "global-table-mcast")
    {
        global_table_mcast.yfilter = yfilter;
    }
    if(value_path == "wait-rib-install")
    {
        wait_rib_install.yfilter = yfilter;
    }
    if(value_path == "prefix-sid-map")
    {
        prefix_sid_map.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-enable")
    {
        rpki_origin_as_validation_enable.yfilter = yfilter;
    }
    if(value_path == "dynamic-med-interval")
    {
        dynamic_med_interval.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
    if(value_path == "attribute-download")
    {
        attribute_download.yfilter = yfilter;
    }
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validity-signal-ibgp")
    {
        rpki_origin_as_validity_signal_ibgp.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive")
    {
        additional_paths_receive.yfilter = yfilter;
    }
    if(value_path == "permanent-network")
    {
        permanent_network.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-use-origin-as-validity")
    {
        rpki_bestpath_use_origin_as_validity.yfilter = yfilter;
    }
    if(value_path == "srv6-label-allocation-mode")
    {
        srv6_label_allocation_mode.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "next-hop-resolution-prefix-length-minimum")
    {
        next_hop_resolution_prefix_length_minimum.yfilter = yfilter;
    }
    if(value_path == "reset-weight-on-import")
    {
        reset_weight_on_import.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send")
    {
        additional_paths_send.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route-safi-unicast")
    {
        advertise_local_labeled_route_safi_unicast.yfilter = yfilter;
    }
    if(value_path == "disable-as-path-loop-check")
    {
        disable_as_path_loop_check.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-routes" || name == "domain-distinguisher" || name == "vrf-all" || name == "disable-cluster-client-to-client-rrs" || name == "label-delay" || name == "ebgp" || name == "eibgp" || name == "retain-rt" || name == "ibgp" || name == "import-delay" || name == "aggregate-addresses" || name == "optimal-route-reflector-groups" || name == "dampening" || name == "rip-routes" || name == "lisp-routes" || name == "static-routes" || name == "distance" || name == "application-routes" || name == "label-mode" || name == "eigrp-routes" || name == "sourced-networks" || name == "connected-routes" || name == "allocate-label" || name == "additional-paths-selection" || name == "ospf-routes" || name == "mobile-routes" || name == "subscriber-routes" || name == "af-name" || name == "rnh-install-format" || name == "inter-as-install" || name == "segmented-mcast" || name == "implicit-import" || name == "disable-default-martian-check" || name == "next-hop-critical-trigger-delay" || name == "next-hop-non-critical-trigger-delay" || name == "label-security-rpf" || name == "use-igpsr-label" || name == "label-retain" || name == "scan-time" || name == "source-route-target-policy" || name == "rpki-origin-as-validation-disable" || name == "update-limit-sub-group-ebgp" || name == "update-limit-address-family" || name == "update-limit-sub-group-ibgp" || name == "disable-client-to-client-rr" || name == "next-hop-route-policy" || name == "global-table-mcast" || name == "wait-rib-install" || name == "prefix-sid-map" || name == "rpki-origin-as-validation-enable" || name == "dynamic-med-interval" || name == "enable" || name == "table-policy" || name == "attribute-download" || name == "best-external" || name == "rpki-origin-as-validity-signal-ibgp" || name == "additional-paths-receive" || name == "permanent-network" || name == "rpki-bestpath-use-origin-as-validity" || name == "srv6-label-allocation-mode" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "next-hop-resolution-prefix-length-minimum" || name == "reset-weight-on-import" || name == "additional-paths-send" || name == "advertise-local-labeled-route-safi-unicast" || name == "disable-as-path-loop-check")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoutes()
    :
    isis_route(this, {"instance_name"})
{

    yang_name = "isis-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::~IsisRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_route.len(); index++)
    {
        if(isis_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::has_operation() const
{
    for (std::size_t index=0; index<isis_route.len(); index++)
    {
        if(isis_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-route")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute>();
        ent_->parent = this;
        isis_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isis_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::IsisRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    redist_type{YType::str, "redist-type"}
{

    yang_name = "isis-route"; yang_parent_name = "isis-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::~IsisRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| default_metric.is_set
	|| route_policy_name.is_set
	|| redist_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(redist_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-route";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.yfilter)) leaf_name_data.push_back(redist_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
        redist_type.value_namespace = name_space;
        redist_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "redist-type")
    {
        redist_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "route-policy-name" || name == "redist-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::DomainDistinguisher()
    :
    as{YType::uint32, "as"},
    router_id{YType::str, "router-id"}
{

    yang_name = "domain-distinguisher"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::~DomainDistinguisher()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| router_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "router-id")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::VrfAll()
    :
    rnh_install_format{YType::enumeration, "rnh-install-format"},
    enable{YType::empty, "enable"},
    table_policy{YType::str, "table-policy"},
    source_rt_import_policy{YType::empty, "source-rt-import-policy"},
    srv6_label_allocation_mode{YType::str, "srv6-label-allocation-mode"}
        ,
    label_mode(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode>())
{
    label_mode->parent = this;

    yang_name = "vrf-all"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::~VrfAll()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::has_data() const
{
    if (is_presence_container) return true;
    return rnh_install_format.is_set
	|| enable.is_set
	|| table_policy.is_set
	|| source_rt_import_policy.is_set
	|| srv6_label_allocation_mode.is_set
	|| (label_mode !=  nullptr && label_mode->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rnh_install_format.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| ydk::is_set(source_rt_import_policy.yfilter)
	|| ydk::is_set(srv6_label_allocation_mode.yfilter)
	|| (label_mode !=  nullptr && label_mode->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rnh_install_format.is_set || is_set(rnh_install_format.yfilter)) leaf_name_data.push_back(rnh_install_format.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());
    if (source_rt_import_policy.is_set || is_set(source_rt_import_policy.yfilter)) leaf_name_data.push_back(source_rt_import_policy.get_name_leafdata());
    if (srv6_label_allocation_mode.is_set || is_set(srv6_label_allocation_mode.yfilter)) leaf_name_data.push_back(srv6_label_allocation_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-mode")
    {
        if(label_mode == nullptr)
        {
            label_mode = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode>();
        }
        return label_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_mode != nullptr)
    {
        _children["label-mode"] = label_mode;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rnh-install-format")
    {
        rnh_install_format = value;
        rnh_install_format.value_namespace = name_space;
        rnh_install_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rt-import-policy")
    {
        source_rt_import_policy = value;
        source_rt_import_policy.value_namespace = name_space;
        source_rt_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-label-allocation-mode")
    {
        srv6_label_allocation_mode = value;
        srv6_label_allocation_mode.value_namespace = name_space;
        srv6_label_allocation_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rnh-install-format")
    {
        rnh_install_format.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
    if(value_path == "source-rt-import-policy")
    {
        source_rt_import_policy.yfilter = yfilter;
    }
    if(value_path == "srv6-label-allocation-mode")
    {
        srv6_label_allocation_mode.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-mode" || name == "rnh-install-format" || name == "enable" || name == "table-policy" || name == "source-rt-import-policy" || name == "srv6-label-allocation-mode")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::LabelMode()
    :
    label_allocation_mode{YType::str, "label-allocation-mode"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "label-mode"; yang_parent_name = "vrf-all"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::~LabelMode()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::has_data() const
{
    if (is_presence_container) return true;
    return label_allocation_mode.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_allocation_mode.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_allocation_mode.is_set || is_set(label_allocation_mode.yfilter)) leaf_name_data.push_back(label_allocation_mode.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode = value;
        label_allocation_mode.value_namespace = name_space;
        label_allocation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-allocation-mode" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRrs()
    :
    disable_cluster_client_to_client_rr(this, {"cluster_type"})
{

    yang_name = "disable-cluster-client-to-client-rrs"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::~DisableClusterClientToClientRrs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<disable_cluster_client_to_client_rr.len(); index++)
    {
        if(disable_cluster_client_to_client_rr[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::has_operation() const
{
    for (std::size_t index=0; index<disable_cluster_client_to_client_rr.len(); index++)
    {
        if(disable_cluster_client_to_client_rr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable-cluster-client-to-client-rrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable-cluster-client-to-client-rr")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr>();
        ent_->parent = this;
        disable_cluster_client_to_client_rr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : disable_cluster_client_to_client_rr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable-cluster-client-to-client-rr")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::DisableClusterClientToClientRr()
    :
    cluster_type{YType::enumeration, "cluster-type"}
        ,
    number(this, {"cluster_id_number"})
    , ipv4_address(this, {"cluster_id_address"})
{

    yang_name = "disable-cluster-client-to-client-rr"; yang_parent_name = "disable-cluster-client-to-client-rrs"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::~DisableClusterClientToClientRr()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<number.len(); index++)
    {
        if(number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.len(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    return cluster_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::has_operation() const
{
    for (std::size_t index=0; index<number.len(); index++)
    {
        if(number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.len(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cluster_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable-cluster-client-to-client-rr";
    ADD_KEY_TOKEN(cluster_type, "cluster-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_type.is_set || is_set(cluster_type.yfilter)) leaf_name_data.push_back(cluster_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "number")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number>();
        ent_->parent = this;
        number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-address")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address>();
        ent_->parent = this;
        ipv4_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-type")
    {
        cluster_type = value;
        cluster_type.value_namespace = name_space;
        cluster_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-type")
    {
        cluster_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "ipv4-address" || name == "cluster-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::Number()
    :
    cluster_id_number{YType::uint32, "cluster-id-number"}
{

    yang_name = "number"; yang_parent_name = "disable-cluster-client-to-client-rr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::~Number()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::has_data() const
{
    if (is_presence_container) return true;
    return cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_number.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number";
    ADD_KEY_TOKEN(cluster_id_number, "cluster-id-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-number")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::Ipv4Address()
    :
    cluster_id_address{YType::str, "cluster-id-address"}
{

    yang_name = "ipv4-address"; yang_parent_name = "disable-cluster-client-to-client-rr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::~Ipv4Address()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::has_data() const
{
    if (is_presence_container) return true;
    return cluster_id_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    ADD_KEY_TOKEN(cluster_id_address, "cluster-id-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::LabelDelay()
    :
    seconds{YType::uint32, "seconds"},
    milliseconds{YType::uint32, "milliseconds"}
{

    yang_name = "label-delay"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::~LabelDelay()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| milliseconds.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(milliseconds.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "milliseconds")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::Ebgp()
    :
    paths_value{YType::uint32, "paths-value"},
    unequal_cost{YType::boolean, "unequal-cost"},
    selective{YType::boolean, "selective"},
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"}
{

    yang_name = "ebgp"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::~Ebgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::has_data() const
{
    if (is_presence_container) return true;
    return paths_value.is_set
	|| unequal_cost.is_set
	|| selective.is_set
	|| order_by_igp_metric.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths-value" || name == "unequal-cost" || name == "selective" || name == "order-by-igp-metric")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::Eibgp()
    :
    paths_value{YType::uint32, "paths-value"},
    unequal_cost{YType::boolean, "unequal-cost"},
    selective{YType::boolean, "selective"},
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"}
{

    yang_name = "eibgp"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::~Eibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::has_data() const
{
    if (is_presence_container) return true;
    return paths_value.is_set
	|| unequal_cost.is_set
	|| selective.is_set
	|| order_by_igp_metric.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths-value" || name == "unequal-cost" || name == "selective" || name == "order-by-igp-metric")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::RetainRt()
    :
    all{YType::boolean, "all"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "retain-rt"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::~RetainRt()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retain-rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::Ibgp()
    :
    paths_value{YType::uint32, "paths-value"},
    unequal_cost{YType::boolean, "unequal-cost"},
    selective{YType::boolean, "selective"},
    order_by_igp_metric{YType::boolean, "order-by-igp-metric"}
{

    yang_name = "ibgp"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::~Ibgp()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::has_data() const
{
    if (is_presence_container) return true;
    return paths_value.is_set
	|| unequal_cost.is_set
	|| selective.is_set
	|| order_by_igp_metric.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(paths_value.yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(selective.yfilter)
	|| ydk::is_set(order_by_igp_metric.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths_value.is_set || is_set(paths_value.yfilter)) leaf_name_data.push_back(paths_value.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (selective.is_set || is_set(selective.yfilter)) leaf_name_data.push_back(selective.get_name_leafdata());
    if (order_by_igp_metric.is_set || is_set(order_by_igp_metric.yfilter)) leaf_name_data.push_back(order_by_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "paths-value")
    {
        paths_value = value;
        paths_value.value_namespace = name_space;
        paths_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selective")
    {
        selective = value;
        selective.value_namespace = name_space;
        selective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric = value;
        order_by_igp_metric.value_namespace = name_space;
        order_by_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "paths-value")
    {
        paths_value.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "selective")
    {
        selective.yfilter = yfilter;
    }
    if(value_path == "order-by-igp-metric")
    {
        order_by_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths-value" || name == "unequal-cost" || name == "selective" || name == "order-by-igp-metric")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::ImportDelay()
    :
    seconds{YType::uint32, "seconds"},
    milliseconds{YType::uint32, "milliseconds"}
{

    yang_name = "import-delay"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::~ImportDelay()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| milliseconds.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(milliseconds.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "milliseconds")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddresses()
    :
    aggregate_address(this, {"aggregate_addr", "aggregate_prefix"})
{

    yang_name = "aggregate-addresses"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::~AggregateAddresses()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aggregate_address.len(); index++)
    {
        if(aggregate_address[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::has_operation() const
{
    for (std::size_t index=0; index<aggregate_address.len(); index++)
    {
        if(aggregate_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-address")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress>();
        ent_->parent = this;
        aggregate_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aggregate_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::AggregateAddress()
    :
    aggregate_addr{YType::str, "aggregate-addr"},
    aggregate_prefix{YType::uint16, "aggregate-prefix"},
    generate_set_info{YType::boolean, "generate-set-info"},
    generate_confederation_set_info{YType::boolean, "generate-confederation-set-info"},
    summary_only{YType::boolean, "summary-only"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "aggregate-address"; yang_parent_name = "aggregate-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::~AggregateAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::has_data() const
{
    if (is_presence_container) return true;
    return aggregate_addr.is_set
	|| aggregate_prefix.is_set
	|| generate_set_info.is_set
	|| generate_confederation_set_info.is_set
	|| summary_only.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregate_addr.yfilter)
	|| ydk::is_set(aggregate_prefix.yfilter)
	|| ydk::is_set(generate_set_info.yfilter)
	|| ydk::is_set(generate_confederation_set_info.yfilter)
	|| ydk::is_set(summary_only.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-address";
    ADD_KEY_TOKEN(aggregate_addr, "aggregate-addr");
    ADD_KEY_TOKEN(aggregate_prefix, "aggregate-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_addr.is_set || is_set(aggregate_addr.yfilter)) leaf_name_data.push_back(aggregate_addr.get_name_leafdata());
    if (aggregate_prefix.is_set || is_set(aggregate_prefix.yfilter)) leaf_name_data.push_back(aggregate_prefix.get_name_leafdata());
    if (generate_set_info.is_set || is_set(generate_set_info.yfilter)) leaf_name_data.push_back(generate_set_info.get_name_leafdata());
    if (generate_confederation_set_info.is_set || is_set(generate_confederation_set_info.yfilter)) leaf_name_data.push_back(generate_confederation_set_info.get_name_leafdata());
    if (summary_only.is_set || is_set(summary_only.yfilter)) leaf_name_data.push_back(summary_only.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate-addr")
    {
        aggregate_addr = value;
        aggregate_addr.value_namespace = name_space;
        aggregate_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-prefix")
    {
        aggregate_prefix = value;
        aggregate_prefix.value_namespace = name_space;
        aggregate_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-set-info")
    {
        generate_set_info = value;
        generate_set_info.value_namespace = name_space;
        generate_set_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generate-confederation-set-info")
    {
        generate_confederation_set_info = value;
        generate_confederation_set_info.value_namespace = name_space;
        generate_confederation_set_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-only")
    {
        summary_only = value;
        summary_only.value_namespace = name_space;
        summary_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate-addr")
    {
        aggregate_addr.yfilter = yfilter;
    }
    if(value_path == "aggregate-prefix")
    {
        aggregate_prefix.yfilter = yfilter;
    }
    if(value_path == "generate-set-info")
    {
        generate_set_info.yfilter = yfilter;
    }
    if(value_path == "generate-confederation-set-info")
    {
        generate_confederation_set_info.yfilter = yfilter;
    }
    if(value_path == "summary-only")
    {
        summary_only.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-addr" || name == "aggregate-prefix" || name == "generate-set-info" || name == "generate-confederation-set-info" || name == "summary-only" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroups()
    :
    optimal_route_reflector_group(this, {"group_name"})
{

    yang_name = "optimal-route-reflector-groups"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::~OptimalRouteReflectorGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<optimal_route_reflector_group.len(); index++)
    {
        if(optimal_route_reflector_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::has_operation() const
{
    for (std::size_t index=0; index<optimal_route_reflector_group.len(); index++)
    {
        if(optimal_route_reflector_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optimal-route-reflector-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optimal-route-reflector-group")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup>();
        ent_->parent = this;
        optimal_route_reflector_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : optimal_route_reflector_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optimal-route-reflector-group")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::OptimalRouteReflectorGroup()
    :
    group_name{YType::str, "group-name"},
    primary_root_address{YType::str, "primary-root-address"},
    secondary_root_address{YType::str, "secondary-root-address"},
    tertiary_root_address{YType::str, "tertiary-root-address"}
{

    yang_name = "optimal-route-reflector-group"; yang_parent_name = "optimal-route-reflector-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::~OptimalRouteReflectorGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::has_data() const
{
    if (is_presence_container) return true;
    return group_name.is_set
	|| primary_root_address.is_set
	|| secondary_root_address.is_set
	|| tertiary_root_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(primary_root_address.yfilter)
	|| ydk::is_set(secondary_root_address.yfilter)
	|| ydk::is_set(tertiary_root_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optimal-route-reflector-group";
    ADD_KEY_TOKEN(group_name, "group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (primary_root_address.is_set || is_set(primary_root_address.yfilter)) leaf_name_data.push_back(primary_root_address.get_name_leafdata());
    if (secondary_root_address.is_set || is_set(secondary_root_address.yfilter)) leaf_name_data.push_back(secondary_root_address.get_name_leafdata());
    if (tertiary_root_address.is_set || is_set(tertiary_root_address.yfilter)) leaf_name_data.push_back(tertiary_root_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-root-address")
    {
        primary_root_address = value;
        primary_root_address.value_namespace = name_space;
        primary_root_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-root-address")
    {
        secondary_root_address = value;
        secondary_root_address.value_namespace = name_space;
        secondary_root_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tertiary-root-address")
    {
        tertiary_root_address = value;
        tertiary_root_address.value_namespace = name_space;
        tertiary_root_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "primary-root-address")
    {
        primary_root_address.yfilter = yfilter;
    }
    if(value_path == "secondary-root-address")
    {
        secondary_root_address.yfilter = yfilter;
    }
    if(value_path == "tertiary-root-address")
    {
        tertiary_root_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OptimalRouteReflectorGroups::OptimalRouteReflectorGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "primary-root-address" || name == "secondary-root-address" || name == "tertiary-root-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::Dampening()
    :
    half_life{YType::uint32, "half-life"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    suppress_threshold{YType::uint32, "suppress-threshold"},
    suppress_time{YType::uint32, "suppress-time"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "dampening"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::~Dampening()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::has_data() const
{
    if (is_presence_container) return true;
    return half_life.is_set
	|| reuse_threshold.is_set
	|| suppress_threshold.is_set
	|| suppress_time.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life.yfilter)
	|| ydk::is_set(reuse_threshold.yfilter)
	|| ydk::is_set(suppress_threshold.yfilter)
	|| ydk::is_set(suppress_time.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life.is_set || is_set(half_life.yfilter)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.yfilter)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.yfilter)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life")
    {
        half_life = value;
        half_life.value_namespace = name_space;
        half_life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
        reuse_threshold.value_namespace = name_space;
        reuse_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
        suppress_threshold.value_namespace = name_space;
        suppress_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life")
    {
        half_life.yfilter = yfilter;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold.yfilter = yfilter;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life" || name == "reuse-threshold" || name == "suppress-threshold" || name == "suppress-time" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::RipRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "rip-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::~RipRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::LispRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "lisp-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::~LispRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::StaticRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "static-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::~StaticRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::Distance()
    :
    external_routes{YType::uint32, "external-routes"},
    internal_routes{YType::uint32, "internal-routes"},
    local_routes{YType::uint32, "local-routes"}
{

    yang_name = "distance"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::~Distance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| internal_routes.is_set
	|| local_routes.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(internal_routes.yfilter)
	|| ydk::is_set(local_routes.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (internal_routes.is_set || is_set(internal_routes.yfilter)) leaf_name_data.push_back(internal_routes.get_name_leafdata());
    if (local_routes.is_set || is_set(local_routes.yfilter)) leaf_name_data.push_back(local_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-routes")
    {
        internal_routes = value;
        internal_routes.value_namespace = name_space;
        internal_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-routes")
    {
        local_routes = value;
        local_routes.value_namespace = name_space;
        local_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "internal-routes")
    {
        internal_routes.yfilter = yfilter;
    }
    if(value_path == "local-routes")
    {
        local_routes.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "internal-routes" || name == "local-routes")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoutes()
    :
    application_route(this, {"instance_name"})
{

    yang_name = "application-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::~ApplicationRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application_route.len(); index++)
    {
        if(application_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::has_operation() const
{
    for (std::size_t index=0; index<application_route.len(); index++)
    {
        if(application_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-route")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute>();
        ent_->parent = this;
        application_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::ApplicationRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "application-route"; yang_parent_name = "application-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::~ApplicationRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-route";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::LabelMode()
    :
    label_allocation_mode{YType::str, "label-allocation-mode"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "label-mode"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::~LabelMode()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::has_data() const
{
    if (is_presence_container) return true;
    return label_allocation_mode.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_allocation_mode.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_allocation_mode.is_set || is_set(label_allocation_mode.yfilter)) leaf_name_data.push_back(label_allocation_mode.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode = value;
        label_allocation_mode.value_namespace = name_space;
        label_allocation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-allocation-mode")
    {
        label_allocation_mode.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-allocation-mode" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoutes()
    :
    eigrp_route(this, {"instance_name"})
{

    yang_name = "eigrp-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::~EigrpRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eigrp_route.len(); index++)
    {
        if(eigrp_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::has_operation() const
{
    for (std::size_t index=0; index<eigrp_route.len(); index++)
    {
        if(eigrp_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-route")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute>();
        ent_->parent = this;
        eigrp_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eigrp_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::EigrpRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    redist_type{YType::str, "redist-type"}
{

    yang_name = "eigrp-route"; yang_parent_name = "eigrp-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::~EigrpRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| default_metric.is_set
	|| route_policy_name.is_set
	|| redist_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(redist_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-route";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.yfilter)) leaf_name_data.push_back(redist_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
        redist_type.value_namespace = name_space;
        redist_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "redist-type")
    {
        redist_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "route-policy-name" || name == "redist-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetworks()
    :
    sourced_network(this, {"network_addr", "network_prefix"})
{

    yang_name = "sourced-networks"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::~SourcedNetworks()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sourced_network.len(); index++)
    {
        if(sourced_network[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::has_operation() const
{
    for (std::size_t index=0; index<sourced_network.len(); index++)
    {
        if(sourced_network[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-networks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sourced-network")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork>();
        ent_->parent = this;
        sourced_network.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sourced_network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourced-network")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::SourcedNetwork()
    :
    network_addr{YType::str, "network-addr"},
    network_prefix{YType::uint16, "network-prefix"},
    backdoor{YType::boolean, "backdoor"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "sourced-network"; yang_parent_name = "sourced-networks"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::~SourcedNetwork()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::has_data() const
{
    if (is_presence_container) return true;
    return network_addr.is_set
	|| network_prefix.is_set
	|| backdoor.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_addr.yfilter)
	|| ydk::is_set(network_prefix.yfilter)
	|| ydk::is_set(backdoor.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourced-network";
    ADD_KEY_TOKEN(network_addr, "network-addr");
    ADD_KEY_TOKEN(network_prefix, "network-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_addr.is_set || is_set(network_addr.yfilter)) leaf_name_data.push_back(network_addr.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.yfilter)) leaf_name_data.push_back(network_prefix.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.yfilter)) leaf_name_data.push_back(backdoor.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-addr")
    {
        network_addr = value;
        network_addr.value_namespace = name_space;
        network_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
        network_prefix.value_namespace = name_space;
        network_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
        backdoor.value_namespace = name_space;
        backdoor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-addr")
    {
        network_addr.yfilter = yfilter;
    }
    if(value_path == "network-prefix")
    {
        network_prefix.yfilter = yfilter;
    }
    if(value_path == "backdoor")
    {
        backdoor.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-addr" || name == "network-prefix" || name == "backdoor" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::ConnectedRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "connected-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::AllocateLabel()
    :
    all{YType::boolean, "all"},
    route_policy_name{YType::str, "route-policy-name"},
    un_labeled_path{YType::boolean, "un-labeled-path"}
{

    yang_name = "allocate-label"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::~AllocateLabel()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| route_policy_name.is_set
	|| un_labeled_path.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(un_labeled_path.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (un_labeled_path.is_set || is_set(un_labeled_path.yfilter)) leaf_name_data.push_back(un_labeled_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "un-labeled-path")
    {
        un_labeled_path = value;
        un_labeled_path.value_namespace = name_space;
        un_labeled_path.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "un-labeled-path")
    {
        un_labeled_path.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "route-policy-name" || name == "un-labeled-path")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::AdditionalPathsSelection()
    :
    selection{YType::enumeration, "selection"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "additional-paths-selection"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::~AdditionalPathsSelection()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::has_data() const
{
    if (is_presence_container) return true;
    return selection.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection.is_set || is_set(selection.yfilter)) leaf_name_data.push_back(selection.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection")
    {
        selection = value;
        selection.value_namespace = name_space;
        selection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection")
    {
        selection.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoutes()
    :
    ospf_route(this, {"instance_name"})
{

    yang_name = "ospf-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::~OspfRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospf_route.len(); index++)
    {
        if(ospf_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::has_operation() const
{
    for (std::size_t index=0; index<ospf_route.len(); index++)
    {
        if(ospf_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-route")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute>();
        ent_->parent = this;
        ospf_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ospf_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::OspfRoute()
    :
    instance_name{YType::str, "instance-name"},
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    redist_type{YType::str, "redist-type"}
{

    yang_name = "ospf-route"; yang_parent_name = "ospf-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::~OspfRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| default_metric.is_set
	|| route_policy_name.is_set
	|| redist_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(redist_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-route";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (redist_type.is_set || is_set(redist_type.yfilter)) leaf_name_data.push_back(redist_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-type")
    {
        redist_type = value;
        redist_type.value_namespace = name_space;
        redist_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "redist-type")
    {
        redist_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "default-metric" || name == "route-policy-name" || name == "redist-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::MobileRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "mobile-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::~MobileRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::SubscriberRoutes()
    :
    default_metric{YType::uint32, "default-metric"},
    route_policy_name{YType::str, "route-policy-name"},
    not_used{YType::uint32, "not-used"}
{

    yang_name = "subscriber-routes"; yang_parent_name = "global-af"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::~SubscriberRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::has_data() const
{
    if (is_presence_container) return true;
    return default_metric.is_set
	|| route_policy_name.is_set
	|| not_used.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(not_used.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (not_used.is_set || is_set(not_used.yfilter)) leaf_name_data.push_back(not_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-used")
    {
        not_used = value;
        not_used.value_namespace = name_space;
        not_used.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "not-used")
    {
        not_used.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "route-policy-name" || name == "not-used")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoutes()
    :
    rpki_static_route(this, {"address", "minimum", "maximum", "as"})
{

    yang_name = "rpki-static-routes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::~RpkiStaticRoutes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpki_static_route.len(); index++)
    {
        if(rpki_static_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<rpki_static_route.len(); index++)
    {
        if(rpki_static_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-static-route")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute>();
        ent_->parent = this;
        rpki_static_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpki_static_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-static-route")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::RpkiStaticRoute()
    :
    address{YType::str, "address"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    as{YType::uint32, "as"}
{

    yang_name = "rpki-static-route"; yang_parent_name = "rpki-static-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::~RpkiStaticRoute()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(as.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-static-route";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(minimum, "minimum");
    ADD_KEY_TOKEN(maximum, "maximum");
    ADD_KEY_TOKEN(as, "as");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "minimum" || name == "maximum" || name == "as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterfaces()
    :
    mpls_activated_interface(this, {"interface_name"})
{

    yang_name = "mpls-activated-interfaces"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::~MplsActivatedInterfaces()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mpls_activated_interface.len(); index++)
    {
        if(mpls_activated_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<mpls_activated_interface.len(); index++)
    {
        if(mpls_activated_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-activated-interface")
    {
        auto ent_ = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface>();
        ent_->parent = this;
        mpls_activated_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mpls_activated_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-activated-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::MplsActivatedInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "mpls-activated-interface"; yang_parent_name = "mpls-activated-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::~MplsActivatedInterface()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-activated-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::GlobalTimers()
    :
    keepalive{YType::uint32, "keepalive"},
    hold_time{YType::uint32, "hold-time"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "global-timers"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::~GlobalTimers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::has_data() const
{
    if (is_presence_container) return true;
    return keepalive.is_set
	|| hold_time.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive" || name == "hold-time" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::~Bfd()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return detection_multiplier.is_set
	|| interval.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::SendSocketBufferSizes()
    :
    socket_send_size{YType::uint32, "socket-send-size"},
    bgp_send_size{YType::uint32, "bgp-send-size"}
{

    yang_name = "send-socket-buffer-sizes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::~SendSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::has_data() const
{
    if (is_presence_container) return true;
    return socket_send_size.is_set
	|| bgp_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(socket_send_size.yfilter)
	|| ydk::is_set(bgp_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-socket-buffer-sizes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());
    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "socket-send-size" || name == "bgp-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::ReceiveSocketBufferSizes()
    :
    socket_receive_size{YType::uint32, "socket-receive-size"},
    bgp_receive_size{YType::uint32, "bgp-receive-size"}
{

    yang_name = "receive-socket-buffer-sizes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::~ReceiveSocketBufferSizes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::has_data() const
{
    if (is_presence_container) return true;
    return socket_receive_size.is_set
	|| bgp_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(socket_receive_size.yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-socket-buffer-sizes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());
    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "socket-receive-size" || name == "bgp-receive-size")
        return true;
    return false;
}

BmpServerAll::BmpServerAll()
    :
    maximum_buffer_size{YType::uint32, "maximum-buffer-size"}
        ,
    route_monitoring(std::make_shared<BmpServerAll::RouteMonitoring>())
{
    route_monitoring->parent = this;

    yang_name = "bmp-server-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

BmpServerAll::~BmpServerAll()
{
}

bool BmpServerAll::has_data() const
{
    if (is_presence_container) return true;
    return maximum_buffer_size.is_set
	|| (route_monitoring !=  nullptr && route_monitoring->has_data());
}

bool BmpServerAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_buffer_size.yfilter)
	|| (route_monitoring !=  nullptr && route_monitoring->has_operation());
}

std::string BmpServerAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bmp-server-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServerAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_buffer_size.is_set || is_set(maximum_buffer_size.yfilter)) leaf_name_data.push_back(maximum_buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BmpServerAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-monitoring")
    {
        if(route_monitoring == nullptr)
        {
            route_monitoring = std::make_shared<BmpServerAll::RouteMonitoring>();
        }
        return route_monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BmpServerAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_monitoring != nullptr)
    {
        _children["route-monitoring"] = route_monitoring;
    }

    return _children;
}

void BmpServerAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-buffer-size")
    {
        maximum_buffer_size = value;
        maximum_buffer_size.value_namespace = name_space;
        maximum_buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServerAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-buffer-size")
    {
        maximum_buffer_size.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> BmpServerAll::clone_ptr() const
{
    return std::make_shared<BmpServerAll>();
}

std::string BmpServerAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string BmpServerAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function BmpServerAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BmpServerAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool BmpServerAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-monitoring" || name == "maximum-buffer-size")
        return true;
    return false;
}

BmpServerAll::RouteMonitoring::RouteMonitoring()
    :
    policy{YType::enumeration, "policy"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "route-monitoring"; yang_parent_name = "bmp-server-all"; is_top_level_class = false; has_list_ancestor = false; 
}

BmpServerAll::RouteMonitoring::~RouteMonitoring()
{
}

bool BmpServerAll::RouteMonitoring::has_data() const
{
    if (is_presence_container) return true;
    return policy.is_set
	|| direction.is_set;
}

bool BmpServerAll::RouteMonitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string BmpServerAll::RouteMonitoring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bmp-server-all/" << get_segment_path();
    return path_buffer.str();
}

std::string BmpServerAll::RouteMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServerAll::RouteMonitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BmpServerAll::RouteMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BmpServerAll::RouteMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BmpServerAll::RouteMonitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServerAll::RouteMonitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool BmpServerAll::RouteMonitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "direction")
        return true;
    return false;
}

BmpServers::BmpServers()
    :
    bmp_server(this, {"server_id"})
{

    yang_name = "bmp-servers"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

BmpServers::~BmpServers()
{
}

bool BmpServers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bmp_server.len(); index++)
    {
        if(bmp_server[index]->has_data())
            return true;
    }
    return false;
}

bool BmpServers::has_operation() const
{
    for (std::size_t index=0; index<bmp_server.len(); index++)
    {
        if(bmp_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BmpServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bmp-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BmpServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-server")
    {
        auto ent_ = std::make_shared<BmpServers::BmpServer>();
        ent_->parent = this;
        bmp_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BmpServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bmp_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BmpServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BmpServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> BmpServers::clone_ptr() const
{
    return std::make_shared<BmpServers>();
}

std::string BmpServers::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string BmpServers::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function BmpServers::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BmpServers::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool BmpServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-server")
        return true;
    return false;
}

BmpServers::BmpServer::BmpServer()
    :
    server_id{YType::uint32, "server-id"},
    create{YType::empty, "create"},
    maximum_buffer_size{YType::uint32, "maximum-buffer-size"},
    initial_delay{YType::uint32, "initial-delay"},
    flapping_delay{YType::uint32, "flapping-delay"},
    status_report_interval{YType::uint32, "status-report-interval"},
    description{YType::str, "description"},
    bmptcp_maximum_segment_size{YType::uint32, "bmptcp-maximum-segment-size"},
    bmptcp_keep_alive{YType::uint32, "bmptcp-keep-alive"},
    vrf{YType::str, "vrf"},
    shutdown{YType::empty, "shutdown"},
    update_source_interface{YType::str, "update-source-interface"}
        ,
    initial_refresh_delay(std::make_shared<BmpServers::BmpServer::InitialRefreshDelay>())
    , host_port(std::make_shared<BmpServers::BmpServer::HostPort>())
    , tos(std::make_shared<BmpServers::BmpServer::Tos>())
{
    initial_refresh_delay->parent = this;
    host_port->parent = this;
    tos->parent = this;

    yang_name = "bmp-server"; yang_parent_name = "bmp-servers"; is_top_level_class = false; has_list_ancestor = false; 
}

BmpServers::BmpServer::~BmpServer()
{
}

bool BmpServers::BmpServer::has_data() const
{
    if (is_presence_container) return true;
    return server_id.is_set
	|| create.is_set
	|| maximum_buffer_size.is_set
	|| initial_delay.is_set
	|| flapping_delay.is_set
	|| status_report_interval.is_set
	|| description.is_set
	|| bmptcp_maximum_segment_size.is_set
	|| bmptcp_keep_alive.is_set
	|| vrf.is_set
	|| shutdown.is_set
	|| update_source_interface.is_set
	|| (initial_refresh_delay !=  nullptr && initial_refresh_delay->has_data())
	|| (host_port !=  nullptr && host_port->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool BmpServers::BmpServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(maximum_buffer_size.yfilter)
	|| ydk::is_set(initial_delay.yfilter)
	|| ydk::is_set(flapping_delay.yfilter)
	|| ydk::is_set(status_report_interval.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(bmptcp_maximum_segment_size.yfilter)
	|| ydk::is_set(bmptcp_keep_alive.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| (initial_refresh_delay !=  nullptr && initial_refresh_delay->has_operation())
	|| (host_port !=  nullptr && host_port->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string BmpServers::BmpServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bmp-servers/" << get_segment_path();
    return path_buffer.str();
}

std::string BmpServers::BmpServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server";
    ADD_KEY_TOKEN(server_id, "server-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServers::BmpServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (maximum_buffer_size.is_set || is_set(maximum_buffer_size.yfilter)) leaf_name_data.push_back(maximum_buffer_size.get_name_leafdata());
    if (initial_delay.is_set || is_set(initial_delay.yfilter)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (flapping_delay.is_set || is_set(flapping_delay.yfilter)) leaf_name_data.push_back(flapping_delay.get_name_leafdata());
    if (status_report_interval.is_set || is_set(status_report_interval.yfilter)) leaf_name_data.push_back(status_report_interval.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (bmptcp_maximum_segment_size.is_set || is_set(bmptcp_maximum_segment_size.yfilter)) leaf_name_data.push_back(bmptcp_maximum_segment_size.get_name_leafdata());
    if (bmptcp_keep_alive.is_set || is_set(bmptcp_keep_alive.yfilter)) leaf_name_data.push_back(bmptcp_keep_alive.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BmpServers::BmpServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "initial-refresh-delay")
    {
        if(initial_refresh_delay == nullptr)
        {
            initial_refresh_delay = std::make_shared<BmpServers::BmpServer::InitialRefreshDelay>();
        }
        return initial_refresh_delay;
    }

    if(child_yang_name == "host-port")
    {
        if(host_port == nullptr)
        {
            host_port = std::make_shared<BmpServers::BmpServer::HostPort>();
        }
        return host_port;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<BmpServers::BmpServer::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BmpServers::BmpServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(initial_refresh_delay != nullptr)
    {
        _children["initial-refresh-delay"] = initial_refresh_delay;
    }

    if(host_port != nullptr)
    {
        _children["host-port"] = host_port;
    }

    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    return _children;
}

void BmpServers::BmpServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-buffer-size")
    {
        maximum_buffer_size = value;
        maximum_buffer_size.value_namespace = name_space;
        maximum_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-delay")
    {
        initial_delay = value;
        initial_delay.value_namespace = name_space;
        initial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flapping-delay")
    {
        flapping_delay = value;
        flapping_delay.value_namespace = name_space;
        flapping_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-report-interval")
    {
        status_report_interval = value;
        status_report_interval.value_namespace = name_space;
        status_report_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmptcp-maximum-segment-size")
    {
        bmptcp_maximum_segment_size = value;
        bmptcp_maximum_segment_size.value_namespace = name_space;
        bmptcp_maximum_segment_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmptcp-keep-alive")
    {
        bmptcp_keep_alive = value;
        bmptcp_keep_alive.value_namespace = name_space;
        bmptcp_keep_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServers::BmpServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "maximum-buffer-size")
    {
        maximum_buffer_size.yfilter = yfilter;
    }
    if(value_path == "initial-delay")
    {
        initial_delay.yfilter = yfilter;
    }
    if(value_path == "flapping-delay")
    {
        flapping_delay.yfilter = yfilter;
    }
    if(value_path == "status-report-interval")
    {
        status_report_interval.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "bmptcp-maximum-segment-size")
    {
        bmptcp_maximum_segment_size.yfilter = yfilter;
    }
    if(value_path == "bmptcp-keep-alive")
    {
        bmptcp_keep_alive.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
}

bool BmpServers::BmpServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-refresh-delay" || name == "host-port" || name == "tos" || name == "server-id" || name == "create" || name == "maximum-buffer-size" || name == "initial-delay" || name == "flapping-delay" || name == "status-report-interval" || name == "description" || name == "bmptcp-maximum-segment-size" || name == "bmptcp-keep-alive" || name == "vrf" || name == "shutdown" || name == "update-source-interface")
        return true;
    return false;
}

BmpServers::BmpServer::InitialRefreshDelay::InitialRefreshDelay()
    :
    delay{YType::uint32, "delay"},
    spread{YType::uint32, "spread"},
    skip{YType::empty, "skip"}
{

    yang_name = "initial-refresh-delay"; yang_parent_name = "bmp-server"; is_top_level_class = false; has_list_ancestor = true; 
}

BmpServers::BmpServer::InitialRefreshDelay::~InitialRefreshDelay()
{
}

bool BmpServers::BmpServer::InitialRefreshDelay::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| spread.is_set
	|| skip.is_set;
}

bool BmpServers::BmpServer::InitialRefreshDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(spread.yfilter)
	|| ydk::is_set(skip.yfilter);
}

std::string BmpServers::BmpServer::InitialRefreshDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initial-refresh-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServers::BmpServer::InitialRefreshDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (spread.is_set || is_set(spread.yfilter)) leaf_name_data.push_back(spread.get_name_leafdata());
    if (skip.is_set || is_set(skip.yfilter)) leaf_name_data.push_back(skip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BmpServers::BmpServer::InitialRefreshDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BmpServers::BmpServer::InitialRefreshDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BmpServers::BmpServer::InitialRefreshDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spread")
    {
        spread = value;
        spread.value_namespace = name_space;
        spread.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skip")
    {
        skip = value;
        skip.value_namespace = name_space;
        skip.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServers::BmpServer::InitialRefreshDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "spread")
    {
        spread.yfilter = yfilter;
    }
    if(value_path == "skip")
    {
        skip.yfilter = yfilter;
    }
}

bool BmpServers::BmpServer::InitialRefreshDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "spread" || name == "skip")
        return true;
    return false;
}

BmpServers::BmpServer::HostPort::HostPort()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{

    yang_name = "host-port"; yang_parent_name = "bmp-server"; is_top_level_class = false; has_list_ancestor = true; 
}

BmpServers::BmpServer::HostPort::~HostPort()
{
}

bool BmpServers::BmpServer::HostPort::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| port.is_set;
}

bool BmpServers::BmpServer::HostPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string BmpServers::BmpServer::HostPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServers::BmpServer::HostPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BmpServers::BmpServer::HostPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BmpServers::BmpServer::HostPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BmpServers::BmpServer::HostPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServers::BmpServer::HostPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool BmpServers::BmpServer::HostPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "port")
        return true;
    return false;
}

BmpServers::BmpServer::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "tos"; yang_parent_name = "bmp-server"; is_top_level_class = false; has_list_ancestor = true; 
}

BmpServers::BmpServer::Tos::~Tos()
{
}

bool BmpServers::BmpServer::Tos::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set;
}

bool BmpServers::BmpServer::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string BmpServers::BmpServer::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BmpServers::BmpServer::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BmpServers::BmpServer::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BmpServers::BmpServer::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BmpServers::BmpServer::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void BmpServers::BmpServer::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool BmpServers::BmpServer::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}


}
}

