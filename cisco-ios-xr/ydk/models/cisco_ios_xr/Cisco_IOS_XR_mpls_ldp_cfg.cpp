
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
    , vrfs(std::make_shared<MplsLdp::Vrfs>())
    , global(std::make_shared<MplsLdp::Global>())
{
    default_vrf->parent = this;
    vrfs->parent = this;
    global->parent = this;

    yang_name = "mpls-ldp"; yang_parent_name = "Cisco-IOS-XR-mpls-ldp-cfg"; is_top_level_class = true; has_list_ancestor = false; is_presence_container = true;
}

MplsLdp::~MplsLdp()
{
}

bool MplsLdp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<MplsLdp::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<MplsLdp::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLdp::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_vrf != nullptr)
    {
        _children["default-vrf"] = default_vrf;
    }

    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> MplsLdp::clone_ptr() const
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
    if(name == "default-vrf" || name == "vrfs" || name == "global" || name == "enable")
        return true;
    return false;
}

MplsLdp::DefaultVrf::DefaultVrf()
    :
    afs(std::make_shared<MplsLdp::DefaultVrf::Afs>())
    , global(std::make_shared<MplsLdp::DefaultVrf::Global>())
    , interfaces(std::make_shared<MplsLdp::DefaultVrf::Interfaces>())
{
    afs->parent = this;
    global->parent = this;
    interfaces->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::~DefaultVrf()
{
}

bool MplsLdp::DefaultVrf::has_data() const
{
    if (is_presence_container) return true;
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

std::string MplsLdp::DefaultVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
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
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Afs::~Afs()
{
}

bool MplsLdp::DefaultVrf::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<MplsLdp::DefaultVrf::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    label(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label>())
    , discovery(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Discovery>())
    , traffic_engineering(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering>())
    , neighbor(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Neighbor>())
    , redistribution_protocol(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol>())
{
    label->parent = this;
    discovery->parent = this;
    traffic_engineering->parent = this;
    neighbor->parent = this;
    redistribution_protocol->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Afs::Af::~Af()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| enable.is_set
	|| (label !=  nullptr && label->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (label !=  nullptr && label->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/afs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label>();
        }
        return label;
    }

    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "traffic-engineering")
    {
        if(traffic_engineering == nullptr)
        {
            traffic_engineering = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering>();
        }
        return traffic_engineering;
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label != nullptr)
    {
        _children["label"] = label;
    }

    if(discovery != nullptr)
    {
        _children["discovery"] = discovery;
    }

    if(traffic_engineering != nullptr)
    {
        _children["traffic-engineering"] = traffic_engineering;
    }

    if(neighbor != nullptr)
    {
        _children["neighbor"] = neighbor;
    }

    if(redistribution_protocol != nullptr)
    {
        _children["redistribution-protocol"] = redistribution_protocol;
    }

    return _children;
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
    if(name == "label" || name == "discovery" || name == "traffic-engineering" || name == "neighbor" || name == "redistribution-protocol" || name == "af-name" || name == "enable")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Label()
    :
    remote(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Remote>())
    , local(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local>())
{
    remote->parent = this;
    local->parent = this;

    yang_name = "label"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::~Label()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::has_data() const
{
    if (is_presence_container) return true;
    return (remote !=  nullptr && remote->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::has_operation() const
{
    return is_set(yfilter)
	|| (remote !=  nullptr && remote->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Remote>();
        }
        return remote;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote" || name == "local")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Remote()
    :
    accept(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept>())
{
    accept->parent = this;

    yang_name = "remote"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::~Remote()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accept != nullptr)
    {
        _children["accept"] = accept;
    }

    return _children;
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

    yang_name = "accept"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::~Accept()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_accept_policies != nullptr)
    {
        _children["peer-accept-policies"] = peer_accept_policies;
    }

    return _children;
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
    :
    peer_accept_policy(this, {"lsr_id", "label_space_id"})
{

    yang_name = "peer-accept-policies"; yang_parent_name = "accept"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::~PeerAcceptPolicies()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_accept_policy.len(); index++)
    {
        if(peer_accept_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_accept_policy.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-accept-policy")
    {
        auto ent_ = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy>();
        ent_->parent = this;
        peer_accept_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_accept_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "peer-accept-policy"; yang_parent_name = "peer-accept-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::~PeerAcceptPolicy()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "peer-accept-policy";
    ADD_KEY_TOKEN(lsr_id, "lsr-id");
    ADD_KEY_TOKEN(label_space_id, "label-space-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    implicit_null_override{YType::str, "implicit-null-override"},
    default_route{YType::empty, "default-route"}
        ,
    advertise(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise>())
    , allocate(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate>())
{
    advertise->parent = this;
    allocate->parent = this;

    yang_name = "local"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::~Local()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::has_data() const
{
    if (is_presence_container) return true;
    return implicit_null_override.is_set
	|| default_route.is_set
	|| (advertise !=  nullptr && advertise->has_data())
	|| (allocate !=  nullptr && allocate->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(implicit_null_override.yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (implicit_null_override.is_set || is_set(implicit_null_override.yfilter)) leaf_name_data.push_back(implicit_null_override.get_name_leafdata());
    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertise != nullptr)
    {
        _children["advertise"] = advertise;
    }

    if(allocate != nullptr)
    {
        _children["allocate"] = allocate;
    }

    return _children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "implicit-null-override")
    {
        implicit_null_override = value;
        implicit_null_override.value_namespace = name_space;
        implicit_null_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "implicit-null-override")
    {
        implicit_null_override.yfilter = yfilter;
    }
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "allocate" || name == "implicit-null-override" || name == "default-route")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Advertise()
    :
    disable{YType::empty, "disable"}
        ,
    peer_advertise_policies(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies>())
    , prefix_advertise_policies(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies>())
    , explicit_null(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull>())
    , interfaces(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces>())
{
    peer_advertise_policies->parent = this;
    prefix_advertise_policies->parent = this;
    explicit_null->parent = this;
    interfaces->parent = this;

    yang_name = "advertise"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::~Advertise()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_data())
	|| (prefix_advertise_policies !=  nullptr && prefix_advertise_policies->has_data())
	|| (explicit_null !=  nullptr && explicit_null->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_operation())
	|| (prefix_advertise_policies !=  nullptr && prefix_advertise_policies->has_operation())
	|| (explicit_null !=  nullptr && explicit_null->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_advertise_policies != nullptr)
    {
        _children["peer-advertise-policies"] = peer_advertise_policies;
    }

    if(prefix_advertise_policies != nullptr)
    {
        _children["prefix-advertise-policies"] = prefix_advertise_policies;
    }

    if(explicit_null != nullptr)
    {
        _children["explicit-null"] = explicit_null;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
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
    if(name == "peer-advertise-policies" || name == "prefix-advertise-policies" || name == "explicit-null" || name == "interfaces" || name == "disable")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicies()
    :
    peer_advertise_policy(this, {"lsr_id", "label_space_id"})
{

    yang_name = "peer-advertise-policies"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::~PeerAdvertisePolicies()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_advertise_policy.len(); index++)
    {
        if(peer_advertise_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_advertise_policy.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-advertise-policy")
    {
        auto ent_ = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy>();
        ent_->parent = this;
        peer_advertise_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_advertise_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "peer-advertise-policy"; yang_parent_name = "peer-advertise-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::~PeerAdvertisePolicy()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "peer-advertise-policy";
    ADD_KEY_TOKEN(lsr_id, "lsr-id");
    ADD_KEY_TOKEN(label_space_id, "label-space-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    prefix_advertise_policy(this, {"prefix_acl_name"})
{

    yang_name = "prefix-advertise-policies"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::~PrefixAdvertisePolicies()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_advertise_policy.len(); index++)
    {
        if(prefix_advertise_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::has_operation() const
{
    for (std::size_t index=0; index<prefix_advertise_policy.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-advertise-policy")
    {
        auto ent_ = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy>();
        ent_->parent = this;
        prefix_advertise_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_advertise_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "prefix-advertise-policy"; yang_parent_name = "prefix-advertise-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::~PrefixAdvertisePolicy()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "prefix-advertise-policy";
    ADD_KEY_TOKEN(prefix_acl_name, "prefix-acl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());
    if (advertise_type.is_set || is_set(advertise_type.yfilter)) leaf_name_data.push_back(advertise_type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    prefix_acl_name{YType::str, "prefix-acl-name"},
    peer_acl_name{YType::str, "peer-acl-name"}
{

    yang_name = "explicit-null"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::~ExplicitNull()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_data() const
{
    if (is_presence_container) return true;
    return explicit_null_type.is_set
	|| prefix_acl_name.is_set
	|| peer_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null_type.yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter)
	|| ydk::is_set(peer_acl_name.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null_type.is_set || is_set(explicit_null_type.yfilter)) leaf_name_data.push_back(explicit_null_type.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null-type")
    {
        explicit_null_type = value;
        explicit_null_type.value_namespace = name_space;
        explicit_null_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null-type")
    {
        explicit_null_type.yfilter = yfilter;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null-type" || name == "prefix-acl-name" || name == "peer-acl-name")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::~Interfaces()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::get_children() const
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

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "allocate"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::~Allocate()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocation_type.is_set || is_set(allocation_type.yfilter)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "discovery"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_address.is_set || is_set(transport_address.yfilter)) leaf_name_data.push_back(transport_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(targeted_hello_accept != nullptr)
    {
        _children["targeted-hello-accept"] = targeted_hello_accept;
    }

    return _children;
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

    yang_name = "targeted-hello-accept"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::~TargetedHelloAccept()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_type.is_set || is_set(accept_type.yfilter)) leaf_name_data.push_back(accept_type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "traffic-engineering"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::~TrafficEngineering()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_tunnel_mesh != nullptr)
    {
        _children["auto-tunnel-mesh"] = auto_tunnel_mesh;
    }

    return _children;
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

    yang_name = "auto-tunnel-mesh"; yang_parent_name = "traffic-engineering"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::~AutoTunnelMesh()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_all.is_set || is_set(group_all.yfilter)) leaf_name_data.push_back(group_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_ids != nullptr)
    {
        _children["group-ids"] = group_ids;
    }

    return _children;
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
    :
    group_id(this, {"mesh_group_id"})
{

    yang_name = "group-ids"; yang_parent_name = "auto-tunnel-mesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::~GroupIds()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_id.len(); index++)
    {
        if(group_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::has_operation() const
{
    for (std::size_t index=0; index<group_id.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id")
    {
        auto ent_ = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId>();
        ent_->parent = this;
        group_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "group-id"; yang_parent_name = "group-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::~GroupId()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "group-id";
    ADD_KEY_TOKEN(mesh_group_id, "mesh-group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , segment_routing_policies(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies>())
{
    addresses->parent = this;
    segment_routing_policies->parent = this;

    yang_name = "neighbor"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::~Neighbor()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return (addresses !=  nullptr && addresses->has_data())
	|| (segment_routing_policies !=  nullptr && segment_routing_policies->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (segment_routing_policies !=  nullptr && segment_routing_policies->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "segment-routing-policies")
    {
        if(segment_routing_policies == nullptr)
        {
            segment_routing_policies = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies>();
        }
        return segment_routing_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addresses != nullptr)
    {
        _children["addresses"] = addresses;
    }

    if(segment_routing_policies != nullptr)
    {
        _children["segment-routing-policies"] = segment_routing_policies;
    }

    return _children;
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "segment-routing-policies")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Addresses()
    :
    address(this, {"ip_address"})
{

    yang_name = "addresses"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::~Addresses()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

    yang_name = "address"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::~Address()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (targeted.is_set || is_set(targeted.yfilter)) leaf_name_data.push_back(targeted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicies()
    :
    segment_routing_policy(this, {"name"})
{

    yang_name = "segment-routing-policies"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::~SegmentRoutingPolicies()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing_policy.len(); index++)
    {
        if(segment_routing_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::has_operation() const
{
    for (std::size_t index=0; index<segment_routing_policy.len(); index++)
    {
        if(segment_routing_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing-policy")
    {
        auto ent_ = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy>();
        ent_->parent = this;
        segment_routing_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing-policy")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy::SegmentRoutingPolicy()
    :
    name{YType::str, "name"},
    targeted{YType::empty, "targeted"}
{

    yang_name = "segment-routing-policy"; yang_parent_name = "segment-routing-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy::~SegmentRoutingPolicy()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| targeted.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(targeted.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-policy";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (targeted.is_set || is_set(targeted.yfilter)) leaf_name_data.push_back(targeted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targeted")
    {
        targeted = value;
        targeted.value_namespace = name_space;
        targeted.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "targeted")
    {
        targeted.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::SegmentRoutingPolicies::SegmentRoutingPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "targeted")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::RedistributionProtocol()
    :
    bgp(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp>())
{
    bgp->parent = this;

    yang_name = "redistribution-protocol"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::~RedistributionProtocol()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
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
    as(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As>())
    , advertise_to(std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo>())
{
    as->parent = this;
    advertise_to->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribution-protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::~Bgp()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return (as !=  nullptr && as->has_data())
	|| (advertise_to !=  nullptr && advertise_to->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (as !=  nullptr && as->has_operation())
	|| (advertise_to !=  nullptr && advertise_to->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As>();
        }
        return as;
    }

    if(child_yang_name == "advertise-to")
    {
        if(advertise_to == nullptr)
        {
            advertise_to = std::make_shared<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo>();
        }
        return advertise_to;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(as != nullptr)
    {
        _children["as"] = as;
    }

    if(advertise_to != nullptr)
    {
        _children["advertise-to"] = advertise_to;
    }

    return _children;
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "advertise-to")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::As()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "as"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::~As()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    type{YType::enumeration, "type"},
    peer_acl_name{YType::str, "peer-acl-name"}
{

    yang_name = "advertise-to"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::~AdvertiseTo()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| peer_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(peer_acl_name.yfilter);
}

std::string MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "peer-acl-name")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Global()
    :
    router_id{YType::str, "router-id"}
        ,
    session(std::make_shared<MplsLdp::DefaultVrf::Global::Session>())
    , neighbor(std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor>())
    , graceful_restart(std::make_shared<MplsLdp::DefaultVrf::Global::GracefulRestart>())
{
    session->parent = this;
    neighbor->parent = this;
    graceful_restart->parent = this;

    yang_name = "global"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::~Global()
{
}

bool MplsLdp::DefaultVrf::Global::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| (session !=  nullptr && session->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data());
}

bool MplsLdp::DefaultVrf::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<MplsLdp::DefaultVrf::Global::Session>();
        }
        return session;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::DefaultVrf::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(neighbor != nullptr)
    {
        _children["neighbor"] = neighbor;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    return _children;
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
    if(name == "session" || name == "neighbor" || name == "graceful-restart" || name == "router-id")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Session::Session()
    :
    protection(std::make_shared<MplsLdp::DefaultVrf::Global::Session::Protection>())
    , downstream_on_demand(std::make_shared<MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand>())
{
    protection->parent = this;
    downstream_on_demand->parent = this;

    yang_name = "session"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::Session::~Session()
{
}

bool MplsLdp::DefaultVrf::Global::Session::has_data() const
{
    if (is_presence_container) return true;
    return (protection !=  nullptr && protection->has_data())
	|| (downstream_on_demand !=  nullptr && downstream_on_demand->has_data());
}

bool MplsLdp::DefaultVrf::Global::Session::has_operation() const
{
    return is_set(yfilter)
	|| (protection !=  nullptr && protection->has_operation())
	|| (downstream_on_demand !=  nullptr && downstream_on_demand->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsLdp::DefaultVrf::Global::Session::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "downstream-on-demand")
    {
        if(downstream_on_demand == nullptr)
        {
            downstream_on_demand = std::make_shared<MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand>();
        }
        return downstream_on_demand;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protection != nullptr)
    {
        _children["protection"] = protection;
    }

    if(downstream_on_demand != nullptr)
    {
        _children["downstream-on-demand"] = downstream_on_demand;
    }

    return _children;
}

void MplsLdp::DefaultVrf::Global::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::DefaultVrf::Global::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::DefaultVrf::Global::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection" || name == "downstream-on-demand")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Session::Protection::Protection()
    :
    protection_type{YType::enumeration, "protection-type"},
    peer_acl_name{YType::str, "peer-acl-name"},
    duration{YType::uint32, "duration"}
{

    yang_name = "protection"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::Session::Protection::~Protection()
{
}

bool MplsLdp::DefaultVrf::Global::Session::Protection::has_data() const
{
    if (is_presence_container) return true;
    return protection_type.is_set
	|| peer_acl_name.is_set
	|| duration.is_set;
}

bool MplsLdp::DefaultVrf::Global::Session::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(peer_acl_name.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string MplsLdp::DefaultVrf::Global::Session::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/session/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::Session::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::Session::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::Session::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::Session::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::DefaultVrf::Global::Session::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::Session::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::Session::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-type" || name == "peer-acl-name" || name == "duration")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::DownstreamOnDemand()
    :
    type{YType::enumeration, "type"},
    peer_acl_name{YType::str, "peer-acl-name"}
{

    yang_name = "downstream-on-demand"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::~DownstreamOnDemand()
{
}

bool MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| peer_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(peer_acl_name.yfilter);
}

std::string MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/session/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-on-demand";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "peer-acl-name")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Neighbor::Neighbor()
    :
    password{YType::str, "password"}
        ,
    ldp_ids(std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds>())
    , dual_stack(std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::DualStack>())
{
    ldp_ids->parent = this;
    dual_stack->parent = this;

    yang_name = "neighbor"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::Neighbor::~Neighbor()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return password.is_set
	|| (ldp_ids !=  nullptr && ldp_ids->has_data())
	|| (dual_stack !=  nullptr && dual_stack->has_data());
}

bool MplsLdp::DefaultVrf::Global::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| (ldp_ids !=  nullptr && ldp_ids->has_operation())
	|| (dual_stack !=  nullptr && dual_stack->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-ids")
    {
        if(ldp_ids == nullptr)
        {
            ldp_ids = std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds>();
        }
        return ldp_ids;
    }

    if(child_yang_name == "dual-stack")
    {
        if(dual_stack == nullptr)
        {
            dual_stack = std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::DualStack>();
        }
        return dual_stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldp_ids != nullptr)
    {
        _children["ldp-ids"] = ldp_ids;
    }

    if(dual_stack != nullptr)
    {
        _children["dual-stack"] = dual_stack;
    }

    return _children;
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
    if(name == "ldp-ids" || name == "dual-stack" || name == "password")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpIds()
    :
    ldp_id(this, {"lsr_id", "label_space_id"})
{

    yang_name = "ldp-ids"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::~LdpIds()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldp_id.len(); index++)
    {
        if(ldp_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::has_operation() const
{
    for (std::size_t index=0; index<ldp_id.len(); index++)
    {
        if(ldp_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-id")
    {
        auto ent_ = std::make_shared<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId>();
        ent_->parent = this;
        ldp_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ldp_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "ldp-id"; yang_parent_name = "ldp-ids"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::~LdpId()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::has_data() const
{
    if (is_presence_container) return true;
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

std::string MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/ldp-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-id";
    ADD_KEY_TOKEN(lsr_id, "lsr-id");
    ADD_KEY_TOKEN(label_space_id, "label-space-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
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

    yang_name = "password"; yang_parent_name = "ldp-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::~Password()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command_type.is_set || is_set(command_type.yfilter)) leaf_name_data.push_back(command_type.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "dual-stack"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::~DualStack()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::has_data() const
{
    if (is_presence_container) return true;
    return tlv_compliance.is_set
	|| (transport_connection !=  nullptr && transport_connection->has_data());
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv_compliance.yfilter)
	|| (transport_connection !=  nullptr && transport_connection->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_compliance.is_set || is_set(tlv_compliance.yfilter)) leaf_name_data.push_back(tlv_compliance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transport_connection != nullptr)
    {
        _children["transport-connection"] = transport_connection;
    }

    return _children;
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

    yang_name = "transport-connection"; yang_parent_name = "dual-stack"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::~TransportConnection()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::has_data() const
{
    if (is_presence_container) return true;
    return max_wait.is_set
	|| (prefer !=  nullptr && prefer->has_data());
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_wait.yfilter)
	|| (prefer !=  nullptr && prefer->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/dual-stack/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefer != nullptr)
    {
        _children["prefer"] = prefer;
    }

    return _children;
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

    yang_name = "prefer"; yang_parent_name = "transport-connection"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::~Prefer()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/dual-stack/transport-connection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "graceful-restart"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return (helper_peer !=  nullptr && helper_peer->has_data());
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (helper_peer !=  nullptr && helper_peer->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(helper_peer != nullptr)
    {
        _children["helper-peer"] = helper_peer;
    }

    return _children;
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

    yang_name = "helper-peer"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::~HelperPeer()
{
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::has_data() const
{
    if (is_presence_container) return true;
    return maintain_on_local_reset.is_set;
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintain_on_local_reset.yfilter);
}

std::string MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintain_on_local_reset.is_set || is_set(maintain_on_local_reset.yfilter)) leaf_name_data.push_back(maintain_on_local_reset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Interfaces::~Interfaces()
{
}

bool MplsLdp::DefaultVrf::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::DefaultVrf::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::get_children() const
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
    , global(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global>())
{
    afs->parent = this;
    global->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
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

std::string MplsLdp::DefaultVrf::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
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
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::~Afs()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , igp(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp>())
    , mldp(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp>())
{
    discovery->parent = this;
    igp->parent = this;
    mldp->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::~Af()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discovery != nullptr)
    {
        _children["discovery"] = discovery;
    }

    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    if(mldp != nullptr)
    {
        _children["mldp"] = mldp;
    }

    return _children;
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

    yang_name = "discovery"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transport_address != nullptr)
    {
        _children["transport-address"] = transport_address;
    }

    return _children;
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
    address_type{YType::enumeration, "address-type"},
    address{YType::str, "address"}
{

    yang_name = "transport-address"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::~TransportAddress()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| address.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "address")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::Igp()
    :
    disable_auto_config{YType::empty, "disable-auto-config"}
{

    yang_name = "igp"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::~Igp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_auto_config.is_set || is_set(disable_auto_config.yfilter)) leaf_name_data.push_back(disable_auto_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "mldp"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::~Mldp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , igp(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp>())
{
    discovery->parent = this;
    igp->parent = this;

    yang_name = "global"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::~Global()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discovery != nullptr)
    {
        _children["discovery"] = discovery;
    }

    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
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

    yang_name = "discovery"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::~Discovery()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_quick_start.is_set || is_set(disable_quick_start.yfilter)) leaf_name_data.push_back(disable_quick_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_hello != nullptr)
    {
        _children["link-hello"] = link_hello;
    }

    return _children;
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
    interval{YType::uint32, "interval"},
    dual_stack{YType::enumeration, "dual-stack"},
    hold_time{YType::uint32, "hold-time"}
{

    yang_name = "link-hello"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::~LinkHello()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| dual_stack.is_set
	|| hold_time.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(dual_stack.yfilter)
	|| ydk::is_set(hold_time.yfilter);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (dual_stack.is_set || is_set(dual_stack.yfilter)) leaf_name_data.push_back(dual_stack.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "dual-stack")
    {
        dual_stack.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "dual-stack" || name == "hold-time")
        return true;
    return false;
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Igp()
    :
    sync(std::make_shared<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync>())
{
    sync->parent = this;

    yang_name = "igp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::~Igp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sync != nullptr)
    {
        _children["sync"] = sync;
    }

    return _children;
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

    yang_name = "sync"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::~Sync()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
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

    yang_name = "delay"; yang_parent_name = "sync"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::~Delay()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(on_session_up != nullptr)
    {
        _children["on-session-up"] = on_session_up;
    }

    return _children;
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

    yang_name = "on-session-up"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::~OnSessionUp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Vrfs::~Vrfs()
{
}

bool MplsLdp::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<MplsLdp::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    global(std::make_shared<MplsLdp::Vrfs::Vrf::Global>())
    , afs(std::make_shared<MplsLdp::Vrfs::Vrf::Afs>())
    , interfaces(std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces>())
{
    global->parent = this;
    afs->parent = this;
    interfaces->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Vrfs::Vrf::~Vrf()
{
}

bool MplsLdp::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| enable.is_set
	|| (global !=  nullptr && global->has_data())
	|| (afs !=  nullptr && afs->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsLdp::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLdp::Vrfs::Vrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<MplsLdp::Vrfs::Vrf::Afs>();
        }
        return afs;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
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
    if(name == "global" || name == "afs" || name == "interfaces" || name == "vrf-name" || name == "enable")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Global()
    :
    router_id{YType::str, "router-id"}
        ,
    session(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Session>())
    , neighbor(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor>())
    , graceful_restart(std::make_shared<MplsLdp::Vrfs::Vrf::Global::GracefulRestart>())
{
    session->parent = this;
    neighbor->parent = this;
    graceful_restart->parent = this;

    yang_name = "global"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::~Global()
{
}

bool MplsLdp::Vrfs::Vrf::Global::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| (session !=  nullptr && session->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Session>();
        }
        return session;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::Vrfs::Vrf::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(neighbor != nullptr)
    {
        _children["neighbor"] = neighbor;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    return _children;
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
    if(name == "session" || name == "neighbor" || name == "graceful-restart" || name == "router-id")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Session::Session()
    :
    downstream_on_demand(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand>())
{
    downstream_on_demand->parent = this;

    yang_name = "session"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::Session::~Session()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Session::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(downstream_on_demand != nullptr)
    {
        _children["downstream-on-demand"] = downstream_on_demand;
    }

    return _children;
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
    type{YType::enumeration, "type"},
    peer_acl_name{YType::str, "peer-acl-name"}
{

    yang_name = "downstream-on-demand"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::~DownstreamOnDemand()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| peer_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(peer_acl_name.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-on-demand";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "peer-acl-name")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::Neighbor()
    :
    password{YType::str, "password"}
        ,
    dual_stack(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack>())
    , ldp_ids(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds>())
{
    dual_stack->parent = this;
    ldp_ids->parent = this;

    yang_name = "neighbor"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::~Neighbor()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return password.is_set
	|| (dual_stack !=  nullptr && dual_stack->has_data())
	|| (ldp_ids !=  nullptr && ldp_ids->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| (dual_stack !=  nullptr && dual_stack->has_operation())
	|| (ldp_ids !=  nullptr && ldp_ids->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dual-stack")
    {
        if(dual_stack == nullptr)
        {
            dual_stack = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack>();
        }
        return dual_stack;
    }

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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dual_stack != nullptr)
    {
        _children["dual-stack"] = dual_stack;
    }

    if(ldp_ids != nullptr)
    {
        _children["ldp-ids"] = ldp_ids;
    }

    return _children;
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
    if(name == "dual-stack" || name == "ldp-ids" || name == "password")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::DualStack()
    :
    transport_connection(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection>())
{
    transport_connection->parent = this;

    yang_name = "dual-stack"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::~DualStack()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::has_data() const
{
    if (is_presence_container) return true;
    return (transport_connection !=  nullptr && transport_connection->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::has_operation() const
{
    return is_set(yfilter)
	|| (transport_connection !=  nullptr && transport_connection->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport-connection")
    {
        if(transport_connection == nullptr)
        {
            transport_connection = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection>();
        }
        return transport_connection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transport_connection != nullptr)
    {
        _children["transport-connection"] = transport_connection;
    }

    return _children;
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-connection")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::TransportConnection()
    :
    max_wait{YType::uint32, "max-wait"}
        ,
    prefer(std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer>())
{
    prefer->parent = this;

    yang_name = "transport-connection"; yang_parent_name = "dual-stack"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::~TransportConnection()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::has_data() const
{
    if (is_presence_container) return true;
    return max_wait.is_set
	|| (prefer !=  nullptr && prefer->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_wait.yfilter)
	|| (prefer !=  nullptr && prefer->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefer")
    {
        if(prefer == nullptr)
        {
            prefer = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer>();
        }
        return prefer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefer != nullptr)
    {
        _children["prefer"] = prefer;
    }

    return _children;
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-wait")
    {
        max_wait = value;
        max_wait.value_namespace = name_space;
        max_wait.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefer" || name == "max-wait")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer::Prefer()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "prefer"; yang_parent_name = "transport-connection"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer::~Prefer()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::DualStack::TransportConnection::Prefer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpIds()
    :
    ldp_id(this, {"lsr_id", "label_space_id"})
{

    yang_name = "ldp-ids"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::~LdpIds()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldp_id.len(); index++)
    {
        if(ldp_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::has_operation() const
{
    for (std::size_t index=0; index<ldp_id.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-id")
    {
        auto ent_ = std::make_shared<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId>();
        ent_->parent = this;
        ldp_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ldp_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "ldp-id"; yang_parent_name = "ldp-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::~LdpId()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "ldp-id";
    ADD_KEY_TOKEN(lsr_id, "lsr-id");
    ADD_KEY_TOKEN(label_space_id, "label-space-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
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

    yang_name = "password"; yang_parent_name = "ldp-id"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::~Password()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command_type.is_set || is_set(command_type.yfilter)) leaf_name_data.push_back(command_type.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "graceful-restart"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(helper_peer != nullptr)
    {
        _children["helper-peer"] = helper_peer;
    }

    return _children;
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

    yang_name = "helper-peer"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::~HelperPeer()
{
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintain_on_local_reset.is_set || is_set(maintain_on_local_reset.yfilter)) leaf_name_data.push_back(maintain_on_local_reset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::~Afs()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , label(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label>())
{
    discovery->parent = this;
    label->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discovery != nullptr)
    {
        _children["discovery"] = discovery;
    }

    if(label != nullptr)
    {
        _children["label"] = label;
    }

    return _children;
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

    yang_name = "discovery"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_address.is_set || is_set(transport_address.yfilter)) leaf_name_data.push_back(transport_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    remote(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote>())
    , local(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local>())
{
    remote->parent = this;
    local->parent = this;

    yang_name = "label"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::~Label()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::has_data() const
{
    if (is_presence_container) return true;
    return (remote !=  nullptr && remote->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::has_operation() const
{
    return is_set(yfilter)
	|| (remote !=  nullptr && remote->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote>();
        }
        return remote;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote" || name == "local")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Remote()
    :
    accept(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept>())
{
    accept->parent = this;

    yang_name = "remote"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::~Remote()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accept != nullptr)
    {
        _children["accept"] = accept;
    }

    return _children;
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

    yang_name = "accept"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::~Accept()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_accept_policies != nullptr)
    {
        _children["peer-accept-policies"] = peer_accept_policies;
    }

    return _children;
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
    :
    peer_accept_policy(this, {"label_space_id"})
{

    yang_name = "peer-accept-policies"; yang_parent_name = "accept"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::~PeerAcceptPolicies()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_accept_policy.len(); index++)
    {
        if(peer_accept_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_accept_policy.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-accept-policy")
    {
        auto ent_ = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy>();
        ent_->parent = this;
        peer_accept_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_accept_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , lsr_id(this, {"lsr_id"})
{
    peer_accept_policy_data->parent = this;

    yang_name = "peer-accept-policy"; yang_parent_name = "peer-accept-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::~PeerAcceptPolicy()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsr_id.len(); index++)
    {
        if(lsr_id[index]->has_data())
            return true;
    }
    return label_space_id.is_set
	|| (peer_accept_policy_data !=  nullptr && peer_accept_policy_data->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_operation() const
{
    for (std::size_t index=0; index<lsr_id.len(); index++)
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
    path_buffer << "peer-accept-policy";
    ADD_KEY_TOKEN(label_space_id, "label-space-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-accept-policy-data")
    {
        if(peer_accept_policy_data == nullptr)
        {
            peer_accept_policy_data = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData>();
        }
        return peer_accept_policy_data;
    }

    if(child_yang_name == "lsr-id")
    {
        auto ent_ = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId>();
        ent_->parent = this;
        lsr_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_accept_policy_data != nullptr)
    {
        _children["peer-accept-policy-data"] = peer_accept_policy_data;
    }

    count_ = 0;
    for (auto ent_ : lsr_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if(name == "peer-accept-policy-data" || name == "lsr-id" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::PeerAcceptPolicyData()
    :
    prefix_acl_name{YType::str, "prefix-acl-name"}
{

    yang_name = "peer-accept-policy-data"; yang_parent_name = "peer-accept-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::~PeerAcceptPolicyData()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "lsr-id"; yang_parent_name = "peer-accept-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::~LsrId()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "lsr-id";
    ADD_KEY_TOKEN(lsr_id, "lsr-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    implicit_null_override{YType::str, "implicit-null-override"},
    default_route{YType::empty, "default-route"}
        ,
    advertise(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise>())
    , allocate(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate>())
{
    advertise->parent = this;
    allocate->parent = this;

    yang_name = "local"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::~Local()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::has_data() const
{
    if (is_presence_container) return true;
    return implicit_null_override.is_set
	|| default_route.is_set
	|| (advertise !=  nullptr && advertise->has_data())
	|| (allocate !=  nullptr && allocate->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(implicit_null_override.yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (implicit_null_override.is_set || is_set(implicit_null_override.yfilter)) leaf_name_data.push_back(implicit_null_override.get_name_leafdata());
    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertise != nullptr)
    {
        _children["advertise"] = advertise;
    }

    if(allocate != nullptr)
    {
        _children["allocate"] = allocate;
    }

    return _children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "implicit-null-override")
    {
        implicit_null_override = value;
        implicit_null_override.value_namespace = name_space;
        implicit_null_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "implicit-null-override")
    {
        implicit_null_override.yfilter = yfilter;
    }
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "allocate" || name == "implicit-null-override" || name == "default-route")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Advertise()
    :
    disable{YType::empty, "disable"}
        ,
    peer_advertise_policies(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies>())
    , interfaces(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces>())
    , explicit_null(std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull>())
{
    peer_advertise_policies->parent = this;
    interfaces->parent = this;
    explicit_null->parent = this;

    yang_name = "advertise"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::~Advertise()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (explicit_null !=  nullptr && explicit_null->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (explicit_null !=  nullptr && explicit_null->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-advertise-policies")
    {
        if(peer_advertise_policies == nullptr)
        {
            peer_advertise_policies = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies>();
        }
        return peer_advertise_policies;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "explicit-null")
    {
        if(explicit_null == nullptr)
        {
            explicit_null = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull>();
        }
        return explicit_null;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_advertise_policies != nullptr)
    {
        _children["peer-advertise-policies"] = peer_advertise_policies;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(explicit_null != nullptr)
    {
        _children["explicit-null"] = explicit_null;
    }

    return _children;
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
    if(name == "peer-advertise-policies" || name == "interfaces" || name == "explicit-null" || name == "disable")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicies()
    :
    peer_advertise_policy(this, {"label_space_id"})
{

    yang_name = "peer-advertise-policies"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::~PeerAdvertisePolicies()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_advertise_policy.len(); index++)
    {
        if(peer_advertise_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_advertise_policy.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-advertise-policy")
    {
        auto ent_ = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy>();
        ent_->parent = this;
        peer_advertise_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_advertise_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , lsr_id(this, {"lsr_id"})
{
    peer_advertise_policy_data->parent = this;

    yang_name = "peer-advertise-policy"; yang_parent_name = "peer-advertise-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::~PeerAdvertisePolicy()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsr_id.len(); index++)
    {
        if(lsr_id[index]->has_data())
            return true;
    }
    return label_space_id.is_set
	|| (peer_advertise_policy_data !=  nullptr && peer_advertise_policy_data->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_operation() const
{
    for (std::size_t index=0; index<lsr_id.len(); index++)
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
    path_buffer << "peer-advertise-policy";
    ADD_KEY_TOKEN(label_space_id, "label-space-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.yfilter)) leaf_name_data.push_back(label_space_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-advertise-policy-data")
    {
        if(peer_advertise_policy_data == nullptr)
        {
            peer_advertise_policy_data = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData>();
        }
        return peer_advertise_policy_data;
    }

    if(child_yang_name == "lsr-id")
    {
        auto ent_ = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId>();
        ent_->parent = this;
        lsr_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_advertise_policy_data != nullptr)
    {
        _children["peer-advertise-policy-data"] = peer_advertise_policy_data;
    }

    count_ = 0;
    for (auto ent_ : lsr_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if(name == "peer-advertise-policy-data" || name == "lsr-id" || name == "label-space-id")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::PeerAdvertisePolicyData()
    :
    prefix_acl_name{YType::str, "prefix-acl-name"}
{

    yang_name = "peer-advertise-policy-data"; yang_parent_name = "peer-advertise-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::~PeerAdvertisePolicyData()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "lsr-id"; yang_parent_name = "peer-advertise-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::~LsrId()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "lsr-id";
    ADD_KEY_TOKEN(lsr_id, "lsr-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::~Interfaces()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::get_children() const
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

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    prefix_acl_name{YType::str, "prefix-acl-name"},
    peer_acl_name{YType::str, "peer-acl-name"}
{

    yang_name = "explicit-null"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::~ExplicitNull()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_data() const
{
    if (is_presence_container) return true;
    return explicit_null_type.is_set
	|| prefix_acl_name.is_set
	|| peer_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null_type.yfilter)
	|| ydk::is_set(prefix_acl_name.yfilter)
	|| ydk::is_set(peer_acl_name.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null_type.is_set || is_set(explicit_null_type.yfilter)) leaf_name_data.push_back(explicit_null_type.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.yfilter)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null-type")
    {
        explicit_null_type = value;
        explicit_null_type.value_namespace = name_space;
        explicit_null_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
        prefix_acl_name.value_namespace = name_space;
        prefix_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
        peer_acl_name.value_namespace = name_space;
        peer_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null-type")
    {
        explicit_null_type.yfilter = yfilter;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name.yfilter = yfilter;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null-type" || name == "prefix-acl-name" || name == "peer-acl-name")
        return true;
    return false;
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::Allocate()
    :
    allocation_type{YType::enumeration, "allocation-type"},
    prefix_acl_name{YType::str, "prefix-acl-name"}
{

    yang_name = "allocate"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::~Allocate()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocation_type.is_set || is_set(allocation_type.yfilter)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.yfilter)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Interfaces::get_children() const
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

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    return _children;
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
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::~Afs()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::~Af()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discovery != nullptr)
    {
        _children["discovery"] = discovery;
    }

    return _children;
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

    yang_name = "discovery"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transport_address != nullptr)
    {
        _children["transport-address"] = transport_address;
    }

    return _children;
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
    address_type{YType::enumeration, "address-type"},
    address{YType::str, "address"}
{

    yang_name = "transport-address"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::~TransportAddress()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_data() const
{
    if (is_presence_container) return true;
    return address_type.is_set
	|| address.is_set;
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_type.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.yfilter)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-type")
    {
        address_type = value;
        address_type.value_namespace = name_space;
        address_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-type")
    {
        address_type.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-type" || name == "address")
        return true;
    return false;
}

MplsLdp::Global::Global()
    :
    disable_implicit_ipv4{YType::empty, "disable-implicit-ipv4"},
    ltrace_buf_multiplier{YType::uint32, "ltrace-buf-multiplier"}
        ,
    entropy_label(std::make_shared<MplsLdp::Global::EntropyLabel>())
    , session(std::make_shared<MplsLdp::Global::Session>())
    , igp(std::make_shared<MplsLdp::Global::Igp>())
    , enable_logging(std::make_shared<MplsLdp::Global::EnableLogging>())
    , signalling(std::make_shared<MplsLdp::Global::Signalling>())
    , nsr(std::make_shared<MplsLdp::Global::Nsr>())
    , graceful_restart(std::make_shared<MplsLdp::Global::GracefulRestart>())
    , discovery(std::make_shared<MplsLdp::Global::Discovery>())
    , mldp(std::make_shared<MplsLdp::Global::Mldp>())
{
    entropy_label->parent = this;
    session->parent = this;
    igp->parent = this;
    enable_logging->parent = this;
    signalling->parent = this;
    nsr->parent = this;
    graceful_restart->parent = this;
    discovery->parent = this;
    mldp->parent = this;

    yang_name = "global"; yang_parent_name = "mpls-ldp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::~Global()
{
}

bool MplsLdp::Global::has_data() const
{
    if (is_presence_container) return true;
    return disable_implicit_ipv4.is_set
	|| ltrace_buf_multiplier.is_set
	|| (entropy_label !=  nullptr && entropy_label->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (enable_logging !=  nullptr && enable_logging->has_data())
	|| (signalling !=  nullptr && signalling->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (mldp !=  nullptr && mldp->has_data());
}

bool MplsLdp::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_implicit_ipv4.yfilter)
	|| ydk::is_set(ltrace_buf_multiplier.yfilter)
	|| (entropy_label !=  nullptr && entropy_label->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (enable_logging !=  nullptr && enable_logging->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (mldp !=  nullptr && mldp->has_operation());
}

std::string MplsLdp::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_implicit_ipv4.is_set || is_set(disable_implicit_ipv4.yfilter)) leaf_name_data.push_back(disable_implicit_ipv4.get_name_leafdata());
    if (ltrace_buf_multiplier.is_set || is_set(ltrace_buf_multiplier.yfilter)) leaf_name_data.push_back(ltrace_buf_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entropy-label")
    {
        if(entropy_label == nullptr)
        {
            entropy_label = std::make_shared<MplsLdp::Global::EntropyLabel>();
        }
        return entropy_label;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<MplsLdp::Global::Session>();
        }
        return session;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<MplsLdp::Global::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "enable-logging")
    {
        if(enable_logging == nullptr)
        {
            enable_logging = std::make_shared<MplsLdp::Global::EnableLogging>();
        }
        return enable_logging;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<MplsLdp::Global::Signalling>();
        }
        return signalling;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<MplsLdp::Global::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<MplsLdp::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<MplsLdp::Global::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "mldp")
    {
        if(mldp == nullptr)
        {
            mldp = std::make_shared<MplsLdp::Global::Mldp>();
        }
        return mldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entropy_label != nullptr)
    {
        _children["entropy-label"] = entropy_label;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    if(enable_logging != nullptr)
    {
        _children["enable-logging"] = enable_logging;
    }

    if(signalling != nullptr)
    {
        _children["signalling"] = signalling;
    }

    if(nsr != nullptr)
    {
        _children["nsr"] = nsr;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(discovery != nullptr)
    {
        _children["discovery"] = discovery;
    }

    if(mldp != nullptr)
    {
        _children["mldp"] = mldp;
    }

    return _children;
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
    if(name == "entropy-label" || name == "session" || name == "igp" || name == "enable-logging" || name == "signalling" || name == "nsr" || name == "graceful-restart" || name == "discovery" || name == "mldp" || name == "disable-implicit-ipv4" || name == "ltrace-buf-multiplier")
        return true;
    return false;
}

MplsLdp::Global::EntropyLabel::EntropyLabel()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "entropy-label"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::EntropyLabel::~EntropyLabel()
{
}

bool MplsLdp::Global::EntropyLabel::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool MplsLdp::Global::EntropyLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsLdp::Global::EntropyLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::EntropyLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entropy-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::EntropyLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::EntropyLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::EntropyLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "session"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Session::~Session()
{
}

bool MplsLdp::Global::Session::has_data() const
{
    if (is_presence_container) return true;
    return hold_time.is_set
	|| (backoff_time !=  nullptr && backoff_time->has_data());
}

bool MplsLdp::Global::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| (backoff_time !=  nullptr && backoff_time->has_operation());
}

std::string MplsLdp::Global::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backoff_time != nullptr)
    {
        _children["backoff-time"] = backoff_time;
    }

    return _children;
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

    yang_name = "backoff-time"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Session::BackoffTime::~BackoffTime()
{
}

bool MplsLdp::Global::Session::BackoffTime::has_data() const
{
    if (is_presence_container) return true;
    return initial_backoff_time.is_set
	|| max_backoff_time.is_set;
}

bool MplsLdp::Global::Session::BackoffTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_backoff_time.yfilter)
	|| ydk::is_set(max_backoff_time.yfilter);
}

std::string MplsLdp::Global::Session::BackoffTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/session/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Session::BackoffTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Session::BackoffTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_backoff_time.is_set || is_set(initial_backoff_time.yfilter)) leaf_name_data.push_back(initial_backoff_time.get_name_leafdata());
    if (max_backoff_time.is_set || is_set(max_backoff_time.yfilter)) leaf_name_data.push_back(max_backoff_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Session::BackoffTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Session::BackoffTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "igp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Igp::~Igp()
{
}

bool MplsLdp::Global::Igp::has_data() const
{
    if (is_presence_container) return true;
    return (sync !=  nullptr && sync->has_data());
}

bool MplsLdp::Global::Igp::has_operation() const
{
    return is_set(yfilter)
	|| (sync !=  nullptr && sync->has_operation());
}

std::string MplsLdp::Global::Igp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sync != nullptr)
    {
        _children["sync"] = sync;
    }

    return _children;
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

    yang_name = "sync"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Igp::Sync::~Sync()
{
}

bool MplsLdp::Global::Igp::Sync::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool MplsLdp::Global::Igp::Sync::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string MplsLdp::Global::Igp::Sync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/igp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Igp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Igp::Sync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Igp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Igp::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
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
    on_session_up{YType::uint32, "on-session-up"},
    on_proc_restart{YType::uint32, "on-proc-restart"}
{

    yang_name = "delay"; yang_parent_name = "sync"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Igp::Sync::Delay::~Delay()
{
}

bool MplsLdp::Global::Igp::Sync::Delay::has_data() const
{
    if (is_presence_container) return true;
    return on_session_up.is_set
	|| on_proc_restart.is_set;
}

bool MplsLdp::Global::Igp::Sync::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on_session_up.yfilter)
	|| ydk::is_set(on_proc_restart.yfilter);
}

std::string MplsLdp::Global::Igp::Sync::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/igp/sync/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Igp::Sync::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Igp::Sync::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_session_up.is_set || is_set(on_session_up.yfilter)) leaf_name_data.push_back(on_session_up.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.yfilter)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Igp::Sync::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Igp::Sync::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Igp::Sync::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on-session-up")
    {
        on_session_up = value;
        on_session_up.value_namespace = name_space;
        on_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
        on_proc_restart.value_namespace = name_space;
        on_proc_restart.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Igp::Sync::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on-session-up")
    {
        on_session_up.yfilter = yfilter;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Igp::Sync::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-session-up" || name == "on-proc-restart")
        return true;
    return false;
}

MplsLdp::Global::EnableLogging::EnableLogging()
    :
    nsr{YType::empty, "nsr"},
    neighbor_changes{YType::empty, "neighbor-changes"},
    adjacency{YType::empty, "adjacency"},
    session_protection{YType::empty, "session-protection"},
    gr_session_changes{YType::empty, "gr-session-changes"}
{

    yang_name = "enable-logging"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::EnableLogging::~EnableLogging()
{
}

bool MplsLdp::Global::EnableLogging::has_data() const
{
    if (is_presence_container) return true;
    return nsr.is_set
	|| neighbor_changes.is_set
	|| adjacency.is_set
	|| session_protection.is_set
	|| gr_session_changes.is_set;
}

bool MplsLdp::Global::EnableLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(neighbor_changes.yfilter)
	|| ydk::is_set(adjacency.yfilter)
	|| ydk::is_set(session_protection.yfilter)
	|| ydk::is_set(gr_session_changes.yfilter);
}

std::string MplsLdp::Global::EnableLogging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::EnableLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::EnableLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (neighbor_changes.is_set || is_set(neighbor_changes.yfilter)) leaf_name_data.push_back(neighbor_changes.get_name_leafdata());
    if (adjacency.is_set || is_set(adjacency.yfilter)) leaf_name_data.push_back(adjacency.get_name_leafdata());
    if (session_protection.is_set || is_set(session_protection.yfilter)) leaf_name_data.push_back(session_protection.get_name_leafdata());
    if (gr_session_changes.is_set || is_set(gr_session_changes.yfilter)) leaf_name_data.push_back(gr_session_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::EnableLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::EnableLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::EnableLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-changes")
    {
        neighbor_changes = value;
        neighbor_changes.value_namespace = name_space;
        neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency")
    {
        adjacency = value;
        adjacency.value_namespace = name_space;
        adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-protection")
    {
        session_protection = value;
        session_protection.value_namespace = name_space;
        session_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gr-session-changes")
    {
        gr_session_changes = value;
        gr_session_changes.value_namespace = name_space;
        gr_session_changes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::EnableLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "neighbor-changes")
    {
        neighbor_changes.yfilter = yfilter;
    }
    if(value_path == "adjacency")
    {
        adjacency.yfilter = yfilter;
    }
    if(value_path == "session-protection")
    {
        session_protection.yfilter = yfilter;
    }
    if(value_path == "gr-session-changes")
    {
        gr_session_changes.yfilter = yfilter;
    }
}

bool MplsLdp::Global::EnableLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr" || name == "neighbor-changes" || name == "adjacency" || name == "session-protection" || name == "gr-session-changes")
        return true;
    return false;
}

MplsLdp::Global::Signalling::Signalling()
    :
    dscp{YType::uint32, "dscp"}
{

    yang_name = "signalling"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Signalling::~Signalling()
{
}

bool MplsLdp::Global::Signalling::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set;
}

bool MplsLdp::Global::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string MplsLdp::Global::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "nsr"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Nsr::~Nsr()
{
}

bool MplsLdp::Global::Nsr::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool MplsLdp::Global::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string MplsLdp::Global::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    reconnect_timeout{YType::uint32, "reconnect-timeout"},
    enable{YType::empty, "enable"},
    forwarding_hold_time{YType::uint32, "forwarding-hold-time"}
{

    yang_name = "graceful-restart"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::Global::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return reconnect_timeout.is_set
	|| enable.is_set
	|| forwarding_hold_time.is_set;
}

bool MplsLdp::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reconnect_timeout.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(forwarding_hold_time.yfilter);
}

std::string MplsLdp::Global::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reconnect_timeout.is_set || is_set(reconnect_timeout.yfilter)) leaf_name_data.push_back(reconnect_timeout.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (forwarding_hold_time.is_set || is_set(forwarding_hold_time.yfilter)) leaf_name_data.push_back(forwarding_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout = value;
        reconnect_timeout.value_namespace = name_space;
        reconnect_timeout.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsLdp::Global::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "forwarding-hold-time")
    {
        forwarding_hold_time.yfilter = yfilter;
    }
}

bool MplsLdp::Global::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reconnect-timeout" || name == "enable" || name == "forwarding-hold-time")
        return true;
    return false;
}

MplsLdp::Global::Discovery::Discovery()
    :
    disable_instance_tlv{YType::empty, "disable-instance-tlv"},
    disable_quick_start{YType::empty, "disable-quick-start"}
        ,
    link_hello(std::make_shared<MplsLdp::Global::Discovery::LinkHello>())
    , targeted_hello(std::make_shared<MplsLdp::Global::Discovery::TargetedHello>())
{
    link_hello->parent = this;
    targeted_hello->parent = this;

    yang_name = "discovery"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Discovery::~Discovery()
{
}

bool MplsLdp::Global::Discovery::has_data() const
{
    if (is_presence_container) return true;
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

std::string MplsLdp::Global::Discovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_instance_tlv.is_set || is_set(disable_instance_tlv.yfilter)) leaf_name_data.push_back(disable_instance_tlv.get_name_leafdata());
    if (disable_quick_start.is_set || is_set(disable_quick_start.yfilter)) leaf_name_data.push_back(disable_quick_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_hello != nullptr)
    {
        _children["link-hello"] = link_hello;
    }

    if(targeted_hello != nullptr)
    {
        _children["targeted-hello"] = targeted_hello;
    }

    return _children;
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
    interval{YType::uint32, "interval"},
    hold_time{YType::uint32, "hold-time"}
{

    yang_name = "link-hello"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Discovery::LinkHello::~LinkHello()
{
}

bool MplsLdp::Global::Discovery::LinkHello::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| hold_time.is_set;
}

bool MplsLdp::Global::Discovery::LinkHello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(hold_time.yfilter);
}

std::string MplsLdp::Global::Discovery::LinkHello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Discovery::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Discovery::LinkHello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Discovery::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Discovery::LinkHello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Discovery::LinkHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Discovery::LinkHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Discovery::LinkHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "hold-time")
        return true;
    return false;
}

MplsLdp::Global::Discovery::TargetedHello::TargetedHello()
    :
    interval{YType::uint32, "interval"},
    hold_time{YType::uint32, "hold-time"}
{

    yang_name = "targeted-hello"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Discovery::TargetedHello::~TargetedHello()
{
}

bool MplsLdp::Global::Discovery::TargetedHello::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| hold_time.is_set;
}

bool MplsLdp::Global::Discovery::TargetedHello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(hold_time.yfilter);
}

std::string MplsLdp::Global::Discovery::TargetedHello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Discovery::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Discovery::TargetedHello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Discovery::TargetedHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Discovery::TargetedHello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Discovery::TargetedHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Discovery::TargetedHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Discovery::TargetedHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "hold-time")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Mldp()
    :
    enable{YType::empty, "enable"}
        ,
    vrfs(std::make_shared<MplsLdp::Global::Mldp::Vrfs>())
    , default_vrf(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf>())
    , mldp_global(std::make_shared<MplsLdp::Global::Mldp::MldpGlobal>())
{
    vrfs->parent = this;
    default_vrf->parent = this;
    mldp_global->parent = this;

    yang_name = "mldp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Mldp::~Mldp()
{
}

bool MplsLdp::Global::Mldp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (mldp_global !=  nullptr && mldp_global->has_data());
}

bool MplsLdp::Global::Mldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (mldp_global !=  nullptr && mldp_global->has_operation());
}

std::string MplsLdp::Global::Mldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Mldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<MplsLdp::Global::Mldp::Vrfs>();
        }
        return vrfs;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(default_vrf != nullptr)
    {
        _children["default-vrf"] = default_vrf;
    }

    if(mldp_global != nullptr)
    {
        _children["mldp-global"] = mldp_global;
    }

    return _children;
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
    if(name == "vrfs" || name == "default-vrf" || name == "mldp-global" || name == "enable")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "mldp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Mldp::Vrfs::~Vrfs()
{
}

bool MplsLdp::Global::Mldp::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Mldp::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Mldp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Mldp::Vrfs::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
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

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    return _children;
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
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::~Afs()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    recursive_forwarding(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding>())
    , mldp_recursive_fec(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec>())
    , neighbor_policies(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies>())
    , mo_frr(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr>())
    , make_before_break(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak>())
    , csc(std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc>())
{
    recursive_forwarding->parent = this;
    mldp_recursive_fec->parent = this;
    neighbor_policies->parent = this;
    mo_frr->parent = this;
    make_before_break->parent = this;
    csc->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| enable.is_set
	|| mldp_rib_unicast_always.is_set
	|| (recursive_forwarding !=  nullptr && recursive_forwarding->has_data())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_data())
	|| (neighbor_policies !=  nullptr && neighbor_policies->has_data())
	|| (mo_frr !=  nullptr && mo_frr->has_data())
	|| (make_before_break !=  nullptr && make_before_break->has_data())
	|| (csc !=  nullptr && csc->has_data());
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mldp_rib_unicast_always.yfilter)
	|| (recursive_forwarding !=  nullptr && recursive_forwarding->has_operation())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_operation())
	|| (neighbor_policies !=  nullptr && neighbor_policies->has_operation())
	|| (mo_frr !=  nullptr && mo_frr->has_operation())
	|| (make_before_break !=  nullptr && make_before_break->has_operation())
	|| (csc !=  nullptr && csc->has_operation());
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mldp_rib_unicast_always.is_set || is_set(mldp_rib_unicast_always.yfilter)) leaf_name_data.push_back(mldp_rib_unicast_always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recursive-forwarding")
    {
        if(recursive_forwarding == nullptr)
        {
            recursive_forwarding = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding>();
        }
        return recursive_forwarding;
    }

    if(child_yang_name == "mldp-recursive-fec")
    {
        if(mldp_recursive_fec == nullptr)
        {
            mldp_recursive_fec = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec>();
        }
        return mldp_recursive_fec;
    }

    if(child_yang_name == "neighbor-policies")
    {
        if(neighbor_policies == nullptr)
        {
            neighbor_policies = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies>();
        }
        return neighbor_policies;
    }

    if(child_yang_name == "mo-frr")
    {
        if(mo_frr == nullptr)
        {
            mo_frr = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr>();
        }
        return mo_frr;
    }

    if(child_yang_name == "make-before-break")
    {
        if(make_before_break == nullptr)
        {
            make_before_break = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak>();
        }
        return make_before_break;
    }

    if(child_yang_name == "csc")
    {
        if(csc == nullptr)
        {
            csc = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc>();
        }
        return csc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recursive_forwarding != nullptr)
    {
        _children["recursive-forwarding"] = recursive_forwarding;
    }

    if(mldp_recursive_fec != nullptr)
    {
        _children["mldp-recursive-fec"] = mldp_recursive_fec;
    }

    if(neighbor_policies != nullptr)
    {
        _children["neighbor-policies"] = neighbor_policies;
    }

    if(mo_frr != nullptr)
    {
        _children["mo-frr"] = mo_frr;
    }

    if(make_before_break != nullptr)
    {
        _children["make-before-break"] = make_before_break;
    }

    if(csc != nullptr)
    {
        _children["csc"] = csc;
    }

    return _children;
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
    if(name == "recursive-forwarding" || name == "mldp-recursive-fec" || name == "neighbor-policies" || name == "mo-frr" || name == "make-before-break" || name == "csc" || name == "af-name" || name == "enable" || name == "mldp-rib-unicast-always")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::RecursiveForwarding()
    :
    enable{YType::empty, "enable"},
    policy{YType::str, "policy"}
{

    yang_name = "recursive-forwarding"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::~RecursiveForwarding()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::RecursiveForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "mldp-recursive-fec"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::~MldpRecursiveFec()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    neighbor_policy(this, {"root_address", "policy_mode"})
{

    yang_name = "neighbor-policies"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::~NeighborPolicies()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_policy.len(); index++)
    {
        if(neighbor_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::has_operation() const
{
    for (std::size_t index=0; index<neighbor_policy.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-policy")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy>();
        ent_->parent = this;
        neighbor_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "neighbor-policy"; yang_parent_name = "neighbor-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::~NeighborPolicy()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "neighbor-policy";
    ADD_KEY_TOKEN(root_address, "root-address");
    ADD_KEY_TOKEN(policy_mode, "policy-mode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (root_address.is_set || is_set(root_address.yfilter)) leaf_name_data.push_back(root_address.get_name_leafdata());
    if (policy_mode.is_set || is_set(policy_mode.yfilter)) leaf_name_data.push_back(policy_mode.get_name_leafdata());
    if (route_policy.is_set || is_set(route_policy.yfilter)) leaf_name_data.push_back(route_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "mo-frr"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::~MoFrr()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "make-before-break"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::~MakeBeforeBreak()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signaling != nullptr)
    {
        _children["signaling"] = signaling;
    }

    return _children;
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
    forward_delay{YType::uint32, "forward-delay"},
    delete_delay{YType::uint32, "delete-delay"}
{

    yang_name = "signaling"; yang_parent_name = "make-before-break"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::~Signaling()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::has_data() const
{
    if (is_presence_container) return true;
    return forward_delay.is_set
	|| delete_delay.is_set;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forward_delay.yfilter)
	|| ydk::is_set(delete_delay.yfilter);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_delay.is_set || is_set(forward_delay.yfilter)) leaf_name_data.push_back(forward_delay.get_name_leafdata());
    if (delete_delay.is_set || is_set(delete_delay.yfilter)) leaf_name_data.push_back(delete_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-delay")
    {
        forward_delay = value;
        forward_delay.value_namespace = name_space;
        forward_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-delay")
    {
        delete_delay = value;
        delete_delay.value_namespace = name_space;
        delete_delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-delay")
    {
        forward_delay.yfilter = yfilter;
    }
    if(value_path == "delete-delay")
    {
        delete_delay.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-delay" || name == "delete-delay")
        return true;
    return false;
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::Csc()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "csc"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::~Csc()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "default-vrf"; yang_parent_name = "mldp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Mldp::DefaultVrf::~DefaultVrf()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::has_data() const
{
    if (is_presence_container) return true;
    return (afs !=  nullptr && afs->has_data());
}

bool MplsLdp::Global::Mldp::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsLdp::Global::Mldp::DefaultVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Mldp::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    return _children;
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
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::~Afs()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::DefaultVrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    recursive_forwarding(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding>())
    , mldp_recursive_fec(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec>())
    , neighbor_policies(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies>())
    , mo_frr(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr>())
    , make_before_break(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak>())
    , csc(std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc>())
{
    recursive_forwarding->parent = this;
    mldp_recursive_fec->parent = this;
    neighbor_policies->parent = this;
    mo_frr->parent = this;
    make_before_break->parent = this;
    csc->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::~Af()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| enable.is_set
	|| mldp_rib_unicast_always.is_set
	|| (recursive_forwarding !=  nullptr && recursive_forwarding->has_data())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_data())
	|| (neighbor_policies !=  nullptr && neighbor_policies->has_data())
	|| (mo_frr !=  nullptr && mo_frr->has_data())
	|| (make_before_break !=  nullptr && make_before_break->has_data())
	|| (csc !=  nullptr && csc->has_data());
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mldp_rib_unicast_always.yfilter)
	|| (recursive_forwarding !=  nullptr && recursive_forwarding->has_operation())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_operation())
	|| (neighbor_policies !=  nullptr && neighbor_policies->has_operation())
	|| (mo_frr !=  nullptr && mo_frr->has_operation())
	|| (make_before_break !=  nullptr && make_before_break->has_operation())
	|| (csc !=  nullptr && csc->has_operation());
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/default-vrf/afs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mldp_rib_unicast_always.is_set || is_set(mldp_rib_unicast_always.yfilter)) leaf_name_data.push_back(mldp_rib_unicast_always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recursive-forwarding")
    {
        if(recursive_forwarding == nullptr)
        {
            recursive_forwarding = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding>();
        }
        return recursive_forwarding;
    }

    if(child_yang_name == "mldp-recursive-fec")
    {
        if(mldp_recursive_fec == nullptr)
        {
            mldp_recursive_fec = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec>();
        }
        return mldp_recursive_fec;
    }

    if(child_yang_name == "neighbor-policies")
    {
        if(neighbor_policies == nullptr)
        {
            neighbor_policies = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies>();
        }
        return neighbor_policies;
    }

    if(child_yang_name == "mo-frr")
    {
        if(mo_frr == nullptr)
        {
            mo_frr = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr>();
        }
        return mo_frr;
    }

    if(child_yang_name == "make-before-break")
    {
        if(make_before_break == nullptr)
        {
            make_before_break = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak>();
        }
        return make_before_break;
    }

    if(child_yang_name == "csc")
    {
        if(csc == nullptr)
        {
            csc = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc>();
        }
        return csc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recursive_forwarding != nullptr)
    {
        _children["recursive-forwarding"] = recursive_forwarding;
    }

    if(mldp_recursive_fec != nullptr)
    {
        _children["mldp-recursive-fec"] = mldp_recursive_fec;
    }

    if(neighbor_policies != nullptr)
    {
        _children["neighbor-policies"] = neighbor_policies;
    }

    if(mo_frr != nullptr)
    {
        _children["mo-frr"] = mo_frr;
    }

    if(make_before_break != nullptr)
    {
        _children["make-before-break"] = make_before_break;
    }

    if(csc != nullptr)
    {
        _children["csc"] = csc;
    }

    return _children;
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
    if(name == "recursive-forwarding" || name == "mldp-recursive-fec" || name == "neighbor-policies" || name == "mo-frr" || name == "make-before-break" || name == "csc" || name == "af-name" || name == "enable" || name == "mldp-rib-unicast-always")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::RecursiveForwarding()
    :
    enable{YType::empty, "enable"},
    policy{YType::str, "policy"}
{

    yang_name = "recursive-forwarding"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::~RecursiveForwarding()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::RecursiveForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "mldp-recursive-fec"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::~MldpRecursiveFec()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    neighbor_policy(this, {"root_address", "policy_mode"})
{

    yang_name = "neighbor-policies"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::~NeighborPolicies()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_policy.len(); index++)
    {
        if(neighbor_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::has_operation() const
{
    for (std::size_t index=0; index<neighbor_policy.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-policy")
    {
        auto ent_ = std::make_shared<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy>();
        ent_->parent = this;
        neighbor_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "neighbor-policy"; yang_parent_name = "neighbor-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::~NeighborPolicy()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "neighbor-policy";
    ADD_KEY_TOKEN(root_address, "root-address");
    ADD_KEY_TOKEN(policy_mode, "policy-mode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (root_address.is_set || is_set(root_address.yfilter)) leaf_name_data.push_back(root_address.get_name_leafdata());
    if (policy_mode.is_set || is_set(policy_mode.yfilter)) leaf_name_data.push_back(policy_mode.get_name_leafdata());
    if (route_policy.is_set || is_set(route_policy.yfilter)) leaf_name_data.push_back(route_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::NeighborPolicies::NeighborPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "mo-frr"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::~MoFrr()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "make-before-break"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::~MakeBeforeBreak()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signaling != nullptr)
    {
        _children["signaling"] = signaling;
    }

    return _children;
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
    forward_delay{YType::uint32, "forward-delay"},
    delete_delay{YType::uint32, "delete-delay"}
{

    yang_name = "signaling"; yang_parent_name = "make-before-break"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::~Signaling()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::has_data() const
{
    if (is_presence_container) return true;
    return forward_delay.is_set
	|| delete_delay.is_set;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forward_delay.yfilter)
	|| ydk::is_set(delete_delay.yfilter);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_delay.is_set || is_set(forward_delay.yfilter)) leaf_name_data.push_back(forward_delay.get_name_leafdata());
    if (delete_delay.is_set || is_set(delete_delay.yfilter)) leaf_name_data.push_back(delete_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-delay")
    {
        forward_delay = value;
        forward_delay.value_namespace = name_space;
        forward_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-delay")
    {
        delete_delay = value;
        delete_delay.value_namespace = name_space;
        delete_delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-delay")
    {
        forward_delay.yfilter = yfilter;
    }
    if(value_path == "delete-delay")
    {
        delete_delay.yfilter = yfilter;
    }
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-delay" || name == "delete-delay")
        return true;
    return false;
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::Csc()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "csc"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::~Csc()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "mldp-global"; yang_parent_name = "mldp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Mldp::MldpGlobal::~MldpGlobal()
{
}

bool MplsLdp::Global::Mldp::MldpGlobal::has_data() const
{
    if (is_presence_container) return true;
    return (logging !=  nullptr && logging->has_data());
}

bool MplsLdp::Global::Mldp::MldpGlobal::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsLdp::Global::Mldp::MldpGlobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Mldp::MldpGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::MldpGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::MldpGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::MldpGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    return _children;
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

    yang_name = "logging"; yang_parent_name = "mldp-global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsLdp::Global::Mldp::MldpGlobal::Logging::~Logging()
{
}

bool MplsLdp::Global::Mldp::MldpGlobal::Logging::has_data() const
{
    if (is_presence_container) return true;
    return notifications.is_set;
}

bool MplsLdp::Global::Mldp::MldpGlobal::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notifications.yfilter);
}

std::string MplsLdp::Global::Mldp::MldpGlobal::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/mldp-global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLdp::Global::Mldp::MldpGlobal::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLdp::Global::Mldp::MldpGlobal::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsLdp::Global::Mldp::MldpGlobal::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsLdp::Global::Mldp::MldpGlobal::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

const Enum::YLeaf MplsLdpNbrPassword::disable {1, "disable"};
const Enum::YLeaf MplsLdpNbrPassword::specified {2, "specified"};

const Enum::YLeaf MplsLdpLabelAllocation::acl {1, "acl"};
const Enum::YLeaf MplsLdpLabelAllocation::host {2, "host"};

const Enum::YLeaf MplsLdpDownstreamOnDemand::peer_acl {1, "peer-acl"};

const Enum::YLeaf MldpPolicyMode::inbound {1, "inbound"};
const Enum::YLeaf MldpPolicyMode::outbound {2, "outbound"};

const Enum::YLeaf MplsLdpTargetedAccept::all {1, "all"};
const Enum::YLeaf MplsLdpTargetedAccept::from {2, "from"};

const Enum::YLeaf MplsLdpExpNull::all {1, "all"};
const Enum::YLeaf MplsLdpExpNull::for_ {2, "for"};
const Enum::YLeaf MplsLdpExpNull::to {3, "to"};
const Enum::YLeaf MplsLdpExpNull::for_to {4, "for-to"};

const Enum::YLeaf MplsLdpafName::ipv4 {4, "ipv4"};
const Enum::YLeaf MplsLdpafName::ipv6 {6, "ipv6"};

const Enum::YLeaf MplsLdpTransportAddress::interface {1, "interface"};
const Enum::YLeaf MplsLdpTransportAddress::address {2, "address"};

const Enum::YLeaf MplsLdpSessionProtection::all {1, "all"};
const Enum::YLeaf MplsLdpSessionProtection::for_ {2, "for"};
const Enum::YLeaf MplsLdpSessionProtection::all_with_duration {3, "all-with-duration"};
const Enum::YLeaf MplsLdpSessionProtection::for_with_duration {4, "for-with-duration"};
const Enum::YLeaf MplsLdpSessionProtection::all_with_forever {5, "all-with-forever"};
const Enum::YLeaf MplsLdpSessionProtection::for_with_forever {6, "for-with-forever"};

const Enum::YLeaf MplsLdpLabelAdvertise::for_ {1, "for"};
const Enum::YLeaf MplsLdpLabelAdvertise::for_to {2, "for-to"};

const Enum::YLeaf MplsLdpAdvertiseBgpAcl::peer_acl {1, "peer-acl"};


}
}

