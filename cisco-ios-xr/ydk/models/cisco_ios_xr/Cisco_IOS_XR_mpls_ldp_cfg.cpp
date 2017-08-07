
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_ldp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_cfg {

MplsLdp::MplsLdp()
    :
    enable{YType::empty, "enable"}
    	,
    default_vrf(std::make_shared<MplsLdp::DefaultVrf>())
	,global(std::make_shared<MplsLdp::Global>())
	,vrfs(std::make_shared<MplsLdp::Vrfs>())
{
    default_vrf->parent = this;

    global->parent = this;

    vrfs->parent = this;

    yang_name = "mpls-ldp"; yang_parent_name = "Cisco-IOS-XR-mpls-ldp-cfg";
}

MplsLdp::~MplsLdp()
{
}

bool MplsLdp::has_data() const
{
    return enable.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp";

    return path_buffer.str();

}

const EntityPath MplsLdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<MplsLdp::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLdp::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<MplsLdp::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> MplsLdp::clone_ptr() const
{
    return std::make_shared<MplsLdp>();
}

std::string MplsLdp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsLdp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsLdp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsLdp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-vrf" || name == "global" || name == "vrfs" || name == "enable")
        return true;
    return false;
}

MplsLdp::DefaultVrf::DefaultVrf()
    :
    afs(std::make_shared<MplsLdp::DefaultVrf::Afs>())
	,global(std::make_shared<MplsLdp::DefaultVrf::Global>())
	,interfaces(std::make_shared<MplsLdp::DefaultVrf::Interfaces>())
{
    afs->parent = this;

    global->parent = this;

    interfaces->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "mpls-ldp";
}

MplsLdp::DefaultVrf::~DefaultVrf()
{
}

bool MplsLdp::DefaultVrf::has_data() const
{
    return (afs !=  nullptr && afs->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsLdp::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (afs !=  nullptr && afs->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsLdp::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::DefaultVrf::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLdp::DefaultVrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsLdp::DefaultVrf::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void MplsLdp::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "global" || name == "interfaces")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "default-vrf";
}

MplsLdp::DefaultVrf::Afs::~Afs()
{
}

bool MplsLdp::DefaultVrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::DefaultVrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    enable{YType::empty, "enable"}
    	,
    discovery(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Discovery>())
	,label(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label>())
	,neighbor(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Neighbor>())
	,redistribution_protocol(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol>())
	,traffic_engineering(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering>())
{
    discovery->parent = this;

    label->parent = this;

    neighbor->parent = this;

    redistribution_protocol->parent = this;

    traffic_engineering->parent = this;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::DefaultVrf::Afs::Af::~Af()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| (discovery !=  nullptr && discovery->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_data())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_operation())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/afs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label>();
        }
        return label;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "redistribution-protocol")
    {
        if(redistribution_protocol == nullptr)
        {
            redistribution_protocol = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol>();
        }
        return redistribution_protocol;
    }

    if(child_yang_name == "traffic-engineering")
    {
        if(traffic_engineering == nullptr)
        {
            traffic_engineering = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering>();
        }
        return traffic_engineering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    if(redistribution_protocol != nullptr)
    {
        children["redistribution-protocol"] = redistribution_protocol;
    }

    if(traffic_engineering != nullptr)
    {
        children["traffic-engineering"] = traffic_engineering;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery" || name == "label" || name == "neighbor" || name == "redistribution-protocol" || name == "traffic-engineering" || name == "af-name" || name == "enable")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Label()
    :
    local(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local>())
	,remote(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "label"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Afs::Af::Label::~Label()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Label' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Remote()
    :
    accept(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept>())
{
    accept->parent = this;

    yang_name = "remote"; yang_parent_name = "label";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::~Remote()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::has_data() const
{
    return (accept !=  nullptr && accept->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::has_operation() const
{
    return is_set(yfilter)
	|| (accept !=  nullptr && accept->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept>();
        }
        return accept;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept != nullptr)
    {
        children["accept"] = accept;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::Accept()
    :
    peer_accept_policies(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies>())
{
    peer_accept_policies->parent = this;

    yang_name = "accept"; yang_parent_name = "remote";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::~Accept()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::has_data() const
{
    return (peer_accept_policies !=  nullptr && peer_accept_policies->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::has_operation() const
{
    return is_set(yfilter)
	|| (peer_accept_policies !=  nullptr && peer_accept_policies->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accept' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-accept-policies")
    {
        if(peer_accept_policies == nullptr)
        {
            peer_accept_policies = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies>();
        }
        return peer_accept_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_accept_policies != nullptr)
    {
        children["peer-accept-policies"] = peer_accept_policies;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-accept-policies")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicies()
{
    yang_name = "peer-accept-policies"; yang_parent_name = "accept";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::~PeerAcceptPolicies()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_data() const
{
    for (std::size_t index=0; index<peer_accept_policy.size(); index++)
    {
        if(peer_accept_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_accept_policy.size(); index++)
    {
        if(peer_accept_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-accept-policies";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAcceptPolicies' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-accept-policy")
    {
        for(auto const & c : peer_accept_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy>();
        c->parent = this;
        peer_accept_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_accept_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-accept-policy")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicy()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"},
    prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "peer-accept-policy"; yang_parent_name = "peer-accept-policies";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::~PeerAcceptPolicy()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_data() const
{
    return lsr_id.is_set
	|| label_space_id.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-accept-policy" <<"[lsr-id='" <<lsr_id <<"']" <<"[label-space-id='" <<label_space_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAcceptPolicy' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id" || name == "prefix-acl-name")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Local()
    :
    default_route{YType::empty, "default-route"},
    implicit_null_override{YType::str, "implicit-null-override"}
    	,
    advertise(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise>())
	,allocate(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate>())
{
    advertise->parent = this;

    allocate->parent = this;

    yang_name = "local"; yang_parent_name = "label";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::~Local()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::has_data() const
{
    return default_route.is_set
	|| implicit_null_override.is_set
	|| (advertise !=  nullptr && advertise->has_data())
	|| (allocate !=  nullptr && allocate->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| ydk::is_set(implicit_null_override.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (implicit_null_override.is_set || is_set(implicit_null_override.yfilter)) leaf_name_data.push_back(implicit_null_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "allocate")
    {
        if(allocate == nullptr)
        {
            allocate = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate>();
        }
        return allocate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(allocate != nullptr)
    {
        children["allocate"] = allocate;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-null-override")
    {
        implicit_null_override = value;
        implicit_null_override.value_namespace = name_space;
        implicit_null_override.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
    if(value_path == "implicit-null-override")
    {
        implicit_null_override.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "allocate" || name == "default-route" || name == "implicit-null-override")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Advertise()
    :
    disable{YType::empty, "disable"}
    	,
    explicit_null(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull>())
	,interfaces(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces>())
	,peer_advertise_policies(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies>())
	,prefix_advertise_policies(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies>())
{
    explicit_null->parent = this;

    interfaces->parent = this;

    peer_advertise_policies->parent = this;

    prefix_advertise_policies->parent = this;

    yang_name = "advertise"; yang_parent_name = "local";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::~Advertise()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::has_data() const
{
    return disable.is_set
	|| (explicit_null !=  nullptr && explicit_null->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_data())
	|| (prefix_advertise_policies !=  nullptr && prefix_advertise_policies->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (explicit_null !=  nullptr && explicit_null->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_operation())
	|| (prefix_advertise_policies !=  nullptr && prefix_advertise_policies->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-null")
    {
        if(explicit_null == nullptr)
        {
            explicit_null = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull>();
        }
        return explicit_null;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "peer-advertise-policies")
    {
        if(peer_advertise_policies == nullptr)
        {
            peer_advertise_policies = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies>();
        }
        return peer_advertise_policies;
    }

    if(child_yang_name == "prefix-advertise-policies")
    {
        if(prefix_advertise_policies == nullptr)
        {
            prefix_advertise_policies = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies>();
        }
        return prefix_advertise_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_null != nullptr)
    {
        children["explicit-null"] = explicit_null;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(peer_advertise_policies != nullptr)
    {
        children["peer-advertise-policies"] = peer_advertise_policies;
    }

    if(prefix_advertise_policies != nullptr)
    {
        children["prefix-advertise-policies"] = prefix_advertise_policies;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "interfaces" || name == "peer-advertise-policies" || name == "prefix-advertise-policies" || name == "disable")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicies()
{
    yang_name = "peer-advertise-policies"; yang_parent_name = "advertise";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::~PeerAdvertisePolicies()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_data() const
{
    for (std::size_t index=0; index<peer_advertise_policy.size(); index++)
    {
        if(peer_advertise_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_advertise_policy.size(); index++)
    {
        if(peer_advertise_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-advertise-policies";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAdvertisePolicies' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-advertise-policy")
    {
        for(auto const & c : peer_advertise_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy>();
        c->parent = this;
        peer_advertise_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_advertise_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-advertise-policy")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicy()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"},
    prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "peer-advertise-policy"; yang_parent_name = "peer-advertise-policies";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::~PeerAdvertisePolicy()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_data() const
{
    return lsr_id.is_set
	|| label_space_id.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-advertise-policy" <<"[lsr-id='" <<lsr_id <<"']" <<"[label-space-id='" <<label_space_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAdvertisePolicy' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "label-space-id" || name == "prefix-acl-name")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicies()
{
    yang_name = "prefix-advertise-policies"; yang_parent_name = "advertise";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::~PrefixAdvertisePolicies()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::has_data() const
{
    for (std::size_t index=0; index<prefix_advertise_policy.size(); index++)
    {
        if(prefix_advertise_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::has_operation() const
{
    for (std::size_t index=0; index<prefix_advertise_policy.size(); index++)
    {
        if(prefix_advertise_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-advertise-policies";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixAdvertisePolicies' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-advertise-policy")
    {
        for(auto const & c : prefix_advertise_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy>();
        c->parent = this;
        prefix_advertise_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_advertise_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-advertise-policy")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::PrefixAdvertisePolicy()
    :
    prefix_acl_name{YType::str, "prefix-acl-name"},
    advertise_type{YType::enumeration, "advertise-type"},
    peer_acl_name{YType::str, "peer-acl-name"}
{
    yang_name = "prefix-advertise-policy"; yang_parent_name = "prefix-advertise-policies";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::~PrefixAdvertisePolicy()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::has_data() const
{
    return prefix_acl_name.is_set
	|| advertise_type.is_set
	|| peer_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter)
	|| ydk::is_set(advertise_type.yfilter)
	|| ydk::is_set(peer_acl_name.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-advertise-policy" <<"[prefix-acl-name='" <<prefix_acl_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixAdvertisePolicy' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());
    if (advertise_type.is_set || is_set(advertise_type.yfilter)) leaf_name_data.push_back(advertise_type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-type")
    {
        advertise_type = value;
        advertise_type.value_namespace = name_space;
        advertise_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
    if(value_path == "advertise-type")
    {
        advertise_type.yfilter = yfilter;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-acl-name" || name == "advertise-type" || name == "peer-acl-name")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::ExplicitNull()
    :
    explicit_null_type{YType::enumeration, "explicit-null-type"},
    peer_acl_name{YType::str, "peer-acl-name"},
    prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "explicit-null"; yang_parent_name = "advertise";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::~ExplicitNull()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_data() const
{
    return explicit_null_type.is_set
	|| peer_acl_name.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null_type.yfilter)
	|| ydk::is_set(peer_acl_name.yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitNull' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null_type.is_set || is_set(explicit_null_type.yfilter)) leaf_name_data.push_back(explicit_null_type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null-type")
    {
        explicit_null_type = value;
        explicit_null_type.value_namespace = name_space;
        explicit_null_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null-type")
    {
        explicit_null_type.yfilter = yfilter;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null-type" || name == "peer-acl-name" || name == "prefix-acl-name")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "advertise";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::~Interfaces()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_data() const
{
    return interface_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::Allocate()
    :
    allocation_type{YType::enumeration, "allocation-type"},
    prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "allocate"; yang_parent_name = "local";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::~Allocate()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::has_data() const
{
    return allocation_type.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocation_type.yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Allocate' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocation_type.is_set || is_set(allocation_type.yfilter)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocation-type")
    {
        allocation_type = value;
        allocation_type.value_namespace = name_space;
        allocation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocation-type")
    {
        allocation_type.yfilter = yfilter;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation-type" || name == "prefix-acl-name")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Discovery::Discovery()
    :
    transport_address{YType::str, "transport-address"}
    	,
    targeted_hello_accept(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept>())
{
    targeted_hello_accept->parent = this;

    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::has_data() const
{
    return transport_address.is_set
	|| (targeted_hello_accept !=  nullptr && targeted_hello_accept->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_address.yfilter)
	|| (targeted_hello_accept !=  nullptr && targeted_hello_accept->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_address.is_set || is_set(transport_address.yfilter)) leaf_name_data.push_back(transport_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targeted-hello-accept")
    {
        if(targeted_hello_accept == nullptr)
        {
            targeted_hello_accept = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept>();
        }
        return targeted_hello_accept;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(targeted_hello_accept != nullptr)
    {
        children["targeted-hello-accept"] = targeted_hello_accept;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-address")
    {
        transport_address = value;
        transport_address.value_namespace = name_space;
        transport_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-address")
    {
        transport_address.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targeted-hello-accept" || name == "transport-address")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::TargetedHelloAccept()
    :
    accept_type{YType::enumeration, "accept-type"},
    peer_acl_name{YType::str, "peer-acl-name"}
{
    yang_name = "targeted-hello-accept"; yang_parent_name = "discovery";
}

MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::~TargetedHelloAccept()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::has_data() const
{
    return accept_type.is_set
	|| peer_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_type.yfilter)
	|| ydk::is_set(peer_acl_name.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello-accept";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHelloAccept' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_type.is_set || is_set(accept_type.yfilter)) leaf_name_data.push_back(accept_type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-type")
    {
        accept_type = value;
        accept_type.value_namespace = name_space;
        accept_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-type")
    {
        accept_type.yfilter = yfilter;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-type" || name == "peer-acl-name")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::TrafficEngineering()
    :
    auto_tunnel_mesh(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh>())
{
    auto_tunnel_mesh->parent = this;

    yang_name = "traffic-engineering"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::~TrafficEngineering()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::has_data() const
{
    return (auto_tunnel_mesh !=  nullptr && auto_tunnel_mesh->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::has_operation() const
{
    return is_set(yfilter)
	|| (auto_tunnel_mesh !=  nullptr && auto_tunnel_mesh->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-engineering";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficEngineering' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-tunnel-mesh")
    {
        if(auto_tunnel_mesh == nullptr)
        {
            auto_tunnel_mesh = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh>();
        }
        return auto_tunnel_mesh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_tunnel_mesh != nullptr)
    {
        children["auto-tunnel-mesh"] = auto_tunnel_mesh;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-tunnel-mesh")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::AutoTunnelMesh()
    :
    group_all{YType::empty, "group-all"}
    	,
    group_ids(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds>())
{
    group_ids->parent = this;

    yang_name = "auto-tunnel-mesh"; yang_parent_name = "traffic-engineering";
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::~AutoTunnelMesh()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::has_data() const
{
    return group_all.is_set
	|| (group_ids !=  nullptr && group_ids->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_all.yfilter)
	|| (group_ids !=  nullptr && group_ids->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel-mesh";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoTunnelMesh' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_all.is_set || is_set(group_all.yfilter)) leaf_name_data.push_back(group_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-ids")
    {
        if(group_ids == nullptr)
        {
            group_ids = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds>();
        }
        return group_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_ids != nullptr)
    {
        children["group-ids"] = group_ids;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-all")
    {
        group_all = value;
        group_all.value_namespace = name_space;
        group_all.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-all")
    {
        group_all.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-ids" || name == "group-all")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupIds()
{
    yang_name = "group-ids"; yang_parent_name = "auto-tunnel-mesh";
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::~GroupIds()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::has_data() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::has_operation() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-ids";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupIds' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id")
    {
        for(auto const & c : group_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId>();
        c->parent = this;
        group_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::GroupId()
    :
    mesh_group_id{YType::uint32, "mesh-group-id"}
{
    yang_name = "group-id"; yang_parent_name = "group-ids";
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::~GroupId()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::has_data() const
{
    return mesh_group_id.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_id.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id" <<"[mesh-group-id='" <<mesh_group_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupId' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-id")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Neighbor()
    :
    addresses(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses>())
{
    addresses->parent = this;

    yang_name = "neighbor"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::~Neighbor()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::has_data() const
{
    return (addresses !=  nullptr && addresses->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| (addresses !=  nullptr && addresses->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses>();
        }
        return addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "neighbor";
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::~Addresses()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::Address()
    :
    ip_address{YType::str, "ip-address"},
    targeted{YType::empty, "targeted"}
{
    yang_name = "address"; yang_parent_name = "addresses";
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::~Address()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::has_data() const
{
    return ip_address.is_set
	|| targeted.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(targeted.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (targeted.is_set || is_set(targeted.yfilter)) leaf_name_data.push_back(targeted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targeted")
    {
        targeted = value;
        targeted.value_namespace = name_space;
        targeted.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "targeted")
    {
        targeted.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "targeted")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::RedistributionProtocol()
    :
    bgp(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp>())
{
    bgp->parent = this;

    yang_name = "redistribution-protocol"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::~RedistributionProtocol()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-protocol";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistributionProtocol' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::Bgp()
    :
    advertise_to(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo>())
	,as(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As>())
{
    advertise_to->parent = this;

    as->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribution-protocol";
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::~Bgp()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::has_data() const
{
    return (advertise_to !=  nullptr && advertise_to->has_data())
	|| (as !=  nullptr && as->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (advertise_to !=  nullptr && advertise_to->has_operation())
	|| (as !=  nullptr && as->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-to")
    {
        if(advertise_to == nullptr)
        {
            advertise_to = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo>();
        }
        return advertise_to;
    }

    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise_to != nullptr)
    {
        children["advertise-to"] = advertise_to;
    }

    if(as != nullptr)
    {
        children["as"] = as;
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-to" || name == "as")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::As()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "as"; yang_parent_name = "bgp";
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::~As()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'As' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::AdvertiseTo()
    :
    peer_acl_name{YType::str, "peer-acl-name"},
    type{YType::enumeration, "type"}
{
    yang_name = "advertise-to"; yang_parent_name = "bgp";
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::~AdvertiseTo()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::has_data() const
{
    return peer_acl_name.is_set
	|| type.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_acl_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-to";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseTo' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-acl-name" || name == "type")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Global()
    :
    router_id{YType::str, "router-id"}
    	,
    graceful_restart(std::make_shared<MplsLdp::DefaultVrf::Global::GracefulRestart>())
	,neighbor(std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor>())
	,session(std::make_shared<MplsLdp::DefaultVrf::Global::Session>())
{
    graceful_restart->parent = this;

    neighbor->parent = this;

    session->parent = this;

    yang_name = "global"; yang_parent_name = "default-vrf";
}

MplsLdp::DefaultVrf::Global::~Global()
{
}

bool MplsLdp::DefaultVrf::Global::has_data() const
{
    return router_id.is_set
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool MplsLdp::DefaultVrf::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::DefaultVrf::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<MplsLdp::DefaultVrf::Global::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "neighbor" || name == "session" || name == "router-id")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Session::Session()
    :
    downstream_on_demand(std::make_shared<MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand>())
	,protection(std::make_shared<MplsLdp::DefaultVrf::Global::Session::Protection>())
{
    downstream_on_demand->parent = this;

    protection->parent = this;

    yang_name = "session"; yang_parent_name = "global";
}

MplsLdp::DefaultVrf::Global::Session::~Session()
{
}

bool MplsLdp::DefaultVrf::Global::Session::has_data() const
{
    return (downstream_on_demand !=  nullptr && downstream_on_demand->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool MplsLdp::DefaultVrf::Global::Session::has_operation() const
{
    return is_set(yfilter)
	|| (downstream_on_demand !=  nullptr && downstream_on_demand->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "downstream-on-demand")
    {
        if(downstream_on_demand == nullptr)
        {
            downstream_on_demand = std::make_shared<MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand>();
        }
        return downstream_on_demand;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsLdp::DefaultVrf::Global::Session::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(downstream_on_demand != nullptr)
    {
        children["downstream-on-demand"] = downstream_on_demand;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Global::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Global::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downstream-on-demand" || name == "protection")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Session::Protection::Protection()
    :
    duration{YType::uint32, "duration"},
    peer_acl_name{YType::str, "peer-acl-name"},
    protection_type{YType::enumeration, "protection-type"}
{
    yang_name = "protection"; yang_parent_name = "session";
}

MplsLdp::DefaultVrf::Global::Session::Protection::~Protection()
{
}

bool MplsLdp::DefaultVrf::Global::Session::Protection::has_data() const
{
    return duration.is_set
	|| peer_acl_name.is_set
	|| protection_type.is_set;
}

bool MplsLdp::DefaultVrf::Global::Session::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(peer_acl_name.yfilter)
	|| ydk::is_set(protection_type.yfilter);
}

std::string MplsLdp::DefaultVrf::Global::Session::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::Session::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::Session::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::Session::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Global::Session::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::Session::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::Session::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "peer-acl-name" || name == "protection-type")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::DownstreamOnDemand()
    :
    peer_acl_name{YType::str, "peer-acl-name"},
    type{YType::enumeration, "type"}
{
    yang_name = "downstream-on-demand"; yang_parent_name = "session";
}

MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::~DownstreamOnDemand()
{
}

bool MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::has_data() const
{
    return peer_acl_name.is_set
	|| type.is_set;
}

bool MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_acl_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-on-demand";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-acl-name" || name == "type")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Neighbor::Neighbor()
    :
    password{YType::str, "password"}
    	,
    dual_stack(std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::DualStack>())
	,ldp_ids(std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds>())
{
    dual_stack->parent = this;

    ldp_ids->parent = this;

    yang_name = "neighbor"; yang_parent_name = "global";
}

MplsLdp::DefaultVrf::Global::Neighbor::~Neighbor()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::has_data() const
{
    return password.is_set
	|| (dual_stack !=  nullptr && dual_stack->has_data())
	|| (ldp_ids !=  nullptr && ldp_ids->has_data());
}

bool MplsLdp::DefaultVrf::Global::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| (dual_stack !=  nullptr && dual_stack->has_operation())
	|| (ldp_ids !=  nullptr && ldp_ids->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dual-stack")
    {
        if(dual_stack == nullptr)
        {
            dual_stack = std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::DualStack>();
        }
        return dual_stack;
    }

    if(child_yang_name == "ldp-ids")
    {
        if(ldp_ids == nullptr)
        {
            ldp_ids = std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds>();
        }
        return ldp_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dual_stack != nullptr)
    {
        children["dual-stack"] = dual_stack;
    }

    if(ldp_ids != nullptr)
    {
        children["ldp-ids"] = ldp_ids;
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-stack" || name == "ldp-ids" || name == "password")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpIds()
{
    yang_name = "ldp-ids"; yang_parent_name = "neighbor";
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::~LdpIds()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::has_data() const
{
    for (std::size_t index=0; index<ldp_id.size(); index++)
    {
        if(ldp_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::has_operation() const
{
    for (std::size_t index=0; index<ldp_id.size(); index++)
    {
        if(ldp_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-ids";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-id")
    {
        for(auto const & c : ldp_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId>();
        c->parent = this;
        ldp_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ldp_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-id")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::LdpId()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"}
    	,
    password(std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password>())
{
    password->parent = this;

    yang_name = "ldp-id"; yang_parent_name = "ldp-ids";
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::~LdpId()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::has_data() const
{
    return lsr_id.is_set
	|| label_space_id.is_set
	|| (password !=  nullptr && password->has_data());
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-id" <<"[lsr-id='" <<lsr_id <<"']" <<"[label-space-id='" <<label_space_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/ldp-ids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "lsr-id" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::Password()
    :
    command_type{YType::enumeration, "command-type"},
    password{YType::str, "password"}
{
    yang_name = "password"; yang_parent_name = "ldp-id";
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::~Password()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::has_data() const
{
    return command_type.is_set
	|| password.is_set;
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command_type.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command_type.is_set || is_set(command_type.yfilter)) leaf_name_data.push_back(command_type.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command-type")
    {
        command_type = value;
        command_type.value_namespace = name_space;
        command_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command-type")
    {
        command_type.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-type" || name == "password")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::DualStack()
    :
    tlv_compliance{YType::empty, "tlv-compliance"}
    	,
    transport_connection(std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection>())
{
    transport_connection->parent = this;

    yang_name = "dual-stack"; yang_parent_name = "neighbor";
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::~DualStack()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::has_data() const
{
    return tlv_compliance.is_set
	|| (transport_connection !=  nullptr && transport_connection->has_data());
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv_compliance.yfilter)
	|| (transport_connection !=  nullptr && transport_connection->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-stack";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_compliance.is_set || is_set(tlv_compliance.yfilter)) leaf_name_data.push_back(tlv_compliance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport-connection")
    {
        if(transport_connection == nullptr)
        {
            transport_connection = std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection>();
        }
        return transport_connection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport_connection != nullptr)
    {
        children["transport-connection"] = transport_connection;
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::DualStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-compliance")
    {
        tlv_compliance = value;
        tlv_compliance.value_namespace = name_space;
        tlv_compliance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::Neighbor::DualStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-compliance")
    {
        tlv_compliance.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-connection" || name == "tlv-compliance")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::TransportConnection()
    :
    max_wait{YType::uint32, "max-wait"}
    	,
    prefer(std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer>())
{
    prefer->parent = this;

    yang_name = "transport-connection"; yang_parent_name = "dual-stack";
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::~TransportConnection()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::has_data() const
{
    return max_wait.is_set
	|| (prefer !=  nullptr && prefer->has_data());
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_wait.yfilter)
	|| (prefer !=  nullptr && prefer->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-connection";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/dual-stack/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefer")
    {
        if(prefer == nullptr)
        {
            prefer = std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer>();
        }
        return prefer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefer != nullptr)
    {
        children["prefer"] = prefer;
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-wait")
    {
        max_wait = value;
        max_wait.value_namespace = name_space;
        max_wait.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefer" || name == "max-wait")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::Prefer()
    :
    ipv4{YType::empty, "ipv4"}
{
    yang_name = "prefer"; yang_parent_name = "transport-connection";
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::~Prefer()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::has_data() const
{
    return ipv4.is_set;
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefer";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/dual-stack/transport-connection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::GracefulRestart::GracefulRestart()
    :
    helper_peer(std::make_shared<MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer>())
{
    helper_peer->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "global";
}

MplsLdp::DefaultVrf::Global::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::has_data() const
{
    return (helper_peer !=  nullptr && helper_peer->has_data());
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (helper_peer !=  nullptr && helper_peer->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-peer")
    {
        if(helper_peer == nullptr)
        {
            helper_peer = std::make_shared<MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer>();
        }
        return helper_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper_peer != nullptr)
    {
        children["helper-peer"] = helper_peer;
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Global::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-peer")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::HelperPeer()
    :
    maintain_on_local_reset{YType::str, "maintain-on-local-reset"}
{
    yang_name = "helper-peer"; yang_parent_name = "graceful-restart";
}

MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::~HelperPeer()
{
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::has_data() const
{
    return maintain_on_local_reset.is_set;
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintain_on_local_reset.yfilter);
}

std::string MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-peer";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintain_on_local_reset.is_set || is_set(maintain_on_local_reset.yfilter)) leaf_name_data.push_back(maintain_on_local_reset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintain-on-local-reset")
    {
        maintain_on_local_reset = value;
        maintain_on_local_reset.value_namespace = name_space;
        maintain_on_local_reset.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintain-on-local-reset")
    {
        maintain_on_local_reset.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maintain-on-local-reset")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "default-vrf";
}

MplsLdp::DefaultVrf::Interfaces::~Interfaces()
{
}

bool MplsLdp::DefaultVrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    enable{YType::empty, "enable"}
    	,
    afs(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs>())
	,global(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global>())
{
    afs->parent = this;

    global->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::DefaultVrf::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| enable.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (afs !=  nullptr && afs->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "global" || name == "interface-name" || name == "enable")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "interface";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::~Afs()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    enable{YType::empty, "enable"}
    	,
    discovery(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery>())
	,igp(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp>())
	,mldp(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp>())
{
    discovery->parent = this;

    igp->parent = this;

    mldp->parent = this;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::~Af()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| (discovery !=  nullptr && discovery->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (mldp !=  nullptr && mldp->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (mldp !=  nullptr && mldp->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "mldp")
    {
        if(mldp == nullptr)
        {
            mldp = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp>();
        }
        return mldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    if(mldp != nullptr)
    {
        children["mldp"] = mldp;
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery" || name == "igp" || name == "mldp" || name == "af-name" || name == "enable")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::Discovery()
    :
    transport_address(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress>())
{
    transport_address->parent = this;

    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::has_data() const
{
    return (transport_address !=  nullptr && transport_address->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| (transport_address !=  nullptr && transport_address->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport-address")
    {
        if(transport_address == nullptr)
        {
            transport_address = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress>();
        }
        return transport_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport_address != nullptr)
    {
        children["transport-address"] = transport_address;
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-address")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::TransportAddress()
    :
    address{YType::str, "address"},
    address_type{YType::enumeration, "address-type"}
{
    yang_name = "transport-address"; yang_parent_name = "discovery";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::~TransportAddress()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_data() const
{
    return address.is_set
	|| address_type.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_type.yfilter);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-address";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransportAddress' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-type")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::Igp()
    :
    disable_auto_config{YType::empty, "disable-auto-config"}
{
    yang_name = "igp"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::~Igp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::has_data() const
{
    return disable_auto_config.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_auto_config.yfilter);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igp' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_auto_config.is_set || is_set(disable_auto_config.yfilter)) leaf_name_data.push_back(disable_auto_config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-auto-config")
    {
        disable_auto_config = value;
        disable_auto_config.value_namespace = name_space;
        disable_auto_config.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-auto-config")
    {
        disable_auto_config.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable-auto-config")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::Mldp()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "mldp"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::~Mldp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::has_data() const
{
    return disable.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mldp' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Global()
    :
    discovery(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery>())
	,igp(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp>())
{
    discovery->parent = this;

    igp->parent = this;

    yang_name = "global"; yang_parent_name = "interface";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::~Global()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::has_data() const
{
    return (discovery !=  nullptr && discovery->has_data())
	|| (igp !=  nullptr && igp->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::has_operation() const
{
    return is_set(yfilter)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (igp !=  nullptr && igp->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery" || name == "igp")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::Discovery()
    :
    disable_quick_start{YType::empty, "disable-quick-start"}
    	,
    link_hello(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello>())
{
    link_hello->parent = this;

    yang_name = "discovery"; yang_parent_name = "global";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::~Discovery()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::has_data() const
{
    return disable_quick_start.is_set
	|| (link_hello !=  nullptr && link_hello->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_quick_start.yfilter)
	|| (link_hello !=  nullptr && link_hello->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_quick_start.is_set || is_set(disable_quick_start.yfilter)) leaf_name_data.push_back(disable_quick_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-hello")
    {
        if(link_hello == nullptr)
        {
            link_hello = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello>();
        }
        return link_hello;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_hello != nullptr)
    {
        children["link-hello"] = link_hello;
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-quick-start")
    {
        disable_quick_start = value;
        disable_quick_start.value_namespace = name_space;
        disable_quick_start.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-quick-start")
    {
        disable_quick_start.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-hello" || name == "disable-quick-start")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::LinkHello()
    :
    dual_stack{YType::enumeration, "dual-stack"},
    hold_time{YType::uint32, "hold-time"},
    interval{YType::uint32, "interval"}
{
    yang_name = "link-hello"; yang_parent_name = "discovery";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::~LinkHello()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::has_data() const
{
    return dual_stack.is_set
	|| hold_time.is_set
	|| interval.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_stack.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHello' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_stack.is_set || is_set(dual_stack.yfilter)) leaf_name_data.push_back(dual_stack.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-stack")
    {
        dual_stack = value;
        dual_stack.value_namespace = name_space;
        dual_stack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-stack")
    {
        dual_stack.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-stack" || name == "hold-time" || name == "interval")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Igp()
    :
    sync(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync>())
{
    sync->parent = this;

    yang_name = "igp"; yang_parent_name = "global";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::~Igp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::has_data() const
{
    return (sync !=  nullptr && sync->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::has_operation() const
{
    return is_set(yfilter)
	|| (sync !=  nullptr && sync->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igp' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync")
    {
        if(sync == nullptr)
        {
            sync = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync>();
        }
        return sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync != nullptr)
    {
        children["sync"] = sync;
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Sync()
    :
    delay(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay>())
{
    delay->parent = this;

    yang_name = "sync"; yang_parent_name = "igp";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::~Sync()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sync' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::Delay()
    :
    on_session_up(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp>())
{
    on_session_up->parent = this;

    yang_name = "delay"; yang_parent_name = "sync";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::~Delay()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::has_data() const
{
    return (on_session_up !=  nullptr && on_session_up->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::has_operation() const
{
    return is_set(yfilter)
	|| (on_session_up !=  nullptr && on_session_up->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-session-up")
    {
        if(on_session_up == nullptr)
        {
            on_session_up = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp>();
        }
        return on_session_up;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_session_up != nullptr)
    {
        children["on-session-up"] = on_session_up;
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-session-up")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::OnSessionUp()
    :
    disable{YType::empty, "disable"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "on-session-up"; yang_parent_name = "delay";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::~OnSessionUp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::has_data() const
{
    return disable.is_set
	|| timeout.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-session-up";

    return path_buffer.str();

}

const EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OnSessionUp' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "timeout")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "mpls-ldp";
}

MplsLdp::Vrfs::~Vrfs()
{
}

bool MplsLdp::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    enable{YType::empty, "enable"}
    	,
    afs(std::make_shared<MplsLdp::Vrfs::Vrf::Afs>())
	,global(std::make_shared<MplsLdp::Vrfs::Vrf::Global>())
	,interfaces(std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces>())
{
    afs->parent = this;

    global->parent = this;

    interfaces->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

MplsLdp::Vrfs::Vrf::~Vrf()
{
}

bool MplsLdp::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| enable.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsLdp::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (afs !=  nullptr && afs->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLdp::Vrfs::Vrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "global" || name == "interfaces" || name == "vrf-name" || name == "enable")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Global()
    :
    router_id{YType::str, "router-id"}
    	,
    graceful_restart(std::make_shared<MplsLdp::Vrfs::Vrf::Global::GracefulRestart>())
	,neighbor(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor>())
	,session(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Session>())
{
    graceful_restart->parent = this;

    neighbor->parent = this;

    session->parent = this;

    yang_name = "global"; yang_parent_name = "vrf";
}

MplsLdp::Vrfs::Vrf::Global::~Global()
{
}

bool MplsLdp::Vrfs::Vrf::Global::has_data() const
{
    return router_id.is_set
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::Vrfs::Vrf::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "neighbor" || name == "session" || name == "router-id")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Session::Session()
    :
    downstream_on_demand(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand>())
{
    downstream_on_demand->parent = this;

    yang_name = "session"; yang_parent_name = "global";
}

MplsLdp::Vrfs::Vrf::Global::Session::~Session()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Session::has_data() const
{
    return (downstream_on_demand !=  nullptr && downstream_on_demand->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::Session::has_operation() const
{
    return is_set(yfilter)
	|| (downstream_on_demand !=  nullptr && downstream_on_demand->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Global::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Session' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Global::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "downstream-on-demand")
    {
        if(downstream_on_demand == nullptr)
        {
            downstream_on_demand = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand>();
        }
        return downstream_on_demand;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Global::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(downstream_on_demand != nullptr)
    {
        children["downstream-on-demand"] = downstream_on_demand;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Global::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Global::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downstream-on-demand")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::DownstreamOnDemand()
    :
    peer_acl_name{YType::str, "peer-acl-name"},
    type{YType::enumeration, "type"}
{
    yang_name = "downstream-on-demand"; yang_parent_name = "session";
}

MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::~DownstreamOnDemand()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::has_data() const
{
    return peer_acl_name.is_set
	|| type.is_set;
}

bool MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_acl_name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-on-demand";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DownstreamOnDemand' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-acl-name" || name == "type")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::Neighbor()
    :
    password{YType::str, "password"}
    	,
    ldp_ids(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds>())
{
    ldp_ids->parent = this;

    yang_name = "neighbor"; yang_parent_name = "global";
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::~Neighbor()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::has_data() const
{
    return password.is_set
	|| (ldp_ids !=  nullptr && ldp_ids->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| (ldp_ids !=  nullptr && ldp_ids->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Global::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Global::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-ids")
    {
        if(ldp_ids == nullptr)
        {
            ldp_ids = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds>();
        }
        return ldp_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Global::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ldp_ids != nullptr)
    {
        children["ldp-ids"] = ldp_ids;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-ids" || name == "password")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpIds()
{
    yang_name = "ldp-ids"; yang_parent_name = "neighbor";
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::~LdpIds()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::has_data() const
{
    for (std::size_t index=0; index<ldp_id.size(); index++)
    {
        if(ldp_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::has_operation() const
{
    for (std::size_t index=0; index<ldp_id.size(); index++)
    {
        if(ldp_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-ids";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpIds' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-id")
    {
        for(auto const & c : ldp_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId>();
        c->parent = this;
        ldp_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ldp_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-id")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::LdpId()
    :
    lsr_id{YType::str, "lsr-id"},
    label_space_id{YType::uint32, "label-space-id"}
    	,
    password(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password>())
{
    password->parent = this;

    yang_name = "ldp-id"; yang_parent_name = "ldp-ids";
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::~LdpId()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::has_data() const
{
    return lsr_id.is_set
	|| label_space_id.is_set
	|| (password !=  nullptr && password->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-id" <<"[lsr-id='" <<lsr_id <<"']" <<"[label-space-id='" <<label_space_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpId' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "lsr-id" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::Password()
    :
    command_type{YType::enumeration, "command-type"},
    password{YType::str, "password"}
{
    yang_name = "password"; yang_parent_name = "ldp-id";
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::~Password()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::has_data() const
{
    return command_type.is_set
	|| password.is_set;
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command_type.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command_type.is_set || is_set(command_type.yfilter)) leaf_name_data.push_back(command_type.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command-type")
    {
        command_type = value;
        command_type.value_namespace = name_space;
        command_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command-type")
    {
        command_type.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-type" || name == "password")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::GracefulRestart::GracefulRestart()
    :
    helper_peer(std::make_shared<MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer>())
{
    helper_peer->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "global";
}

MplsLdp::Vrfs::Vrf::Global::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::has_data() const
{
    return (helper_peer !=  nullptr && helper_peer->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (helper_peer !=  nullptr && helper_peer->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Global::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-peer")
    {
        if(helper_peer == nullptr)
        {
            helper_peer = std::make_shared<MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer>();
        }
        return helper_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper_peer != nullptr)
    {
        children["helper-peer"] = helper_peer;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Global::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-peer")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::HelperPeer()
    :
    maintain_on_local_reset{YType::str, "maintain-on-local-reset"}
{
    yang_name = "helper-peer"; yang_parent_name = "graceful-restart";
}

MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::~HelperPeer()
{
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::has_data() const
{
    return maintain_on_local_reset.is_set;
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintain_on_local_reset.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-peer";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperPeer' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintain_on_local_reset.is_set || is_set(maintain_on_local_reset.yfilter)) leaf_name_data.push_back(maintain_on_local_reset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintain-on-local-reset")
    {
        maintain_on_local_reset = value;
        maintain_on_local_reset.value_namespace = name_space;
        maintain_on_local_reset.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintain-on-local-reset")
    {
        maintain_on_local_reset.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maintain-on-local-reset")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "vrf";
}

MplsLdp::Vrfs::Vrf::Afs::~Afs()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    enable{YType::empty, "enable"}
    	,
    discovery(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Discovery>())
	,label(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label>())
{
    discovery->parent = this;

    label->parent = this;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| (discovery !=  nullptr && discovery->has_data())
	|| (label !=  nullptr && label->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (label !=  nullptr && label->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label>();
        }
        return label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery" || name == "label" || name == "af-name" || name == "enable")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::Discovery()
    :
    transport_address{YType::str, "transport-address"}
{
    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::has_data() const
{
    return transport_address.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_address.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_address.is_set || is_set(transport_address.yfilter)) leaf_name_data.push_back(transport_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-address")
    {
        transport_address = value;
        transport_address.value_namespace = name_space;
        transport_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-address")
    {
        transport_address.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-address")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Label()
    :
    local(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local>())
	,remote(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "label"; yang_parent_name = "af";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::~Label()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Label' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Remote()
    :
    accept(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept>())
{
    accept->parent = this;

    yang_name = "remote"; yang_parent_name = "label";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::~Remote()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::has_data() const
{
    return (accept !=  nullptr && accept->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::has_operation() const
{
    return is_set(yfilter)
	|| (accept !=  nullptr && accept->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept>();
        }
        return accept;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept != nullptr)
    {
        children["accept"] = accept;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::Accept()
    :
    peer_accept_policies(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies>())
{
    peer_accept_policies->parent = this;

    yang_name = "accept"; yang_parent_name = "remote";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::~Accept()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::has_data() const
{
    return (peer_accept_policies !=  nullptr && peer_accept_policies->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::has_operation() const
{
    return is_set(yfilter)
	|| (peer_accept_policies !=  nullptr && peer_accept_policies->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accept' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-accept-policies")
    {
        if(peer_accept_policies == nullptr)
        {
            peer_accept_policies = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies>();
        }
        return peer_accept_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_accept_policies != nullptr)
    {
        children["peer-accept-policies"] = peer_accept_policies;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-accept-policies")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicies()
{
    yang_name = "peer-accept-policies"; yang_parent_name = "accept";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::~PeerAcceptPolicies()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_data() const
{
    for (std::size_t index=0; index<peer_accept_policy.size(); index++)
    {
        if(peer_accept_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_accept_policy.size(); index++)
    {
        if(peer_accept_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-accept-policies";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAcceptPolicies' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-accept-policy")
    {
        for(auto const & c : peer_accept_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy>();
        c->parent = this;
        peer_accept_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_accept_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-accept-policy")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicy()
    :
    label_space_id{YType::uint32, "label-space-id"}
    	,
    peer_accept_policy_data(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData>())
{
    peer_accept_policy_data->parent = this;

    yang_name = "peer-accept-policy"; yang_parent_name = "peer-accept-policies";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::~PeerAcceptPolicy()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_data() const
{
    for (std::size_t index=0; index<lsr_id.size(); index++)
    {
        if(lsr_id[index]->has_data())
            return true;
    }
    return label_space_id.is_set
	|| (peer_accept_policy_data !=  nullptr && peer_accept_policy_data->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_operation() const
{
    for (std::size_t index=0; index<lsr_id.size(); index++)
    {
        if(lsr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| (peer_accept_policy_data !=  nullptr && peer_accept_policy_data->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-accept-policy" <<"[label-space-id='" <<label_space_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAcceptPolicy' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsr-id")
    {
        for(auto const & c : lsr_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId>();
        c->parent = this;
        lsr_id.push_back(c);
        return c;
    }

    if(child_yang_name == "peer-accept-policy-data")
    {
        if(peer_accept_policy_data == nullptr)
        {
            peer_accept_policy_data = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData>();
        }
        return peer_accept_policy_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsr_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(peer_accept_policy_data != nullptr)
    {
        children["peer-accept-policy-data"] = peer_accept_policy_data;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "peer-accept-policy-data" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::PeerAcceptPolicyData()
    :
    prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "peer-accept-policy-data"; yang_parent_name = "peer-accept-policy";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::~PeerAcceptPolicyData()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::has_data() const
{
    return prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-accept-policy-data";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAcceptPolicyData' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-acl-name")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::LsrId()
    :
    lsr_id{YType::str, "lsr-id"},
    prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "lsr-id"; yang_parent_name = "peer-accept-policy";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::~LsrId()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::has_data() const
{
    return lsr_id.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsr-id" <<"[lsr-id='" <<lsr_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsrId' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "prefix-acl-name")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Local()
    :
    default_route{YType::empty, "default-route"},
    implicit_null_override{YType::str, "implicit-null-override"}
    	,
    advertise(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise>())
	,allocate(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate>())
{
    advertise->parent = this;

    allocate->parent = this;

    yang_name = "local"; yang_parent_name = "label";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::~Local()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::has_data() const
{
    return default_route.is_set
	|| implicit_null_override.is_set
	|| (advertise !=  nullptr && advertise->has_data())
	|| (allocate !=  nullptr && allocate->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| ydk::is_set(implicit_null_override.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (implicit_null_override.is_set || is_set(implicit_null_override.yfilter)) leaf_name_data.push_back(implicit_null_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "allocate")
    {
        if(allocate == nullptr)
        {
            allocate = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate>();
        }
        return allocate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(allocate != nullptr)
    {
        children["allocate"] = allocate;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-null-override")
    {
        implicit_null_override = value;
        implicit_null_override.value_namespace = name_space;
        implicit_null_override.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
    if(value_path == "implicit-null-override")
    {
        implicit_null_override.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "allocate" || name == "default-route" || name == "implicit-null-override")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Advertise()
    :
    disable{YType::empty, "disable"}
    	,
    explicit_null(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull>())
	,interfaces(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces>())
	,peer_advertise_policies(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies>())
{
    explicit_null->parent = this;

    interfaces->parent = this;

    peer_advertise_policies->parent = this;

    yang_name = "advertise"; yang_parent_name = "local";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::~Advertise()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::has_data() const
{
    return disable.is_set
	|| (explicit_null !=  nullptr && explicit_null->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (explicit_null !=  nullptr && explicit_null->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-null")
    {
        if(explicit_null == nullptr)
        {
            explicit_null = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull>();
        }
        return explicit_null;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "peer-advertise-policies")
    {
        if(peer_advertise_policies == nullptr)
        {
            peer_advertise_policies = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies>();
        }
        return peer_advertise_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_null != nullptr)
    {
        children["explicit-null"] = explicit_null;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(peer_advertise_policies != nullptr)
    {
        children["peer-advertise-policies"] = peer_advertise_policies;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "interfaces" || name == "peer-advertise-policies" || name == "disable")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicies()
{
    yang_name = "peer-advertise-policies"; yang_parent_name = "advertise";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::~PeerAdvertisePolicies()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_data() const
{
    for (std::size_t index=0; index<peer_advertise_policy.size(); index++)
    {
        if(peer_advertise_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_advertise_policy.size(); index++)
    {
        if(peer_advertise_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-advertise-policies";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAdvertisePolicies' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-advertise-policy")
    {
        for(auto const & c : peer_advertise_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy>();
        c->parent = this;
        peer_advertise_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_advertise_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-advertise-policy")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicy()
    :
    label_space_id{YType::uint32, "label-space-id"}
    	,
    peer_advertise_policy_data(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData>())
{
    peer_advertise_policy_data->parent = this;

    yang_name = "peer-advertise-policy"; yang_parent_name = "peer-advertise-policies";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::~PeerAdvertisePolicy()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_data() const
{
    for (std::size_t index=0; index<lsr_id.size(); index++)
    {
        if(lsr_id[index]->has_data())
            return true;
    }
    return label_space_id.is_set
	|| (peer_advertise_policy_data !=  nullptr && peer_advertise_policy_data->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_operation() const
{
    for (std::size_t index=0; index<lsr_id.size(); index++)
    {
        if(lsr_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_space_id.yfilter)
	|| (peer_advertise_policy_data !=  nullptr && peer_advertise_policy_data->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-advertise-policy" <<"[label-space-id='" <<label_space_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAdvertisePolicy' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsr-id")
    {
        for(auto const & c : lsr_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId>();
        c->parent = this;
        lsr_id.push_back(c);
        return c;
    }

    if(child_yang_name == "peer-advertise-policy-data")
    {
        if(peer_advertise_policy_data == nullptr)
        {
            peer_advertise_policy_data = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData>();
        }
        return peer_advertise_policy_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsr_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(peer_advertise_policy_data != nullptr)
    {
        children["peer-advertise-policy-data"] = peer_advertise_policy_data;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
        label_space_id.value_namespace = name_space;
        label_space_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-space-id")
    {
        label_space_id.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "peer-advertise-policy-data" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::PeerAdvertisePolicyData()
    :
    prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "peer-advertise-policy-data"; yang_parent_name = "peer-advertise-policy";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::~PeerAdvertisePolicyData()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::has_data() const
{
    return prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-advertise-policy-data";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAdvertisePolicyData' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-acl-name")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::LsrId()
    :
    lsr_id{YType::str, "lsr-id"},
    prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "lsr-id"; yang_parent_name = "peer-advertise-policy";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::~LsrId()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::has_data() const
{
    return lsr_id.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsr-id" <<"[lsr-id='" <<lsr_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsrId' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsr-id" || name == "prefix-acl-name")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "advertise";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::~Interfaces()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_data() const
{
    return interface_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::ExplicitNull()
    :
    explicit_null_type{YType::enumeration, "explicit-null-type"},
    peer_acl_name{YType::str, "peer-acl-name"},
    prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "explicit-null"; yang_parent_name = "advertise";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::~ExplicitNull()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_data() const
{
    return explicit_null_type.is_set
	|| peer_acl_name.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null_type.yfilter)
	|| ydk::is_set(peer_acl_name.yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitNull' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null_type.is_set || is_set(explicit_null_type.yfilter)) leaf_name_data.push_back(explicit_null_type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null-type")
    {
        explicit_null_type = value;
        explicit_null_type.value_namespace = name_space;
        explicit_null_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null-type")
    {
        explicit_null_type.yfilter = yfilter;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null-type" || name == "peer-acl-name" || name == "prefix-acl-name")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::Allocate()
    :
    allocation_type{YType::enumeration, "allocation-type"},
    prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "allocate"; yang_parent_name = "local";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::~Allocate()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::has_data() const
{
    return allocation_type.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocation_type.yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Allocate' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocation_type.is_set || is_set(allocation_type.yfilter)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocation-type")
    {
        allocation_type = value;
        allocation_type.value_namespace = name_space;
        allocation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocation-type")
    {
        allocation_type.yfilter = yfilter;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation-type" || name == "prefix-acl-name")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "vrf";
}

MplsLdp::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    enable{YType::empty, "enable"}
    	,
    afs(std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs>())
{
    afs->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| enable.is_set
	|| (afs !=  nullptr && afs->has_data());
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "interface-name" || name == "enable")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "interface";
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::~Afs()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    enable{YType::empty, "enable"}
    	,
    discovery(std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery>())
{
    discovery->parent = this;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::~Af()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| (discovery !=  nullptr && discovery->has_data());
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (discovery !=  nullptr && discovery->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery>();
        }
        return discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery" || name == "af-name" || name == "enable")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::Discovery()
    :
    transport_address(std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress>())
{
    transport_address->parent = this;

    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::has_data() const
{
    return (transport_address !=  nullptr && transport_address->has_data());
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| (transport_address !=  nullptr && transport_address->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport-address")
    {
        if(transport_address == nullptr)
        {
            transport_address = std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress>();
        }
        return transport_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport_address != nullptr)
    {
        children["transport-address"] = transport_address;
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-address")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::TransportAddress()
    :
    address{YType::str, "address"},
    address_type{YType::enumeration, "address-type"}
{
    yang_name = "transport-address"; yang_parent_name = "discovery";
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::~TransportAddress()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_data() const
{
    return address.is_set
	|| address_type.is_set;
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_type.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-address";

    return path_buffer.str();

}

const EntityPath MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransportAddress' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-type")
        return true;
    return false;
}

MplsLdp::Global::Global()
    :
    disable_implicit_ipv4{YType::empty, "disable-implicit-ipv4"},
    ltrace_buf_multiplier{YType::uint32, "ltrace-buf-multiplier"}
    	,
    discovery(std::make_shared<MplsLdp::Global::Discovery>())
	,enable_logging(std::make_shared<MplsLdp::Global::EnableLogging>())
	,entropy_label(std::make_shared<MplsLdp::Global::EntropyLabel>())
	,graceful_restart(std::make_shared<MplsLdp::Global::GracefulRestart>())
	,igp(std::make_shared<MplsLdp::Global::Igp>())
	,mldp(std::make_shared<MplsLdp::Global::Mldp>())
	,nsr(std::make_shared<MplsLdp::Global::Nsr>())
	,session(std::make_shared<MplsLdp::Global::Session>())
	,signalling(std::make_shared<MplsLdp::Global::Signalling>())
{
    discovery->parent = this;

    enable_logging->parent = this;

    entropy_label->parent = this;

    graceful_restart->parent = this;

    igp->parent = this;

    mldp->parent = this;

    nsr->parent = this;

    session->parent = this;

    signalling->parent = this;

    yang_name = "global"; yang_parent_name = "mpls-ldp";
}

MplsLdp::Global::~Global()
{
}

bool MplsLdp::Global::has_data() const
{
    return disable_implicit_ipv4.is_set
	|| ltrace_buf_multiplier.is_set
	|| (discovery !=  nullptr && discovery->has_data())
	|| (enable_logging !=  nullptr && enable_logging->has_data())
	|| (entropy_label !=  nullptr && entropy_label->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (mldp !=  nullptr && mldp->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (signalling !=  nullptr && signalling->has_data());
}

bool MplsLdp::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_implicit_ipv4.yfilter)
	|| ydk::is_set(ltrace_buf_multiplier.yfilter)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (enable_logging !=  nullptr && enable_logging->has_operation())
	|| (entropy_label !=  nullptr && entropy_label->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (mldp !=  nullptr && mldp->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation());
}

std::string MplsLdp::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_implicit_ipv4.is_set || is_set(disable_implicit_ipv4.yfilter)) leaf_name_data.push_back(disable_implicit_ipv4.get_name_leafdata());
    if (ltrace_buf_multiplier.is_set || is_set(ltrace_buf_multiplier.yfilter)) leaf_name_data.push_back(ltrace_buf_multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::Global::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "enable-logging")
    {
        if(enable_logging == nullptr)
        {
            enable_logging = std::make_shared<MplsLdp::Global::EnableLogging>();
        }
        return enable_logging;
    }

    if(child_yang_name == "entropy-label")
    {
        if(entropy_label == nullptr)
        {
            entropy_label = std::make_shared<MplsLdp::Global::EntropyLabel>();
        }
        return entropy_label;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<MplsLdp::Global::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "mldp")
    {
        if(mldp == nullptr)
        {
            mldp = std::make_shared<MplsLdp::Global::Mldp>();
        }
        return mldp;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<MplsLdp::Global::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<MplsLdp::Global::Session>();
        }
        return session;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<MplsLdp::Global::Signalling>();
        }
        return signalling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(enable_logging != nullptr)
    {
        children["enable-logging"] = enable_logging;
    }

    if(entropy_label != nullptr)
    {
        children["entropy-label"] = entropy_label;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    if(mldp != nullptr)
    {
        children["mldp"] = mldp;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(signalling != nullptr)
    {
        children["signalling"] = signalling;
    }

    return children;
}

void MplsLdp::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-implicit-ipv4")
    {
        disable_implicit_ipv4 = value;
        disable_implicit_ipv4.value_namespace = name_space;
        disable_implicit_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ltrace-buf-multiplier")
    {
        ltrace_buf_multiplier = value;
        ltrace_buf_multiplier.value_namespace = name_space;
        ltrace_buf_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-implicit-ipv4")
    {
        disable_implicit_ipv4.yfilter = yfilter;
    }
    if(value_path == "ltrace-buf-multiplier")
    {
        ltrace_buf_multiplier.yfilter = yfilter;
    }
}

bool MplsLdp::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery" || name == "enable-logging" || name == "entropy-label" || name == "graceful-restart" || name == "igp" || name == "mldp" || name == "nsr" || name == "session" || name == "signalling" || name == "disable-implicit-ipv4" || name == "ltrace-buf-multiplier")
        return true;
    return false;
}

MplsLdp::Global::EntropyLabel::EntropyLabel()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "entropy-label"; yang_parent_name = "global";
}

MplsLdp::Global::EntropyLabel::~EntropyLabel()
{
}

bool MplsLdp::Global::EntropyLabel::has_data() const
{
    return enable.is_set;
}

bool MplsLdp::Global::EntropyLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsLdp::Global::EntropyLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entropy-label";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::EntropyLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::EntropyLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::EntropyLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::EntropyLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::EntropyLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::Global::EntropyLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsLdp::Global::Session::Session()
    :
    hold_time{YType::uint32, "hold-time"}
    	,
    backoff_time(std::make_shared<MplsLdp::Global::Session::BackoffTime>())
{
    backoff_time->parent = this;

    yang_name = "session"; yang_parent_name = "global";
}

MplsLdp::Global::Session::~Session()
{
}

bool MplsLdp::Global::Session::has_data() const
{
    return hold_time.is_set
	|| (backoff_time !=  nullptr && backoff_time->has_data());
}

bool MplsLdp::Global::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| (backoff_time !=  nullptr && backoff_time->has_operation());
}

std::string MplsLdp::Global::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backoff-time")
    {
        if(backoff_time == nullptr)
        {
            backoff_time = std::make_shared<MplsLdp::Global::Session::BackoffTime>();
        }
        return backoff_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backoff_time != nullptr)
    {
        children["backoff-time"] = backoff_time;
    }

    return children;
}

void MplsLdp::Global::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff-time" || name == "hold-time")
        return true;
    return false;
}

MplsLdp::Global::Session::BackoffTime::BackoffTime()
    :
    initial_backoff_time{YType::uint32, "initial-backoff-time"},
    max_backoff_time{YType::uint32, "max-backoff-time"}
{
    yang_name = "backoff-time"; yang_parent_name = "session";
}

MplsLdp::Global::Session::BackoffTime::~BackoffTime()
{
}

bool MplsLdp::Global::Session::BackoffTime::has_data() const
{
    return initial_backoff_time.is_set
	|| max_backoff_time.is_set;
}

bool MplsLdp::Global::Session::BackoffTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_backoff_time.yfilter)
	|| ydk::is_set(max_backoff_time.yfilter);
}

std::string MplsLdp::Global::Session::BackoffTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff-time";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Session::BackoffTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_backoff_time.is_set || is_set(initial_backoff_time.yfilter)) leaf_name_data.push_back(initial_backoff_time.get_name_leafdata());
    if (max_backoff_time.is_set || is_set(max_backoff_time.yfilter)) leaf_name_data.push_back(max_backoff_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Session::BackoffTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Session::BackoffTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Session::BackoffTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-backoff-time")
    {
        initial_backoff_time = value;
        initial_backoff_time.value_namespace = name_space;
        initial_backoff_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-backoff-time")
    {
        max_backoff_time = value;
        max_backoff_time.value_namespace = name_space;
        max_backoff_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Session::BackoffTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-backoff-time")
    {
        initial_backoff_time.yfilter = yfilter;
    }
    if(value_path == "max-backoff-time")
    {
        max_backoff_time.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Session::BackoffTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-backoff-time" || name == "max-backoff-time")
        return true;
    return false;
}

MplsLdp::Global::Igp::Igp()
    :
    sync(std::make_shared<MplsLdp::Global::Igp::Sync>())
{
    sync->parent = this;

    yang_name = "igp"; yang_parent_name = "global";
}

MplsLdp::Global::Igp::~Igp()
{
}

bool MplsLdp::Global::Igp::has_data() const
{
    return (sync !=  nullptr && sync->has_data());
}

bool MplsLdp::Global::Igp::has_operation() const
{
    return is_set(yfilter)
	|| (sync !=  nullptr && sync->has_operation());
}

std::string MplsLdp::Global::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync")
    {
        if(sync == nullptr)
        {
            sync = std::make_shared<MplsLdp::Global::Igp::Sync>();
        }
        return sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync != nullptr)
    {
        children["sync"] = sync;
    }

    return children;
}

void MplsLdp::Global::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

MplsLdp::Global::Igp::Sync::Sync()
    :
    delay(std::make_shared<MplsLdp::Global::Igp::Sync::Delay>())
{
    delay->parent = this;

    yang_name = "sync"; yang_parent_name = "igp";
}

MplsLdp::Global::Igp::Sync::~Sync()
{
}

bool MplsLdp::Global::Igp::Sync::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool MplsLdp::Global::Igp::Sync::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string MplsLdp::Global::Igp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Igp::Sync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/igp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Igp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<MplsLdp::Global::Igp::Sync::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Igp::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void MplsLdp::Global::Igp::Sync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Igp::Sync::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Igp::Sync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

MplsLdp::Global::Igp::Sync::Delay::Delay()
    :
    on_proc_restart{YType::uint32, "on-proc-restart"},
    on_session_up{YType::uint32, "on-session-up"}
{
    yang_name = "delay"; yang_parent_name = "sync";
}

MplsLdp::Global::Igp::Sync::Delay::~Delay()
{
}

bool MplsLdp::Global::Igp::Sync::Delay::has_data() const
{
    return on_proc_restart.is_set
	|| on_session_up.is_set;
}

bool MplsLdp::Global::Igp::Sync::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on_proc_restart.yfilter)
	|| ydk::is_set(on_session_up.yfilter);
}

std::string MplsLdp::Global::Igp::Sync::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Igp::Sync::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/igp/sync/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_proc_restart.is_set || is_set(on_proc_restart.yfilter)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (on_session_up.is_set || is_set(on_session_up.yfilter)) leaf_name_data.push_back(on_session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Igp::Sync::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Igp::Sync::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Igp::Sync::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
        on_proc_restart.value_namespace = name_space;
        on_proc_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-session-up")
    {
        on_session_up = value;
        on_session_up.value_namespace = name_space;
        on_session_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Igp::Sync::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on-proc-restart")
    {
        on_proc_restart.yfilter = yfilter;
    }
    if(value_path == "on-session-up")
    {
        on_session_up.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Igp::Sync::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-proc-restart" || name == "on-session-up")
        return true;
    return false;
}

MplsLdp::Global::EnableLogging::EnableLogging()
    :
    adjacency{YType::empty, "adjacency"},
    gr_session_changes{YType::empty, "gr-session-changes"},
    neighbor_changes{YType::empty, "neighbor-changes"},
    nsr{YType::empty, "nsr"},
    session_protection{YType::empty, "session-protection"}
{
    yang_name = "enable-logging"; yang_parent_name = "global";
}

MplsLdp::Global::EnableLogging::~EnableLogging()
{
}

bool MplsLdp::Global::EnableLogging::has_data() const
{
    return adjacency.is_set
	|| gr_session_changes.is_set
	|| neighbor_changes.is_set
	|| nsr.is_set
	|| session_protection.is_set;
}

bool MplsLdp::Global::EnableLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency.yfilter)
	|| ydk::is_set(gr_session_changes.yfilter)
	|| ydk::is_set(neighbor_changes.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(session_protection.yfilter);
}

std::string MplsLdp::Global::EnableLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable-logging";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::EnableLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency.is_set || is_set(adjacency.yfilter)) leaf_name_data.push_back(adjacency.get_name_leafdata());
    if (gr_session_changes.is_set || is_set(gr_session_changes.yfilter)) leaf_name_data.push_back(gr_session_changes.get_name_leafdata());
    if (neighbor_changes.is_set || is_set(neighbor_changes.yfilter)) leaf_name_data.push_back(neighbor_changes.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (session_protection.is_set || is_set(session_protection.yfilter)) leaf_name_data.push_back(session_protection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::EnableLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::EnableLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::EnableLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency")
    {
        adjacency = value;
        adjacency.value_namespace = name_space;
        adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gr-session-changes")
    {
        gr_session_changes = value;
        gr_session_changes.value_namespace = name_space;
        gr_session_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-changes")
    {
        neighbor_changes = value;
        neighbor_changes.value_namespace = name_space;
        neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-protection")
    {
        session_protection = value;
        session_protection.value_namespace = name_space;
        session_protection.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::EnableLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency")
    {
        adjacency.yfilter = yfilter;
    }
    if(value_path == "gr-session-changes")
    {
        gr_session_changes.yfilter = yfilter;
    }
    if(value_path == "neighbor-changes")
    {
        neighbor_changes.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "session-protection")
    {
        session_protection.yfilter = yfilter;
    }
}

bool MplsLdp::Global::EnableLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency" || name == "gr-session-changes" || name == "neighbor-changes" || name == "nsr" || name == "session-protection")
        return true;
    return false;
}

MplsLdp::Global::Signalling::Signalling()
    :
    dscp{YType::uint32, "dscp"}
{
    yang_name = "signalling"; yang_parent_name = "global";
}

MplsLdp::Global::Signalling::~Signalling()
{
}

bool MplsLdp::Global::Signalling::has_data() const
{
    return dscp.is_set;
}

bool MplsLdp::Global::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string MplsLdp::Global::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Signalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

MplsLdp::Global::Nsr::Nsr()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "nsr"; yang_parent_name = "global";
}

MplsLdp::Global::Nsr::~Nsr()
{
}

bool MplsLdp::Global::Nsr::has_data() const
{
    return enable.is_set;
}

bool MplsLdp::Global::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsLdp::Global::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsLdp::Global::GracefulRestart::GracefulRestart()
    :
    enable{YType::empty, "enable"},
    forwarding_hold_time{YType::uint32, "forwarding-hold-time"},
    reconnect_timeout{YType::uint32, "reconnect-timeout"}
{
    yang_name = "graceful-restart"; yang_parent_name = "global";
}

MplsLdp::Global::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::Global::GracefulRestart::has_data() const
{
    return enable.is_set
	|| forwarding_hold_time.is_set
	|| reconnect_timeout.is_set;
}

bool MplsLdp::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(forwarding_hold_time.yfilter)
	|| ydk::is_set(reconnect_timeout.yfilter);
}

std::string MplsLdp::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (forwarding_hold_time.is_set || is_set(forwarding_hold_time.yfilter)) leaf_name_data.push_back(forwarding_hold_time.get_name_leafdata());
    if (reconnect_timeout.is_set || is_set(reconnect_timeout.yfilter)) leaf_name_data.push_back(reconnect_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-hold-time")
    {
        forwarding_hold_time = value;
        forwarding_hold_time.value_namespace = name_space;
        forwarding_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout = value;
        reconnect_timeout.value_namespace = name_space;
        reconnect_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "forwarding-hold-time")
    {
        forwarding_hold_time.yfilter = yfilter;
    }
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout.yfilter = yfilter;
    }
}

bool MplsLdp::Global::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "forwarding-hold-time" || name == "reconnect-timeout")
        return true;
    return false;
}

MplsLdp::Global::Discovery::Discovery()
    :
    disable_instance_tlv{YType::empty, "disable-instance-tlv"},
    disable_quick_start{YType::empty, "disable-quick-start"}
    	,
    link_hello(std::make_shared<MplsLdp::Global::Discovery::LinkHello>())
	,targeted_hello(std::make_shared<MplsLdp::Global::Discovery::TargetedHello>())
{
    link_hello->parent = this;

    targeted_hello->parent = this;

    yang_name = "discovery"; yang_parent_name = "global";
}

MplsLdp::Global::Discovery::~Discovery()
{
}

bool MplsLdp::Global::Discovery::has_data() const
{
    return disable_instance_tlv.is_set
	|| disable_quick_start.is_set
	|| (link_hello !=  nullptr && link_hello->has_data())
	|| (targeted_hello !=  nullptr && targeted_hello->has_data());
}

bool MplsLdp::Global::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_instance_tlv.yfilter)
	|| ydk::is_set(disable_quick_start.yfilter)
	|| (link_hello !=  nullptr && link_hello->has_operation())
	|| (targeted_hello !=  nullptr && targeted_hello->has_operation());
}

std::string MplsLdp::Global::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_instance_tlv.is_set || is_set(disable_instance_tlv.yfilter)) leaf_name_data.push_back(disable_instance_tlv.get_name_leafdata());
    if (disable_quick_start.is_set || is_set(disable_quick_start.yfilter)) leaf_name_data.push_back(disable_quick_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-hello")
    {
        if(link_hello == nullptr)
        {
            link_hello = std::make_shared<MplsLdp::Global::Discovery::LinkHello>();
        }
        return link_hello;
    }

    if(child_yang_name == "targeted-hello")
    {
        if(targeted_hello == nullptr)
        {
            targeted_hello = std::make_shared<MplsLdp::Global::Discovery::TargetedHello>();
        }
        return targeted_hello;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_hello != nullptr)
    {
        children["link-hello"] = link_hello;
    }

    if(targeted_hello != nullptr)
    {
        children["targeted-hello"] = targeted_hello;
    }

    return children;
}

void MplsLdp::Global::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-instance-tlv")
    {
        disable_instance_tlv = value;
        disable_instance_tlv.value_namespace = name_space;
        disable_instance_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-quick-start")
    {
        disable_quick_start = value;
        disable_quick_start.value_namespace = name_space;
        disable_quick_start.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-instance-tlv")
    {
        disable_instance_tlv.yfilter = yfilter;
    }
    if(value_path == "disable-quick-start")
    {
        disable_quick_start.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-hello" || name == "targeted-hello" || name == "disable-instance-tlv" || name == "disable-quick-start")
        return true;
    return false;
}

MplsLdp::Global::Discovery::LinkHello::LinkHello()
    :
    hold_time{YType::uint32, "hold-time"},
    interval{YType::uint32, "interval"}
{
    yang_name = "link-hello"; yang_parent_name = "discovery";
}

MplsLdp::Global::Discovery::LinkHello::~LinkHello()
{
}

bool MplsLdp::Global::Discovery::LinkHello::has_data() const
{
    return hold_time.is_set
	|| interval.is_set;
}

bool MplsLdp::Global::Discovery::LinkHello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string MplsLdp::Global::Discovery::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Discovery::LinkHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Discovery::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Discovery::LinkHello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Discovery::LinkHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Discovery::LinkHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Discovery::LinkHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "interval")
        return true;
    return false;
}

MplsLdp::Global::Discovery::TargetedHello::TargetedHello()
    :
    hold_time{YType::uint32, "hold-time"},
    interval{YType::uint32, "interval"}
{
    yang_name = "targeted-hello"; yang_parent_name = "discovery";
}

MplsLdp::Global::Discovery::TargetedHello::~TargetedHello()
{
}

bool MplsLdp::Global::Discovery::TargetedHello::has_data() const
{
    return hold_time.is_set
	|| interval.is_set;
}

bool MplsLdp::Global::Discovery::TargetedHello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string MplsLdp::Global::Discovery::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Discovery::TargetedHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Discovery::TargetedHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Discovery::TargetedHello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Discovery::TargetedHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Discovery::TargetedHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Discovery::TargetedHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "interval")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Mldp()
    :
    enable{YType::empty, "enable"}
    	,
    default_vrf(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf>())
	,mldp_global(std::make_shared<MplsLdp::Global::Mldp::MldpGlobal>())
	,vrfs(std::make_shared<MplsLdp::Global::Mldp::Vrfs>())
{
    default_vrf->parent = this;

    mldp_global->parent = this;

    vrfs->parent = this;

    yang_name = "mldp"; yang_parent_name = "global";
}

MplsLdp::Global::Mldp::~Mldp()
{
}

bool MplsLdp::Global::Mldp::has_data() const
{
    return enable.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (mldp_global !=  nullptr && mldp_global->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool MplsLdp::Global::Mldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (mldp_global !=  nullptr && mldp_global->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string MplsLdp::Global::Mldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "mldp-global")
    {
        if(mldp_global == nullptr)
        {
            mldp_global = std::make_shared<MplsLdp::Global::Mldp::MldpGlobal>();
        }
        return mldp_global;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<MplsLdp::Global::Mldp::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    if(mldp_global != nullptr)
    {
        children["mldp-global"] = mldp_global;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void MplsLdp::Global::Mldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-vrf" || name == "mldp-global" || name == "vrfs" || name == "enable")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "mldp";
}

MplsLdp::Global::Mldp::Vrfs::~Vrfs()
{
}

bool MplsLdp::Global::Mldp::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Mldp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Mldp::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Mldp::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Mldp::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    enable{YType::empty, "enable"}
    	,
    afs(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs>())
{
    afs->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| enable.is_set
	|| (afs !=  nullptr && afs->has_data());
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "vrf-name" || name == "enable")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "vrf";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::~Afs()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    enable{YType::empty, "enable"},
    mldp_rib_unicast_always{YType::empty, "mldp-rib-unicast-always"}
    	,
    csc(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc>())
	,make_before_break(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak>())
	,mldp_recursive_fec(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec>())
	,mo_frr(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr>())
	,neighbor_policies(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies>())
	,recursive_forwarding(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding>())
{
    csc->parent = this;

    make_before_break->parent = this;

    mldp_recursive_fec->parent = this;

    mo_frr->parent = this;

    neighbor_policies->parent = this;

    recursive_forwarding->parent = this;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| mldp_rib_unicast_always.is_set
	|| (csc !=  nullptr && csc->has_data())
	|| (make_before_break !=  nullptr && make_before_break->has_data())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_data())
	|| (mo_frr !=  nullptr && mo_frr->has_data())
	|| (neighbor_policies !=  nullptr && neighbor_policies->has_data())
	|| (recursive_forwarding !=  nullptr && recursive_forwarding->has_data());
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mldp_rib_unicast_always.yfilter)
	|| (csc !=  nullptr && csc->has_operation())
	|| (make_before_break !=  nullptr && make_before_break->has_operation())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_operation())
	|| (mo_frr !=  nullptr && mo_frr->has_operation())
	|| (neighbor_policies !=  nullptr && neighbor_policies->has_operation())
	|| (recursive_forwarding !=  nullptr && recursive_forwarding->has_operation());
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mldp_rib_unicast_always.is_set || is_set(mldp_rib_unicast_always.yfilter)) leaf_name_data.push_back(mldp_rib_unicast_always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csc")
    {
        if(csc == nullptr)
        {
            csc = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc>();
        }
        return csc;
    }

    if(child_yang_name == "make-before-break")
    {
        if(make_before_break == nullptr)
        {
            make_before_break = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak>();
        }
        return make_before_break;
    }

    if(child_yang_name == "mldp-recursive-fec")
    {
        if(mldp_recursive_fec == nullptr)
        {
            mldp_recursive_fec = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec>();
        }
        return mldp_recursive_fec;
    }

    if(child_yang_name == "mo-frr")
    {
        if(mo_frr == nullptr)
        {
            mo_frr = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr>();
        }
        return mo_frr;
    }

    if(child_yang_name == "neighbor-policies")
    {
        if(neighbor_policies == nullptr)
        {
            neighbor_policies = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies>();
        }
        return neighbor_policies;
    }

    if(child_yang_name == "recursive-forwarding")
    {
        if(recursive_forwarding == nullptr)
        {
            recursive_forwarding = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding>();
        }
        return recursive_forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(csc != nullptr)
    {
        children["csc"] = csc;
    }

    if(make_before_break != nullptr)
    {
        children["make-before-break"] = make_before_break;
    }

    if(mldp_recursive_fec != nullptr)
    {
        children["mldp-recursive-fec"] = mldp_recursive_fec;
    }

    if(mo_frr != nullptr)
    {
        children["mo-frr"] = mo_frr;
    }

    if(neighbor_policies != nullptr)
    {
        children["neighbor-policies"] = neighbor_policies;
    }

    if(recursive_forwarding != nullptr)
    {
        children["recursive-forwarding"] = recursive_forwarding;
    }

    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-rib-unicast-always")
    {
        mldp_rib_unicast_always = value;
        mldp_rib_unicast_always.value_namespace = name_space;
        mldp_rib_unicast_always.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mldp-rib-unicast-always")
    {
        mldp_rib_unicast_always.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csc" || name == "make-before-break" || name == "mldp-recursive-fec" || name == "mo-frr" || name == "neighbor-policies" || name == "recursive-forwarding" || name == "af-name" || name == "enable" || name == "mldp-rib-unicast-always")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::RecursiveForwarding()
    :
    enable{YType::empty, "enable"},
    policy{YType::str, "policy"}
{
    yang_name = "recursive-forwarding"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::~RecursiveForwarding()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::has_data() const
{
    return enable.is_set
	|| policy.is_set;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursive-forwarding";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RecursiveForwarding' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::MldpRecursiveFec()
    :
    enable{YType::empty, "enable"},
    policy{YType::str, "policy"}
{
    yang_name = "mldp-recursive-fec"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::~MldpRecursiveFec()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::has_data() const
{
    return enable.is_set
	|| policy.is_set;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp-recursive-fec";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MldpRecursiveFec' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicies()
{
    yang_name = "neighbor-policies"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::~NeighborPolicies()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::has_data() const
{
    for (std::size_t index=0; index<neighbor_policy.size(); index++)
    {
        if(neighbor_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::has_operation() const
{
    for (std::size_t index=0; index<neighbor_policy.size(); index++)
    {
        if(neighbor_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-policies";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborPolicies' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-policy")
    {
        for(auto const & c : neighbor_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy>();
        c->parent = this;
        neighbor_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::NeighborPolicy()
    :
    root_address{YType::str, "root-address"},
    policy_mode{YType::enumeration, "policy-mode"},
    route_policy{YType::str, "route-policy"}
{
    yang_name = "neighbor-policy"; yang_parent_name = "neighbor-policies";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::~NeighborPolicy()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::has_data() const
{
    return root_address.is_set
	|| policy_mode.is_set
	|| route_policy.is_set;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(root_address.yfilter)
	|| ydk::is_set(policy_mode.yfilter)
	|| ydk::is_set(route_policy.yfilter);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-policy" <<"[root-address='" <<root_address <<"']" <<"[policy-mode='" <<policy_mode <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborPolicy' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (root_address.is_set || is_set(root_address.yfilter)) leaf_name_data.push_back(root_address.get_name_leafdata());
    if (policy_mode.is_set || is_set(policy_mode.yfilter)) leaf_name_data.push_back(policy_mode.get_name_leafdata());
    if (route_policy.is_set || is_set(route_policy.yfilter)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "root-address")
    {
        root_address = value;
        root_address.value_namespace = name_space;
        root_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-mode")
    {
        policy_mode = value;
        policy_mode.value_namespace = name_space;
        policy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy")
    {
        route_policy = value;
        route_policy.value_namespace = name_space;
        route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "root-address")
    {
        root_address.yfilter = yfilter;
    }
    if(value_path == "policy-mode")
    {
        policy_mode.yfilter = yfilter;
    }
    if(value_path == "route-policy")
    {
        route_policy.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "root-address" || name == "policy-mode" || name == "route-policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::MoFrr()
    :
    enable{YType::empty, "enable"},
    policy{YType::str, "policy"}
{
    yang_name = "mo-frr"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::~MoFrr()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::has_data() const
{
    return enable.is_set
	|| policy.is_set;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mo-frr";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MoFrr' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::MakeBeforeBreak()
    :
    policy{YType::str, "policy"}
    	,
    signaling(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling>())
{
    signaling->parent = this;

    yang_name = "make-before-break"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::~MakeBeforeBreak()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::has_data() const
{
    return policy.is_set
	|| (signaling !=  nullptr && signaling->has_data());
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| (signaling !=  nullptr && signaling->has_operation());
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "make-before-break";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MakeBeforeBreak' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaling")
    {
        if(signaling == nullptr)
        {
            signaling = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling>();
        }
        return signaling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signaling != nullptr)
    {
        children["signaling"] = signaling;
    }

    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling" || name == "policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::Signaling()
    :
    delete_delay{YType::uint32, "delete-delay"},
    forward_delay{YType::uint32, "forward-delay"}
{
    yang_name = "signaling"; yang_parent_name = "make-before-break";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::~Signaling()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::has_data() const
{
    return delete_delay.is_set
	|| forward_delay.is_set;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delete_delay.yfilter)
	|| ydk::is_set(forward_delay.yfilter);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Signaling' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delete_delay.is_set || is_set(delete_delay.yfilter)) leaf_name_data.push_back(delete_delay.get_name_leafdata());
    if (forward_delay.is_set || is_set(forward_delay.yfilter)) leaf_name_data.push_back(forward_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delete-delay")
    {
        delete_delay = value;
        delete_delay.value_namespace = name_space;
        delete_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-delay")
    {
        forward_delay = value;
        forward_delay.value_namespace = name_space;
        forward_delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delete-delay")
    {
        delete_delay.yfilter = yfilter;
    }
    if(value_path == "forward-delay")
    {
        forward_delay.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delete-delay" || name == "forward-delay")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::Csc()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "csc"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::~Csc()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::has_data() const
{
    return enable.is_set;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csc";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Csc' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::DefaultVrf()
    :
    afs(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs>())
{
    afs->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "mldp";
}

MplsLdp::Global::Mldp::DefaultVrf::~DefaultVrf()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::has_data() const
{
    return (afs !=  nullptr && afs->has_data());
}

bool MplsLdp::Global::Mldp::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsLdp::Global::Mldp::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Mldp::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::~Afs()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    enable{YType::empty, "enable"},
    mldp_rib_unicast_always{YType::empty, "mldp-rib-unicast-always"}
    	,
    csc(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc>())
	,make_before_break(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak>())
	,mldp_recursive_fec(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec>())
	,mo_frr(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr>())
	,neighbor_policies(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies>())
	,recursive_forwarding(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding>())
{
    csc->parent = this;

    make_before_break->parent = this;

    mldp_recursive_fec->parent = this;

    mo_frr->parent = this;

    neighbor_policies->parent = this;

    recursive_forwarding->parent = this;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::~Af()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| mldp_rib_unicast_always.is_set
	|| (csc !=  nullptr && csc->has_data())
	|| (make_before_break !=  nullptr && make_before_break->has_data())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_data())
	|| (mo_frr !=  nullptr && mo_frr->has_data())
	|| (neighbor_policies !=  nullptr && neighbor_policies->has_data())
	|| (recursive_forwarding !=  nullptr && recursive_forwarding->has_data());
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mldp_rib_unicast_always.yfilter)
	|| (csc !=  nullptr && csc->has_operation())
	|| (make_before_break !=  nullptr && make_before_break->has_operation())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_operation())
	|| (mo_frr !=  nullptr && mo_frr->has_operation())
	|| (neighbor_policies !=  nullptr && neighbor_policies->has_operation())
	|| (recursive_forwarding !=  nullptr && recursive_forwarding->has_operation());
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/default-vrf/afs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mldp_rib_unicast_always.is_set || is_set(mldp_rib_unicast_always.yfilter)) leaf_name_data.push_back(mldp_rib_unicast_always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csc")
    {
        if(csc == nullptr)
        {
            csc = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc>();
        }
        return csc;
    }

    if(child_yang_name == "make-before-break")
    {
        if(make_before_break == nullptr)
        {
            make_before_break = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak>();
        }
        return make_before_break;
    }

    if(child_yang_name == "mldp-recursive-fec")
    {
        if(mldp_recursive_fec == nullptr)
        {
            mldp_recursive_fec = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec>();
        }
        return mldp_recursive_fec;
    }

    if(child_yang_name == "mo-frr")
    {
        if(mo_frr == nullptr)
        {
            mo_frr = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr>();
        }
        return mo_frr;
    }

    if(child_yang_name == "neighbor-policies")
    {
        if(neighbor_policies == nullptr)
        {
            neighbor_policies = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies>();
        }
        return neighbor_policies;
    }

    if(child_yang_name == "recursive-forwarding")
    {
        if(recursive_forwarding == nullptr)
        {
            recursive_forwarding = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding>();
        }
        return recursive_forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(csc != nullptr)
    {
        children["csc"] = csc;
    }

    if(make_before_break != nullptr)
    {
        children["make-before-break"] = make_before_break;
    }

    if(mldp_recursive_fec != nullptr)
    {
        children["mldp-recursive-fec"] = mldp_recursive_fec;
    }

    if(mo_frr != nullptr)
    {
        children["mo-frr"] = mo_frr;
    }

    if(neighbor_policies != nullptr)
    {
        children["neighbor-policies"] = neighbor_policies;
    }

    if(recursive_forwarding != nullptr)
    {
        children["recursive-forwarding"] = recursive_forwarding;
    }

    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-rib-unicast-always")
    {
        mldp_rib_unicast_always = value;
        mldp_rib_unicast_always.value_namespace = name_space;
        mldp_rib_unicast_always.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mldp-rib-unicast-always")
    {
        mldp_rib_unicast_always.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csc" || name == "make-before-break" || name == "mldp-recursive-fec" || name == "mo-frr" || name == "neighbor-policies" || name == "recursive-forwarding" || name == "af-name" || name == "enable" || name == "mldp-rib-unicast-always")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::RecursiveForwarding()
    :
    enable{YType::empty, "enable"},
    policy{YType::str, "policy"}
{
    yang_name = "recursive-forwarding"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::~RecursiveForwarding()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::has_data() const
{
    return enable.is_set
	|| policy.is_set;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursive-forwarding";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RecursiveForwarding' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::MldpRecursiveFec()
    :
    enable{YType::empty, "enable"},
    policy{YType::str, "policy"}
{
    yang_name = "mldp-recursive-fec"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::~MldpRecursiveFec()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::has_data() const
{
    return enable.is_set
	|| policy.is_set;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp-recursive-fec";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MldpRecursiveFec' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicies()
{
    yang_name = "neighbor-policies"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::~NeighborPolicies()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::has_data() const
{
    for (std::size_t index=0; index<neighbor_policy.size(); index++)
    {
        if(neighbor_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::has_operation() const
{
    for (std::size_t index=0; index<neighbor_policy.size(); index++)
    {
        if(neighbor_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-policies";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborPolicies' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-policy")
    {
        for(auto const & c : neighbor_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy>();
        c->parent = this;
        neighbor_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::NeighborPolicy()
    :
    root_address{YType::str, "root-address"},
    policy_mode{YType::enumeration, "policy-mode"},
    route_policy{YType::str, "route-policy"}
{
    yang_name = "neighbor-policy"; yang_parent_name = "neighbor-policies";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::~NeighborPolicy()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::has_data() const
{
    return root_address.is_set
	|| policy_mode.is_set
	|| route_policy.is_set;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(root_address.yfilter)
	|| ydk::is_set(policy_mode.yfilter)
	|| ydk::is_set(route_policy.yfilter);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-policy" <<"[root-address='" <<root_address <<"']" <<"[policy-mode='" <<policy_mode <<"']";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborPolicy' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (root_address.is_set || is_set(root_address.yfilter)) leaf_name_data.push_back(root_address.get_name_leafdata());
    if (policy_mode.is_set || is_set(policy_mode.yfilter)) leaf_name_data.push_back(policy_mode.get_name_leafdata());
    if (route_policy.is_set || is_set(route_policy.yfilter)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "root-address")
    {
        root_address = value;
        root_address.value_namespace = name_space;
        root_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-mode")
    {
        policy_mode = value;
        policy_mode.value_namespace = name_space;
        policy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy")
    {
        route_policy = value;
        route_policy.value_namespace = name_space;
        route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "root-address")
    {
        root_address.yfilter = yfilter;
    }
    if(value_path == "policy-mode")
    {
        policy_mode.yfilter = yfilter;
    }
    if(value_path == "route-policy")
    {
        route_policy.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "root-address" || name == "policy-mode" || name == "route-policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::MoFrr()
    :
    enable{YType::empty, "enable"},
    policy{YType::str, "policy"}
{
    yang_name = "mo-frr"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::~MoFrr()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::has_data() const
{
    return enable.is_set
	|| policy.is_set;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mo-frr";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MoFrr' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::MakeBeforeBreak()
    :
    policy{YType::str, "policy"}
    	,
    signaling(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling>())
{
    signaling->parent = this;

    yang_name = "make-before-break"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::~MakeBeforeBreak()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::has_data() const
{
    return policy.is_set
	|| (signaling !=  nullptr && signaling->has_data());
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter)
	|| (signaling !=  nullptr && signaling->has_operation());
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "make-before-break";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MakeBeforeBreak' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaling")
    {
        if(signaling == nullptr)
        {
            signaling = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling>();
        }
        return signaling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signaling != nullptr)
    {
        children["signaling"] = signaling;
    }

    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling" || name == "policy")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::Signaling()
    :
    delete_delay{YType::uint32, "delete-delay"},
    forward_delay{YType::uint32, "forward-delay"}
{
    yang_name = "signaling"; yang_parent_name = "make-before-break";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::~Signaling()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::has_data() const
{
    return delete_delay.is_set
	|| forward_delay.is_set;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delete_delay.yfilter)
	|| ydk::is_set(forward_delay.yfilter);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Signaling' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delete_delay.is_set || is_set(delete_delay.yfilter)) leaf_name_data.push_back(delete_delay.get_name_leafdata());
    if (forward_delay.is_set || is_set(forward_delay.yfilter)) leaf_name_data.push_back(forward_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delete-delay")
    {
        delete_delay = value;
        delete_delay.value_namespace = name_space;
        delete_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-delay")
    {
        forward_delay = value;
        forward_delay.value_namespace = name_space;
        forward_delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delete-delay")
    {
        delete_delay.yfilter = yfilter;
    }
    if(value_path == "forward-delay")
    {
        forward_delay.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delete-delay" || name == "forward-delay")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::Csc()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "csc"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::~Csc()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::has_data() const
{
    return enable.is_set;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csc";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Csc' in Cisco_IOS_XR_mpls_ldp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

MplsLdp::Global::Mldp::MldpGlobal::MldpGlobal()
    :
    logging(std::make_shared<MplsLdp::Global::Mldp::MldpGlobal::Logging>())
{
    logging->parent = this;

    yang_name = "mldp-global"; yang_parent_name = "mldp";
}

MplsLdp::Global::Mldp::MldpGlobal::~MldpGlobal()
{
}

bool MplsLdp::Global::Mldp::MldpGlobal::has_data() const
{
    return (logging !=  nullptr && logging->has_data());
}

bool MplsLdp::Global::Mldp::MldpGlobal::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsLdp::Global::Mldp::MldpGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp-global";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::MldpGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::MldpGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsLdp::Global::Mldp::MldpGlobal::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::MldpGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void MplsLdp::Global::Mldp::MldpGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Global::Mldp::MldpGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Global::Mldp::MldpGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

MplsLdp::Global::Mldp::MldpGlobal::Logging::Logging()
    :
    notifications{YType::empty, "notifications"}
{
    yang_name = "logging"; yang_parent_name = "mldp-global";
}

MplsLdp::Global::Mldp::MldpGlobal::Logging::~Logging()
{
}

bool MplsLdp::Global::Mldp::MldpGlobal::Logging::has_data() const
{
    return notifications.is_set;
}

bool MplsLdp::Global::Mldp::MldpGlobal::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notifications.yfilter);
}

std::string MplsLdp::Global::Mldp::MldpGlobal::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsLdp::Global::Mldp::MldpGlobal::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/mldp-global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Mldp::MldpGlobal::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLdp::Global::Mldp::MldpGlobal::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLdp::Global::Mldp::MldpGlobal::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::MldpGlobal::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::MldpGlobal::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notifications")
        return true;
    return false;
}

const Enum::YLeaf MplsLdpExpNull::all {1, "all"};
const Enum::YLeaf MplsLdpExpNull::for_ {2, "for"};
const Enum::YLeaf MplsLdpExpNull::to {3, "to"};
const Enum::YLeaf MplsLdpExpNull::for_to {4, "for-to"};

const Enum::YLeaf MplsLdpafName::ipv4 {4, "ipv4"};
const Enum::YLeaf MplsLdpafName::ipv6 {6, "ipv6"};

const Enum::YLeaf MplsLdpAdvertiseBgpacl::peer_acl {1, "peer-acl"};

const Enum::YLeaf MldpPolicyMode::inbound {1, "inbound"};
const Enum::YLeaf MldpPolicyMode::outbound {2, "outbound"};

const Enum::YLeaf MplsLdpLabelAllocation::acl {1, "acl"};
const Enum::YLeaf MplsLdpLabelAllocation::host {2, "host"};

const Enum::YLeaf MplsLdpLabelAdvertise::for_ {1, "for"};
const Enum::YLeaf MplsLdpLabelAdvertise::for_to {2, "for-to"};

const Enum::YLeaf MplsLdpSessionProtection::all {1, "all"};
const Enum::YLeaf MplsLdpSessionProtection::for_ {2, "for"};
const Enum::YLeaf MplsLdpSessionProtection::all_with_duration {3, "all-with-duration"};
const Enum::YLeaf MplsLdpSessionProtection::for_with_duration {4, "for-with-duration"};
const Enum::YLeaf MplsLdpSessionProtection::all_with_forever {5, "all-with-forever"};
const Enum::YLeaf MplsLdpSessionProtection::for_with_forever {6, "for-with-forever"};

const Enum::YLeaf MplsLdpTargetedAccept::all {1, "all"};
const Enum::YLeaf MplsLdpTargetedAccept::from {2, "from"};

const Enum::YLeaf MplsLdpDownstreamOnDemand::peer_acl {1, "peer-acl"};

const Enum::YLeaf MplsLdpTransportAddress::interface {1, "interface"};
const Enum::YLeaf MplsLdpTransportAddress::address {2, "address"};

const Enum::YLeaf MplsLdpNbrPassword::disable {1, "disable"};
const Enum::YLeaf MplsLdpNbrPassword::specified {2, "specified"};


}
}

