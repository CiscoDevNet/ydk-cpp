
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_xtc_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_cfg {

Pce::Pce()
    :
    server_address{YType::str, "server-address"},
    ipv6_server_address{YType::str, "ipv6-server-address"},
    password{YType::str, "password"},
    enable{YType::empty, "enable"}
        ,
    ipv6_state_syncs(std::make_shared<Pce::Ipv6StateSyncs>())
    , pcc_addresses(std::make_shared<Pce::PccAddresses>())
    , logging(std::make_shared<Pce::Logging>())
    , backoff(nullptr) // presence node
    , rest(nullptr) // presence node
    , state_syncs(std::make_shared<Pce::StateSyncs>())
    , segment_routing(std::make_shared<Pce::SegmentRouting>())
    , timers(nullptr) // presence node
    , netconf(std::make_shared<Pce::Netconf>())
    , disjoint_path(std::make_shared<Pce::DisjointPath>())
    , explicit_paths(std::make_shared<Pce::ExplicitPaths>())
{
    ipv6_state_syncs->parent = this;
    pcc_addresses->parent = this;
    logging->parent = this;
    state_syncs->parent = this;
    segment_routing->parent = this;
    netconf->parent = this;
    disjoint_path->parent = this;
    explicit_paths->parent = this;

    yang_name = "pce"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Pce::~Pce()
{
}

bool Pce::has_data() const
{
    if (is_presence_container) return true;
    return server_address.is_set
	|| ipv6_server_address.is_set
	|| password.is_set
	|| enable.is_set
	|| (ipv6_state_syncs !=  nullptr && ipv6_state_syncs->has_data())
	|| (pcc_addresses !=  nullptr && pcc_addresses->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (rest !=  nullptr && rest->has_data())
	|| (state_syncs !=  nullptr && state_syncs->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (netconf !=  nullptr && netconf->has_data())
	|| (disjoint_path !=  nullptr && disjoint_path->has_data())
	|| (explicit_paths !=  nullptr && explicit_paths->has_data());
}

bool Pce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_address.yfilter)
	|| ydk::is_set(ipv6_server_address.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (ipv6_state_syncs !=  nullptr && ipv6_state_syncs->has_operation())
	|| (pcc_addresses !=  nullptr && pcc_addresses->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (rest !=  nullptr && rest->has_operation())
	|| (state_syncs !=  nullptr && state_syncs->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (netconf !=  nullptr && netconf->has_operation())
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation())
	|| (explicit_paths !=  nullptr && explicit_paths->has_operation());
}

std::string Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_address.is_set || is_set(server_address.yfilter)) leaf_name_data.push_back(server_address.get_name_leafdata());
    if (ipv6_server_address.is_set || is_set(ipv6_server_address.yfilter)) leaf_name_data.push_back(ipv6_server_address.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-state-syncs")
    {
        if(ipv6_state_syncs == nullptr)
        {
            ipv6_state_syncs = std::make_shared<Pce::Ipv6StateSyncs>();
        }
        return ipv6_state_syncs;
    }

    if(child_yang_name == "pcc-addresses")
    {
        if(pcc_addresses == nullptr)
        {
            pcc_addresses = std::make_shared<Pce::PccAddresses>();
        }
        return pcc_addresses;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Pce::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Pce::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "rest")
    {
        if(rest == nullptr)
        {
            rest = std::make_shared<Pce::Rest>();
        }
        return rest;
    }

    if(child_yang_name == "state-syncs")
    {
        if(state_syncs == nullptr)
        {
            state_syncs = std::make_shared<Pce::StateSyncs>();
        }
        return state_syncs;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Pce::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Pce::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "netconf")
    {
        if(netconf == nullptr)
        {
            netconf = std::make_shared<Pce::Netconf>();
        }
        return netconf;
    }

    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path == nullptr)
        {
            disjoint_path = std::make_shared<Pce::DisjointPath>();
        }
        return disjoint_path;
    }

    if(child_yang_name == "explicit-paths")
    {
        if(explicit_paths == nullptr)
        {
            explicit_paths = std::make_shared<Pce::ExplicitPaths>();
        }
        return explicit_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6_state_syncs != nullptr)
    {
        _children["ipv6-state-syncs"] = ipv6_state_syncs;
    }

    if(pcc_addresses != nullptr)
    {
        _children["pcc-addresses"] = pcc_addresses;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(backoff != nullptr)
    {
        _children["backoff"] = backoff;
    }

    if(rest != nullptr)
    {
        _children["rest"] = rest;
    }

    if(state_syncs != nullptr)
    {
        _children["state-syncs"] = state_syncs;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(netconf != nullptr)
    {
        _children["netconf"] = netconf;
    }

    if(disjoint_path != nullptr)
    {
        _children["disjoint-path"] = disjoint_path;
    }

    if(explicit_paths != nullptr)
    {
        _children["explicit-paths"] = explicit_paths;
    }

    return _children;
}

void Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-address")
    {
        server_address = value;
        server_address.value_namespace = name_space;
        server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-server-address")
    {
        ipv6_server_address = value;
        ipv6_server_address.value_namespace = name_space;
        ipv6_server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-address")
    {
        server_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-server-address")
    {
        ipv6_server_address.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
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
    if(name == "ipv6-state-syncs" || name == "pcc-addresses" || name == "logging" || name == "backoff" || name == "rest" || name == "state-syncs" || name == "segment-routing" || name == "timers" || name == "netconf" || name == "disjoint-path" || name == "explicit-paths" || name == "server-address" || name == "ipv6-server-address" || name == "password" || name == "enable")
        return true;
    return false;
}

Pce::Ipv6StateSyncs::Ipv6StateSyncs()
    :
    ipv6_state_sync(this, {"address"})
{

    yang_name = "ipv6-state-syncs"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Ipv6StateSyncs::~Ipv6StateSyncs()
{
}

bool Pce::Ipv6StateSyncs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_state_sync.len(); index++)
    {
        if(ipv6_state_sync[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::Ipv6StateSyncs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_state_sync.len(); index++)
    {
        if(ipv6_state_sync[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::Ipv6StateSyncs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Ipv6StateSyncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-state-syncs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Ipv6StateSyncs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Ipv6StateSyncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-state-sync")
    {
        auto ent_ = std::make_shared<Pce::Ipv6StateSyncs::Ipv6StateSync>();
        ent_->parent = this;
        ipv6_state_sync.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Ipv6StateSyncs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_state_sync.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::Ipv6StateSyncs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::Ipv6StateSyncs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::Ipv6StateSyncs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-state-sync")
        return true;
    return false;
}

Pce::Ipv6StateSyncs::Ipv6StateSync::Ipv6StateSync()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv6-state-sync"; yang_parent_name = "ipv6-state-syncs"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Ipv6StateSyncs::Ipv6StateSync::~Ipv6StateSync()
{
}

bool Pce::Ipv6StateSyncs::Ipv6StateSync::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Pce::Ipv6StateSyncs::Ipv6StateSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Pce::Ipv6StateSyncs::Ipv6StateSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/ipv6-state-syncs/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Ipv6StateSyncs::Ipv6StateSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-state-sync";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Ipv6StateSyncs::Ipv6StateSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Ipv6StateSyncs::Ipv6StateSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Ipv6StateSyncs::Ipv6StateSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Ipv6StateSyncs::Ipv6StateSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Ipv6StateSyncs::Ipv6StateSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Pce::Ipv6StateSyncs::Ipv6StateSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Pce::PccAddresses::PccAddresses()
    :
    pcc_address(this, {"address"})
{

    yang_name = "pcc-addresses"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::PccAddresses::~PccAddresses()
{
}

bool Pce::PccAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pcc_address.len(); index++)
    {
        if(pcc_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PccAddresses::has_operation() const
{
    for (std::size_t index=0; index<pcc_address.len(); index++)
    {
        if(pcc_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::PccAddresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PccAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PccAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PccAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcc-address")
    {
        auto ent_ = std::make_shared<Pce::PccAddresses::PccAddress>();
        ent_->parent = this;
        pcc_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PccAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pcc_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::PccAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::PccAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::PccAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcc-address")
        return true;
    return false;
}

Pce::PccAddresses::PccAddress::PccAddress()
    :
    address{YType::str, "address"},
    enable{YType::empty, "enable"}
        ,
    lsp_names(std::make_shared<Pce::PccAddresses::PccAddress::LspNames>())
{
    lsp_names->parent = this;

    yang_name = "pcc-address"; yang_parent_name = "pcc-addresses"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::PccAddresses::PccAddress::~PccAddress()
{
}

bool Pce::PccAddresses::PccAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| enable.is_set
	|| (lsp_names !=  nullptr && lsp_names->has_data());
}

bool Pce::PccAddresses::PccAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (lsp_names !=  nullptr && lsp_names->has_operation());
}

std::string Pce::PccAddresses::PccAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/pcc-addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PccAddresses::PccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PccAddresses::PccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PccAddresses::PccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-names")
    {
        if(lsp_names == nullptr)
        {
            lsp_names = std::make_shared<Pce::PccAddresses::PccAddress::LspNames>();
        }
        return lsp_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PccAddresses::PccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_names != nullptr)
    {
        _children["lsp-names"] = lsp_names;
    }

    return _children;
}

void Pce::PccAddresses::PccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PccAddresses::PccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::PccAddresses::PccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-names" || name == "address" || name == "enable")
        return true;
    return false;
}

Pce::PccAddresses::PccAddress::LspNames::LspNames()
    :
    lsp_name(this, {"name"})
{

    yang_name = "lsp-names"; yang_parent_name = "pcc-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PccAddresses::PccAddress::LspNames::~LspNames()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_name.len(); index++)
    {
        if(lsp_name[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PccAddresses::PccAddress::LspNames::has_operation() const
{
    for (std::size_t index=0; index<lsp_name.len(); index++)
    {
        if(lsp_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::PccAddresses::PccAddress::LspNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PccAddresses::PccAddress::LspNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PccAddresses::PccAddress::LspNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-name")
    {
        auto ent_ = std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName>();
        ent_->parent = this;
        lsp_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PccAddresses::PccAddress::LspNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::PccAddresses::PccAddress::LspNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::PccAddresses::PccAddress::LspNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::PccAddresses::PccAddress::LspNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-name")
        return true;
    return false;
}

Pce::PccAddresses::PccAddress::LspNames::LspName::LspName()
    :
    name{YType::str, "name"},
    undelegate{YType::empty, "undelegate"},
    explicit_path_name{YType::str, "explicit-path-name"},
    enable{YType::empty, "enable"}
        ,
    rsvp_te(nullptr) // presence node
{

    yang_name = "lsp-name"; yang_parent_name = "lsp-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PccAddresses::PccAddress::LspNames::LspName::~LspName()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| undelegate.is_set
	|| explicit_path_name.is_set
	|| enable.is_set
	|| (rsvp_te !=  nullptr && rsvp_te->has_data());
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(undelegate.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (rsvp_te !=  nullptr && rsvp_te->has_operation());
}

std::string Pce::PccAddresses::PccAddress::LspNames::LspName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PccAddresses::PccAddress::LspNames::LspName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (undelegate.is_set || is_set(undelegate.yfilter)) leaf_name_data.push_back(undelegate.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te")
    {
        if(rsvp_te == nullptr)
        {
            rsvp_te = std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe>();
        }
        return rsvp_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PccAddresses::PccAddress::LspNames::LspName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_te != nullptr)
    {
        _children["rsvp-te"] = rsvp_te;
    }

    return _children;
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "undelegate")
    {
        undelegate = value;
        undelegate.value_namespace = name_space;
        undelegate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "undelegate")
    {
        undelegate.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te" || name == "name" || name == "undelegate" || name == "explicit-path-name" || name == "enable")
        return true;
    return false;
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::RsvpTe()
    :
    fast_protect{YType::empty, "fast-protect"},
    bandwidth{YType::uint32, "bandwidth"},
    enable{YType::empty, "enable"}
        ,
    affinity(std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity>())
    , priority(nullptr) // presence node
{
    affinity->parent = this;

    yang_name = "rsvp-te"; yang_parent_name = "lsp-name"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::~RsvpTe()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::has_data() const
{
    if (is_presence_container) return true;
    return fast_protect.is_set
	|| bandwidth.is_set
	|| enable.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_protect.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_protect.is_set || is_set(fast_protect.yfilter)) leaf_name_data.push_back(fast_protect.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-protect")
    {
        fast_protect = value;
        fast_protect.value_namespace = name_space;
        fast_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-protect")
    {
        fast_protect.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "priority" || name == "fast-protect" || name == "bandwidth" || name == "enable")
        return true;
    return false;
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::Affinity()
    :
    include_any{YType::str, "include-any"},
    include_all{YType::str, "include-all"},
    exclude_any{YType::str, "exclude-any"}
{

    yang_name = "affinity"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::~Affinity()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::has_data() const
{
    if (is_presence_container) return true;
    return include_any.is_set
	|| include_all.is_set
	|| exclude_any.is_set;
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_any.yfilter)
	|| ydk::is_set(include_all.yfilter)
	|| ydk::is_set(exclude_any.yfilter);
}

std::string Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_any.is_set || is_set(include_any.yfilter)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.yfilter)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (exclude_any.is_set || is_set(exclude_any.yfilter)) leaf_name_data.push_back(exclude_any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-any")
    {
        include_any = value;
        include_any.value_namespace = name_space;
        include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-all")
    {
        include_all = value;
        include_all.value_namespace = name_space;
        include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-any")
    {
        exclude_any = value;
        exclude_any.value_namespace = name_space;
        exclude_any.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-any")
    {
        include_any.yfilter = yfilter;
    }
    if(value_path == "include-all")
    {
        include_all.yfilter = yfilter;
    }
    if(value_path == "exclude-any")
    {
        exclude_any.yfilter = yfilter;
    }
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-any" || name == "include-all" || name == "exclude-any")
        return true;
    return false;
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::Priority()
    :
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::~Priority()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::has_data() const
{
    if (is_presence_container) return true;
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

Pce::Logging::Logging()
    :
    no_path{YType::empty, "no-path"},
    pcerr{YType::empty, "pcerr"},
    fallback{YType::empty, "fallback"}
{

    yang_name = "logging"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Logging::~Logging()
{
}

bool Pce::Logging::has_data() const
{
    if (is_presence_container) return true;
    return no_path.is_set
	|| pcerr.is_set
	|| fallback.is_set;
}

bool Pce::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_path.yfilter)
	|| ydk::is_set(pcerr.yfilter)
	|| ydk::is_set(fallback.yfilter);
}

std::string Pce::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_path.is_set || is_set(no_path.yfilter)) leaf_name_data.push_back(no_path.get_name_leafdata());
    if (pcerr.is_set || is_set(pcerr.yfilter)) leaf_name_data.push_back(pcerr.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-path")
    {
        no_path = value;
        no_path.value_namespace = name_space;
        no_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcerr")
    {
        pcerr = value;
        pcerr.value_namespace = name_space;
        pcerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-path")
    {
        no_path.yfilter = yfilter;
    }
    if(value_path == "pcerr")
    {
        pcerr.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
}

bool Pce::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-path" || name == "pcerr" || name == "fallback")
        return true;
    return false;
}

Pce::Backoff::Backoff()
    :
    ratio{YType::uint32, "ratio"},
    threshold{YType::uint32, "threshold"},
    difference{YType::uint32, "difference"}
{

    yang_name = "backoff"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Pce::Backoff::~Backoff()
{
}

bool Pce::Backoff::has_data() const
{
    if (is_presence_container) return true;
    return ratio.is_set
	|| threshold.is_set
	|| difference.is_set;
}

bool Pce::Backoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ratio.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(difference.yfilter);
}

std::string Pce::Backoff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ratio.is_set || is_set(ratio.yfilter)) leaf_name_data.push_back(ratio.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (difference.is_set || is_set(difference.yfilter)) leaf_name_data.push_back(difference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ratio")
    {
        ratio = value;
        ratio.value_namespace = name_space;
        ratio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "difference")
    {
        difference = value;
        difference.value_namespace = name_space;
        difference.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ratio")
    {
        ratio.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "difference")
    {
        difference.yfilter = yfilter;
    }
}

bool Pce::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ratio" || name == "threshold" || name == "difference")
        return true;
    return false;
}

Pce::Rest::Rest()
    :
    rest_authentication{YType::enumeration, "rest-authentication"},
    enable{YType::empty, "enable"}
        ,
    rest_users(std::make_shared<Pce::Rest::RestUsers>())
{
    rest_users->parent = this;

    yang_name = "rest"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Pce::Rest::~Rest()
{
}

bool Pce::Rest::has_data() const
{
    if (is_presence_container) return true;
    return rest_authentication.is_set
	|| enable.is_set
	|| (rest_users !=  nullptr && rest_users->has_data());
}

bool Pce::Rest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rest_authentication.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (rest_users !=  nullptr && rest_users->has_operation());
}

std::string Pce::Rest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Rest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Rest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rest_authentication.is_set || is_set(rest_authentication.yfilter)) leaf_name_data.push_back(rest_authentication.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Rest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rest-users")
    {
        if(rest_users == nullptr)
        {
            rest_users = std::make_shared<Pce::Rest::RestUsers>();
        }
        return rest_users;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Rest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rest_users != nullptr)
    {
        _children["rest-users"] = rest_users;
    }

    return _children;
}

void Pce::Rest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rest-authentication")
    {
        rest_authentication = value;
        rest_authentication.value_namespace = name_space;
        rest_authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Rest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rest-authentication")
    {
        rest_authentication.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::Rest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rest-users" || name == "rest-authentication" || name == "enable")
        return true;
    return false;
}

Pce::Rest::RestUsers::RestUsers()
    :
    rest_user(this, {"name"})
{

    yang_name = "rest-users"; yang_parent_name = "rest"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Rest::RestUsers::~RestUsers()
{
}

bool Pce::Rest::RestUsers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rest_user.len(); index++)
    {
        if(rest_user[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::Rest::RestUsers::has_operation() const
{
    for (std::size_t index=0; index<rest_user.len(); index++)
    {
        if(rest_user[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::Rest::RestUsers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/rest/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Rest::RestUsers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rest-users";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Rest::RestUsers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Rest::RestUsers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rest-user")
    {
        auto ent_ = std::make_shared<Pce::Rest::RestUsers::RestUser>();
        ent_->parent = this;
        rest_user.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Rest::RestUsers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rest_user.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::Rest::RestUsers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::Rest::RestUsers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::Rest::RestUsers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rest-user")
        return true;
    return false;
}

Pce::Rest::RestUsers::RestUser::RestUser()
    :
    name{YType::str, "name"},
    rest_user_password{YType::str, "rest-user-password"},
    enable{YType::empty, "enable"}
{

    yang_name = "rest-user"; yang_parent_name = "rest-users"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Rest::RestUsers::RestUser::~RestUser()
{
}

bool Pce::Rest::RestUsers::RestUser::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rest_user_password.is_set
	|| enable.is_set;
}

bool Pce::Rest::RestUsers::RestUser::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rest_user_password.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Pce::Rest::RestUsers::RestUser::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/rest/rest-users/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Rest::RestUsers::RestUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rest-user";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Rest::RestUsers::RestUser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rest_user_password.is_set || is_set(rest_user_password.yfilter)) leaf_name_data.push_back(rest_user_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Rest::RestUsers::RestUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Rest::RestUsers::RestUser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Rest::RestUsers::RestUser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rest-user-password")
    {
        rest_user_password = value;
        rest_user_password.value_namespace = name_space;
        rest_user_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Rest::RestUsers::RestUser::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rest-user-password")
    {
        rest_user_password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::Rest::RestUsers::RestUser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "rest-user-password" || name == "enable")
        return true;
    return false;
}

Pce::StateSyncs::StateSyncs()
    :
    state_sync(this, {"address"})
{

    yang_name = "state-syncs"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::StateSyncs::~StateSyncs()
{
}

bool Pce::StateSyncs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<state_sync.len(); index++)
    {
        if(state_sync[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::StateSyncs::has_operation() const
{
    for (std::size_t index=0; index<state_sync.len(); index++)
    {
        if(state_sync[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::StateSyncs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::StateSyncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-syncs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::StateSyncs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::StateSyncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-sync")
    {
        auto ent_ = std::make_shared<Pce::StateSyncs::StateSync>();
        ent_->parent = this;
        state_sync.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::StateSyncs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : state_sync.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::StateSyncs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::StateSyncs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::StateSyncs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-sync")
        return true;
    return false;
}

Pce::StateSyncs::StateSync::StateSync()
    :
    address{YType::str, "address"}
{

    yang_name = "state-sync"; yang_parent_name = "state-syncs"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::StateSyncs::StateSync::~StateSync()
{
}

bool Pce::StateSyncs::StateSync::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Pce::StateSyncs::StateSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Pce::StateSyncs::StateSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/state-syncs/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::StateSyncs::StateSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-sync";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::StateSyncs::StateSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::StateSyncs::StateSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::StateSyncs::StateSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::StateSyncs::StateSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::StateSyncs::StateSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Pce::StateSyncs::StateSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Pce::SegmentRouting::SegmentRouting()
    :
    te_latency{YType::empty, "te-latency"},
    strict_sid_only{YType::empty, "strict-sid-only"}
        ,
    traffic_engineering(std::make_shared<Pce::SegmentRouting::TrafficEngineering>())
{
    traffic_engineering->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::SegmentRouting::~SegmentRouting()
{
}

bool Pce::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return te_latency.is_set
	|| strict_sid_only.is_set
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_data());
}

bool Pce::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_latency.yfilter)
	|| ydk::is_set(strict_sid_only.yfilter)
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_operation());
}

std::string Pce::SegmentRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_latency.is_set || is_set(te_latency.yfilter)) leaf_name_data.push_back(te_latency.get_name_leafdata());
    if (strict_sid_only.is_set || is_set(strict_sid_only.yfilter)) leaf_name_data.push_back(strict_sid_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-engineering")
    {
        if(traffic_engineering == nullptr)
        {
            traffic_engineering = std::make_shared<Pce::SegmentRouting::TrafficEngineering>();
        }
        return traffic_engineering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic_engineering != nullptr)
    {
        _children["traffic-engineering"] = traffic_engineering;
    }

    return _children;
}

void Pce::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-latency")
    {
        te_latency = value;
        te_latency.value_namespace = name_space;
        te_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-sid-only")
    {
        strict_sid_only = value;
        strict_sid_only.value_namespace = name_space;
        strict_sid_only.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-latency")
    {
        te_latency.yfilter = yfilter;
    }
    if(value_path == "strict-sid-only")
    {
        strict_sid_only.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-engineering" || name == "te-latency" || name == "strict-sid-only")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::TrafficEngineering()
    :
    enable{YType::empty, "enable"}
        ,
    affinity_bits(std::make_shared<Pce::SegmentRouting::TrafficEngineering::AffinityBits>())
    , peers(std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers>())
    , segments(std::make_shared<Pce::SegmentRouting::TrafficEngineering::Segments>())
{
    affinity_bits->parent = this;
    peers->parent = this;
    segments->parent = this;

    yang_name = "traffic-engineering"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::SegmentRouting::TrafficEngineering::~TrafficEngineering()
{
}

bool Pce::SegmentRouting::TrafficEngineering::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (affinity_bits !=  nullptr && affinity_bits->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (segments !=  nullptr && segments->has_data());
}

bool Pce::SegmentRouting::TrafficEngineering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (affinity_bits !=  nullptr && affinity_bits->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (segments !=  nullptr && segments->has_operation());
}

std::string Pce::SegmentRouting::TrafficEngineering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::SegmentRouting::TrafficEngineering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-engineering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-bits")
    {
        if(affinity_bits == nullptr)
        {
            affinity_bits = std::make_shared<Pce::SegmentRouting::TrafficEngineering::AffinityBits>();
        }
        return affinity_bits;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers>();
        }
        return peers;
    }

    if(child_yang_name == "segments")
    {
        if(segments == nullptr)
        {
            segments = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Segments>();
        }
        return segments;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity_bits != nullptr)
    {
        _children["affinity-bits"] = affinity_bits;
    }

    if(peers != nullptr)
    {
        _children["peers"] = peers;
    }

    if(segments != nullptr)
    {
        _children["segments"] = segments;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-bits" || name == "peers" || name == "segments" || name == "enable")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBits()
    :
    affinity_bit(this, {"color_name"})
{

    yang_name = "affinity-bits"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::SegmentRouting::TrafficEngineering::AffinityBits::~AffinityBits()
{
}

bool Pce::SegmentRouting::TrafficEngineering::AffinityBits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<affinity_bit.len(); index++)
    {
        if(affinity_bit[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::SegmentRouting::TrafficEngineering::AffinityBits::has_operation() const
{
    for (std::size_t index=0; index<affinity_bit.len(); index++)
    {
        if(affinity_bit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::AffinityBits::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/segment-routing/traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::SegmentRouting::TrafficEngineering::AffinityBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::AffinityBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::AffinityBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-bit")
    {
        auto ent_ = std::make_shared<Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit>();
        ent_->parent = this;
        affinity_bit.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::AffinityBits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : affinity_bit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::AffinityBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::SegmentRouting::TrafficEngineering::AffinityBits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::SegmentRouting::TrafficEngineering::AffinityBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-bit")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::AffinityBit()
    :
    color_name{YType::str, "color-name"},
    bit{YType::uint32, "bit"}
{

    yang_name = "affinity-bit"; yang_parent_name = "affinity-bits"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::~AffinityBit()
{
}

bool Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::has_data() const
{
    if (is_presence_container) return true;
    return color_name.is_set
	|| bit.is_set;
}

bool Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color_name.yfilter)
	|| ydk::is_set(bit.yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/segment-routing/traffic-engineering/affinity-bits/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-bit";
    ADD_KEY_TOKEN(color_name, "color-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color_name.is_set || is_set(color_name.yfilter)) leaf_name_data.push_back(color_name.get_name_leafdata());
    if (bit.is_set || is_set(bit.yfilter)) leaf_name_data.push_back(bit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color-name")
    {
        color_name = value;
        color_name.value_namespace = name_space;
        color_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit")
    {
        bit = value;
        bit.value_namespace = name_space;
        bit.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color-name")
    {
        color_name.yfilter = yfilter;
    }
    if(value_path == "bit")
    {
        bit.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::AffinityBits::AffinityBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color-name" || name == "bit")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peers()
    :
    peer(this, {"peer_addr"})
{

    yang_name = "peers"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::~Peers()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/segment-routing/traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto ent_ = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer>();
        ent_->parent = this;
        peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::get_children() const
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

void Pce::SegmentRouting::TrafficEngineering::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::SegmentRouting::TrafficEngineering::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Peer()
    :
    peer_addr{YType::str, "peer-addr"},
    enable{YType::empty, "enable"}
        ,
    policies(std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies>())
{
    policies->parent = this;

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::~Peer()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_addr.is_set
	|| enable.is_set
	|| (policies !=  nullptr && policies->has_data());
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_addr.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (policies !=  nullptr && policies->has_operation());
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/segment-routing/traffic-engineering/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    ADD_KEY_TOKEN(peer_addr, "peer-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_addr.is_set || is_set(peer_addr.yfilter)) leaf_name_data.push_back(peer_addr.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policies")
    {
        if(policies == nullptr)
        {
            policies = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies>();
        }
        return policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policies != nullptr)
    {
        _children["policies"] = policies;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-addr")
    {
        peer_addr = value;
        peer_addr.value_namespace = name_space;
        peer_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-addr")
    {
        peer_addr.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policies" || name == "peer-addr" || name == "enable")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policies()
    :
    policy(this, {"policy_name"})
{

    yang_name = "policies"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::~Policies()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::Policy()
    :
    policy_name{YType::str, "policy-name"},
    enable{YType::empty, "enable"},
    shutdown{YType::empty, "shutdown"}
        ,
    binding_sid(std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid>())
    , color_endpoint(std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint>())
    , candidate_paths(std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths>())
{
    binding_sid->parent = this;
    color_endpoint->parent = this;
    candidate_paths->parent = this;

    yang_name = "policy"; yang_parent_name = "policies"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::~Policy()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::has_data() const
{
    if (is_presence_container) return true;
    return policy_name.is_set
	|| enable.is_set
	|| shutdown.is_set
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (color_endpoint !=  nullptr && color_endpoint->has_data())
	|| (candidate_paths !=  nullptr && candidate_paths->has_data());
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (color_endpoint !=  nullptr && color_endpoint->has_operation())
	|| (candidate_paths !=  nullptr && candidate_paths->has_operation());
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    ADD_KEY_TOKEN(policy_name, "policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "color-endpoint")
    {
        if(color_endpoint == nullptr)
        {
            color_endpoint = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint>();
        }
        return color_endpoint;
    }

    if(child_yang_name == "candidate-paths")
    {
        if(candidate_paths == nullptr)
        {
            candidate_paths = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths>();
        }
        return candidate_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(binding_sid != nullptr)
    {
        _children["binding-sid"] = binding_sid;
    }

    if(color_endpoint != nullptr)
    {
        _children["color-endpoint"] = color_endpoint;
    }

    if(candidate_paths != nullptr)
    {
        _children["candidate-paths"] = candidate_paths;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
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
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "color-endpoint" || name == "candidate-paths" || name == "policy-name" || name == "enable" || name == "shutdown")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid::BindingSid()
    :
    binding_sid_type{YType::enumeration, "binding-sid-type"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "binding-sid"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid::~BindingSid()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return binding_sid_type.is_set
	|| mpls_label.is_set;
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_sid_type.is_set || is_set(binding_sid_type.yfilter)) leaf_name_data.push_back(binding_sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-sid-type")
    {
        binding_sid_type = value;
        binding_sid_type.value_namespace = name_space;
        binding_sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-sid-type")
    {
        binding_sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid-type" || name == "mpls-label")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint::ColorEndpoint()
    :
    color{YType::uint32, "color"},
    end_point_type{YType::enumeration, "end-point-type"},
    end_point_address{YType::str, "end-point-address"}
{

    yang_name = "color-endpoint"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint::~ColorEndpoint()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint::has_data() const
{
    if (is_presence_container) return true;
    return color.is_set
	|| end_point_type.is_set
	|| end_point_address.is_set;
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(end_point_type.yfilter)
	|| ydk::is_set(end_point_address.yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (end_point_type.is_set || is_set(end_point_type.yfilter)) leaf_name_data.push_back(end_point_type.get_name_leafdata());
    if (end_point_address.is_set || is_set(end_point_address.yfilter)) leaf_name_data.push_back(end_point_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-point-type")
    {
        end_point_type = value;
        end_point_type.value_namespace = name_space;
        end_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-point-address")
    {
        end_point_address = value;
        end_point_address.value_namespace = name_space;
        end_point_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "end-point-type")
    {
        end_point_type.yfilter = yfilter;
    }
    if(value_path == "end-point-address")
    {
        end_point_address.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::ColorEndpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color" || name == "end-point-type" || name == "end-point-address")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::CandidatePaths()
    :
    enable{YType::empty, "enable"}
        ,
    affinity_rules(std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules>())
    , preferences(std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences>())
{
    affinity_rules->parent = this;
    preferences->parent = this;

    yang_name = "candidate-paths"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::~CandidatePaths()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (affinity_rules !=  nullptr && affinity_rules->has_data())
	|| (preferences !=  nullptr && preferences->has_data());
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (affinity_rules !=  nullptr && affinity_rules->has_operation())
	|| (preferences !=  nullptr && preferences->has_operation());
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-rules")
    {
        if(affinity_rules == nullptr)
        {
            affinity_rules = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules>();
        }
        return affinity_rules;
    }

    if(child_yang_name == "preferences")
    {
        if(preferences == nullptr)
        {
            preferences = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences>();
        }
        return preferences;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity_rules != nullptr)
    {
        _children["affinity-rules"] = affinity_rules;
    }

    if(preferences != nullptr)
    {
        _children["preferences"] = preferences;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-rules" || name == "preferences" || name == "enable")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRules()
    :
    affinity_rule(this, {"rule", "aff_value"})
{

    yang_name = "affinity-rules"; yang_parent_name = "candidate-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::~AffinityRules()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<affinity_rule.len(); index++)
    {
        if(affinity_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::has_operation() const
{
    for (std::size_t index=0; index<affinity_rule.len(); index++)
    {
        if(affinity_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-rule")
    {
        auto ent_ = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule>();
        ent_->parent = this;
        affinity_rule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : affinity_rule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-rule")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule::AffinityRule()
    :
    rule{YType::uint32, "rule"},
    aff_value{YType::str, "aff-value"}
{

    yang_name = "affinity-rule"; yang_parent_name = "affinity-rules"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule::~AffinityRule()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule::has_data() const
{
    if (is_presence_container) return true;
    return rule.is_set
	|| aff_value.is_set;
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rule.yfilter)
	|| ydk::is_set(aff_value.yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-rule";
    ADD_KEY_TOKEN(rule, "rule");
    ADD_KEY_TOKEN(aff_value, "aff-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rule.is_set || is_set(rule.yfilter)) leaf_name_data.push_back(rule.get_name_leafdata());
    if (aff_value.is_set || is_set(aff_value.yfilter)) leaf_name_data.push_back(aff_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rule")
    {
        rule = value;
        rule.value_namespace = name_space;
        rule.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aff-value")
    {
        aff_value = value;
        aff_value.value_namespace = name_space;
        aff_value.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rule")
    {
        rule.yfilter = yfilter;
    }
    if(value_path == "aff-value")
    {
        aff_value.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::AffinityRules::AffinityRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule" || name == "aff-value")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preferences()
    :
    preference(this, {"path_index"})
{

    yang_name = "preferences"; yang_parent_name = "candidate-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::~Preferences()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<preference.len(); index++)
    {
        if(preference[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::has_operation() const
{
    for (std::size_t index=0; index<preference.len(); index++)
    {
        if(preference[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferences";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preference")
    {
        auto ent_ = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference>();
        ent_->parent = this;
        preference.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : preference.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::Preference()
    :
    path_index{YType::uint32, "path-index"},
    enable{YType::empty, "enable"}
        ,
    path_infos(std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos>())
{
    path_infos->parent = this;

    yang_name = "preference"; yang_parent_name = "preferences"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::~Preference()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::has_data() const
{
    if (is_presence_container) return true;
    return path_index.is_set
	|| enable.is_set
	|| (path_infos !=  nullptr && path_infos->has_data());
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_index.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (path_infos !=  nullptr && path_infos->has_operation());
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preference";
    ADD_KEY_TOKEN(path_index, "path-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_index.is_set || is_set(path_index.yfilter)) leaf_name_data.push_back(path_index.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-infos")
    {
        if(path_infos == nullptr)
        {
            path_infos = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos>();
        }
        return path_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_infos != nullptr)
    {
        _children["path-infos"] = path_infos;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-index")
    {
        path_index = value;
        path_index.value_namespace = name_space;
        path_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-index")
    {
        path_index.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-infos" || name == "path-index" || name == "enable")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfos()
    :
    path_info(this, {"type", "hop_type", "segment_list_name"})
{

    yang_name = "path-infos"; yang_parent_name = "preference"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::~PathInfos()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_info.len(); index++)
    {
        if(path_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::has_operation() const
{
    for (std::size_t index=0; index<path_info.len(); index++)
    {
        if(path_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-info")
    {
        auto ent_ = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo>();
        ent_->parent = this;
        path_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-info")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::PathInfo()
    :
    type{YType::enumeration, "type"},
    hop_type{YType::enumeration, "hop-type"},
    segment_list_name{YType::str, "segment-list-name"},
    enable{YType::empty, "enable"}
        ,
    metric(nullptr) // presence node
{

    yang_name = "path-info"; yang_parent_name = "path-infos"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::~PathInfo()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| hop_type.is_set
	|| segment_list_name.is_set
	|| enable.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(segment_list_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(hop_type, "hop-type");
    ADD_KEY_TOKEN(segment_list_name, "segment-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (segment_list_name.is_set || is_set(segment_list_name.yfilter)) leaf_name_data.push_back(segment_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-list-name")
    {
        segment_list_name = value;
        segment_list_name.value_namespace = name_space;
        segment_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "segment-list-name")
    {
        segment_list_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "type" || name == "hop-type" || name == "segment-list-name" || name == "enable")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::Metric()
    :
    metric_type{YType::enumeration, "metric-type"}
{

    yang_name = "metric"; yang_parent_name = "path-info"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::~Metric()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_type.is_set;
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::Peers::Peer::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-type")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Segments::Segments()
    :
    segment(this, {"path_name"})
{

    yang_name = "segments"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::SegmentRouting::TrafficEngineering::Segments::~Segments()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Segments::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/segment-routing/traffic-engineering/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::SegmentRouting::TrafficEngineering::Segments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Segments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Segments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Segments::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Segments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Segments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::SegmentRouting::TrafficEngineering::Segments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segment()
    :
    path_name{YType::str, "path-name"}
        ,
    segments(std::make_shared<Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_>())
{
    segments->parent = this;

    yang_name = "segment"; yang_parent_name = "segments"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::SegmentRouting::TrafficEngineering::Segments::Segment::~Segment()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::Segment::has_data() const
{
    if (is_presence_container) return true;
    return path_name.is_set
	|| (segments !=  nullptr && segments->has_data());
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| (segments !=  nullptr && segments->has_operation());
}

std::string Pce::SegmentRouting::TrafficEngineering::Segments::Segment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/segment-routing/traffic-engineering/segments/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::SegmentRouting::TrafficEngineering::Segments::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    ADD_KEY_TOKEN(path_name, "path-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Segments::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Segments::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segments")
    {
        if(segments == nullptr)
        {
            segments = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_>();
        }
        return segments;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Segments::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segments != nullptr)
    {
        _children["segments"] = segments;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Segments::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::Segments::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segments" || name == "path-name")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segments_()
    :
    segment(this, {"segment_index"})
{

    yang_name = "segments"; yang_parent_name = "segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::~Segments_()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment")
        return true;
    return false;
}

Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_::Segment_()
    :
    segment_index{YType::uint32, "segment-index"},
    segment_type{YType::enumeration, "segment-type"},
    address{YType::str, "address"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "segment"; yang_parent_name = "segments"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_::~Segment_()
{
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_::has_data() const
{
    if (is_presence_container) return true;
    return segment_index.is_set
	|| segment_type.is_set
	|| address.is_set
	|| mpls_label.is_set;
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_index.yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    ADD_KEY_TOKEN(segment_index, "segment-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_index.is_set || is_set(segment_index.yfilter)) leaf_name_data.push_back(segment_index.get_name_leafdata());
    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-index")
    {
        segment_index = value;
        segment_index.value_namespace = name_space;
        segment_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-index")
    {
        segment_index.yfilter = yfilter;
    }
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Pce::SegmentRouting::TrafficEngineering::Segments::Segment::Segments_::Segment_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-index" || name == "segment-type" || name == "address" || name == "mpls-label")
        return true;
    return false;
}

Pce::Timers::Timers()
    :
    reoptimization_timer{YType::uint32, "reoptimization-timer"},
    keepalive{YType::uint32, "keepalive"},
    minimum_peer_keepalive{YType::uint32, "minimum-peer-keepalive"}
{

    yang_name = "timers"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Pce::Timers::~Timers()
{
}

bool Pce::Timers::has_data() const
{
    if (is_presence_container) return true;
    return reoptimization_timer.is_set
	|| keepalive.is_set
	|| minimum_peer_keepalive.is_set;
}

bool Pce::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reoptimization_timer.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(minimum_peer_keepalive.yfilter);
}

std::string Pce::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reoptimization_timer.is_set || is_set(reoptimization_timer.yfilter)) leaf_name_data.push_back(reoptimization_timer.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (minimum_peer_keepalive.is_set || is_set(minimum_peer_keepalive.yfilter)) leaf_name_data.push_back(minimum_peer_keepalive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reoptimization-timer")
    {
        reoptimization_timer = value;
        reoptimization_timer.value_namespace = name_space;
        reoptimization_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-peer-keepalive")
    {
        minimum_peer_keepalive = value;
        minimum_peer_keepalive.value_namespace = name_space;
        minimum_peer_keepalive.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reoptimization-timer")
    {
        reoptimization_timer.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "minimum-peer-keepalive")
    {
        minimum_peer_keepalive.yfilter = yfilter;
    }
}

bool Pce::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reoptimization-timer" || name == "keepalive" || name == "minimum-peer-keepalive")
        return true;
    return false;
}

Pce::Netconf::Netconf()
    :
    enable{YType::empty, "enable"}
        ,
    netconf_ssh(std::make_shared<Pce::Netconf::NetconfSsh>())
{
    netconf_ssh->parent = this;

    yang_name = "netconf"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Netconf::~Netconf()
{
}

bool Pce::Netconf::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (netconf_ssh !=  nullptr && netconf_ssh->has_data());
}

bool Pce::Netconf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (netconf_ssh !=  nullptr && netconf_ssh->has_operation());
}

std::string Pce::Netconf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Netconf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netconf-ssh")
    {
        if(netconf_ssh == nullptr)
        {
            netconf_ssh = std::make_shared<Pce::Netconf::NetconfSsh>();
        }
        return netconf_ssh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Netconf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(netconf_ssh != nullptr)
    {
        _children["netconf-ssh"] = netconf_ssh;
    }

    return _children;
}

void Pce::Netconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Netconf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::Netconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netconf-ssh" || name == "enable")
        return true;
    return false;
}

Pce::Netconf::NetconfSsh::NetconfSsh()
    :
    netconf_ssh_password{YType::str, "netconf-ssh-password"},
    netconf_ssh_user{YType::str, "netconf-ssh-user"}
{

    yang_name = "netconf-ssh"; yang_parent_name = "netconf"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Netconf::NetconfSsh::~NetconfSsh()
{
}

bool Pce::Netconf::NetconfSsh::has_data() const
{
    if (is_presence_container) return true;
    return netconf_ssh_password.is_set
	|| netconf_ssh_user.is_set;
}

bool Pce::Netconf::NetconfSsh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netconf_ssh_password.yfilter)
	|| ydk::is_set(netconf_ssh_user.yfilter);
}

std::string Pce::Netconf::NetconfSsh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/netconf/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Netconf::NetconfSsh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-ssh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Netconf::NetconfSsh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netconf_ssh_password.is_set || is_set(netconf_ssh_password.yfilter)) leaf_name_data.push_back(netconf_ssh_password.get_name_leafdata());
    if (netconf_ssh_user.is_set || is_set(netconf_ssh_user.yfilter)) leaf_name_data.push_back(netconf_ssh_user.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Netconf::NetconfSsh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Netconf::NetconfSsh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Netconf::NetconfSsh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netconf-ssh-password")
    {
        netconf_ssh_password = value;
        netconf_ssh_password.value_namespace = name_space;
        netconf_ssh_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netconf-ssh-user")
    {
        netconf_ssh_user = value;
        netconf_ssh_user.value_namespace = name_space;
        netconf_ssh_user.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Netconf::NetconfSsh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netconf-ssh-password")
    {
        netconf_ssh_password.yfilter = yfilter;
    }
    if(value_path == "netconf-ssh-user")
    {
        netconf_ssh_user.yfilter = yfilter;
    }
}

bool Pce::Netconf::NetconfSsh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netconf-ssh-password" || name == "netconf-ssh-user")
        return true;
    return false;
}

Pce::DisjointPath::DisjointPath()
    :
    enable{YType::empty, "enable"}
        ,
    groups(std::make_shared<Pce::DisjointPath::Groups>())
{
    groups->parent = this;

    yang_name = "disjoint-path"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::DisjointPath::~DisjointPath()
{
}

bool Pce::DisjointPath::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (groups !=  nullptr && groups->has_data());
}

bool Pce::DisjointPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string Pce::DisjointPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::DisjointPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Pce::DisjointPath::Groups>();
        }
        return groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    return _children;
}

void Pce::DisjointPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::DisjointPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::DisjointPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "enable")
        return true;
    return false;
}

Pce::DisjointPath::Groups::Groups()
    :
    group(this, {"group_id", "dp_type", "sub_id"})
{

    yang_name = "groups"; yang_parent_name = "disjoint-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::DisjointPath::Groups::~Groups()
{
}

bool Pce::DisjointPath::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::DisjointPath::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::DisjointPath::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/disjoint-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::DisjointPath::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::DisjointPath::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::DisjointPath::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Pce::DisjointPath::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::DisjointPath::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::DisjointPath::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::DisjointPath::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::DisjointPath::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Pce::DisjointPath::Groups::Group::Group()
    :
    group_id{YType::uint32, "group-id"},
    dp_type{YType::enumeration, "dp-type"},
    sub_id{YType::uint32, "sub-id"},
    strict{YType::empty, "strict"},
    enable{YType::empty, "enable"}
        ,
    group_lsp_records(std::make_shared<Pce::DisjointPath::Groups::Group::GroupLspRecords>())
{
    group_lsp_records->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::DisjointPath::Groups::Group::~Group()
{
}

bool Pce::DisjointPath::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| dp_type.is_set
	|| sub_id.is_set
	|| strict.is_set
	|| enable.is_set
	|| (group_lsp_records !=  nullptr && group_lsp_records->has_data());
}

bool Pce::DisjointPath::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(dp_type.yfilter)
	|| ydk::is_set(sub_id.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (group_lsp_records !=  nullptr && group_lsp_records->has_operation());
}

std::string Pce::DisjointPath::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/disjoint-path/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::DisjointPath::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(group_id, "group-id");
    ADD_KEY_TOKEN(dp_type, "dp-type");
    ADD_KEY_TOKEN(sub_id, "sub-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::DisjointPath::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (dp_type.is_set || is_set(dp_type.yfilter)) leaf_name_data.push_back(dp_type.get_name_leafdata());
    if (sub_id.is_set || is_set(sub_id.yfilter)) leaf_name_data.push_back(sub_id.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::DisjointPath::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-lsp-records")
    {
        if(group_lsp_records == nullptr)
        {
            group_lsp_records = std::make_shared<Pce::DisjointPath::Groups::Group::GroupLspRecords>();
        }
        return group_lsp_records;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::DisjointPath::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_lsp_records != nullptr)
    {
        _children["group-lsp-records"] = group_lsp_records;
    }

    return _children;
}

void Pce::DisjointPath::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-type")
    {
        dp_type = value;
        dp_type.value_namespace = name_space;
        dp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-id")
    {
        sub_id = value;
        sub_id.value_namespace = name_space;
        sub_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::DisjointPath::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "dp-type")
    {
        dp_type.yfilter = yfilter;
    }
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::DisjointPath::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-lsp-records" || name == "group-id" || name == "dp-type" || name == "sub-id" || name == "strict" || name == "enable")
        return true;
    return false;
}

Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecords()
    :
    group_lsp_record(this, {"lsp_id"})
{

    yang_name = "group-lsp-records"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::DisjointPath::Groups::Group::GroupLspRecords::~GroupLspRecords()
{
}

bool Pce::DisjointPath::Groups::Group::GroupLspRecords::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_lsp_record.len(); index++)
    {
        if(group_lsp_record[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::DisjointPath::Groups::Group::GroupLspRecords::has_operation() const
{
    for (std::size_t index=0; index<group_lsp_record.len(); index++)
    {
        if(group_lsp_record[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::DisjointPath::Groups::Group::GroupLspRecords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-lsp-records";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::DisjointPath::Groups::Group::GroupLspRecords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::DisjointPath::Groups::Group::GroupLspRecords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-lsp-record")
    {
        auto ent_ = std::make_shared<Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord>();
        ent_->parent = this;
        group_lsp_record.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::DisjointPath::Groups::Group::GroupLspRecords::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_lsp_record.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::DisjointPath::Groups::Group::GroupLspRecords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::DisjointPath::Groups::Group::GroupLspRecords::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::DisjointPath::Groups::Group::GroupLspRecords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-lsp-record")
        return true;
    return false;
}

Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::GroupLspRecord()
    :
    lsp_id{YType::uint32, "lsp-id"},
    ip_addr{YType::str, "ip-addr"},
    lsp_name{YType::str, "lsp-name"},
    disj_path{YType::uint32, "disj-path"}
{

    yang_name = "group-lsp-record"; yang_parent_name = "group-lsp-records"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::~GroupLspRecord()
{
}

bool Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| ip_addr.is_set
	|| lsp_name.is_set
	|| disj_path.is_set;
}

bool Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(lsp_name.yfilter)
	|| ydk::is_set(disj_path.yfilter);
}

std::string Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-lsp-record";
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (lsp_name.is_set || is_set(lsp_name.yfilter)) leaf_name_data.push_back(lsp_name.get_name_leafdata());
    if (disj_path.is_set || is_set(disj_path.yfilter)) leaf_name_data.push_back(disj_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-name")
    {
        lsp_name = value;
        lsp_name.value_namespace = name_space;
        lsp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disj-path")
    {
        disj_path = value;
        disj_path.value_namespace = name_space;
        disj_path.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "lsp-name")
    {
        lsp_name.yfilter = yfilter;
    }
    if(value_path == "disj-path")
    {
        disj_path.yfilter = yfilter;
    }
}

bool Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "ip-addr" || name == "lsp-name" || name == "disj-path")
        return true;
    return false;
}

Pce::ExplicitPaths::ExplicitPaths()
    :
    explicit_path(this, {"name"})
{

    yang_name = "explicit-paths"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::ExplicitPaths::~ExplicitPaths()
{
}

bool Pce::ExplicitPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<explicit_path.len(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::ExplicitPaths::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.len(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::ExplicitPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::ExplicitPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::ExplicitPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::ExplicitPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-path")
    {
        auto ent_ = std::make_shared<Pce::ExplicitPaths::ExplicitPath>();
        ent_->parent = this;
        explicit_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::ExplicitPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : explicit_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::ExplicitPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::ExplicitPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::ExplicitPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path")
        return true;
    return false;
}

Pce::ExplicitPaths::ExplicitPath::ExplicitPath()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"}
        ,
    path_hops(std::make_shared<Pce::ExplicitPaths::ExplicitPath::PathHops>())
{
    path_hops->parent = this;

    yang_name = "explicit-path"; yang_parent_name = "explicit-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::ExplicitPaths::ExplicitPath::~ExplicitPath()
{
}

bool Pce::ExplicitPaths::ExplicitPath::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| enable.is_set
	|| (path_hops !=  nullptr && path_hops->has_data());
}

bool Pce::ExplicitPaths::ExplicitPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (path_hops !=  nullptr && path_hops->has_operation());
}

std::string Pce::ExplicitPaths::ExplicitPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/explicit-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::ExplicitPaths::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::ExplicitPaths::ExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::ExplicitPaths::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-hops")
    {
        if(path_hops == nullptr)
        {
            path_hops = std::make_shared<Pce::ExplicitPaths::ExplicitPath::PathHops>();
        }
        return path_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::ExplicitPaths::ExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_hops != nullptr)
    {
        _children["path-hops"] = path_hops;
    }

    return _children;
}

void Pce::ExplicitPaths::ExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::ExplicitPaths::ExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pce::ExplicitPaths::ExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-hops" || name == "name" || name == "enable")
        return true;
    return false;
}

Pce::ExplicitPaths::ExplicitPath::PathHops::PathHops()
    :
    path_hop(this, {"index_"})
{

    yang_name = "path-hops"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::ExplicitPaths::ExplicitPath::PathHops::~PathHops()
{
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_hop.len(); index++)
    {
        if(path_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::has_operation() const
{
    for (std::size_t index=0; index<path_hop.len(); index++)
    {
        if(path_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::ExplicitPaths::ExplicitPath::PathHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::ExplicitPaths::ExplicitPath::PathHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::ExplicitPaths::ExplicitPath::PathHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-hop")
    {
        auto ent_ = std::make_shared<Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop>();
        ent_->parent = this;
        path_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::ExplicitPaths::ExplicitPath::PathHops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::ExplicitPaths::ExplicitPath::PathHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::ExplicitPaths::ExplicitPath::PathHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-hop")
        return true;
    return false;
}

Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::PathHop()
    :
    index_{YType::uint32, "index"},
    hop_type{YType::enumeration, "hop-type"},
    address{YType::str, "address"},
    remote_address{YType::str, "remote-address"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "path-hop"; yang_parent_name = "path-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::~PathHop()
{
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| hop_type.is_set
	|| address.is_set
	|| remote_address.is_set
	|| mpls_label.is_set;
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-hop";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "hop-type" || name == "address" || name == "remote-address" || name == "mpls-label")
        return true;
    return false;
}

const Enum::YLeaf PceSegment::ipv4_address {1, "ipv4-address"};
const Enum::YLeaf PceSegment::mpls_label {3, "mpls-label"};

const Enum::YLeaf PceBindingSid::mpls_label_specified {1, "mpls-label-specified"};
const Enum::YLeaf PceBindingSid::mpls_label_any {2, "mpls-label-any"};

const Enum::YLeaf PceExplicitPathHop::address {1, "address"};
const Enum::YLeaf PceExplicitPathHop::sid_node {2, "sid-node"};
const Enum::YLeaf PceExplicitPathHop::sid_adjancency {3, "sid-adjancency"};
const Enum::YLeaf PceExplicitPathHop::binding_sid {4, "binding-sid"};

const Enum::YLeaf PcePath::explicit_ {1, "explicit"};
const Enum::YLeaf PcePath::dynamic {2, "dynamic"};

const Enum::YLeaf PceEndPoint::end_point_type_ipv4 {1, "end-point-type-ipv4"};
const Enum::YLeaf PceEndPoint::end_point_type_ipv6 {2, "end-point-type-ipv6"};

const Enum::YLeaf PcerestAuthentication::basic {1, "basic"};
const Enum::YLeaf PcerestAuthentication::digest {2, "digest"};

const Enum::YLeaf PcePathHop::mpls {1, "mpls"};
const Enum::YLeaf PcePathHop::srv6 {2, "srv6"};

const Enum::YLeaf PceMetric::igp {1, "igp"};
const Enum::YLeaf PceMetric::te {2, "te"};

const Enum::YLeaf PceDisjointPath::link {1, "link"};
const Enum::YLeaf PceDisjointPath::node {2, "node"};
const Enum::YLeaf PceDisjointPath::srlg {3, "srlg"};
const Enum::YLeaf PceDisjointPath::srlg_node {4, "srlg-node"};


}
}

