
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_ntp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_ntp_cfg {

Ntp::Ntp()
    :
    max_associations{YType::uint32, "max-associations"},
    master{YType::uint32, "master"},
    broadcast_delay{YType::uint32, "broadcast-delay"},
    log_internal_sync{YType::empty, "log-internal-sync"},
    update_calendar{YType::empty, "update-calendar"}
        ,
    admin_types(std::make_shared<Ntp::AdminTypes>())
    , peer_vrfs(std::make_shared<Ntp::PeerVrfs>())
    , dscp_ipv4(nullptr) // presence node
    , dscp_ipv6(nullptr) // presence node
    , sources(std::make_shared<Ntp::Sources>())
    , drift(std::make_shared<Ntp::Drift>())
    , authentication(std::make_shared<Ntp::Authentication>())
    , passive(std::make_shared<Ntp::Passive>())
    , interface_tables(std::make_shared<Ntp::InterfaceTables>())
    , access_group_tables(std::make_shared<Ntp::AccessGroupTables>())
{
    admin_types->parent = this;
    peer_vrfs->parent = this;
    sources->parent = this;
    drift->parent = this;
    authentication->parent = this;
    passive->parent = this;
    interface_tables->parent = this;
    access_group_tables->parent = this;

    yang_name = "ntp"; yang_parent_name = "Cisco-IOS-XR-ip-ntp-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Ntp::~Ntp()
{
}

bool Ntp::has_data() const
{
    if (is_presence_container) return true;
    return max_associations.is_set
	|| master.is_set
	|| broadcast_delay.is_set
	|| log_internal_sync.is_set
	|| update_calendar.is_set
	|| (admin_types !=  nullptr && admin_types->has_data())
	|| (peer_vrfs !=  nullptr && peer_vrfs->has_data())
	|| (dscp_ipv4 !=  nullptr && dscp_ipv4->has_data())
	|| (dscp_ipv6 !=  nullptr && dscp_ipv6->has_data())
	|| (sources !=  nullptr && sources->has_data())
	|| (drift !=  nullptr && drift->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (passive !=  nullptr && passive->has_data())
	|| (interface_tables !=  nullptr && interface_tables->has_data())
	|| (access_group_tables !=  nullptr && access_group_tables->has_data());
}

bool Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_associations.yfilter)
	|| ydk::is_set(master.yfilter)
	|| ydk::is_set(broadcast_delay.yfilter)
	|| ydk::is_set(log_internal_sync.yfilter)
	|| ydk::is_set(update_calendar.yfilter)
	|| (admin_types !=  nullptr && admin_types->has_operation())
	|| (peer_vrfs !=  nullptr && peer_vrfs->has_operation())
	|| (dscp_ipv4 !=  nullptr && dscp_ipv4->has_operation())
	|| (dscp_ipv6 !=  nullptr && dscp_ipv6->has_operation())
	|| (sources !=  nullptr && sources->has_operation())
	|| (drift !=  nullptr && drift->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (passive !=  nullptr && passive->has_operation())
	|| (interface_tables !=  nullptr && interface_tables->has_operation())
	|| (access_group_tables !=  nullptr && access_group_tables->has_operation());
}

std::string Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_associations.is_set || is_set(max_associations.yfilter)) leaf_name_data.push_back(max_associations.get_name_leafdata());
    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());
    if (broadcast_delay.is_set || is_set(broadcast_delay.yfilter)) leaf_name_data.push_back(broadcast_delay.get_name_leafdata());
    if (log_internal_sync.is_set || is_set(log_internal_sync.yfilter)) leaf_name_data.push_back(log_internal_sync.get_name_leafdata());
    if (update_calendar.is_set || is_set(update_calendar.yfilter)) leaf_name_data.push_back(update_calendar.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-types")
    {
        if(admin_types == nullptr)
        {
            admin_types = std::make_shared<Ntp::AdminTypes>();
        }
        return admin_types;
    }

    if(child_yang_name == "peer-vrfs")
    {
        if(peer_vrfs == nullptr)
        {
            peer_vrfs = std::make_shared<Ntp::PeerVrfs>();
        }
        return peer_vrfs;
    }

    if(child_yang_name == "dscp-ipv4")
    {
        if(dscp_ipv4 == nullptr)
        {
            dscp_ipv4 = std::make_shared<Ntp::DscpIpv4>();
        }
        return dscp_ipv4;
    }

    if(child_yang_name == "dscp-ipv6")
    {
        if(dscp_ipv6 == nullptr)
        {
            dscp_ipv6 = std::make_shared<Ntp::DscpIpv6>();
        }
        return dscp_ipv6;
    }

    if(child_yang_name == "sources")
    {
        if(sources == nullptr)
        {
            sources = std::make_shared<Ntp::Sources>();
        }
        return sources;
    }

    if(child_yang_name == "drift")
    {
        if(drift == nullptr)
        {
            drift = std::make_shared<Ntp::Drift>();
        }
        return drift;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ntp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "passive")
    {
        if(passive == nullptr)
        {
            passive = std::make_shared<Ntp::Passive>();
        }
        return passive;
    }

    if(child_yang_name == "interface-tables")
    {
        if(interface_tables == nullptr)
        {
            interface_tables = std::make_shared<Ntp::InterfaceTables>();
        }
        return interface_tables;
    }

    if(child_yang_name == "access-group-tables")
    {
        if(access_group_tables == nullptr)
        {
            access_group_tables = std::make_shared<Ntp::AccessGroupTables>();
        }
        return access_group_tables;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(admin_types != nullptr)
    {
        _children["admin-types"] = admin_types;
    }

    if(peer_vrfs != nullptr)
    {
        _children["peer-vrfs"] = peer_vrfs;
    }

    if(dscp_ipv4 != nullptr)
    {
        _children["dscp-ipv4"] = dscp_ipv4;
    }

    if(dscp_ipv6 != nullptr)
    {
        _children["dscp-ipv6"] = dscp_ipv6;
    }

    if(sources != nullptr)
    {
        _children["sources"] = sources;
    }

    if(drift != nullptr)
    {
        _children["drift"] = drift;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(passive != nullptr)
    {
        _children["passive"] = passive;
    }

    if(interface_tables != nullptr)
    {
        _children["interface-tables"] = interface_tables;
    }

    if(access_group_tables != nullptr)
    {
        _children["access-group-tables"] = access_group_tables;
    }

    return _children;
}

void Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-associations")
    {
        max_associations = value;
        max_associations.value_namespace = name_space;
        max_associations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master")
    {
        master = value;
        master.value_namespace = name_space;
        master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-delay")
    {
        broadcast_delay = value;
        broadcast_delay.value_namespace = name_space;
        broadcast_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-internal-sync")
    {
        log_internal_sync = value;
        log_internal_sync.value_namespace = name_space;
        log_internal_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-calendar")
    {
        update_calendar = value;
        update_calendar.value_namespace = name_space;
        update_calendar.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-associations")
    {
        max_associations.yfilter = yfilter;
    }
    if(value_path == "master")
    {
        master.yfilter = yfilter;
    }
    if(value_path == "broadcast-delay")
    {
        broadcast_delay.yfilter = yfilter;
    }
    if(value_path == "log-internal-sync")
    {
        log_internal_sync.yfilter = yfilter;
    }
    if(value_path == "update-calendar")
    {
        update_calendar.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Ntp::clone_ptr() const
{
    return std::make_shared<Ntp>();
}

std::string Ntp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ntp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ntp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ntp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-types" || name == "peer-vrfs" || name == "dscp-ipv4" || name == "dscp-ipv6" || name == "sources" || name == "drift" || name == "authentication" || name == "passive" || name == "interface-tables" || name == "access-group-tables" || name == "max-associations" || name == "master" || name == "broadcast-delay" || name == "log-internal-sync" || name == "update-calendar")
        return true;
    return false;
}

Ntp::AdminTypes::AdminTypes()
    :
    admin_type(this, {"peer_type"})
{

    yang_name = "admin-types"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::AdminTypes::~AdminTypes()
{
}

bool Ntp::AdminTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<admin_type.len(); index++)
    {
        if(admin_type[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::AdminTypes::has_operation() const
{
    for (std::size_t index=0; index<admin_type.len(); index++)
    {
        if(admin_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::AdminTypes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::AdminTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::AdminTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::AdminTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-type")
    {
        auto ent_ = std::make_shared<Ntp::AdminTypes::AdminType>();
        ent_->parent = this;
        admin_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::AdminTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : admin_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::AdminTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::AdminTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::AdminTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-type")
        return true;
    return false;
}

Ntp::AdminTypes::AdminType::AdminType()
    :
    peer_type{YType::enumeration, "peer-type"},
    ntp_version{YType::uint32, "ntp-version"},
    authentication_key{YType::uint32, "authentication-key"},
    min_poll{YType::uint32, "min-poll"},
    max_poll{YType::uint32, "max-poll"},
    preferred_peer{YType::empty, "preferred-peer"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"}
{

    yang_name = "admin-type"; yang_parent_name = "admin-types"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::AdminTypes::AdminType::~AdminType()
{
}

bool Ntp::AdminTypes::AdminType::has_data() const
{
    if (is_presence_container) return true;
    return peer_type.is_set
	|| ntp_version.is_set
	|| authentication_key.is_set
	|| min_poll.is_set
	|| max_poll.is_set
	|| preferred_peer.is_set
	|| burst.is_set
	|| iburst.is_set;
}

bool Ntp::AdminTypes::AdminType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_type.yfilter)
	|| ydk::is_set(ntp_version.yfilter)
	|| ydk::is_set(authentication_key.yfilter)
	|| ydk::is_set(min_poll.yfilter)
	|| ydk::is_set(max_poll.yfilter)
	|| ydk::is_set(preferred_peer.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter);
}

std::string Ntp::AdminTypes::AdminType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/admin-types/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::AdminTypes::AdminType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-type";
    ADD_KEY_TOKEN(peer_type, "peer-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::AdminTypes::AdminType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_type.is_set || is_set(peer_type.yfilter)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (ntp_version.is_set || is_set(ntp_version.yfilter)) leaf_name_data.push_back(ntp_version.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (min_poll.is_set || is_set(min_poll.yfilter)) leaf_name_data.push_back(min_poll.get_name_leafdata());
    if (max_poll.is_set || is_set(max_poll.yfilter)) leaf_name_data.push_back(max_poll.get_name_leafdata());
    if (preferred_peer.is_set || is_set(preferred_peer.yfilter)) leaf_name_data.push_back(preferred_peer.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::AdminTypes::AdminType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::AdminTypes::AdminType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::AdminTypes::AdminType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-type")
    {
        peer_type = value;
        peer_type.value_namespace = name_space;
        peer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-version")
    {
        ntp_version = value;
        ntp_version.value_namespace = name_space;
        ntp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-poll")
    {
        min_poll = value;
        min_poll.value_namespace = name_space;
        min_poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-poll")
    {
        max_poll = value;
        max_poll.value_namespace = name_space;
        max_poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-peer")
    {
        preferred_peer = value;
        preferred_peer.value_namespace = name_space;
        preferred_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::AdminTypes::AdminType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-type")
    {
        peer_type.yfilter = yfilter;
    }
    if(value_path == "ntp-version")
    {
        ntp_version.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
    if(value_path == "min-poll")
    {
        min_poll.yfilter = yfilter;
    }
    if(value_path == "max-poll")
    {
        max_poll.yfilter = yfilter;
    }
    if(value_path == "preferred-peer")
    {
        preferred_peer.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
}

bool Ntp::AdminTypes::AdminType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-type" || name == "ntp-version" || name == "authentication-key" || name == "min-poll" || name == "max-poll" || name == "preferred-peer" || name == "burst" || name == "iburst")
        return true;
    return false;
}

Ntp::PeerVrfs::PeerVrfs()
    :
    peer_vrf(this, {"vrf_name"})
{

    yang_name = "peer-vrfs"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::PeerVrfs::~PeerVrfs()
{
}

bool Ntp::PeerVrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_vrf.len(); index++)
    {
        if(peer_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::PeerVrfs::has_operation() const
{
    for (std::size_t index=0; index<peer_vrf.len(); index++)
    {
        if(peer_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::PeerVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::PeerVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::PeerVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::PeerVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-vrf")
    {
        auto ent_ = std::make_shared<Ntp::PeerVrfs::PeerVrf>();
        ent_->parent = this;
        peer_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::PeerVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::PeerVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::PeerVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::PeerVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-vrf")
        return true;
    return false;
}

Ntp::PeerVrfs::PeerVrf::PeerVrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    peer_ipv4s(std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv4s>())
    , peer_ipv6s(std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv6s>())
{
    peer_ipv4s->parent = this;
    peer_ipv6s->parent = this;

    yang_name = "peer-vrf"; yang_parent_name = "peer-vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::PeerVrfs::PeerVrf::~PeerVrf()
{
}

bool Ntp::PeerVrfs::PeerVrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (peer_ipv4s !=  nullptr && peer_ipv4s->has_data())
	|| (peer_ipv6s !=  nullptr && peer_ipv6s->has_data());
}

bool Ntp::PeerVrfs::PeerVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (peer_ipv4s !=  nullptr && peer_ipv4s->has_operation())
	|| (peer_ipv6s !=  nullptr && peer_ipv6s->has_operation());
}

std::string Ntp::PeerVrfs::PeerVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/peer-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::PeerVrfs::PeerVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::PeerVrfs::PeerVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::PeerVrfs::PeerVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-ipv4s")
    {
        if(peer_ipv4s == nullptr)
        {
            peer_ipv4s = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv4s>();
        }
        return peer_ipv4s;
    }

    if(child_yang_name == "peer-ipv6s")
    {
        if(peer_ipv6s == nullptr)
        {
            peer_ipv6s = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv6s>();
        }
        return peer_ipv6s;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::PeerVrfs::PeerVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_ipv4s != nullptr)
    {
        _children["peer-ipv4s"] = peer_ipv4s;
    }

    if(peer_ipv6s != nullptr)
    {
        _children["peer-ipv6s"] = peer_ipv6s;
    }

    return _children;
}

void Ntp::PeerVrfs::PeerVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::PeerVrfs::PeerVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ntp::PeerVrfs::PeerVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-ipv4s" || name == "peer-ipv6s" || name == "vrf-name")
        return true;
    return false;
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4s()
    :
    peer_ipv4(this, {"address_ipv4"})
{

    yang_name = "peer-ipv4s"; yang_parent_name = "peer-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4s::~PeerIpv4s()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4s::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_ipv4.len(); index++)
    {
        if(peer_ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4s::has_operation() const
{
    for (std::size_t index=0; index<peer_ipv4.len(); index++)
    {
        if(peer_ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv4s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ipv4s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::PeerVrfs::PeerVrf::PeerIpv4s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv4s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-ipv4")
    {
        auto ent_ = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4>();
        ent_->parent = this;
        peer_ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::PeerVrfs::PeerVrf::PeerIpv4s::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv4s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv4s::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-ipv4")
        return true;
    return false;
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerIpv4()
    :
    address_ipv4{YType::str, "address-ipv4"}
        ,
    peer_type_ipv4(this, {"peer_type"})
{

    yang_name = "peer-ipv4"; yang_parent_name = "peer-ipv4s"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::~PeerIpv4()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_type_ipv4.len(); index++)
    {
        if(peer_type_ipv4[index]->has_data())
            return true;
    }
    return address_ipv4.is_set;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::has_operation() const
{
    for (std::size_t index=0; index<peer_type_ipv4.len(); index++)
    {
        if(peer_type_ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address_ipv4.yfilter);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ipv4";
    ADD_KEY_TOKEN(address_ipv4, "address-ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_ipv4.is_set || is_set(address_ipv4.yfilter)) leaf_name_data.push_back(address_ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-type-ipv4")
    {
        auto ent_ = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4>();
        ent_->parent = this;
        peer_type_ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_type_ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-ipv4")
    {
        address_ipv4 = value;
        address_ipv4.value_namespace = name_space;
        address_ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-ipv4")
    {
        address_ipv4.yfilter = yfilter;
    }
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-type-ipv4" || name == "address-ipv4")
        return true;
    return false;
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4::PeerTypeIpv4()
    :
    peer_type{YType::enumeration, "peer-type"},
    ntp_version{YType::uint32, "ntp-version"},
    authentication_key{YType::uint32, "authentication-key"},
    min_poll{YType::uint32, "min-poll"},
    max_poll{YType::uint32, "max-poll"},
    preferred_peer{YType::empty, "preferred-peer"},
    source_interface{YType::str, "source-interface"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"}
{

    yang_name = "peer-type-ipv4"; yang_parent_name = "peer-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4::~PeerTypeIpv4()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4::has_data() const
{
    if (is_presence_container) return true;
    return peer_type.is_set
	|| ntp_version.is_set
	|| authentication_key.is_set
	|| min_poll.is_set
	|| max_poll.is_set
	|| preferred_peer.is_set
	|| source_interface.is_set
	|| burst.is_set
	|| iburst.is_set;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_type.yfilter)
	|| ydk::is_set(ntp_version.yfilter)
	|| ydk::is_set(authentication_key.yfilter)
	|| ydk::is_set(min_poll.yfilter)
	|| ydk::is_set(max_poll.yfilter)
	|| ydk::is_set(preferred_peer.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-type-ipv4";
    ADD_KEY_TOKEN(peer_type, "peer-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_type.is_set || is_set(peer_type.yfilter)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (ntp_version.is_set || is_set(ntp_version.yfilter)) leaf_name_data.push_back(ntp_version.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (min_poll.is_set || is_set(min_poll.yfilter)) leaf_name_data.push_back(min_poll.get_name_leafdata());
    if (max_poll.is_set || is_set(max_poll.yfilter)) leaf_name_data.push_back(max_poll.get_name_leafdata());
    if (preferred_peer.is_set || is_set(preferred_peer.yfilter)) leaf_name_data.push_back(preferred_peer.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-type")
    {
        peer_type = value;
        peer_type.value_namespace = name_space;
        peer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-version")
    {
        ntp_version = value;
        ntp_version.value_namespace = name_space;
        ntp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-poll")
    {
        min_poll = value;
        min_poll.value_namespace = name_space;
        min_poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-poll")
    {
        max_poll = value;
        max_poll.value_namespace = name_space;
        max_poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-peer")
    {
        preferred_peer = value;
        preferred_peer.value_namespace = name_space;
        preferred_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-type")
    {
        peer_type.yfilter = yfilter;
    }
    if(value_path == "ntp-version")
    {
        ntp_version.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
    if(value_path == "min-poll")
    {
        min_poll.yfilter = yfilter;
    }
    if(value_path == "max-poll")
    {
        max_poll.yfilter = yfilter;
    }
    if(value_path == "preferred-peer")
    {
        preferred_peer.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-type" || name == "ntp-version" || name == "authentication-key" || name == "min-poll" || name == "max-poll" || name == "preferred-peer" || name == "source-interface" || name == "burst" || name == "iburst")
        return true;
    return false;
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6s()
    :
    peer_ipv6(this, {"address_ipv6"})
{

    yang_name = "peer-ipv6s"; yang_parent_name = "peer-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6s::~PeerIpv6s()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6s::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_ipv6.len(); index++)
    {
        if(peer_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6s::has_operation() const
{
    for (std::size_t index=0; index<peer_ipv6.len(); index++)
    {
        if(peer_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv6s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ipv6s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::PeerVrfs::PeerVrf::PeerIpv6s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv6s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-ipv6")
    {
        auto ent_ = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6>();
        ent_->parent = this;
        peer_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::PeerVrfs::PeerVrf::PeerIpv6s::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv6s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv6s::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-ipv6")
        return true;
    return false;
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerIpv6()
    :
    address_ipv6{YType::str, "address-ipv6"}
        ,
    peer_type_ipv6(this, {"peer_type"})
{

    yang_name = "peer-ipv6"; yang_parent_name = "peer-ipv6s"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::~PeerIpv6()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_type_ipv6.len(); index++)
    {
        if(peer_type_ipv6[index]->has_data())
            return true;
    }
    return address_ipv6.is_set;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::has_operation() const
{
    for (std::size_t index=0; index<peer_type_ipv6.len(); index++)
    {
        if(peer_type_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address_ipv6.yfilter);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ipv6";
    ADD_KEY_TOKEN(address_ipv6, "address-ipv6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_ipv6.is_set || is_set(address_ipv6.yfilter)) leaf_name_data.push_back(address_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-type-ipv6")
    {
        auto ent_ = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6>();
        ent_->parent = this;
        peer_type_ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_type_ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-ipv6")
    {
        address_ipv6 = value;
        address_ipv6.value_namespace = name_space;
        address_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-ipv6")
    {
        address_ipv6.yfilter = yfilter;
    }
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-type-ipv6" || name == "address-ipv6")
        return true;
    return false;
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6::PeerTypeIpv6()
    :
    peer_type{YType::enumeration, "peer-type"},
    ntp_version{YType::uint32, "ntp-version"},
    authentication_key{YType::uint32, "authentication-key"},
    min_poll{YType::uint32, "min-poll"},
    max_poll{YType::uint32, "max-poll"},
    preferred_peer{YType::empty, "preferred-peer"},
    source_interface{YType::str, "source-interface"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    address_ipv6{YType::str, "address-ipv6"}
{

    yang_name = "peer-type-ipv6"; yang_parent_name = "peer-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6::~PeerTypeIpv6()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6::has_data() const
{
    if (is_presence_container) return true;
    return peer_type.is_set
	|| ntp_version.is_set
	|| authentication_key.is_set
	|| min_poll.is_set
	|| max_poll.is_set
	|| preferred_peer.is_set
	|| source_interface.is_set
	|| burst.is_set
	|| iburst.is_set
	|| address_ipv6.is_set;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_type.yfilter)
	|| ydk::is_set(ntp_version.yfilter)
	|| ydk::is_set(authentication_key.yfilter)
	|| ydk::is_set(min_poll.yfilter)
	|| ydk::is_set(max_poll.yfilter)
	|| ydk::is_set(preferred_peer.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(address_ipv6.yfilter);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-type-ipv6";
    ADD_KEY_TOKEN(peer_type, "peer-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_type.is_set || is_set(peer_type.yfilter)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (ntp_version.is_set || is_set(ntp_version.yfilter)) leaf_name_data.push_back(ntp_version.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (min_poll.is_set || is_set(min_poll.yfilter)) leaf_name_data.push_back(min_poll.get_name_leafdata());
    if (max_poll.is_set || is_set(max_poll.yfilter)) leaf_name_data.push_back(max_poll.get_name_leafdata());
    if (preferred_peer.is_set || is_set(preferred_peer.yfilter)) leaf_name_data.push_back(preferred_peer.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (address_ipv6.is_set || is_set(address_ipv6.yfilter)) leaf_name_data.push_back(address_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-type")
    {
        peer_type = value;
        peer_type.value_namespace = name_space;
        peer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-version")
    {
        ntp_version = value;
        ntp_version.value_namespace = name_space;
        ntp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-poll")
    {
        min_poll = value;
        min_poll.value_namespace = name_space;
        min_poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-poll")
    {
        max_poll = value;
        max_poll.value_namespace = name_space;
        max_poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-peer")
    {
        preferred_peer = value;
        preferred_peer.value_namespace = name_space;
        preferred_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-ipv6")
    {
        address_ipv6 = value;
        address_ipv6.value_namespace = name_space;
        address_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-type")
    {
        peer_type.yfilter = yfilter;
    }
    if(value_path == "ntp-version")
    {
        ntp_version.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
    if(value_path == "min-poll")
    {
        min_poll.yfilter = yfilter;
    }
    if(value_path == "max-poll")
    {
        max_poll.yfilter = yfilter;
    }
    if(value_path == "preferred-peer")
    {
        preferred_peer.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "address-ipv6")
    {
        address_ipv6.yfilter = yfilter;
    }
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-type" || name == "ntp-version" || name == "authentication-key" || name == "min-poll" || name == "max-poll" || name == "preferred-peer" || name == "source-interface" || name == "burst" || name == "iburst" || name == "address-ipv6")
        return true;
    return false;
}

Ntp::DscpIpv4::DscpIpv4()
    :
    mode{YType::enumeration, "mode"},
    dscp_or_precedence_value{YType::uint32, "dscp-or-precedence-value"}
{

    yang_name = "dscp-ipv4"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Ntp::DscpIpv4::~DscpIpv4()
{
}

bool Ntp::DscpIpv4::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| dscp_or_precedence_value.is_set;
}

bool Ntp::DscpIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(dscp_or_precedence_value.yfilter);
}

std::string Ntp::DscpIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::DscpIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::DscpIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (dscp_or_precedence_value.is_set || is_set(dscp_or_precedence_value.yfilter)) leaf_name_data.push_back(dscp_or_precedence_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::DscpIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::DscpIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::DscpIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-or-precedence-value")
    {
        dscp_or_precedence_value = value;
        dscp_or_precedence_value.value_namespace = name_space;
        dscp_or_precedence_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::DscpIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "dscp-or-precedence-value")
    {
        dscp_or_precedence_value.yfilter = yfilter;
    }
}

bool Ntp::DscpIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "dscp-or-precedence-value")
        return true;
    return false;
}

Ntp::DscpIpv6::DscpIpv6()
    :
    mode{YType::enumeration, "mode"},
    dscp_or_precedence_value{YType::uint32, "dscp-or-precedence-value"}
{

    yang_name = "dscp-ipv6"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Ntp::DscpIpv6::~DscpIpv6()
{
}

bool Ntp::DscpIpv6::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| dscp_or_precedence_value.is_set;
}

bool Ntp::DscpIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(dscp_or_precedence_value.yfilter);
}

std::string Ntp::DscpIpv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::DscpIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::DscpIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (dscp_or_precedence_value.is_set || is_set(dscp_or_precedence_value.yfilter)) leaf_name_data.push_back(dscp_or_precedence_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::DscpIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::DscpIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::DscpIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-or-precedence-value")
    {
        dscp_or_precedence_value = value;
        dscp_or_precedence_value.value_namespace = name_space;
        dscp_or_precedence_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::DscpIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "dscp-or-precedence-value")
    {
        dscp_or_precedence_value.yfilter = yfilter;
    }
}

bool Ntp::DscpIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "dscp-or-precedence-value")
        return true;
    return false;
}

Ntp::Sources::Sources()
    :
    source(this, {"vrf_name"})
{

    yang_name = "sources"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Sources::~Sources()
{
}

bool Ntp::Sources::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::Sources::has_operation() const
{
    for (std::size_t index=0; index<source.len(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::Sources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Sources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Sources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        auto ent_ = std::make_shared<Ntp::Sources::Source>();
        ent_->parent = this;
        source.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Sources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : source.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::Sources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Sources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Sources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Ntp::Sources::Source::Source()
    :
    vrf_name{YType::str, "vrf-name"},
    source_interface{YType::str, "source-interface"}
{

    yang_name = "source"; yang_parent_name = "sources"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Sources::Source::~Source()
{
}

bool Ntp::Sources::Source::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| source_interface.is_set;
}

bool Ntp::Sources::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Ntp::Sources::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/sources/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Sources::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Sources::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Sources::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Sources::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::Sources::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Sources::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Ntp::Sources::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "source-interface")
        return true;
    return false;
}

Ntp::Drift::Drift()
    :
    aging_time{YType::uint32, "aging-time"}
        ,
    file(std::make_shared<Ntp::Drift::File>())
{
    file->parent = this;

    yang_name = "drift"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Drift::~Drift()
{
}

bool Ntp::Drift::has_data() const
{
    if (is_presence_container) return true;
    return aging_time.is_set
	|| (file !=  nullptr && file->has_data());
}

bool Ntp::Drift::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging_time.yfilter)
	|| (file !=  nullptr && file->has_operation());
}

std::string Ntp::Drift::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Drift::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drift";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Drift::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.yfilter)) leaf_name_data.push_back(aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Drift::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Ntp::Drift::File>();
        }
        return file;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Drift::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(file != nullptr)
    {
        _children["file"] = file;
    }

    return _children;
}

void Ntp::Drift::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
        aging_time.value_namespace = name_space;
        aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Drift::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging-time")
    {
        aging_time.yfilter = yfilter;
    }
}

bool Ntp::Drift::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "aging-time")
        return true;
    return false;
}

Ntp::Drift::File::File()
    :
    location{YType::str, "location"},
    filename{YType::str, "filename"}
{

    yang_name = "file"; yang_parent_name = "drift"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Drift::File::~File()
{
}

bool Ntp::Drift::File::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| filename.is_set;
}

bool Ntp::Drift::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Ntp::Drift::File::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/drift/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Drift::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Drift::File::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Drift::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Drift::File::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::Drift::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Drift::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Ntp::Drift::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "filename")
        return true;
    return false;
}

Ntp::Authentication::Authentication()
    :
    enable{YType::empty, "enable"}
        ,
    keys(std::make_shared<Ntp::Authentication::Keys>())
    , trusted_keys(std::make_shared<Ntp::Authentication::TrustedKeys>())
{
    keys->parent = this;
    trusted_keys->parent = this;

    yang_name = "authentication"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Authentication::~Authentication()
{
}

bool Ntp::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (keys !=  nullptr && keys->has_data())
	|| (trusted_keys !=  nullptr && trusted_keys->has_data());
}

bool Ntp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (keys !=  nullptr && keys->has_operation())
	|| (trusted_keys !=  nullptr && trusted_keys->has_operation());
}

std::string Ntp::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keys")
    {
        if(keys == nullptr)
        {
            keys = std::make_shared<Ntp::Authentication::Keys>();
        }
        return keys;
    }

    if(child_yang_name == "trusted-keys")
    {
        if(trusted_keys == nullptr)
        {
            trusted_keys = std::make_shared<Ntp::Authentication::TrustedKeys>();
        }
        return trusted_keys;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(keys != nullptr)
    {
        _children["keys"] = keys;
    }

    if(trusted_keys != nullptr)
    {
        _children["trusted-keys"] = trusted_keys;
    }

    return _children;
}

void Ntp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Ntp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keys" || name == "trusted-keys" || name == "enable")
        return true;
    return false;
}

Ntp::Authentication::Keys::Keys()
    :
    key(this, {"key_number"})
{

    yang_name = "keys"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Authentication::Keys::~Keys()
{
}

bool Ntp::Authentication::Keys::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<key.len(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::Authentication::Keys::has_operation() const
{
    for (std::size_t index=0; index<key.len(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::Authentication::Keys::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Authentication::Keys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Authentication::Keys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Authentication::Keys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        auto ent_ = std::make_shared<Ntp::Authentication::Keys::Key>();
        ent_->parent = this;
        key.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Authentication::Keys::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::Authentication::Keys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Authentication::Keys::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Authentication::Keys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Ntp::Authentication::Keys::Key::Key()
    :
    key_number{YType::uint32, "key-number"},
    authentication_key{YType::str, "authentication-key"}
{

    yang_name = "key"; yang_parent_name = "keys"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Authentication::Keys::Key::~Key()
{
}

bool Ntp::Authentication::Keys::Key::has_data() const
{
    if (is_presence_container) return true;
    return key_number.is_set
	|| authentication_key.is_set;
}

bool Ntp::Authentication::Keys::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_number.yfilter)
	|| ydk::is_set(authentication_key.yfilter);
}

std::string Ntp::Authentication::Keys::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/authentication/keys/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Authentication::Keys::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    ADD_KEY_TOKEN(key_number, "key-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Authentication::Keys::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_number.is_set || is_set(key_number.yfilter)) leaf_name_data.push_back(key_number.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Authentication::Keys::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Authentication::Keys::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::Authentication::Keys::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-number")
    {
        key_number = value;
        key_number.value_namespace = name_space;
        key_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Authentication::Keys::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-number")
    {
        key_number.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
}

bool Ntp::Authentication::Keys::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-number" || name == "authentication-key")
        return true;
    return false;
}

Ntp::Authentication::TrustedKeys::TrustedKeys()
    :
    trusted_key(this, {"key_number"})
{

    yang_name = "trusted-keys"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Authentication::TrustedKeys::~TrustedKeys()
{
}

bool Ntp::Authentication::TrustedKeys::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trusted_key.len(); index++)
    {
        if(trusted_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::Authentication::TrustedKeys::has_operation() const
{
    for (std::size_t index=0; index<trusted_key.len(); index++)
    {
        if(trusted_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::Authentication::TrustedKeys::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Authentication::TrustedKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trusted-keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Authentication::TrustedKeys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Authentication::TrustedKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trusted-key")
    {
        auto ent_ = std::make_shared<Ntp::Authentication::TrustedKeys::TrustedKey>();
        ent_->parent = this;
        trusted_key.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Authentication::TrustedKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trusted_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::Authentication::TrustedKeys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Authentication::TrustedKeys::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Authentication::TrustedKeys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trusted-key")
        return true;
    return false;
}

Ntp::Authentication::TrustedKeys::TrustedKey::TrustedKey()
    :
    key_number{YType::uint32, "key-number"}
{

    yang_name = "trusted-key"; yang_parent_name = "trusted-keys"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Authentication::TrustedKeys::TrustedKey::~TrustedKey()
{
}

bool Ntp::Authentication::TrustedKeys::TrustedKey::has_data() const
{
    if (is_presence_container) return true;
    return key_number.is_set;
}

bool Ntp::Authentication::TrustedKeys::TrustedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_number.yfilter);
}

std::string Ntp::Authentication::TrustedKeys::TrustedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/authentication/trusted-keys/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Authentication::TrustedKeys::TrustedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trusted-key";
    ADD_KEY_TOKEN(key_number, "key-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Authentication::TrustedKeys::TrustedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_number.is_set || is_set(key_number.yfilter)) leaf_name_data.push_back(key_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Authentication::TrustedKeys::TrustedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Authentication::TrustedKeys::TrustedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::Authentication::TrustedKeys::TrustedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-number")
    {
        key_number = value;
        key_number.value_namespace = name_space;
        key_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Authentication::TrustedKeys::TrustedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-number")
    {
        key_number.yfilter = yfilter;
    }
}

bool Ntp::Authentication::TrustedKeys::TrustedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-number")
        return true;
    return false;
}

Ntp::Passive::Passive()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "passive"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Passive::~Passive()
{
}

bool Ntp::Passive::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Ntp::Passive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Ntp::Passive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Passive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Passive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Passive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Passive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::Passive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Passive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Ntp::Passive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Ntp::InterfaceTables::InterfaceTables()
    :
    interface_table(this, {"vrf_name"})
{

    yang_name = "interface-tables"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::InterfaceTables::~InterfaceTables()
{
}

bool Ntp::InterfaceTables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_table.len(); index++)
    {
        if(interface_table[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::InterfaceTables::has_operation() const
{
    for (std::size_t index=0; index<interface_table.len(); index++)
    {
        if(interface_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::InterfaceTables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::InterfaceTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::InterfaceTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::InterfaceTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-table")
    {
        auto ent_ = std::make_shared<Ntp::InterfaceTables::InterfaceTable>();
        ent_->parent = this;
        interface_table.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::InterfaceTables::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_table.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::InterfaceTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::InterfaceTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::InterfaceTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-table")
        return true;
    return false;
}

Ntp::InterfaceTables::InterfaceTable::InterfaceTable()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    interface(this, {"interface"})
{

    yang_name = "interface-table"; yang_parent_name = "interface-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::InterfaceTables::InterfaceTable::~InterfaceTable()
{
}

bool Ntp::InterfaceTables::InterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Ntp::InterfaceTables::InterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ntp::InterfaceTables::InterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/interface-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::InterfaceTables::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::InterfaceTables::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::InterfaceTables::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::InterfaceTables::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::InterfaceTables::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::InterfaceTables::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ntp::InterfaceTables::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "vrf-name")
        return true;
    return false;
}

Ntp::InterfaceTables::InterfaceTable::Interface::Interface()
    :
    interface{YType::str, "interface"},
    disable{YType::empty, "disable"}
        ,
    interface_multicast(std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast>())
    , interface_broadcast(std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast>())
{
    interface_multicast->parent = this;
    interface_broadcast->parent = this;

    yang_name = "interface"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::InterfaceTables::InterfaceTable::Interface::~Interface()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| disable.is_set
	|| (interface_multicast !=  nullptr && interface_multicast->has_data())
	|| (interface_broadcast !=  nullptr && interface_broadcast->has_data());
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (interface_multicast !=  nullptr && interface_multicast->has_operation())
	|| (interface_broadcast !=  nullptr && interface_broadcast->has_operation());
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::InterfaceTables::InterfaceTable::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::InterfaceTables::InterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-multicast")
    {
        if(interface_multicast == nullptr)
        {
            interface_multicast = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast>();
        }
        return interface_multicast;
    }

    if(child_yang_name == "interface-broadcast")
    {
        if(interface_broadcast == nullptr)
        {
            interface_broadcast = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast>();
        }
        return interface_broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::InterfaceTables::InterfaceTable::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_multicast != nullptr)
    {
        _children["interface-multicast"] = interface_multicast;
    }

    if(interface_broadcast != nullptr)
    {
        _children["interface-broadcast"] = interface_broadcast;
    }

    return _children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::InterfaceTables::InterfaceTable::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-multicast" || name == "interface-broadcast" || name == "interface" || name == "disable")
        return true;
    return false;
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::InterfaceMulticast()
    :
    multicast_clients(std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients>())
    , multicast_servers(std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers>())
{
    multicast_clients->parent = this;
    multicast_servers->parent = this;

    yang_name = "interface-multicast"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::~InterfaceMulticast()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::has_data() const
{
    if (is_presence_container) return true;
    return (multicast_clients !=  nullptr && multicast_clients->has_data())
	|| (multicast_servers !=  nullptr && multicast_servers->has_data());
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::has_operation() const
{
    return is_set(yfilter)
	|| (multicast_clients !=  nullptr && multicast_clients->has_operation())
	|| (multicast_servers !=  nullptr && multicast_servers->has_operation());
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-clients")
    {
        if(multicast_clients == nullptr)
        {
            multicast_clients = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients>();
        }
        return multicast_clients;
    }

    if(child_yang_name == "multicast-servers")
    {
        if(multicast_servers == nullptr)
        {
            multicast_servers = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers>();
        }
        return multicast_servers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast_clients != nullptr)
    {
        _children["multicast-clients"] = multicast_clients;
    }

    if(multicast_servers != nullptr)
    {
        _children["multicast-servers"] = multicast_servers;
    }

    return _children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-clients" || name == "multicast-servers")
        return true;
    return false;
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClients()
    :
    multicast_client(this, {"ip_address"})
{

    yang_name = "multicast-clients"; yang_parent_name = "interface-multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::~MulticastClients()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multicast_client.len(); index++)
    {
        if(multicast_client[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::has_operation() const
{
    for (std::size_t index=0; index<multicast_client.len(); index++)
    {
        if(multicast_client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-client")
    {
        auto ent_ = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient>();
        ent_->parent = this;
        multicast_client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : multicast_client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-client")
        return true;
    return false;
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::MulticastClient()
    :
    ip_address{YType::str, "ip-address"}
{

    yang_name = "multicast-client"; yang_parent_name = "multicast-clients"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::~MulticastClient()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set;
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-client";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServers()
    :
    multicast_server(this, {"ip_address"})
{

    yang_name = "multicast-servers"; yang_parent_name = "interface-multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::~MulticastServers()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multicast_server.len(); index++)
    {
        if(multicast_server[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::has_operation() const
{
    for (std::size_t index=0; index<multicast_server.len(); index++)
    {
        if(multicast_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-server")
    {
        auto ent_ = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer>();
        ent_->parent = this;
        multicast_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : multicast_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-server")
        return true;
    return false;
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::MulticastServer()
    :
    ip_address{YType::str, "ip-address"},
    authentication_key{YType::uint32, "authentication-key"},
    version{YType::uint32, "version"},
    ttl{YType::uint32, "ttl"}
{

    yang_name = "multicast-server"; yang_parent_name = "multicast-servers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::~MulticastServer()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| authentication_key.is_set
	|| version.is_set
	|| ttl.is_set;
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(authentication_key.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-server";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "authentication-key" || name == "version" || name == "ttl")
        return true;
    return false;
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::InterfaceBroadcast()
    :
    broadcast_client{YType::empty, "broadcast-client"}
        ,
    broadcast_servers(std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers>())
{
    broadcast_servers->parent = this;

    yang_name = "interface-broadcast"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::~InterfaceBroadcast()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::has_data() const
{
    if (is_presence_container) return true;
    return broadcast_client.is_set
	|| (broadcast_servers !=  nullptr && broadcast_servers->has_data());
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_client.yfilter)
	|| (broadcast_servers !=  nullptr && broadcast_servers->has_operation());
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_client.is_set || is_set(broadcast_client.yfilter)) leaf_name_data.push_back(broadcast_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-servers")
    {
        if(broadcast_servers == nullptr)
        {
            broadcast_servers = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers>();
        }
        return broadcast_servers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast_servers != nullptr)
    {
        _children["broadcast-servers"] = broadcast_servers;
    }

    return _children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-client")
    {
        broadcast_client = value;
        broadcast_client.value_namespace = name_space;
        broadcast_client.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-client")
    {
        broadcast_client.yfilter = yfilter;
    }
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-servers" || name == "broadcast-client")
        return true;
    return false;
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServers()
    :
    broadcast_server(this, {"broadcast_type"})
{

    yang_name = "broadcast-servers"; yang_parent_name = "interface-broadcast"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::~BroadcastServers()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<broadcast_server.len(); index++)
    {
        if(broadcast_server[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::has_operation() const
{
    for (std::size_t index=0; index<broadcast_server.len(); index++)
    {
        if(broadcast_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-server")
    {
        auto ent_ = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer>();
        ent_->parent = this;
        broadcast_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : broadcast_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-server")
        return true;
    return false;
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer::BroadcastServer()
    :
    broadcast_type{YType::str, "broadcast-type"},
    address{YType::str, "address"},
    authentication_key{YType::uint32, "authentication-key"},
    ntp_version{YType::uint32, "ntp-version"}
{

    yang_name = "broadcast-server"; yang_parent_name = "broadcast-servers"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer::~BroadcastServer()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer::has_data() const
{
    if (is_presence_container) return true;
    return broadcast_type.is_set
	|| address.is_set
	|| authentication_key.is_set
	|| ntp_version.is_set;
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(authentication_key.yfilter)
	|| ydk::is_set(ntp_version.yfilter);
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-server";
    ADD_KEY_TOKEN(broadcast_type, "broadcast-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_type.is_set || is_set(broadcast_type.yfilter)) leaf_name_data.push_back(broadcast_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (ntp_version.is_set || is_set(ntp_version.yfilter)) leaf_name_data.push_back(ntp_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-type")
    {
        broadcast_type = value;
        broadcast_type.value_namespace = name_space;
        broadcast_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-version")
    {
        ntp_version = value;
        ntp_version.value_namespace = name_space;
        ntp_version.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-type")
    {
        broadcast_type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
    if(value_path == "ntp-version")
    {
        ntp_version.yfilter = yfilter;
    }
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-type" || name == "address" || name == "authentication-key" || name == "ntp-version")
        return true;
    return false;
}

Ntp::AccessGroupTables::AccessGroupTables()
    :
    access_group_table(this, {"vrf_name"})
{

    yang_name = "access-group-tables"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::AccessGroupTables::~AccessGroupTables()
{
}

bool Ntp::AccessGroupTables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_group_table.len(); index++)
    {
        if(access_group_table[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::AccessGroupTables::has_operation() const
{
    for (std::size_t index=0; index<access_group_table.len(); index++)
    {
        if(access_group_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::AccessGroupTables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::AccessGroupTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::AccessGroupTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::AccessGroupTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group-table")
    {
        auto ent_ = std::make_shared<Ntp::AccessGroupTables::AccessGroupTable>();
        ent_->parent = this;
        access_group_table.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::AccessGroupTables::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_group_table.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::AccessGroupTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::AccessGroupTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::AccessGroupTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group-table")
        return true;
    return false;
}

Ntp::AccessGroupTables::AccessGroupTable::AccessGroupTable()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    access_group_af_table(this, {"af"})
{

    yang_name = "access-group-table"; yang_parent_name = "access-group-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::AccessGroupTables::AccessGroupTable::~AccessGroupTable()
{
}

bool Ntp::AccessGroupTables::AccessGroupTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_group_af_table.len(); index++)
    {
        if(access_group_af_table[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Ntp::AccessGroupTables::AccessGroupTable::has_operation() const
{
    for (std::size_t index=0; index<access_group_af_table.len(); index++)
    {
        if(access_group_af_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ntp::AccessGroupTables::AccessGroupTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/access-group-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::AccessGroupTables::AccessGroupTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group-table";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::AccessGroupTables::AccessGroupTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::AccessGroupTables::AccessGroupTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group-af-table")
    {
        auto ent_ = std::make_shared<Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable>();
        ent_->parent = this;
        access_group_af_table.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::AccessGroupTables::AccessGroupTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_group_af_table.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::AccessGroupTables::AccessGroupTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::AccessGroupTables::AccessGroupTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ntp::AccessGroupTables::AccessGroupTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group-af-table" || name == "vrf-name")
        return true;
    return false;
}

Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroupAfTable()
    :
    af{YType::enumeration, "af"}
        ,
    access_group(this, {"access_group_type"})
{

    yang_name = "access-group-af-table"; yang_parent_name = "access-group-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::~AccessGroupAfTable()
{
}

bool Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return af.is_set;
}

bool Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::has_operation() const
{
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter);
}

std::string Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group-af-table";
    ADD_KEY_TOKEN(af, "af");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        auto ent_ = std::make_shared<Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup>();
        ent_->parent = this;
        access_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
}

bool Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "af")
        return true;
    return false;
}

Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::AccessGroup()
    :
    access_group_type{YType::enumeration, "access-group-type"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "access-group"; yang_parent_name = "access-group-af-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::~AccessGroup()
{
}

bool Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return access_group_type.is_set
	|| access_list_name.is_set;
}

bool Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group_type.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    ADD_KEY_TOKEN(access_group_type, "access-group-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group_type.is_set || is_set(access_group_type.yfilter)) leaf_name_data.push_back(access_group_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-group-type")
    {
        access_group_type = value;
        access_group_type.value_namespace = name_space;
        access_group_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-group-type")
    {
        access_group_type.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group-type" || name == "access-list-name")
        return true;
    return false;
}

const Enum::YLeaf NtpAccessAf::ipv4 {0, "ipv4"};
const Enum::YLeaf NtpAccessAf::ipv6 {1, "ipv6"};

const Enum::YLeaf NtpPeer::peer {0, "peer"};
const Enum::YLeaf NtpPeer::server {1, "server"};

const Enum::YLeaf Ntpdscp::ntp_precedence {0, "ntp-precedence"};
const Enum::YLeaf Ntpdscp::ntpdscp {1, "ntpdscp"};

const Enum::YLeaf NtpAccess::peer {0, "peer"};
const Enum::YLeaf NtpAccess::serve {1, "serve"};
const Enum::YLeaf NtpAccess::serve_only {2, "serve-only"};
const Enum::YLeaf NtpAccess::query_only {3, "query-only"};


}
}

