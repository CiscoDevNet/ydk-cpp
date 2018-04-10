
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
    password{YType::str, "password"},
    enable{YType::empty, "enable"}
    	,
    pcc_addresses(std::make_shared<Pce::PccAddresses>())
	,logging(std::make_shared<Pce::Logging>())
	,backoff(std::make_shared<Pce::Backoff>())
	,state_syncs(std::make_shared<Pce::StateSyncs>())
	,segment_routing(std::make_shared<Pce::SegmentRouting>())
	,timers(std::make_shared<Pce::Timers>())
	,netconf(std::make_shared<Pce::Netconf>())
	,disjoint_path(std::make_shared<Pce::DisjointPath>())
	,explicit_paths(std::make_shared<Pce::ExplicitPaths>())
{
    pcc_addresses->parent = this;
    logging->parent = this;
    backoff->parent = this;
    state_syncs->parent = this;
    segment_routing->parent = this;
    timers->parent = this;
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
    return server_address.is_set
	|| password.is_set
	|| enable.is_set
	|| (pcc_addresses !=  nullptr && pcc_addresses->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
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
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (pcc_addresses !=  nullptr && pcc_addresses->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
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
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

std::map<std::string, std::shared_ptr<Entity>> Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pcc_addresses != nullptr)
    {
        children["pcc-addresses"] = pcc_addresses;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(state_syncs != nullptr)
    {
        children["state-syncs"] = state_syncs;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(netconf != nullptr)
    {
        children["netconf"] = netconf;
    }

    if(disjoint_path != nullptr)
    {
        children["disjoint-path"] = disjoint_path;
    }

    if(explicit_paths != nullptr)
    {
        children["explicit-paths"] = explicit_paths;
    }

    return children;
}

void Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-address")
    {
        server_address = value;
        server_address.value_namespace = name_space;
        server_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Pce::clone_ptr() const
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
    if(name == "pcc-addresses" || name == "logging" || name == "backoff" || name == "state-syncs" || name == "segment-routing" || name == "timers" || name == "netconf" || name == "disjoint-path" || name == "explicit-paths" || name == "server-address" || name == "password" || name == "enable")
        return true;
    return false;
}

Pce::PccAddresses::PccAddresses()
{

    yang_name = "pcc-addresses"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::PccAddresses::~PccAddresses()
{
}

bool Pce::PccAddresses::has_data() const
{
    for (std::size_t index=0; index<pcc_address.size(); index++)
    {
        if(pcc_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PccAddresses::has_operation() const
{
    for (std::size_t index=0; index<pcc_address.size(); index++)
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

std::shared_ptr<Entity> Pce::PccAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcc-address")
    {
        auto c = std::make_shared<Pce::PccAddresses::PccAddress>();
        c->parent = this;
        pcc_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::PccAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pcc_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "pcc-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PccAddresses::PccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Pce::PccAddresses::PccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsp_names != nullptr)
    {
        children["lsp-names"] = lsp_names;
    }

    return children;
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
{

    yang_name = "lsp-names"; yang_parent_name = "pcc-address"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::PccAddresses::PccAddress::LspNames::~LspNames()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::has_data() const
{
    for (std::size_t index=0; index<lsp_name.size(); index++)
    {
        if(lsp_name[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PccAddresses::PccAddress::LspNames::has_operation() const
{
    for (std::size_t index=0; index<lsp_name.size(); index++)
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

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::LspNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-name")
    {
        auto c = std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName>();
        c->parent = this;
        lsp_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::PccAddresses::PccAddress::LspNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsp_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    rsvp_te(std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe>())
{
    rsvp_te->parent = this;

    yang_name = "lsp-name"; yang_parent_name = "lsp-names"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::PccAddresses::PccAddress::LspNames::LspName::~LspName()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::has_data() const
{
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
    path_buffer << "lsp-name" <<"[name='" <<name <<"']";
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

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Pce::PccAddresses::PccAddress::LspNames::LspName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvp_te != nullptr)
    {
        children["rsvp-te"] = rsvp_te;
    }

    return children;
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
    bandwidth{YType::int32, "bandwidth"},
    enable{YType::empty, "enable"}
    	,
    affinity(std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity>())
	,priority(nullptr) // presence node
{
    affinity->parent = this;

    yang_name = "rsvp-te"; yang_parent_name = "lsp-name"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::~RsvpTe()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::has_data() const
{
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

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
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

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "priority"; yang_parent_name = "rsvp-te"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::~Priority()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::has_data() const
{
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

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Pce::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "backoff"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::Backoff::~Backoff()
{
}

bool Pce::Backoff::has_data() const
{
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

std::shared_ptr<Entity> Pce::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

Pce::StateSyncs::StateSyncs()
{

    yang_name = "state-syncs"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::StateSyncs::~StateSyncs()
{
}

bool Pce::StateSyncs::has_data() const
{
    for (std::size_t index=0; index<state_sync.size(); index++)
    {
        if(state_sync[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::StateSyncs::has_operation() const
{
    for (std::size_t index=0; index<state_sync.size(); index++)
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

std::shared_ptr<Entity> Pce::StateSyncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-sync")
    {
        auto c = std::make_shared<Pce::StateSyncs::StateSync>();
        c->parent = this;
        state_sync.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::StateSyncs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : state_sync)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "state-sync" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::StateSyncs::StateSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::StateSyncs::StateSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::StateSyncs::StateSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "segment-routing"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::SegmentRouting::~SegmentRouting()
{
}

bool Pce::SegmentRouting::has_data() const
{
    return te_latency.is_set
	|| strict_sid_only.is_set;
}

bool Pce::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_latency.yfilter)
	|| ydk::is_set(strict_sid_only.yfilter);
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

std::shared_ptr<Entity> Pce::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    if(name == "te-latency" || name == "strict-sid-only")
        return true;
    return false;
}

Pce::Timers::Timers()
    :
    reoptimization_timer{YType::uint32, "reoptimization-timer"},
    keepalive{YType::uint32, "keepalive"},
    minimum_peer_keepalive{YType::uint32, "minimum-peer-keepalive"}
{

    yang_name = "timers"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::Timers::~Timers()
{
}

bool Pce::Timers::has_data() const
{
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

std::shared_ptr<Entity> Pce::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    return (netconf_ssh !=  nullptr && netconf_ssh->has_data());
}

bool Pce::Netconf::has_operation() const
{
    return is_set(yfilter)
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


    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Pce::Netconf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(netconf_ssh != nullptr)
    {
        children["netconf-ssh"] = netconf_ssh;
    }

    return children;
}

void Pce::Netconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::Netconf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::Netconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netconf-ssh")
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

std::shared_ptr<Entity> Pce::Netconf::NetconfSsh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::Netconf::NetconfSsh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Pce::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    return children;
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
{

    yang_name = "groups"; yang_parent_name = "disjoint-path"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::DisjointPath::Groups::~Groups()
{
}

bool Pce::DisjointPath::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::DisjointPath::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
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

std::shared_ptr<Entity> Pce::DisjointPath::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto c = std::make_shared<Pce::DisjointPath::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::DisjointPath::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "group" <<"[group-id='" <<group_id <<"']" <<"[dp-type='" <<dp_type <<"']" <<"[sub-id='" <<sub_id <<"']";
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

std::shared_ptr<Entity> Pce::DisjointPath::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Pce::DisjointPath::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_lsp_records != nullptr)
    {
        children["group-lsp-records"] = group_lsp_records;
    }

    return children;
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
{

    yang_name = "group-lsp-records"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::DisjointPath::Groups::Group::GroupLspRecords::~GroupLspRecords()
{
}

bool Pce::DisjointPath::Groups::Group::GroupLspRecords::has_data() const
{
    for (std::size_t index=0; index<group_lsp_record.size(); index++)
    {
        if(group_lsp_record[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::DisjointPath::Groups::Group::GroupLspRecords::has_operation() const
{
    for (std::size_t index=0; index<group_lsp_record.size(); index++)
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

std::shared_ptr<Entity> Pce::DisjointPath::Groups::Group::GroupLspRecords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-lsp-record")
    {
        auto c = std::make_shared<Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord>();
        c->parent = this;
        group_lsp_record.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::DisjointPath::Groups::Group::GroupLspRecords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : group_lsp_record)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    disj_path{YType::int32, "disj-path"}
{

    yang_name = "group-lsp-record"; yang_parent_name = "group-lsp-records"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::~GroupLspRecord()
{
}

bool Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::has_data() const
{
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
    path_buffer << "group-lsp-record" <<"[lsp-id='" <<lsp_id <<"']";
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

std::shared_ptr<Entity> Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::DisjointPath::Groups::Group::GroupLspRecords::GroupLspRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "explicit-paths"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::ExplicitPaths::~ExplicitPaths()
{
}

bool Pce::ExplicitPaths::has_data() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::ExplicitPaths::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
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

std::shared_ptr<Entity> Pce::ExplicitPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-path")
    {
        auto c = std::make_shared<Pce::ExplicitPaths::ExplicitPath>();
        c->parent = this;
        explicit_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::ExplicitPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "explicit-path" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::ExplicitPaths::ExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::ExplicitPaths::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Pce::ExplicitPaths::ExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_hops != nullptr)
    {
        children["path-hops"] = path_hops;
    }

    return children;
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
{

    yang_name = "path-hops"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::ExplicitPaths::ExplicitPath::PathHops::~PathHops()
{
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::has_data() const
{
    for (std::size_t index=0; index<path_hop.size(); index++)
    {
        if(path_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::has_operation() const
{
    for (std::size_t index=0; index<path_hop.size(); index++)
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

std::shared_ptr<Entity> Pce::ExplicitPaths::ExplicitPath::PathHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-hop")
    {
        auto c = std::make_shared<Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop>();
        c->parent = this;
        path_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::ExplicitPaths::ExplicitPath::PathHops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : path_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "path-hop" <<"[index='" <<index_ <<"']";
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

std::shared_ptr<Entity> Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

const Enum::YLeaf PceDisjointPath::link {1, "link"};
const Enum::YLeaf PceDisjointPath::node {2, "node"};
const Enum::YLeaf PceDisjointPath::srlg {3, "srlg"};
const Enum::YLeaf PceDisjointPath::srlg_node {4, "srlg-node"};

const Enum::YLeaf PceExplicitPathHop::address {1, "address"};
const Enum::YLeaf PceExplicitPathHop::sid_node {2, "sid-node"};
const Enum::YLeaf PceExplicitPathHop::sid_adjancency {3, "sid-adjancency"};
const Enum::YLeaf PceExplicitPathHop::binding_sid {4, "binding-sid"};


}
}

