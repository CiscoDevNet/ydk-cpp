
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_cfg_0.hpp"
#include "Cisco_IOS_XR_ipv4_pim_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_cfg {

Pim::Pim()
    :
    default_context(nullptr) // presence node
	,vrfs(std::make_shared<Pim::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "pim"; yang_parent_name = "Cisco-IOS-XR-ipv4-pim-cfg";
}

Pim::~Pim()
{
}

bool Pim::has_data() const
{
    return (default_context !=  nullptr && default_context->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Pim::has_operation() const
{
    return is_set(yfilter)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim";

    return path_buffer.str();

}

const EntityPath Pim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Pim::DefaultContext>();
        }
        return default_context;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Pim::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_context != nullptr)
    {
        children["default-context"] = default_context;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Pim::clone_ptr() const
{
    return std::make_shared<Pim>();
}

std::string Pim::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pim::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pim::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Pim::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-context" || name == "vrfs")
        return true;
    return false;
}

Pim::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "pim";
}

Pim::Vrfs::~Vrfs()
{
}

bool Pim::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pim::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    ipv4(std::make_shared<Pim::Vrfs::Vrf::Ipv4>())
	,ipv6(std::make_shared<Pim::Vrfs::Vrf::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Pim::Vrfs::Vrf::~Vrf()
{
}

bool Pim::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Pim::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Pim::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Pim::Vrfs::Vrf::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Pim::Vrfs::Vrf::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Pim::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "vrf-name")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Ipv4()
    :
    accept_register{YType::str, "accept-register"},
    auto_rp_disable{YType::empty, "auto-rp-disable"},
    log_neighbor_changes{YType::empty, "log-neighbor-changes"},
    multipath{YType::enumeration, "multipath"},
    neighbor_check_on_receive{YType::empty, "neighbor-check-on-receive"},
    neighbor_check_on_send{YType::empty, "neighbor-check-on-send"},
    neighbor_filter{YType::str, "neighbor-filter"},
    old_register_checksum{YType::empty, "old-register-checksum"},
    register_source{YType::str, "register-source"},
    rp_static_deny{YType::str, "rp-static-deny"},
    spt_threshold_infinity{YType::str, "spt-threshold-infinity"},
    ssm_allow_override{YType::empty, "ssm-allow-override"},
    suppress_data_registers{YType::empty, "suppress-data-registers"},
    suppress_rpf_prunes{YType::empty, "suppress-rpf-prunes"}
    	,
    allow_rp(nullptr) // presence node
	,bidir_rp_addresses(std::make_shared<Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses>())
	,bsr(std::make_shared<Pim::Vrfs::Vrf::Ipv4::Bsr>())
	,cj_multicast_only_frrs(std::make_shared<Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs>())
	,convergence(std::make_shared<Pim::Vrfs::Vrf::Ipv4::Convergence>())
	,cs_multicast_only_frrs(std::make_shared<Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs>())
	,inheritable_defaults(std::make_shared<Pim::Vrfs::Vrf::Ipv4::InheritableDefaults>())
	,injects(std::make_shared<Pim::Vrfs::Vrf::Ipv4::Injects>())
	,interfaces(std::make_shared<Pim::Vrfs::Vrf::Ipv4::Interfaces>())
	,maximum(std::make_shared<Pim::Vrfs::Vrf::Ipv4::Maximum>())
	,multicast_only_frr(std::make_shared<Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr>())
	,paths(std::make_shared<Pim::Vrfs::Vrf::Ipv4::Paths>())
	,rpf(std::make_shared<Pim::Vrfs::Vrf::Ipv4::Rpf>())
	,rpf_vector_enable(nullptr) // presence node
	,sg_expiry_timer(std::make_shared<Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer>())
	,sparse_mode_rp_addresses(std::make_shared<Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses>())
	,ssm(std::make_shared<Pim::Vrfs::Vrf::Ipv4::Ssm>())
{
    bidir_rp_addresses->parent = this;

    bsr->parent = this;

    cj_multicast_only_frrs->parent = this;

    convergence->parent = this;

    cs_multicast_only_frrs->parent = this;

    inheritable_defaults->parent = this;

    injects->parent = this;

    interfaces->parent = this;

    maximum->parent = this;

    multicast_only_frr->parent = this;

    paths->parent = this;

    rpf->parent = this;

    sg_expiry_timer->parent = this;

    sparse_mode_rp_addresses->parent = this;

    ssm->parent = this;

    yang_name = "ipv4"; yang_parent_name = "vrf";
}

Pim::Vrfs::Vrf::Ipv4::~Ipv4()
{
}

bool Pim::Vrfs::Vrf::Ipv4::has_data() const
{
    return accept_register.is_set
	|| auto_rp_disable.is_set
	|| log_neighbor_changes.is_set
	|| multipath.is_set
	|| neighbor_check_on_receive.is_set
	|| neighbor_check_on_send.is_set
	|| neighbor_filter.is_set
	|| old_register_checksum.is_set
	|| register_source.is_set
	|| rp_static_deny.is_set
	|| spt_threshold_infinity.is_set
	|| ssm_allow_override.is_set
	|| suppress_data_registers.is_set
	|| suppress_rpf_prunes.is_set
	|| (allow_rp !=  nullptr && allow_rp->has_data())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (cj_multicast_only_frrs !=  nullptr && cj_multicast_only_frrs->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (cs_multicast_only_frrs !=  nullptr && cs_multicast_only_frrs->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (injects !=  nullptr && injects->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (multicast_only_frr !=  nullptr && multicast_only_frr->has_data())
	|| (paths !=  nullptr && paths->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_data())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_data())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Pim::Vrfs::Vrf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_register.yfilter)
	|| ydk::is_set(auto_rp_disable.yfilter)
	|| ydk::is_set(log_neighbor_changes.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(neighbor_check_on_receive.yfilter)
	|| ydk::is_set(neighbor_check_on_send.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(old_register_checksum.yfilter)
	|| ydk::is_set(register_source.yfilter)
	|| ydk::is_set(rp_static_deny.yfilter)
	|| ydk::is_set(spt_threshold_infinity.yfilter)
	|| ydk::is_set(ssm_allow_override.yfilter)
	|| ydk::is_set(suppress_data_registers.yfilter)
	|| ydk::is_set(suppress_rpf_prunes.yfilter)
	|| (allow_rp !=  nullptr && allow_rp->has_operation())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_operation())
	|| (bsr !=  nullptr && bsr->has_operation())
	|| (cj_multicast_only_frrs !=  nullptr && cj_multicast_only_frrs->has_operation())
	|| (convergence !=  nullptr && convergence->has_operation())
	|| (cs_multicast_only_frrs !=  nullptr && cs_multicast_only_frrs->has_operation())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_operation())
	|| (injects !=  nullptr && injects->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (multicast_only_frr !=  nullptr && multicast_only_frr->has_operation())
	|| (paths !=  nullptr && paths->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_operation())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_operation())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Pim::Vrfs::Vrf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_register.is_set || is_set(accept_register.yfilter)) leaf_name_data.push_back(accept_register.get_name_leafdata());
    if (auto_rp_disable.is_set || is_set(auto_rp_disable.yfilter)) leaf_name_data.push_back(auto_rp_disable.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.yfilter)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_check_on_receive.is_set || is_set(neighbor_check_on_receive.yfilter)) leaf_name_data.push_back(neighbor_check_on_receive.get_name_leafdata());
    if (neighbor_check_on_send.is_set || is_set(neighbor_check_on_send.yfilter)) leaf_name_data.push_back(neighbor_check_on_send.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (old_register_checksum.is_set || is_set(old_register_checksum.yfilter)) leaf_name_data.push_back(old_register_checksum.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.yfilter)) leaf_name_data.push_back(register_source.get_name_leafdata());
    if (rp_static_deny.is_set || is_set(rp_static_deny.yfilter)) leaf_name_data.push_back(rp_static_deny.get_name_leafdata());
    if (spt_threshold_infinity.is_set || is_set(spt_threshold_infinity.yfilter)) leaf_name_data.push_back(spt_threshold_infinity.get_name_leafdata());
    if (ssm_allow_override.is_set || is_set(ssm_allow_override.yfilter)) leaf_name_data.push_back(ssm_allow_override.get_name_leafdata());
    if (suppress_data_registers.is_set || is_set(suppress_data_registers.yfilter)) leaf_name_data.push_back(suppress_data_registers.get_name_leafdata());
    if (suppress_rpf_prunes.is_set || is_set(suppress_rpf_prunes.yfilter)) leaf_name_data.push_back(suppress_rpf_prunes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow-rp")
    {
        if(allow_rp == nullptr)
        {
            allow_rp = std::make_shared<Pim::Vrfs::Vrf::Ipv4::AllowRp>();
        }
        return allow_rp;
    }

    if(child_yang_name == "bidir-rp-addresses")
    {
        if(bidir_rp_addresses == nullptr)
        {
            bidir_rp_addresses = std::make_shared<Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses>();
        }
        return bidir_rp_addresses;
    }

    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Bsr>();
        }
        return bsr;
    }

    if(child_yang_name == "cj-multicast-only-frrs")
    {
        if(cj_multicast_only_frrs == nullptr)
        {
            cj_multicast_only_frrs = std::make_shared<Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs>();
        }
        return cj_multicast_only_frrs;
    }

    if(child_yang_name == "convergence")
    {
        if(convergence == nullptr)
        {
            convergence = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Convergence>();
        }
        return convergence;
    }

    if(child_yang_name == "cs-multicast-only-frrs")
    {
        if(cs_multicast_only_frrs == nullptr)
        {
            cs_multicast_only_frrs = std::make_shared<Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs>();
        }
        return cs_multicast_only_frrs;
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults == nullptr)
        {
            inheritable_defaults = std::make_shared<Pim::Vrfs::Vrf::Ipv4::InheritableDefaults>();
        }
        return inheritable_defaults;
    }

    if(child_yang_name == "injects")
    {
        if(injects == nullptr)
        {
            injects = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Injects>();
        }
        return injects;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "multicast-only-frr")
    {
        if(multicast_only_frr == nullptr)
        {
            multicast_only_frr = std::make_shared<Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr>();
        }
        return multicast_only_frr;
    }

    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Paths>();
        }
        return paths;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Rpf>();
        }
        return rpf;
    }

    if(child_yang_name == "rpf-vector-enable")
    {
        if(rpf_vector_enable == nullptr)
        {
            rpf_vector_enable = std::make_shared<Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable>();
        }
        return rpf_vector_enable;
    }

    if(child_yang_name == "sg-expiry-timer")
    {
        if(sg_expiry_timer == nullptr)
        {
            sg_expiry_timer = std::make_shared<Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer>();
        }
        return sg_expiry_timer;
    }

    if(child_yang_name == "sparse-mode-rp-addresses")
    {
        if(sparse_mode_rp_addresses == nullptr)
        {
            sparse_mode_rp_addresses = std::make_shared<Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses>();
        }
        return sparse_mode_rp_addresses;
    }

    if(child_yang_name == "ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Ssm>();
        }
        return ssm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow_rp != nullptr)
    {
        children["allow-rp"] = allow_rp;
    }

    if(bidir_rp_addresses != nullptr)
    {
        children["bidir-rp-addresses"] = bidir_rp_addresses;
    }

    if(bsr != nullptr)
    {
        children["bsr"] = bsr;
    }

    if(cj_multicast_only_frrs != nullptr)
    {
        children["cj-multicast-only-frrs"] = cj_multicast_only_frrs;
    }

    if(convergence != nullptr)
    {
        children["convergence"] = convergence;
    }

    if(cs_multicast_only_frrs != nullptr)
    {
        children["cs-multicast-only-frrs"] = cs_multicast_only_frrs;
    }

    if(inheritable_defaults != nullptr)
    {
        children["inheritable-defaults"] = inheritable_defaults;
    }

    if(injects != nullptr)
    {
        children["injects"] = injects;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(multicast_only_frr != nullptr)
    {
        children["multicast-only-frr"] = multicast_only_frr;
    }

    if(paths != nullptr)
    {
        children["paths"] = paths;
    }

    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    if(rpf_vector_enable != nullptr)
    {
        children["rpf-vector-enable"] = rpf_vector_enable;
    }

    if(sg_expiry_timer != nullptr)
    {
        children["sg-expiry-timer"] = sg_expiry_timer;
    }

    if(sparse_mode_rp_addresses != nullptr)
    {
        children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses;
    }

    if(ssm != nullptr)
    {
        children["ssm"] = ssm;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-register")
    {
        accept_register = value;
        accept_register.value_namespace = name_space;
        accept_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rp-disable")
    {
        auto_rp_disable = value;
        auto_rp_disable.value_namespace = name_space;
        auto_rp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
        log_neighbor_changes.value_namespace = name_space;
        log_neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive = value;
        neighbor_check_on_receive.value_namespace = name_space;
        neighbor_check_on_receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send = value;
        neighbor_check_on_send.value_namespace = name_space;
        neighbor_check_on_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum = value;
        old_register_checksum.value_namespace = name_space;
        old_register_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-source")
    {
        register_source = value;
        register_source.value_namespace = name_space;
        register_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny = value;
        rp_static_deny.value_namespace = name_space;
        rp_static_deny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity = value;
        spt_threshold_infinity.value_namespace = name_space;
        spt_threshold_infinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override = value;
        ssm_allow_override.value_namespace = name_space;
        ssm_allow_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers = value;
        suppress_data_registers.value_namespace = name_space;
        suppress_data_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes = value;
        suppress_rpf_prunes.value_namespace = name_space;
        suppress_rpf_prunes.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-register")
    {
        accept_register.yfilter = yfilter;
    }
    if(value_path == "auto-rp-disable")
    {
        auto_rp_disable.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive.yfilter = yfilter;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum.yfilter = yfilter;
    }
    if(value_path == "register-source")
    {
        register_source.yfilter = yfilter;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny.yfilter = yfilter;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity.yfilter = yfilter;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override.yfilter = yfilter;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers.yfilter = yfilter;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-rp" || name == "bidir-rp-addresses" || name == "bsr" || name == "cj-multicast-only-frrs" || name == "convergence" || name == "cs-multicast-only-frrs" || name == "inheritable-defaults" || name == "injects" || name == "interfaces" || name == "maximum" || name == "multicast-only-frr" || name == "paths" || name == "rpf" || name == "rpf-vector-enable" || name == "sg-expiry-timer" || name == "sparse-mode-rp-addresses" || name == "ssm" || name == "accept-register" || name == "auto-rp-disable" || name == "log-neighbor-changes" || name == "multipath" || name == "neighbor-check-on-receive" || name == "neighbor-check-on-send" || name == "neighbor-filter" || name == "old-register-checksum" || name == "register-source" || name == "rp-static-deny" || name == "spt-threshold-infinity" || name == "ssm-allow-override" || name == "suppress-data-registers" || name == "suppress-rpf-prunes")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddresses()
{
    yang_name = "sparse-mode-rp-addresses"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::~SparseModeRpAddresses()
{
}

bool Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::has_data() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-addresses";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SparseModeRpAddresses' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sparse-mode-rp-address")
    {
        for(auto const & c : sparse_mode_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress>();
        c->parent = this;
        sparse_mode_rp_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sparse_mode_rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sparse-mode-rp-address")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::SparseModeRpAddress()
    :
    rp_address{YType::str, "rp-address"},
    access_list_name{YType::str, "access-list-name"},
    auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "sparse-mode-rp-address"; yang_parent_name = "sparse-mode-rp-addresses";
}

Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::~SparseModeRpAddress()
{
}

bool Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(auto_rp_override.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SparseModeRpAddress' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.yfilter)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
        auto_rp_override.value_namespace = name_space;
        auto_rp_override.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "access-list-name" || name == "auto-rp-override")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::MulticastOnlyFrr()
    :
    enable{YType::empty, "enable"},
    flow_multicast_only_frr{YType::str, "flow-multicast-only-frr"},
    non_revertive_multicast_only_frr{YType::empty, "non-revertive-multicast-only-frr"},
    rib_multicast_only_frr{YType::str, "rib-multicast-only-frr"}
{
    yang_name = "multicast-only-frr"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::~MulticastOnlyFrr()
{
}

bool Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::has_data() const
{
    return enable.is_set
	|| flow_multicast_only_frr.is_set
	|| non_revertive_multicast_only_frr.is_set
	|| rib_multicast_only_frr.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(flow_multicast_only_frr.yfilter)
	|| ydk::is_set(non_revertive_multicast_only_frr.yfilter)
	|| ydk::is_set(rib_multicast_only_frr.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-only-frr";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastOnlyFrr' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flow_multicast_only_frr.is_set || is_set(flow_multicast_only_frr.yfilter)) leaf_name_data.push_back(flow_multicast_only_frr.get_name_leafdata());
    if (non_revertive_multicast_only_frr.is_set || is_set(non_revertive_multicast_only_frr.yfilter)) leaf_name_data.push_back(non_revertive_multicast_only_frr.get_name_leafdata());
    if (rib_multicast_only_frr.is_set || is_set(rib_multicast_only_frr.yfilter)) leaf_name_data.push_back(rib_multicast_only_frr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-multicast-only-frr")
    {
        flow_multicast_only_frr = value;
        flow_multicast_only_frr.value_namespace = name_space;
        flow_multicast_only_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-revertive-multicast-only-frr")
    {
        non_revertive_multicast_only_frr = value;
        non_revertive_multicast_only_frr.value_namespace = name_space;
        non_revertive_multicast_only_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-multicast-only-frr")
    {
        rib_multicast_only_frr = value;
        rib_multicast_only_frr.value_namespace = name_space;
        rib_multicast_only_frr.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "flow-multicast-only-frr")
    {
        flow_multicast_only_frr.yfilter = yfilter;
    }
    if(value_path == "non-revertive-multicast-only-frr")
    {
        non_revertive_multicast_only_frr.yfilter = yfilter;
    }
    if(value_path == "rib-multicast-only-frr")
    {
        rib_multicast_only_frr.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "flow-multicast-only-frr" || name == "non-revertive-multicast-only-frr" || name == "rib-multicast-only-frr")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrrs()
{
    yang_name = "cs-multicast-only-frrs"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::~CsMulticastOnlyFrrs()
{
}

bool Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::has_data() const
{
    for (std::size_t index=0; index<cs_multicast_only_frr.size(); index++)
    {
        if(cs_multicast_only_frr[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::has_operation() const
{
    for (std::size_t index=0; index<cs_multicast_only_frr.size(); index++)
    {
        if(cs_multicast_only_frr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cs-multicast-only-frrs";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsMulticastOnlyFrrs' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cs-multicast-only-frr")
    {
        for(auto const & c : cs_multicast_only_frr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr>();
        c->parent = this;
        cs_multicast_only_frr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cs_multicast_only_frr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cs-multicast-only-frr")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::CsMulticastOnlyFrr()
    :
    source{YType::str, "source"},
    primary{YType::str, "primary"},
    backup{YType::str, "backup"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "cs-multicast-only-frr"; yang_parent_name = "cs-multicast-only-frrs";
}

Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::~CsMulticastOnlyFrr()
{
}

bool Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::has_data() const
{
    return source.is_set
	|| primary.is_set
	|| backup.is_set
	|| prefix_length.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(backup.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cs-multicast-only-frr" <<"[source='" <<source <<"']" <<"[primary='" <<primary <<"']" <<"[backup='" <<backup <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsMulticastOnlyFrr' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "primary" || name == "backup" || name == "prefix-length")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::InheritableDefaults()
    :
    convergency{YType::uint32, "convergency"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_interval{YType::uint32, "hello-interval"},
    join_prune_mtu{YType::uint32, "join-prune-mtu"},
    jp_interval{YType::uint32, "jp-interval"},
    override_interval{YType::uint32, "override-interval"},
    propagation_delay{YType::uint32, "propagation-delay"}
{
    yang_name = "inheritable-defaults"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::~InheritableDefaults()
{
}

bool Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::has_data() const
{
    return convergency.is_set
	|| dr_priority.is_set
	|| hello_interval.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(convergency.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(join_prune_mtu.yfilter)
	|| ydk::is_set(jp_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritableDefaults' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (convergency.is_set || is_set(convergency.yfilter)) leaf_name_data.push_back(convergency.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.yfilter)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.yfilter)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "convergency")
    {
        convergency = value;
        convergency.value_namespace = name_space;
        convergency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
        join_prune_mtu.value_namespace = name_space;
        join_prune_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
        jp_interval.value_namespace = name_space;
        jp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "convergency")
    {
        convergency.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu.yfilter = yfilter;
    }
    if(value_path == "jp-interval")
    {
        jp_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergency" || name == "dr-priority" || name == "hello-interval" || name == "join-prune-mtu" || name == "jp-interval" || name == "override-interval" || name == "propagation-delay")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Rpf::Rpf()
    :
    route_policy{YType::str, "route-policy"}
{
    yang_name = "rpf"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Rpf::~Rpf()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Rpf::has_data() const
{
    return route_policy.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rpf' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy.is_set || is_set(route_policy.yfilter)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy")
    {
        route_policy = value;
        route_policy.value_namespace = name_space;
        route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy")
    {
        route_policy.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Maximum::Maximum()
    :
    bsr_candidate_rp_cache(nullptr) // presence node
	,bsr_group_mappings(nullptr) // presence node
	,group_mappings_auto_rp(nullptr) // presence node
	,register_states(nullptr) // presence node
	,route_interfaces(nullptr) // presence node
	,routes(nullptr) // presence node
{
    yang_name = "maximum"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::~Maximum()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::has_data() const
{
    return (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_data())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_data())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_data())
	|| (register_states !=  nullptr && register_states->has_data())
	|| (route_interfaces !=  nullptr && route_interfaces->has_data())
	|| (routes !=  nullptr && routes->has_data());
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_operation())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_operation())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_operation())
	|| (register_states !=  nullptr && register_states->has_operation())
	|| (route_interfaces !=  nullptr && route_interfaces->has_operation())
	|| (routes !=  nullptr && routes->has_operation());
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-candidate-rp-cache")
    {
        if(bsr_candidate_rp_cache == nullptr)
        {
            bsr_candidate_rp_cache = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache>();
        }
        return bsr_candidate_rp_cache;
    }

    if(child_yang_name == "bsr-group-mappings")
    {
        if(bsr_group_mappings == nullptr)
        {
            bsr_group_mappings = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings>();
        }
        return bsr_group_mappings;
    }

    if(child_yang_name == "group-mappings-auto-rp")
    {
        if(group_mappings_auto_rp == nullptr)
        {
            group_mappings_auto_rp = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp>();
        }
        return group_mappings_auto_rp;
    }

    if(child_yang_name == "register-states")
    {
        if(register_states == nullptr)
        {
            register_states = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates>();
        }
        return register_states;
    }

    if(child_yang_name == "route-interfaces")
    {
        if(route_interfaces == nullptr)
        {
            route_interfaces = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces>();
        }
        return route_interfaces;
    }

    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Maximum::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsr_candidate_rp_cache != nullptr)
    {
        children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache;
    }

    if(bsr_group_mappings != nullptr)
    {
        children["bsr-group-mappings"] = bsr_group_mappings;
    }

    if(group_mappings_auto_rp != nullptr)
    {
        children["group-mappings-auto-rp"] = group_mappings_auto_rp;
    }

    if(register_states != nullptr)
    {
        children["register-states"] = register_states;
    }

    if(route_interfaces != nullptr)
    {
        children["route-interfaces"] = route_interfaces;
    }

    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-candidate-rp-cache" || name == "bsr-group-mappings" || name == "group-mappings-auto-rp" || name == "register-states" || name == "route-interfaces" || name == "routes")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::GroupMappingsAutoRp()
    :
    maximum_group_ranges_auto_rp{YType::uint32, "maximum-group-ranges-auto-rp"},
    threshold_group_ranges_auto_rp{YType::uint32, "threshold-group-ranges-auto-rp"}
{
    yang_name = "group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::~GroupMappingsAutoRp()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::has_data() const
{
    return maximum_group_ranges_auto_rp.is_set
	|| threshold_group_ranges_auto_rp.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_group_ranges_auto_rp.yfilter)
	|| ydk::is_set(threshold_group_ranges_auto_rp.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-mappings-auto-rp";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMappingsAutoRp' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_group_ranges_auto_rp.is_set || is_set(maximum_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(maximum_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_group_ranges_auto_rp.is_set || is_set(threshold_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(threshold_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp = value;
        maximum_group_ranges_auto_rp.value_namespace = name_space;
        maximum_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp = value;
        threshold_group_ranges_auto_rp.value_namespace = name_space;
        threshold_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp.yfilter = yfilter;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-group-ranges-auto-rp" || name == "threshold-group-ranges-auto-rp")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::BsrGroupMappings()
    :
    bsr_maximum_group_ranges{YType::uint32, "bsr-maximum-group-ranges"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-group-mappings"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::~BsrGroupMappings()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::has_data() const
{
    return bsr_maximum_group_ranges.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_group_ranges.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-group-mappings";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrGroupMappings' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_group_ranges.is_set || is_set(bsr_maximum_group_ranges.yfilter)) leaf_name_data.push_back(bsr_maximum_group_ranges.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges = value;
        bsr_maximum_group_ranges.value_namespace = name_space;
        bsr_maximum_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-group-ranges" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::RegisterStates()
    :
    maximum_register_states{YType::uint32, "maximum-register-states"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "register-states"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::~RegisterStates()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_register_states.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-states";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegisterStates' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_register_states.is_set || is_set(maximum_register_states.yfilter)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
        maximum_register_states.value_namespace = name_space;
        maximum_register_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-register-states" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::RouteInterfaces()
    :
    maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "route-interfaces"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::~RouteInterfaces()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_route_interfaces.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-interfaces";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInterfaces' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.yfilter)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
        maximum_route_interfaces.value_namespace = name_space;
        maximum_route_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-route-interfaces" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::BsrCandidateRpCache()
    :
    bsr_maximum_candidate_rp_cache{YType::uint32, "bsr-maximum-candidate-rp-cache"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::~BsrCandidateRpCache()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::has_data() const
{
    return bsr_maximum_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_candidate_rp_cache.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-candidate-rp-cache";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrCandidateRpCache' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_candidate_rp_cache.is_set || is_set(bsr_maximum_candidate_rp_cache.yfilter)) leaf_name_data.push_back(bsr_maximum_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache = value;
        bsr_maximum_candidate_rp_cache.value_namespace = name_space;
        bsr_maximum_candidate_rp_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-candidate-rp-cache" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::Routes()
    :
    maximum_routes{YType::uint32, "maximum-routes"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "routes"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::~Routes()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_routes.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_routes.is_set || is_set(maximum_routes.yfilter)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
        maximum_routes.value_namespace = name_space;
        maximum_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-routes" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::SgExpiryTimer()
    :
    access_list_name{YType::str, "access-list-name"},
    interval{YType::uint32, "interval"}
{
    yang_name = "sg-expiry-timer"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::~SgExpiryTimer()
{
}

bool Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sg-expiry-timer";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SgExpiryTimer' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "interval")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::RpfVectorEnable()
    :
    allow_ebgp{YType::empty, "allow-ebgp"},
    disable_ibgp{YType::empty, "disable-ibgp"},
    enable{YType::empty, "enable"}
{
    yang_name = "rpf-vector-enable"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::~RpfVectorEnable()
{
}

bool Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::has_data() const
{
    return allow_ebgp.is_set
	|| disable_ibgp.is_set
	|| enable.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_ebgp.yfilter)
	|| ydk::is_set(disable_ibgp.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-vector-enable";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfVectorEnable' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_ebgp.is_set || is_set(allow_ebgp.yfilter)) leaf_name_data.push_back(allow_ebgp.get_name_leafdata());
    if (disable_ibgp.is_set || is_set(disable_ibgp.yfilter)) leaf_name_data.push_back(disable_ibgp.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp = value;
        allow_ebgp.value_namespace = name_space;
        allow_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp = value;
        disable_ibgp.value_namespace = name_space;
        disable_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp.yfilter = yfilter;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-ebgp" || name == "disable-ibgp" || name == "enable")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Ssm::Ssm()
    :
    disable{YType::boolean, "disable"},
    range{YType::str, "range"}
{
    yang_name = "ssm"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Ssm::~Ssm()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Ssm::has_data() const
{
    return disable.is_set
	|| range.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Ssm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Ssm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ssm' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Ssm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Ssm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Ssm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "range")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Injects::Injects()
{
    yang_name = "injects"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Injects::~Injects()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Injects::has_data() const
{
    for (std::size_t index=0; index<inject.size(); index++)
    {
        if(inject[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::Injects::has_operation() const
{
    for (std::size_t index=0; index<inject.size(); index++)
    {
        if(inject[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Injects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "injects";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Injects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Injects' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Injects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inject")
    {
        for(auto const & c : inject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Injects::Inject>();
        c->parent = this;
        inject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Injects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Injects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv4::Injects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv4::Injects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inject")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Injects::Inject::Inject()
    :
    source_address{YType::str, "source-address"},
    prefix_length{YType::uint8, "prefix-length"},
    rpf_proxy_address{YType::str, "rpf-proxy-address"}
{
    yang_name = "inject"; yang_parent_name = "injects";
}

Pim::Vrfs::Vrf::Ipv4::Injects::Inject::~Inject()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Injects::Inject::has_data() const
{
    for (auto const & leaf : rpf_proxy_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| prefix_length.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Injects::Inject::has_operation() const
{
    for (auto const & leaf : rpf_proxy_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(rpf_proxy_address.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Injects::Inject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject" <<"[source-address='" <<source_address <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Injects::Inject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inject' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    auto rpf_proxy_address_name_datas = rpf_proxy_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rpf_proxy_address_name_datas.begin(), rpf_proxy_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Injects::Inject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Injects::Inject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Injects::Inject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.append(value);
    }
}

void Pim::Vrfs::Vrf::Ipv4::Injects::Inject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Injects::Inject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "prefix-length" || name == "rpf-proxy-address")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddresses()
{
    yang_name = "bidir-rp-addresses"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::~BidirRpAddresses()
{
}

bool Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::has_data() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-addresses";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BidirRpAddresses' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-rp-address")
    {
        for(auto const & c : bidir_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress>();
        c->parent = this;
        bidir_rp_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bidir_rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir-rp-address")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::BidirRpAddress()
    :
    rp_address{YType::str, "rp-address"},
    access_list_name{YType::str, "access-list-name"},
    auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "bidir-rp-address"; yang_parent_name = "bidir-rp-addresses";
}

Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::~BidirRpAddress()
{
}

bool Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(auto_rp_override.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BidirRpAddress' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.yfilter)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
        auto_rp_override.value_namespace = name_space;
        auto_rp_override.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "access-list-name" || name == "auto-rp-override")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Bsr::Bsr()
    :
    candidate_bsr(nullptr) // presence node
	,candidate_rps(std::make_shared<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps>())
{
    candidate_rps->parent = this;

    yang_name = "bsr"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Bsr::~Bsr()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::has_data() const
{
    return (candidate_bsr !=  nullptr && candidate_bsr->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data());
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::has_operation() const
{
    return is_set(yfilter)
	|| (candidate_bsr !=  nullptr && candidate_bsr->has_operation())
	|| (candidate_rps !=  nullptr && candidate_rps->has_operation());
}

std::string Pim::Vrfs::Vrf::Ipv4::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Bsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bsr' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-bsr")
    {
        if(candidate_bsr == nullptr)
        {
            candidate_bsr = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr>();
        }
        return candidate_bsr;
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps == nullptr)
        {
            candidate_rps = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps>();
        }
        return candidate_rps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_bsr != nullptr)
    {
        children["candidate-bsr"] = candidate_bsr;
    }

    if(candidate_rps != nullptr)
    {
        children["candidate-rps"] = candidate_rps;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-bsr" || name == "candidate-rps")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::CandidateBsr()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::uint32, "priority"}
{
    yang_name = "candidate-bsr"; yang_parent_name = "bsr";
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::~CandidateBsr()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| priority.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateBsr' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "priority")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRps' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_rp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    address{YType::str, "address"},
    mode{YType::enumeration, "mode"},
    group_list{YType::str, "group-list"},
    interval{YType::uint32, "interval"},
    priority{YType::uint32, "priority"}
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::has_data() const
{
    return address.is_set
	|| mode.is_set
	|| group_list.is_set
	|| interval.is_set
	|| priority.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[address='" <<address <<"']" <<"[mode='" <<mode <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRp' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mode" || name == "group-list" || name == "interval" || name == "priority")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Paths::~Paths()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Paths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv4::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv4::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Paths::Path::Path()
    :
    source_address{YType::str, "source-address"},
    prefix_length{YType::uint8, "prefix-length"},
    rpf_proxy_address{YType::str, "rpf-proxy-address"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

Pim::Vrfs::Vrf::Ipv4::Paths::Path::~Path()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Paths::Path::has_data() const
{
    for (auto const & leaf : rpf_proxy_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| prefix_length.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Paths::Path::has_operation() const
{
    for (auto const & leaf : rpf_proxy_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(rpf_proxy_address.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[source-address='" <<source_address <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Paths::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    auto rpf_proxy_address_name_datas = rpf_proxy_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rpf_proxy_address_name_datas.begin(), rpf_proxy_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.append(value);
    }
}

void Pim::Vrfs::Vrf::Ipv4::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "prefix-length" || name == "rpf-proxy-address")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::AllowRp::AllowRp()
    :
    group_list_name{YType::str, "group-list-name"},
    rp_list_name{YType::str, "rp-list-name"}
{
    yang_name = "allow-rp"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::AllowRp::~AllowRp()
{
}

bool Pim::Vrfs::Vrf::Ipv4::AllowRp::has_data() const
{
    return group_list_name.is_set
	|| rp_list_name.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::AllowRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_list_name.yfilter)
	|| ydk::is_set(rp_list_name.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::AllowRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow-rp";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::AllowRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllowRp' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_list_name.is_set || is_set(group_list_name.yfilter)) leaf_name_data.push_back(group_list_name.get_name_leafdata());
    if (rp_list_name.is_set || is_set(rp_list_name.yfilter)) leaf_name_data.push_back(rp_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::AllowRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::AllowRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::AllowRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
        group_list_name.value_namespace = name_space;
        group_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list-name")
    {
        rp_list_name = value;
        rp_list_name.value_namespace = name_space;
        rp_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::AllowRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-list-name")
    {
        group_list_name.yfilter = yfilter;
    }
    if(value_path == "rp-list-name")
    {
        rp_list_name.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::AllowRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list-name" || name == "rp-list-name")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Convergence::Convergence()
    :
    link_down_prune_delay{YType::uint32, "link-down-prune-delay"},
    rpf_conflict_join_delay{YType::uint32, "rpf-conflict-join-delay"}
{
    yang_name = "convergence"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Convergence::~Convergence()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Convergence::has_data() const
{
    return link_down_prune_delay.is_set
	|| rpf_conflict_join_delay.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Convergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_down_prune_delay.yfilter)
	|| ydk::is_set(rpf_conflict_join_delay.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Convergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Convergence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Convergence' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_down_prune_delay.is_set || is_set(link_down_prune_delay.yfilter)) leaf_name_data.push_back(link_down_prune_delay.get_name_leafdata());
    if (rpf_conflict_join_delay.is_set || is_set(rpf_conflict_join_delay.yfilter)) leaf_name_data.push_back(rpf_conflict_join_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Convergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Convergence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Convergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay = value;
        link_down_prune_delay.value_namespace = name_space;
        link_down_prune_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay = value;
        rpf_conflict_join_delay.value_namespace = name_space;
        rpf_conflict_join_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Convergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay.yfilter = yfilter;
    }
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Convergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-down-prune-delay" || name == "rpf-conflict-join-delay")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::~Interfaces()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    bsr_border{YType::boolean, "bsr-border"},
    dr_priority{YType::uint32, "dr-priority"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    interface_enable{YType::boolean, "interface-enable"},
    join_prune_mtu{YType::uint32, "join-prune-mtu"},
    jp_interval{YType::uint32, "jp-interval"},
    neighbor_filter{YType::str, "neighbor-filter"},
    override_interval{YType::uint32, "override-interval"},
    propagation_delay{YType::uint32, "propagation-delay"}
    	,
    bfd(std::make_shared<Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd>())
	,maximum_routes(nullptr) // presence node
{
    bfd->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| bsr_border.is_set
	|| dr_priority.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| interface_enable.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| neighbor_filter.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (maximum_routes !=  nullptr && maximum_routes->has_data());
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bsr_border.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(interface_enable.yfilter)
	|| ydk::is_set(join_prune_mtu.yfilter)
	|| ydk::is_set(jp_interval.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (maximum_routes !=  nullptr && maximum_routes->has_operation());
}

std::string Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bsr_border.is_set || is_set(bsr_border.yfilter)) leaf_name_data.push_back(bsr_border.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (interface_enable.is_set || is_set(interface_enable.yfilter)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.yfilter)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.yfilter)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "maximum-routes")
    {
        if(maximum_routes == nullptr)
        {
            maximum_routes = std::make_shared<Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes>();
        }
        return maximum_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(maximum_routes != nullptr)
    {
        children["maximum-routes"] = maximum_routes;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-border")
    {
        bsr_border = value;
        bsr_border.value_namespace = name_space;
        bsr_border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-enable")
    {
        interface_enable = value;
        interface_enable.value_namespace = name_space;
        interface_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
        join_prune_mtu.value_namespace = name_space;
        join_prune_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
        jp_interval.value_namespace = name_space;
        jp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bsr-border")
    {
        bsr_border.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "interface-enable")
    {
        interface_enable.yfilter = yfilter;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu.yfilter = yfilter;
    }
    if(value_path == "jp-interval")
    {
        jp_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "maximum-routes" || name == "interface-name" || name == "bsr-border" || name == "dr-priority" || name == "enable" || name == "hello-interval" || name == "interface-enable" || name == "join-prune-mtu" || name == "jp-interval" || name == "neighbor-filter" || name == "override-interval" || name == "propagation-delay")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes::MaximumRoutes()
    :
    access_list_name{YType::str, "access-list-name"},
    maximum{YType::uint32, "maximum"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-routes"; yang_parent_name = "interface";
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes::~MaximumRoutes()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes::has_data() const
{
    return access_list_name.is_set
	|| maximum.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-routes";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumRoutes' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::MaximumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "maximum" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    enable{YType::boolean, "enable"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable.is_set
	|| interval.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "enable" || name == "interval")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrrs()
{
    yang_name = "cj-multicast-only-frrs"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::~CjMulticastOnlyFrrs()
{
}

bool Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::has_data() const
{
    for (std::size_t index=0; index<cj_multicast_only_frr.size(); index++)
    {
        if(cj_multicast_only_frr[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::has_operation() const
{
    for (std::size_t index=0; index<cj_multicast_only_frr.size(); index++)
    {
        if(cj_multicast_only_frr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cj-multicast-only-frrs";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CjMulticastOnlyFrrs' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cj-multicast-only-frr")
    {
        for(auto const & c : cj_multicast_only_frr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr>();
        c->parent = this;
        cj_multicast_only_frr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cj_multicast_only_frr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cj-multicast-only-frr")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::CjMulticastOnlyFrr()
    :
    source{YType::str, "source"},
    primary{YType::str, "primary"},
    backup{YType::str, "backup"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "cj-multicast-only-frr"; yang_parent_name = "cj-multicast-only-frrs";
}

Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::~CjMulticastOnlyFrr()
{
}

bool Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::has_data() const
{
    return source.is_set
	|| primary.is_set
	|| backup.is_set
	|| prefix_length.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(backup.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cj-multicast-only-frr" <<"[source='" <<source <<"']" <<"[primary='" <<primary <<"']" <<"[backup='" <<backup <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CjMulticastOnlyFrr' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "primary" || name == "backup" || name == "prefix-length")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Ipv6()
    :
    accept_register{YType::str, "accept-register"},
    embedded_rp_disable{YType::empty, "embedded-rp-disable"},
    log_neighbor_changes{YType::empty, "log-neighbor-changes"},
    multipath{YType::enumeration, "multipath"},
    neighbor_check_on_receive{YType::empty, "neighbor-check-on-receive"},
    neighbor_check_on_send{YType::empty, "neighbor-check-on-send"},
    neighbor_filter{YType::str, "neighbor-filter"},
    old_register_checksum{YType::empty, "old-register-checksum"},
    register_source{YType::str, "register-source"},
    rp_static_deny{YType::str, "rp-static-deny"},
    spt_threshold_infinity{YType::str, "spt-threshold-infinity"},
    ssm_allow_override{YType::empty, "ssm-allow-override"},
    suppress_data_registers{YType::empty, "suppress-data-registers"},
    suppress_rpf_prunes{YType::empty, "suppress-rpf-prunes"}
    	,
    allow_rp(nullptr) // presence node
	,bidir_rp_addresses(std::make_shared<Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses>())
	,bsr(std::make_shared<Pim::Vrfs::Vrf::Ipv6::Bsr>())
	,convergence(std::make_shared<Pim::Vrfs::Vrf::Ipv6::Convergence>())
	,embedded_rp_addresses(std::make_shared<Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses>())
	,inheritable_defaults(std::make_shared<Pim::Vrfs::Vrf::Ipv6::InheritableDefaults>())
	,interfaces(std::make_shared<Pim::Vrfs::Vrf::Ipv6::Interfaces>())
	,maximum(std::make_shared<Pim::Vrfs::Vrf::Ipv6::Maximum>())
	,rpf(std::make_shared<Pim::Vrfs::Vrf::Ipv6::Rpf>())
	,rpf_vector_enable(nullptr) // presence node
	,sg_expiry_timer(std::make_shared<Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer>())
	,sparse_mode_rp_addresses(std::make_shared<Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses>())
	,ssm(std::make_shared<Pim::Vrfs::Vrf::Ipv6::Ssm>())
{
    bidir_rp_addresses->parent = this;

    bsr->parent = this;

    convergence->parent = this;

    embedded_rp_addresses->parent = this;

    inheritable_defaults->parent = this;

    interfaces->parent = this;

    maximum->parent = this;

    rpf->parent = this;

    sg_expiry_timer->parent = this;

    sparse_mode_rp_addresses->parent = this;

    ssm->parent = this;

    yang_name = "ipv6"; yang_parent_name = "vrf";
}

Pim::Vrfs::Vrf::Ipv6::~Ipv6()
{
}

bool Pim::Vrfs::Vrf::Ipv6::has_data() const
{
    return accept_register.is_set
	|| embedded_rp_disable.is_set
	|| log_neighbor_changes.is_set
	|| multipath.is_set
	|| neighbor_check_on_receive.is_set
	|| neighbor_check_on_send.is_set
	|| neighbor_filter.is_set
	|| old_register_checksum.is_set
	|| register_source.is_set
	|| rp_static_deny.is_set
	|| spt_threshold_infinity.is_set
	|| ssm_allow_override.is_set
	|| suppress_data_registers.is_set
	|| suppress_rpf_prunes.is_set
	|| (allow_rp !=  nullptr && allow_rp->has_data())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (embedded_rp_addresses !=  nullptr && embedded_rp_addresses->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_data())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_data())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Pim::Vrfs::Vrf::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_register.yfilter)
	|| ydk::is_set(embedded_rp_disable.yfilter)
	|| ydk::is_set(log_neighbor_changes.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(neighbor_check_on_receive.yfilter)
	|| ydk::is_set(neighbor_check_on_send.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(old_register_checksum.yfilter)
	|| ydk::is_set(register_source.yfilter)
	|| ydk::is_set(rp_static_deny.yfilter)
	|| ydk::is_set(spt_threshold_infinity.yfilter)
	|| ydk::is_set(ssm_allow_override.yfilter)
	|| ydk::is_set(suppress_data_registers.yfilter)
	|| ydk::is_set(suppress_rpf_prunes.yfilter)
	|| (allow_rp !=  nullptr && allow_rp->has_operation())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_operation())
	|| (bsr !=  nullptr && bsr->has_operation())
	|| (convergence !=  nullptr && convergence->has_operation())
	|| (embedded_rp_addresses !=  nullptr && embedded_rp_addresses->has_operation())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_operation())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_operation())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Pim::Vrfs::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_register.is_set || is_set(accept_register.yfilter)) leaf_name_data.push_back(accept_register.get_name_leafdata());
    if (embedded_rp_disable.is_set || is_set(embedded_rp_disable.yfilter)) leaf_name_data.push_back(embedded_rp_disable.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.yfilter)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_check_on_receive.is_set || is_set(neighbor_check_on_receive.yfilter)) leaf_name_data.push_back(neighbor_check_on_receive.get_name_leafdata());
    if (neighbor_check_on_send.is_set || is_set(neighbor_check_on_send.yfilter)) leaf_name_data.push_back(neighbor_check_on_send.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (old_register_checksum.is_set || is_set(old_register_checksum.yfilter)) leaf_name_data.push_back(old_register_checksum.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.yfilter)) leaf_name_data.push_back(register_source.get_name_leafdata());
    if (rp_static_deny.is_set || is_set(rp_static_deny.yfilter)) leaf_name_data.push_back(rp_static_deny.get_name_leafdata());
    if (spt_threshold_infinity.is_set || is_set(spt_threshold_infinity.yfilter)) leaf_name_data.push_back(spt_threshold_infinity.get_name_leafdata());
    if (ssm_allow_override.is_set || is_set(ssm_allow_override.yfilter)) leaf_name_data.push_back(ssm_allow_override.get_name_leafdata());
    if (suppress_data_registers.is_set || is_set(suppress_data_registers.yfilter)) leaf_name_data.push_back(suppress_data_registers.get_name_leafdata());
    if (suppress_rpf_prunes.is_set || is_set(suppress_rpf_prunes.yfilter)) leaf_name_data.push_back(suppress_rpf_prunes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow-rp")
    {
        if(allow_rp == nullptr)
        {
            allow_rp = std::make_shared<Pim::Vrfs::Vrf::Ipv6::AllowRp>();
        }
        return allow_rp;
    }

    if(child_yang_name == "bidir-rp-addresses")
    {
        if(bidir_rp_addresses == nullptr)
        {
            bidir_rp_addresses = std::make_shared<Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses>();
        }
        return bidir_rp_addresses;
    }

    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Bsr>();
        }
        return bsr;
    }

    if(child_yang_name == "convergence")
    {
        if(convergence == nullptr)
        {
            convergence = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Convergence>();
        }
        return convergence;
    }

    if(child_yang_name == "embedded-rp-addresses")
    {
        if(embedded_rp_addresses == nullptr)
        {
            embedded_rp_addresses = std::make_shared<Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses>();
        }
        return embedded_rp_addresses;
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults == nullptr)
        {
            inheritable_defaults = std::make_shared<Pim::Vrfs::Vrf::Ipv6::InheritableDefaults>();
        }
        return inheritable_defaults;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Rpf>();
        }
        return rpf;
    }

    if(child_yang_name == "rpf-vector-enable")
    {
        if(rpf_vector_enable == nullptr)
        {
            rpf_vector_enable = std::make_shared<Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable>();
        }
        return rpf_vector_enable;
    }

    if(child_yang_name == "sg-expiry-timer")
    {
        if(sg_expiry_timer == nullptr)
        {
            sg_expiry_timer = std::make_shared<Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer>();
        }
        return sg_expiry_timer;
    }

    if(child_yang_name == "sparse-mode-rp-addresses")
    {
        if(sparse_mode_rp_addresses == nullptr)
        {
            sparse_mode_rp_addresses = std::make_shared<Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses>();
        }
        return sparse_mode_rp_addresses;
    }

    if(child_yang_name == "ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Ssm>();
        }
        return ssm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow_rp != nullptr)
    {
        children["allow-rp"] = allow_rp;
    }

    if(bidir_rp_addresses != nullptr)
    {
        children["bidir-rp-addresses"] = bidir_rp_addresses;
    }

    if(bsr != nullptr)
    {
        children["bsr"] = bsr;
    }

    if(convergence != nullptr)
    {
        children["convergence"] = convergence;
    }

    if(embedded_rp_addresses != nullptr)
    {
        children["embedded-rp-addresses"] = embedded_rp_addresses;
    }

    if(inheritable_defaults != nullptr)
    {
        children["inheritable-defaults"] = inheritable_defaults;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    if(rpf_vector_enable != nullptr)
    {
        children["rpf-vector-enable"] = rpf_vector_enable;
    }

    if(sg_expiry_timer != nullptr)
    {
        children["sg-expiry-timer"] = sg_expiry_timer;
    }

    if(sparse_mode_rp_addresses != nullptr)
    {
        children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses;
    }

    if(ssm != nullptr)
    {
        children["ssm"] = ssm;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-register")
    {
        accept_register = value;
        accept_register.value_namespace = name_space;
        accept_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "embedded-rp-disable")
    {
        embedded_rp_disable = value;
        embedded_rp_disable.value_namespace = name_space;
        embedded_rp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
        log_neighbor_changes.value_namespace = name_space;
        log_neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive = value;
        neighbor_check_on_receive.value_namespace = name_space;
        neighbor_check_on_receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send = value;
        neighbor_check_on_send.value_namespace = name_space;
        neighbor_check_on_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum = value;
        old_register_checksum.value_namespace = name_space;
        old_register_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-source")
    {
        register_source = value;
        register_source.value_namespace = name_space;
        register_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny = value;
        rp_static_deny.value_namespace = name_space;
        rp_static_deny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity = value;
        spt_threshold_infinity.value_namespace = name_space;
        spt_threshold_infinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override = value;
        ssm_allow_override.value_namespace = name_space;
        ssm_allow_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers = value;
        suppress_data_registers.value_namespace = name_space;
        suppress_data_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes = value;
        suppress_rpf_prunes.value_namespace = name_space;
        suppress_rpf_prunes.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-register")
    {
        accept_register.yfilter = yfilter;
    }
    if(value_path == "embedded-rp-disable")
    {
        embedded_rp_disable.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive.yfilter = yfilter;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum.yfilter = yfilter;
    }
    if(value_path == "register-source")
    {
        register_source.yfilter = yfilter;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny.yfilter = yfilter;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity.yfilter = yfilter;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override.yfilter = yfilter;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers.yfilter = yfilter;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-rp" || name == "bidir-rp-addresses" || name == "bsr" || name == "convergence" || name == "embedded-rp-addresses" || name == "inheritable-defaults" || name == "interfaces" || name == "maximum" || name == "rpf" || name == "rpf-vector-enable" || name == "sg-expiry-timer" || name == "sparse-mode-rp-addresses" || name == "ssm" || name == "accept-register" || name == "embedded-rp-disable" || name == "log-neighbor-changes" || name == "multipath" || name == "neighbor-check-on-receive" || name == "neighbor-check-on-send" || name == "neighbor-filter" || name == "old-register-checksum" || name == "register-source" || name == "rp-static-deny" || name == "spt-threshold-infinity" || name == "ssm-allow-override" || name == "suppress-data-registers" || name == "suppress-rpf-prunes")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddresses()
{
    yang_name = "sparse-mode-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::~SparseModeRpAddresses()
{
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::has_data() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-addresses";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SparseModeRpAddresses' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sparse-mode-rp-address")
    {
        for(auto const & c : sparse_mode_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress>();
        c->parent = this;
        sparse_mode_rp_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sparse_mode_rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sparse-mode-rp-address")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::SparseModeRpAddress()
    :
    rp_address{YType::str, "rp-address"},
    access_list_name{YType::str, "access-list-name"},
    auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "sparse-mode-rp-address"; yang_parent_name = "sparse-mode-rp-addresses";
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::~SparseModeRpAddress()
{
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(auto_rp_override.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SparseModeRpAddress' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.yfilter)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
        auto_rp_override.value_namespace = name_space;
        auto_rp_override.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "access-list-name" || name == "auto-rp-override")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::InheritableDefaults()
    :
    convergency{YType::uint32, "convergency"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_interval{YType::uint32, "hello-interval"},
    join_prune_mtu{YType::uint32, "join-prune-mtu"},
    jp_interval{YType::uint32, "jp-interval"},
    override_interval{YType::uint32, "override-interval"},
    propagation_delay{YType::uint32, "propagation-delay"}
{
    yang_name = "inheritable-defaults"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::~InheritableDefaults()
{
}

bool Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::has_data() const
{
    return convergency.is_set
	|| dr_priority.is_set
	|| hello_interval.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(convergency.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(join_prune_mtu.yfilter)
	|| ydk::is_set(jp_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritableDefaults' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (convergency.is_set || is_set(convergency.yfilter)) leaf_name_data.push_back(convergency.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.yfilter)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.yfilter)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "convergency")
    {
        convergency = value;
        convergency.value_namespace = name_space;
        convergency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
        join_prune_mtu.value_namespace = name_space;
        join_prune_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
        jp_interval.value_namespace = name_space;
        jp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "convergency")
    {
        convergency.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu.yfilter = yfilter;
    }
    if(value_path == "jp-interval")
    {
        jp_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergency" || name == "dr-priority" || name == "hello-interval" || name == "join-prune-mtu" || name == "jp-interval" || name == "override-interval" || name == "propagation-delay")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Rpf::Rpf()
    :
    route_policy{YType::str, "route-policy"}
{
    yang_name = "rpf"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Rpf::~Rpf()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Rpf::has_data() const
{
    return route_policy.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rpf' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy.is_set || is_set(route_policy.yfilter)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy")
    {
        route_policy = value;
        route_policy.value_namespace = name_space;
        route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy")
    {
        route_policy.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Maximum::Maximum()
    :
    bsr_candidate_rp_cache(nullptr) // presence node
	,bsr_group_mappings(nullptr) // presence node
	,group_mappings_auto_rp(nullptr) // presence node
	,register_states(nullptr) // presence node
	,route_interfaces(nullptr) // presence node
	,routes(nullptr) // presence node
{
    yang_name = "maximum"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::~Maximum()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::has_data() const
{
    return (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_data())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_data())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_data())
	|| (register_states !=  nullptr && register_states->has_data())
	|| (route_interfaces !=  nullptr && route_interfaces->has_data())
	|| (routes !=  nullptr && routes->has_data());
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_operation())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_operation())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_operation())
	|| (register_states !=  nullptr && register_states->has_operation())
	|| (route_interfaces !=  nullptr && route_interfaces->has_operation())
	|| (routes !=  nullptr && routes->has_operation());
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-candidate-rp-cache")
    {
        if(bsr_candidate_rp_cache == nullptr)
        {
            bsr_candidate_rp_cache = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache>();
        }
        return bsr_candidate_rp_cache;
    }

    if(child_yang_name == "bsr-group-mappings")
    {
        if(bsr_group_mappings == nullptr)
        {
            bsr_group_mappings = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings>();
        }
        return bsr_group_mappings;
    }

    if(child_yang_name == "group-mappings-auto-rp")
    {
        if(group_mappings_auto_rp == nullptr)
        {
            group_mappings_auto_rp = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp>();
        }
        return group_mappings_auto_rp;
    }

    if(child_yang_name == "register-states")
    {
        if(register_states == nullptr)
        {
            register_states = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates>();
        }
        return register_states;
    }

    if(child_yang_name == "route-interfaces")
    {
        if(route_interfaces == nullptr)
        {
            route_interfaces = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces>();
        }
        return route_interfaces;
    }

    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Maximum::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsr_candidate_rp_cache != nullptr)
    {
        children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache;
    }

    if(bsr_group_mappings != nullptr)
    {
        children["bsr-group-mappings"] = bsr_group_mappings;
    }

    if(group_mappings_auto_rp != nullptr)
    {
        children["group-mappings-auto-rp"] = group_mappings_auto_rp;
    }

    if(register_states != nullptr)
    {
        children["register-states"] = register_states;
    }

    if(route_interfaces != nullptr)
    {
        children["route-interfaces"] = route_interfaces;
    }

    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-candidate-rp-cache" || name == "bsr-group-mappings" || name == "group-mappings-auto-rp" || name == "register-states" || name == "route-interfaces" || name == "routes")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::GroupMappingsAutoRp()
    :
    maximum_group_ranges_auto_rp{YType::uint32, "maximum-group-ranges-auto-rp"},
    threshold_group_ranges_auto_rp{YType::uint32, "threshold-group-ranges-auto-rp"}
{
    yang_name = "group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::~GroupMappingsAutoRp()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::has_data() const
{
    return maximum_group_ranges_auto_rp.is_set
	|| threshold_group_ranges_auto_rp.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_group_ranges_auto_rp.yfilter)
	|| ydk::is_set(threshold_group_ranges_auto_rp.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-mappings-auto-rp";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMappingsAutoRp' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_group_ranges_auto_rp.is_set || is_set(maximum_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(maximum_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_group_ranges_auto_rp.is_set || is_set(threshold_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(threshold_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp = value;
        maximum_group_ranges_auto_rp.value_namespace = name_space;
        maximum_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp = value;
        threshold_group_ranges_auto_rp.value_namespace = name_space;
        threshold_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp.yfilter = yfilter;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-group-ranges-auto-rp" || name == "threshold-group-ranges-auto-rp")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::BsrGroupMappings()
    :
    bsr_maximum_group_ranges{YType::uint32, "bsr-maximum-group-ranges"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-group-mappings"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::~BsrGroupMappings()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::has_data() const
{
    return bsr_maximum_group_ranges.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_group_ranges.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-group-mappings";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrGroupMappings' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_group_ranges.is_set || is_set(bsr_maximum_group_ranges.yfilter)) leaf_name_data.push_back(bsr_maximum_group_ranges.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges = value;
        bsr_maximum_group_ranges.value_namespace = name_space;
        bsr_maximum_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-group-ranges" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::RegisterStates()
    :
    maximum_register_states{YType::uint32, "maximum-register-states"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "register-states"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::~RegisterStates()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_register_states.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-states";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegisterStates' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_register_states.is_set || is_set(maximum_register_states.yfilter)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
        maximum_register_states.value_namespace = name_space;
        maximum_register_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-register-states" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::RouteInterfaces()
    :
    maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "route-interfaces"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::~RouteInterfaces()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_route_interfaces.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-interfaces";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInterfaces' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.yfilter)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
        maximum_route_interfaces.value_namespace = name_space;
        maximum_route_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-route-interfaces" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::BsrCandidateRpCache()
    :
    bsr_maximum_candidate_rp_cache{YType::uint32, "bsr-maximum-candidate-rp-cache"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::~BsrCandidateRpCache()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::has_data() const
{
    return bsr_maximum_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_candidate_rp_cache.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-candidate-rp-cache";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrCandidateRpCache' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_candidate_rp_cache.is_set || is_set(bsr_maximum_candidate_rp_cache.yfilter)) leaf_name_data.push_back(bsr_maximum_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache = value;
        bsr_maximum_candidate_rp_cache.value_namespace = name_space;
        bsr_maximum_candidate_rp_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-candidate-rp-cache" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::Routes()
    :
    maximum_routes{YType::uint32, "maximum-routes"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "routes"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::~Routes()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_routes.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_routes.is_set || is_set(maximum_routes.yfilter)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
        maximum_routes.value_namespace = name_space;
        maximum_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-routes" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::SgExpiryTimer()
    :
    access_list_name{YType::str, "access-list-name"},
    interval{YType::uint32, "interval"}
{
    yang_name = "sg-expiry-timer"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::~SgExpiryTimer()
{
}

bool Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sg-expiry-timer";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SgExpiryTimer' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "interval")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::RpfVectorEnable()
    :
    allow_ebgp{YType::empty, "allow-ebgp"},
    disable_ibgp{YType::empty, "disable-ibgp"},
    enable{YType::empty, "enable"}
{
    yang_name = "rpf-vector-enable"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::~RpfVectorEnable()
{
}

bool Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::has_data() const
{
    return allow_ebgp.is_set
	|| disable_ibgp.is_set
	|| enable.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_ebgp.yfilter)
	|| ydk::is_set(disable_ibgp.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-vector-enable";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfVectorEnable' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_ebgp.is_set || is_set(allow_ebgp.yfilter)) leaf_name_data.push_back(allow_ebgp.get_name_leafdata());
    if (disable_ibgp.is_set || is_set(disable_ibgp.yfilter)) leaf_name_data.push_back(disable_ibgp.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp = value;
        allow_ebgp.value_namespace = name_space;
        allow_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp = value;
        disable_ibgp.value_namespace = name_space;
        disable_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp.yfilter = yfilter;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-ebgp" || name == "disable-ibgp" || name == "enable")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Ssm::Ssm()
    :
    disable{YType::boolean, "disable"},
    range{YType::str, "range"}
{
    yang_name = "ssm"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Ssm::~Ssm()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Ssm::has_data() const
{
    return disable.is_set
	|| range.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Ssm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Ssm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ssm' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Ssm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Ssm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Ssm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "range")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddresses()
{
    yang_name = "bidir-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::~BidirRpAddresses()
{
}

bool Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::has_data() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-addresses";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BidirRpAddresses' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-rp-address")
    {
        for(auto const & c : bidir_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress>();
        c->parent = this;
        bidir_rp_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bidir_rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir-rp-address")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::BidirRpAddress()
    :
    rp_address{YType::str, "rp-address"},
    access_list_name{YType::str, "access-list-name"},
    auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "bidir-rp-address"; yang_parent_name = "bidir-rp-addresses";
}

Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::~BidirRpAddress()
{
}

bool Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(auto_rp_override.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BidirRpAddress' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.yfilter)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
        auto_rp_override.value_namespace = name_space;
        auto_rp_override.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "access-list-name" || name == "auto-rp-override")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Bsr::Bsr()
    :
    candidate_bsr(nullptr) // presence node
	,candidate_rps(std::make_shared<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps>())
{
    candidate_rps->parent = this;

    yang_name = "bsr"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Bsr::~Bsr()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::has_data() const
{
    return (candidate_bsr !=  nullptr && candidate_bsr->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data());
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::has_operation() const
{
    return is_set(yfilter)
	|| (candidate_bsr !=  nullptr && candidate_bsr->has_operation())
	|| (candidate_rps !=  nullptr && candidate_rps->has_operation());
}

std::string Pim::Vrfs::Vrf::Ipv6::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Bsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bsr' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-bsr")
    {
        if(candidate_bsr == nullptr)
        {
            candidate_bsr = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr>();
        }
        return candidate_bsr;
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps == nullptr)
        {
            candidate_rps = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps>();
        }
        return candidate_rps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_bsr != nullptr)
    {
        children["candidate-bsr"] = candidate_bsr;
    }

    if(candidate_rps != nullptr)
    {
        children["candidate-rps"] = candidate_rps;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-bsr" || name == "candidate-rps")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::CandidateBsr()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::uint32, "priority"}
{
    yang_name = "candidate-bsr"; yang_parent_name = "bsr";
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::~CandidateBsr()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| priority.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateBsr' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "priority")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRps' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_rp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    address{YType::str, "address"},
    mode{YType::enumeration, "mode"},
    group_list{YType::str, "group-list"},
    interval{YType::uint32, "interval"},
    priority{YType::uint32, "priority"}
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::has_data() const
{
    return address.is_set
	|| mode.is_set
	|| group_list.is_set
	|| interval.is_set
	|| priority.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[address='" <<address <<"']" <<"[mode='" <<mode <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRp' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mode" || name == "group-list" || name == "interval" || name == "priority")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::AllowRp::AllowRp()
    :
    group_list_name{YType::str, "group-list-name"},
    rp_list_name{YType::str, "rp-list-name"}
{
    yang_name = "allow-rp"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::AllowRp::~AllowRp()
{
}

bool Pim::Vrfs::Vrf::Ipv6::AllowRp::has_data() const
{
    return group_list_name.is_set
	|| rp_list_name.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::AllowRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_list_name.yfilter)
	|| ydk::is_set(rp_list_name.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::AllowRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow-rp";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::AllowRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllowRp' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_list_name.is_set || is_set(group_list_name.yfilter)) leaf_name_data.push_back(group_list_name.get_name_leafdata());
    if (rp_list_name.is_set || is_set(rp_list_name.yfilter)) leaf_name_data.push_back(rp_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::AllowRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::AllowRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::AllowRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
        group_list_name.value_namespace = name_space;
        group_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list-name")
    {
        rp_list_name = value;
        rp_list_name.value_namespace = name_space;
        rp_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::AllowRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-list-name")
    {
        group_list_name.yfilter = yfilter;
    }
    if(value_path == "rp-list-name")
    {
        rp_list_name.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::AllowRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list-name" || name == "rp-list-name")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddresses()
{
    yang_name = "embedded-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::~EmbeddedRpAddresses()
{
}

bool Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::has_data() const
{
    for (std::size_t index=0; index<embedded_rp_address.size(); index++)
    {
        if(embedded_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<embedded_rp_address.size(); index++)
    {
        if(embedded_rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "embedded-rp-addresses";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EmbeddedRpAddresses' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "embedded-rp-address")
    {
        for(auto const & c : embedded_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress>();
        c->parent = this;
        embedded_rp_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : embedded_rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "embedded-rp-address")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::EmbeddedRpAddress()
    :
    rp_address{YType::str, "rp-address"},
    access_list_name{YType::str, "access-list-name"}
{
    yang_name = "embedded-rp-address"; yang_parent_name = "embedded-rp-addresses";
}

Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::~EmbeddedRpAddress()
{
}

bool Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "embedded-rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EmbeddedRpAddress' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "access-list-name")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Convergence::Convergence()
    :
    link_down_prune_delay{YType::uint32, "link-down-prune-delay"},
    rpf_conflict_join_delay{YType::uint32, "rpf-conflict-join-delay"}
{
    yang_name = "convergence"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Convergence::~Convergence()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Convergence::has_data() const
{
    return link_down_prune_delay.is_set
	|| rpf_conflict_join_delay.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Convergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_down_prune_delay.yfilter)
	|| ydk::is_set(rpf_conflict_join_delay.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Convergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Convergence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Convergence' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_down_prune_delay.is_set || is_set(link_down_prune_delay.yfilter)) leaf_name_data.push_back(link_down_prune_delay.get_name_leafdata());
    if (rpf_conflict_join_delay.is_set || is_set(rpf_conflict_join_delay.yfilter)) leaf_name_data.push_back(rpf_conflict_join_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Convergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Convergence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Convergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay = value;
        link_down_prune_delay.value_namespace = name_space;
        link_down_prune_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay = value;
        rpf_conflict_join_delay.value_namespace = name_space;
        rpf_conflict_join_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Convergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay.yfilter = yfilter;
    }
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Convergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-down-prune-delay" || name == "rpf-conflict-join-delay")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::~Interfaces()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    bsr_border{YType::boolean, "bsr-border"},
    dr_priority{YType::uint32, "dr-priority"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    interface_enable{YType::boolean, "interface-enable"},
    join_prune_mtu{YType::uint32, "join-prune-mtu"},
    jp_interval{YType::uint32, "jp-interval"},
    neighbor_filter{YType::str, "neighbor-filter"},
    override_interval{YType::uint32, "override-interval"},
    propagation_delay{YType::uint32, "propagation-delay"}
    	,
    bfd(std::make_shared<Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd>())
	,maximum_routes(nullptr) // presence node
{
    bfd->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| bsr_border.is_set
	|| dr_priority.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| interface_enable.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| neighbor_filter.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (maximum_routes !=  nullptr && maximum_routes->has_data());
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bsr_border.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(interface_enable.yfilter)
	|| ydk::is_set(join_prune_mtu.yfilter)
	|| ydk::is_set(jp_interval.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (maximum_routes !=  nullptr && maximum_routes->has_operation());
}

std::string Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bsr_border.is_set || is_set(bsr_border.yfilter)) leaf_name_data.push_back(bsr_border.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (interface_enable.is_set || is_set(interface_enable.yfilter)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.yfilter)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.yfilter)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "maximum-routes")
    {
        if(maximum_routes == nullptr)
        {
            maximum_routes = std::make_shared<Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes>();
        }
        return maximum_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(maximum_routes != nullptr)
    {
        children["maximum-routes"] = maximum_routes;
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-border")
    {
        bsr_border = value;
        bsr_border.value_namespace = name_space;
        bsr_border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-enable")
    {
        interface_enable = value;
        interface_enable.value_namespace = name_space;
        interface_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
        join_prune_mtu.value_namespace = name_space;
        join_prune_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
        jp_interval.value_namespace = name_space;
        jp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bsr-border")
    {
        bsr_border.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "interface-enable")
    {
        interface_enable.yfilter = yfilter;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu.yfilter = yfilter;
    }
    if(value_path == "jp-interval")
    {
        jp_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "maximum-routes" || name == "interface-name" || name == "bsr-border" || name == "dr-priority" || name == "enable" || name == "hello-interval" || name == "interface-enable" || name == "join-prune-mtu" || name == "jp-interval" || name == "neighbor-filter" || name == "override-interval" || name == "propagation-delay")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes::MaximumRoutes()
    :
    access_list_name{YType::str, "access-list-name"},
    maximum{YType::uint32, "maximum"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-routes"; yang_parent_name = "interface";
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes::~MaximumRoutes()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes::has_data() const
{
    return access_list_name.is_set
	|| maximum.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-routes";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumRoutes' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::MaximumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "maximum" || name == "warning-threshold")
        return true;
    return false;
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    enable{YType::boolean, "enable"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable.is_set
	|| interval.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "enable" || name == "interval")
        return true;
    return false;
}

Pim::DefaultContext::DefaultContext()
    :
    ipv4(std::make_shared<Pim::DefaultContext::Ipv4>())
	,ipv6(std::make_shared<Pim::DefaultContext::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "default-context"; yang_parent_name = "pim";
}

Pim::DefaultContext::~DefaultContext()
{
}

bool Pim::DefaultContext::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Pim::DefaultContext::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Pim::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Pim::DefaultContext::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Pim::DefaultContext::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Pim::DefaultContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Ipv6()
    :
    accept_register{YType::str, "accept-register"},
    embedded_rp_disable{YType::empty, "embedded-rp-disable"},
    log_neighbor_changes{YType::empty, "log-neighbor-changes"},
    multipath{YType::enumeration, "multipath"},
    neighbor_check_on_receive{YType::empty, "neighbor-check-on-receive"},
    neighbor_check_on_send{YType::empty, "neighbor-check-on-send"},
    neighbor_filter{YType::str, "neighbor-filter"},
    old_register_checksum{YType::empty, "old-register-checksum"},
    register_source{YType::str, "register-source"},
    rp_static_deny{YType::str, "rp-static-deny"},
    spt_threshold_infinity{YType::str, "spt-threshold-infinity"},
    ssm_allow_override{YType::empty, "ssm-allow-override"},
    suppress_data_registers{YType::empty, "suppress-data-registers"},
    suppress_rpf_prunes{YType::empty, "suppress-rpf-prunes"}
    	,
    allow_rp(nullptr) // presence node
	,bidir_rp_addresses(std::make_shared<Pim::DefaultContext::Ipv6::BidirRpAddresses>())
	,bsr(std::make_shared<Pim::DefaultContext::Ipv6::Bsr>())
	,convergence(std::make_shared<Pim::DefaultContext::Ipv6::Convergence>())
	,embedded_rp_addresses(std::make_shared<Pim::DefaultContext::Ipv6::EmbeddedRpAddresses>())
	,inheritable_defaults(std::make_shared<Pim::DefaultContext::Ipv6::InheritableDefaults>())
	,interfaces(std::make_shared<Pim::DefaultContext::Ipv6::Interfaces>())
	,maximum(std::make_shared<Pim::DefaultContext::Ipv6::Maximum>())
	,nsf(std::make_shared<Pim::DefaultContext::Ipv6::Nsf>())
	,rpf(std::make_shared<Pim::DefaultContext::Ipv6::Rpf>())
	,rpf_vector_enable(nullptr) // presence node
	,sg_expiry_timer(std::make_shared<Pim::DefaultContext::Ipv6::SgExpiryTimer>())
	,sparse_mode_rp_addresses(std::make_shared<Pim::DefaultContext::Ipv6::SparseModeRpAddresses>())
	,ssm(std::make_shared<Pim::DefaultContext::Ipv6::Ssm>())
{
    bidir_rp_addresses->parent = this;

    bsr->parent = this;

    convergence->parent = this;

    embedded_rp_addresses->parent = this;

    inheritable_defaults->parent = this;

    interfaces->parent = this;

    maximum->parent = this;

    nsf->parent = this;

    rpf->parent = this;

    sg_expiry_timer->parent = this;

    sparse_mode_rp_addresses->parent = this;

    ssm->parent = this;

    yang_name = "ipv6"; yang_parent_name = "default-context";
}

Pim::DefaultContext::Ipv6::~Ipv6()
{
}

bool Pim::DefaultContext::Ipv6::has_data() const
{
    return accept_register.is_set
	|| embedded_rp_disable.is_set
	|| log_neighbor_changes.is_set
	|| multipath.is_set
	|| neighbor_check_on_receive.is_set
	|| neighbor_check_on_send.is_set
	|| neighbor_filter.is_set
	|| old_register_checksum.is_set
	|| register_source.is_set
	|| rp_static_deny.is_set
	|| spt_threshold_infinity.is_set
	|| ssm_allow_override.is_set
	|| suppress_data_registers.is_set
	|| suppress_rpf_prunes.is_set
	|| (allow_rp !=  nullptr && allow_rp->has_data())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (embedded_rp_addresses !=  nullptr && embedded_rp_addresses->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_data())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_data())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Pim::DefaultContext::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_register.yfilter)
	|| ydk::is_set(embedded_rp_disable.yfilter)
	|| ydk::is_set(log_neighbor_changes.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(neighbor_check_on_receive.yfilter)
	|| ydk::is_set(neighbor_check_on_send.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(old_register_checksum.yfilter)
	|| ydk::is_set(register_source.yfilter)
	|| ydk::is_set(rp_static_deny.yfilter)
	|| ydk::is_set(spt_threshold_infinity.yfilter)
	|| ydk::is_set(ssm_allow_override.yfilter)
	|| ydk::is_set(suppress_data_registers.yfilter)
	|| ydk::is_set(suppress_rpf_prunes.yfilter)
	|| (allow_rp !=  nullptr && allow_rp->has_operation())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_operation())
	|| (bsr !=  nullptr && bsr->has_operation())
	|| (convergence !=  nullptr && convergence->has_operation())
	|| (embedded_rp_addresses !=  nullptr && embedded_rp_addresses->has_operation())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_operation())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_operation())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Pim::DefaultContext::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_register.is_set || is_set(accept_register.yfilter)) leaf_name_data.push_back(accept_register.get_name_leafdata());
    if (embedded_rp_disable.is_set || is_set(embedded_rp_disable.yfilter)) leaf_name_data.push_back(embedded_rp_disable.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.yfilter)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_check_on_receive.is_set || is_set(neighbor_check_on_receive.yfilter)) leaf_name_data.push_back(neighbor_check_on_receive.get_name_leafdata());
    if (neighbor_check_on_send.is_set || is_set(neighbor_check_on_send.yfilter)) leaf_name_data.push_back(neighbor_check_on_send.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (old_register_checksum.is_set || is_set(old_register_checksum.yfilter)) leaf_name_data.push_back(old_register_checksum.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.yfilter)) leaf_name_data.push_back(register_source.get_name_leafdata());
    if (rp_static_deny.is_set || is_set(rp_static_deny.yfilter)) leaf_name_data.push_back(rp_static_deny.get_name_leafdata());
    if (spt_threshold_infinity.is_set || is_set(spt_threshold_infinity.yfilter)) leaf_name_data.push_back(spt_threshold_infinity.get_name_leafdata());
    if (ssm_allow_override.is_set || is_set(ssm_allow_override.yfilter)) leaf_name_data.push_back(ssm_allow_override.get_name_leafdata());
    if (suppress_data_registers.is_set || is_set(suppress_data_registers.yfilter)) leaf_name_data.push_back(suppress_data_registers.get_name_leafdata());
    if (suppress_rpf_prunes.is_set || is_set(suppress_rpf_prunes.yfilter)) leaf_name_data.push_back(suppress_rpf_prunes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow-rp")
    {
        if(allow_rp == nullptr)
        {
            allow_rp = std::make_shared<Pim::DefaultContext::Ipv6::AllowRp>();
        }
        return allow_rp;
    }

    if(child_yang_name == "bidir-rp-addresses")
    {
        if(bidir_rp_addresses == nullptr)
        {
            bidir_rp_addresses = std::make_shared<Pim::DefaultContext::Ipv6::BidirRpAddresses>();
        }
        return bidir_rp_addresses;
    }

    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Pim::DefaultContext::Ipv6::Bsr>();
        }
        return bsr;
    }

    if(child_yang_name == "convergence")
    {
        if(convergence == nullptr)
        {
            convergence = std::make_shared<Pim::DefaultContext::Ipv6::Convergence>();
        }
        return convergence;
    }

    if(child_yang_name == "embedded-rp-addresses")
    {
        if(embedded_rp_addresses == nullptr)
        {
            embedded_rp_addresses = std::make_shared<Pim::DefaultContext::Ipv6::EmbeddedRpAddresses>();
        }
        return embedded_rp_addresses;
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults == nullptr)
        {
            inheritable_defaults = std::make_shared<Pim::DefaultContext::Ipv6::InheritableDefaults>();
        }
        return inheritable_defaults;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Pim::DefaultContext::Ipv6::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Pim::DefaultContext::Ipv6::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Pim::DefaultContext::Ipv6::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Pim::DefaultContext::Ipv6::Rpf>();
        }
        return rpf;
    }

    if(child_yang_name == "rpf-vector-enable")
    {
        if(rpf_vector_enable == nullptr)
        {
            rpf_vector_enable = std::make_shared<Pim::DefaultContext::Ipv6::RpfVectorEnable>();
        }
        return rpf_vector_enable;
    }

    if(child_yang_name == "sg-expiry-timer")
    {
        if(sg_expiry_timer == nullptr)
        {
            sg_expiry_timer = std::make_shared<Pim::DefaultContext::Ipv6::SgExpiryTimer>();
        }
        return sg_expiry_timer;
    }

    if(child_yang_name == "sparse-mode-rp-addresses")
    {
        if(sparse_mode_rp_addresses == nullptr)
        {
            sparse_mode_rp_addresses = std::make_shared<Pim::DefaultContext::Ipv6::SparseModeRpAddresses>();
        }
        return sparse_mode_rp_addresses;
    }

    if(child_yang_name == "ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Pim::DefaultContext::Ipv6::Ssm>();
        }
        return ssm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow_rp != nullptr)
    {
        children["allow-rp"] = allow_rp;
    }

    if(bidir_rp_addresses != nullptr)
    {
        children["bidir-rp-addresses"] = bidir_rp_addresses;
    }

    if(bsr != nullptr)
    {
        children["bsr"] = bsr;
    }

    if(convergence != nullptr)
    {
        children["convergence"] = convergence;
    }

    if(embedded_rp_addresses != nullptr)
    {
        children["embedded-rp-addresses"] = embedded_rp_addresses;
    }

    if(inheritable_defaults != nullptr)
    {
        children["inheritable-defaults"] = inheritable_defaults;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    if(rpf_vector_enable != nullptr)
    {
        children["rpf-vector-enable"] = rpf_vector_enable;
    }

    if(sg_expiry_timer != nullptr)
    {
        children["sg-expiry-timer"] = sg_expiry_timer;
    }

    if(sparse_mode_rp_addresses != nullptr)
    {
        children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses;
    }

    if(ssm != nullptr)
    {
        children["ssm"] = ssm;
    }

    return children;
}

void Pim::DefaultContext::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-register")
    {
        accept_register = value;
        accept_register.value_namespace = name_space;
        accept_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "embedded-rp-disable")
    {
        embedded_rp_disable = value;
        embedded_rp_disable.value_namespace = name_space;
        embedded_rp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
        log_neighbor_changes.value_namespace = name_space;
        log_neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive = value;
        neighbor_check_on_receive.value_namespace = name_space;
        neighbor_check_on_receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send = value;
        neighbor_check_on_send.value_namespace = name_space;
        neighbor_check_on_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum = value;
        old_register_checksum.value_namespace = name_space;
        old_register_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-source")
    {
        register_source = value;
        register_source.value_namespace = name_space;
        register_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny = value;
        rp_static_deny.value_namespace = name_space;
        rp_static_deny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity = value;
        spt_threshold_infinity.value_namespace = name_space;
        spt_threshold_infinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override = value;
        ssm_allow_override.value_namespace = name_space;
        ssm_allow_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers = value;
        suppress_data_registers.value_namespace = name_space;
        suppress_data_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes = value;
        suppress_rpf_prunes.value_namespace = name_space;
        suppress_rpf_prunes.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-register")
    {
        accept_register.yfilter = yfilter;
    }
    if(value_path == "embedded-rp-disable")
    {
        embedded_rp_disable.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive.yfilter = yfilter;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum.yfilter = yfilter;
    }
    if(value_path == "register-source")
    {
        register_source.yfilter = yfilter;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny.yfilter = yfilter;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity.yfilter = yfilter;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override.yfilter = yfilter;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers.yfilter = yfilter;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-rp" || name == "bidir-rp-addresses" || name == "bsr" || name == "convergence" || name == "embedded-rp-addresses" || name == "inheritable-defaults" || name == "interfaces" || name == "maximum" || name == "nsf" || name == "rpf" || name == "rpf-vector-enable" || name == "sg-expiry-timer" || name == "sparse-mode-rp-addresses" || name == "ssm" || name == "accept-register" || name == "embedded-rp-disable" || name == "log-neighbor-changes" || name == "multipath" || name == "neighbor-check-on-receive" || name == "neighbor-check-on-send" || name == "neighbor-filter" || name == "old-register-checksum" || name == "register-source" || name == "rp-static-deny" || name == "spt-threshold-infinity" || name == "ssm-allow-override" || name == "suppress-data-registers" || name == "suppress-rpf-prunes")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Interfaces::~Interfaces()
{
}

bool Pim::DefaultContext::Ipv6::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv6::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pim::DefaultContext::Ipv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv6::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv6::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv6::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    bsr_border{YType::boolean, "bsr-border"},
    dr_priority{YType::uint32, "dr-priority"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    interface_enable{YType::boolean, "interface-enable"},
    join_prune_mtu{YType::uint32, "join-prune-mtu"},
    jp_interval{YType::uint32, "jp-interval"},
    neighbor_filter{YType::str, "neighbor-filter"},
    override_interval{YType::uint32, "override-interval"},
    propagation_delay{YType::uint32, "propagation-delay"}
    	,
    bfd(std::make_shared<Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd>())
	,maximum_routes(nullptr) // presence node
{
    bfd->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| bsr_border.is_set
	|| dr_priority.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| interface_enable.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| neighbor_filter.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (maximum_routes !=  nullptr && maximum_routes->has_data());
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bsr_border.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(interface_enable.yfilter)
	|| ydk::is_set(join_prune_mtu.yfilter)
	|| ydk::is_set(jp_interval.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (maximum_routes !=  nullptr && maximum_routes->has_operation());
}

std::string Pim::DefaultContext::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bsr_border.is_set || is_set(bsr_border.yfilter)) leaf_name_data.push_back(bsr_border.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (interface_enable.is_set || is_set(interface_enable.yfilter)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.yfilter)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.yfilter)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "maximum-routes")
    {
        if(maximum_routes == nullptr)
        {
            maximum_routes = std::make_shared<Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes>();
        }
        return maximum_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(maximum_routes != nullptr)
    {
        children["maximum-routes"] = maximum_routes;
    }

    return children;
}

void Pim::DefaultContext::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-border")
    {
        bsr_border = value;
        bsr_border.value_namespace = name_space;
        bsr_border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-enable")
    {
        interface_enable = value;
        interface_enable.value_namespace = name_space;
        interface_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
        join_prune_mtu.value_namespace = name_space;
        join_prune_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
        jp_interval.value_namespace = name_space;
        jp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bsr-border")
    {
        bsr_border.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "interface-enable")
    {
        interface_enable.yfilter = yfilter;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu.yfilter = yfilter;
    }
    if(value_path == "jp-interval")
    {
        jp_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "maximum-routes" || name == "interface-name" || name == "bsr-border" || name == "dr-priority" || name == "enable" || name == "hello-interval" || name == "interface-enable" || name == "join-prune-mtu" || name == "jp-interval" || name == "neighbor-filter" || name == "override-interval" || name == "propagation-delay")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes::MaximumRoutes()
    :
    access_list_name{YType::str, "access-list-name"},
    maximum{YType::uint32, "maximum"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-routes"; yang_parent_name = "interface";
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes::~MaximumRoutes()
{
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes::has_data() const
{
    return access_list_name.is_set
	|| maximum.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-routes";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumRoutes' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::MaximumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "maximum" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    enable{YType::boolean, "enable"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable.is_set
	|| interval.is_set;
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "enable" || name == "interval")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddresses()
{
    yang_name = "sparse-mode-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::SparseModeRpAddresses::~SparseModeRpAddresses()
{
}

bool Pim::DefaultContext::Ipv6::SparseModeRpAddresses::has_data() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv6::SparseModeRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv6::SparseModeRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-addresses";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::SparseModeRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::SparseModeRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sparse-mode-rp-address")
    {
        for(auto const & c : sparse_mode_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress>();
        c->parent = this;
        sparse_mode_rp_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::SparseModeRpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sparse_mode_rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv6::SparseModeRpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv6::SparseModeRpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv6::SparseModeRpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sparse-mode-rp-address")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::SparseModeRpAddress()
    :
    rp_address{YType::str, "rp-address"},
    access_list_name{YType::str, "access-list-name"},
    auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "sparse-mode-rp-address"; yang_parent_name = "sparse-mode-rp-addresses";
}

Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::~SparseModeRpAddress()
{
}

bool Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(auto_rp_override.yfilter);
}

std::string Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/sparse-mode-rp-addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.yfilter)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
        auto_rp_override.value_namespace = name_space;
        auto_rp_override.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "access-list-name" || name == "auto-rp-override")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::InheritableDefaults::InheritableDefaults()
    :
    convergency{YType::uint32, "convergency"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_interval{YType::uint32, "hello-interval"},
    join_prune_mtu{YType::uint32, "join-prune-mtu"},
    jp_interval{YType::uint32, "jp-interval"},
    override_interval{YType::uint32, "override-interval"},
    propagation_delay{YType::uint32, "propagation-delay"}
{
    yang_name = "inheritable-defaults"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::InheritableDefaults::~InheritableDefaults()
{
}

bool Pim::DefaultContext::Ipv6::InheritableDefaults::has_data() const
{
    return convergency.is_set
	|| dr_priority.is_set
	|| hello_interval.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set;
}

bool Pim::DefaultContext::Ipv6::InheritableDefaults::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(convergency.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(join_prune_mtu.yfilter)
	|| ydk::is_set(jp_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter);
}

std::string Pim::DefaultContext::Ipv6::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::InheritableDefaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (convergency.is_set || is_set(convergency.yfilter)) leaf_name_data.push_back(convergency.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.yfilter)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.yfilter)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::InheritableDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::InheritableDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "convergency")
    {
        convergency = value;
        convergency.value_namespace = name_space;
        convergency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
        join_prune_mtu.value_namespace = name_space;
        join_prune_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
        jp_interval.value_namespace = name_space;
        jp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::InheritableDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "convergency")
    {
        convergency.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu.yfilter = yfilter;
    }
    if(value_path == "jp-interval")
    {
        jp_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::InheritableDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergency" || name == "dr-priority" || name == "hello-interval" || name == "join-prune-mtu" || name == "jp-interval" || name == "override-interval" || name == "propagation-delay")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Rpf::Rpf()
    :
    route_policy{YType::str, "route-policy"}
{
    yang_name = "rpf"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Rpf::~Rpf()
{
}

bool Pim::DefaultContext::Ipv6::Rpf::has_data() const
{
    return route_policy.is_set;
}

bool Pim::DefaultContext::Ipv6::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy.is_set || is_set(route_policy.yfilter)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy")
    {
        route_policy = value;
        route_policy.value_namespace = name_space;
        route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy")
    {
        route_policy.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::SgExpiryTimer::SgExpiryTimer()
    :
    access_list_name{YType::str, "access-list-name"},
    interval{YType::uint32, "interval"}
{
    yang_name = "sg-expiry-timer"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::SgExpiryTimer::~SgExpiryTimer()
{
}

bool Pim::DefaultContext::Ipv6::SgExpiryTimer::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set;
}

bool Pim::DefaultContext::Ipv6::SgExpiryTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Pim::DefaultContext::Ipv6::SgExpiryTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sg-expiry-timer";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::SgExpiryTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::SgExpiryTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::SgExpiryTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::SgExpiryTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::SgExpiryTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::SgExpiryTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "interval")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::RpfVectorEnable::RpfVectorEnable()
    :
    allow_ebgp{YType::empty, "allow-ebgp"},
    disable_ibgp{YType::empty, "disable-ibgp"},
    enable{YType::empty, "enable"}
{
    yang_name = "rpf-vector-enable"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::RpfVectorEnable::~RpfVectorEnable()
{
}

bool Pim::DefaultContext::Ipv6::RpfVectorEnable::has_data() const
{
    return allow_ebgp.is_set
	|| disable_ibgp.is_set
	|| enable.is_set;
}

bool Pim::DefaultContext::Ipv6::RpfVectorEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_ebgp.yfilter)
	|| ydk::is_set(disable_ibgp.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Pim::DefaultContext::Ipv6::RpfVectorEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-vector-enable";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::RpfVectorEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_ebgp.is_set || is_set(allow_ebgp.yfilter)) leaf_name_data.push_back(allow_ebgp.get_name_leafdata());
    if (disable_ibgp.is_set || is_set(disable_ibgp.yfilter)) leaf_name_data.push_back(disable_ibgp.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::RpfVectorEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::RpfVectorEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::RpfVectorEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp = value;
        allow_ebgp.value_namespace = name_space;
        allow_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp = value;
        disable_ibgp.value_namespace = name_space;
        disable_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::RpfVectorEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp.yfilter = yfilter;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::RpfVectorEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-ebgp" || name == "disable-ibgp" || name == "enable")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Nsf::Nsf()
    :
    lifetime{YType::uint32, "lifetime"}
{
    yang_name = "nsf"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Nsf::~Nsf()
{
}

bool Pim::DefaultContext::Ipv6::Nsf::has_data() const
{
    return lifetime.is_set;
}

bool Pim::DefaultContext::Ipv6::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::Maximum()
    :
    global_high_priority_packet_queue{YType::uint32, "global-high-priority-packet-queue"},
    global_low_priority_packet_queue{YType::uint32, "global-low-priority-packet-queue"}
    	,
    bsr_candidate_rp_cache(nullptr) // presence node
	,bsr_global_candidate_rp_cache(nullptr) // presence node
	,bsr_global_group_mappings(nullptr) // presence node
	,bsr_group_mappings(nullptr) // presence node
	,global_group_mappings_auto_rp(nullptr) // presence node
	,global_register_states(nullptr) // presence node
	,global_route_interfaces(nullptr) // presence node
	,global_routes(nullptr) // presence node
	,group_mappings_auto_rp(nullptr) // presence node
	,register_states(nullptr) // presence node
	,route_interfaces(nullptr) // presence node
	,routes(nullptr) // presence node
{
    yang_name = "maximum"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Maximum::~Maximum()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::has_data() const
{
    return global_high_priority_packet_queue.is_set
	|| global_low_priority_packet_queue.is_set
	|| (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_data())
	|| (bsr_global_candidate_rp_cache !=  nullptr && bsr_global_candidate_rp_cache->has_data())
	|| (bsr_global_group_mappings !=  nullptr && bsr_global_group_mappings->has_data())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_data())
	|| (global_group_mappings_auto_rp !=  nullptr && global_group_mappings_auto_rp->has_data())
	|| (global_register_states !=  nullptr && global_register_states->has_data())
	|| (global_route_interfaces !=  nullptr && global_route_interfaces->has_data())
	|| (global_routes !=  nullptr && global_routes->has_data())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_data())
	|| (register_states !=  nullptr && register_states->has_data())
	|| (route_interfaces !=  nullptr && route_interfaces->has_data())
	|| (routes !=  nullptr && routes->has_data());
}

bool Pim::DefaultContext::Ipv6::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_high_priority_packet_queue.yfilter)
	|| ydk::is_set(global_low_priority_packet_queue.yfilter)
	|| (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_operation())
	|| (bsr_global_candidate_rp_cache !=  nullptr && bsr_global_candidate_rp_cache->has_operation())
	|| (bsr_global_group_mappings !=  nullptr && bsr_global_group_mappings->has_operation())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_operation())
	|| (global_group_mappings_auto_rp !=  nullptr && global_group_mappings_auto_rp->has_operation())
	|| (global_register_states !=  nullptr && global_register_states->has_operation())
	|| (global_route_interfaces !=  nullptr && global_route_interfaces->has_operation())
	|| (global_routes !=  nullptr && global_routes->has_operation())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_operation())
	|| (register_states !=  nullptr && register_states->has_operation())
	|| (route_interfaces !=  nullptr && route_interfaces->has_operation())
	|| (routes !=  nullptr && routes->has_operation());
}

std::string Pim::DefaultContext::Ipv6::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_high_priority_packet_queue.is_set || is_set(global_high_priority_packet_queue.yfilter)) leaf_name_data.push_back(global_high_priority_packet_queue.get_name_leafdata());
    if (global_low_priority_packet_queue.is_set || is_set(global_low_priority_packet_queue.yfilter)) leaf_name_data.push_back(global_low_priority_packet_queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-candidate-rp-cache")
    {
        if(bsr_candidate_rp_cache == nullptr)
        {
            bsr_candidate_rp_cache = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache>();
        }
        return bsr_candidate_rp_cache;
    }

    if(child_yang_name == "bsr-global-candidate-rp-cache")
    {
        if(bsr_global_candidate_rp_cache == nullptr)
        {
            bsr_global_candidate_rp_cache = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache>();
        }
        return bsr_global_candidate_rp_cache;
    }

    if(child_yang_name == "bsr-global-group-mappings")
    {
        if(bsr_global_group_mappings == nullptr)
        {
            bsr_global_group_mappings = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings>();
        }
        return bsr_global_group_mappings;
    }

    if(child_yang_name == "bsr-group-mappings")
    {
        if(bsr_group_mappings == nullptr)
        {
            bsr_group_mappings = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings>();
        }
        return bsr_group_mappings;
    }

    if(child_yang_name == "global-group-mappings-auto-rp")
    {
        if(global_group_mappings_auto_rp == nullptr)
        {
            global_group_mappings_auto_rp = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp>();
        }
        return global_group_mappings_auto_rp;
    }

    if(child_yang_name == "global-register-states")
    {
        if(global_register_states == nullptr)
        {
            global_register_states = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates>();
        }
        return global_register_states;
    }

    if(child_yang_name == "global-route-interfaces")
    {
        if(global_route_interfaces == nullptr)
        {
            global_route_interfaces = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces>();
        }
        return global_route_interfaces;
    }

    if(child_yang_name == "global-routes")
    {
        if(global_routes == nullptr)
        {
            global_routes = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes>();
        }
        return global_routes;
    }

    if(child_yang_name == "group-mappings-auto-rp")
    {
        if(group_mappings_auto_rp == nullptr)
        {
            group_mappings_auto_rp = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp>();
        }
        return group_mappings_auto_rp;
    }

    if(child_yang_name == "register-states")
    {
        if(register_states == nullptr)
        {
            register_states = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::RegisterStates>();
        }
        return register_states;
    }

    if(child_yang_name == "route-interfaces")
    {
        if(route_interfaces == nullptr)
        {
            route_interfaces = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces>();
        }
        return route_interfaces;
    }

    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<Pim::DefaultContext::Ipv6::Maximum::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsr_candidate_rp_cache != nullptr)
    {
        children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache;
    }

    if(bsr_global_candidate_rp_cache != nullptr)
    {
        children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache;
    }

    if(bsr_global_group_mappings != nullptr)
    {
        children["bsr-global-group-mappings"] = bsr_global_group_mappings;
    }

    if(bsr_group_mappings != nullptr)
    {
        children["bsr-group-mappings"] = bsr_group_mappings;
    }

    if(global_group_mappings_auto_rp != nullptr)
    {
        children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp;
    }

    if(global_register_states != nullptr)
    {
        children["global-register-states"] = global_register_states;
    }

    if(global_route_interfaces != nullptr)
    {
        children["global-route-interfaces"] = global_route_interfaces;
    }

    if(global_routes != nullptr)
    {
        children["global-routes"] = global_routes;
    }

    if(group_mappings_auto_rp != nullptr)
    {
        children["group-mappings-auto-rp"] = group_mappings_auto_rp;
    }

    if(register_states != nullptr)
    {
        children["register-states"] = register_states;
    }

    if(route_interfaces != nullptr)
    {
        children["route-interfaces"] = route_interfaces;
    }

    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-high-priority-packet-queue")
    {
        global_high_priority_packet_queue = value;
        global_high_priority_packet_queue.value_namespace = name_space;
        global_high_priority_packet_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-low-priority-packet-queue")
    {
        global_low_priority_packet_queue = value;
        global_low_priority_packet_queue.value_namespace = name_space;
        global_low_priority_packet_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-high-priority-packet-queue")
    {
        global_high_priority_packet_queue.yfilter = yfilter;
    }
    if(value_path == "global-low-priority-packet-queue")
    {
        global_low_priority_packet_queue.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-candidate-rp-cache" || name == "bsr-global-candidate-rp-cache" || name == "bsr-global-group-mappings" || name == "bsr-group-mappings" || name == "global-group-mappings-auto-rp" || name == "global-register-states" || name == "global-route-interfaces" || name == "global-routes" || name == "group-mappings-auto-rp" || name == "register-states" || name == "route-interfaces" || name == "routes" || name == "global-high-priority-packet-queue" || name == "global-low-priority-packet-queue")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::BsrGlobalGroupMappings()
    :
    bsr_maximum_global_group_mappings{YType::uint32, "bsr-maximum-global-group-mappings"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-group-mappings"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::~BsrGlobalGroupMappings()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::has_data() const
{
    return bsr_maximum_global_group_mappings.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_global_group_mappings.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-group-mappings";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_global_group_mappings.is_set || is_set(bsr_maximum_global_group_mappings.yfilter)) leaf_name_data.push_back(bsr_maximum_global_group_mappings.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-global-group-mappings")
    {
        bsr_maximum_global_group_mappings = value;
        bsr_maximum_global_group_mappings.value_namespace = name_space;
        bsr_maximum_global_group_mappings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-global-group-mappings")
    {
        bsr_maximum_global_group_mappings.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-global-group-mappings" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::GlobalRoutes()
    :
    maximum_routes{YType::uint32, "maximum-routes"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-routes"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::~GlobalRoutes()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_routes.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-routes";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_routes.is_set || is_set(maximum_routes.yfilter)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
        maximum_routes.value_namespace = name_space;
        maximum_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-routes" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::GlobalGroupMappingsAutoRp()
    :
    maximum_global_group_ranges_auto_rp{YType::uint32, "maximum-global-group-ranges-auto-rp"},
    threshold_global_group_ranges_auto_rp{YType::uint32, "threshold-global-group-ranges-auto-rp"}
{
    yang_name = "global-group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::~GlobalGroupMappingsAutoRp()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::has_data() const
{
    return maximum_global_group_ranges_auto_rp.is_set
	|| threshold_global_group_ranges_auto_rp.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_global_group_ranges_auto_rp.yfilter)
	|| ydk::is_set(threshold_global_group_ranges_auto_rp.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-group-mappings-auto-rp";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_global_group_ranges_auto_rp.is_set || is_set(maximum_global_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(maximum_global_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_global_group_ranges_auto_rp.is_set || is_set(threshold_global_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(threshold_global_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-global-group-ranges-auto-rp")
    {
        maximum_global_group_ranges_auto_rp = value;
        maximum_global_group_ranges_auto_rp.value_namespace = name_space;
        maximum_global_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-global-group-ranges-auto-rp")
    {
        threshold_global_group_ranges_auto_rp = value;
        threshold_global_group_ranges_auto_rp.value_namespace = name_space;
        threshold_global_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-global-group-ranges-auto-rp")
    {
        maximum_global_group_ranges_auto_rp.yfilter = yfilter;
    }
    if(value_path == "threshold-global-group-ranges-auto-rp")
    {
        threshold_global_group_ranges_auto_rp.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-global-group-ranges-auto-rp" || name == "threshold-global-group-ranges-auto-rp")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::BsrGlobalCandidateRpCache()
    :
    bsr_maximum_global_candidate_rp_cache{YType::uint32, "bsr-maximum-global-candidate-rp-cache"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::~BsrGlobalCandidateRpCache()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::has_data() const
{
    return bsr_maximum_global_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_global_candidate_rp_cache.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-candidate-rp-cache";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_global_candidate_rp_cache.is_set || is_set(bsr_maximum_global_candidate_rp_cache.yfilter)) leaf_name_data.push_back(bsr_maximum_global_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-global-candidate-rp-cache")
    {
        bsr_maximum_global_candidate_rp_cache = value;
        bsr_maximum_global_candidate_rp_cache.value_namespace = name_space;
        bsr_maximum_global_candidate_rp_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-global-candidate-rp-cache")
    {
        bsr_maximum_global_candidate_rp_cache.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-global-candidate-rp-cache" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::GlobalRegisterStates()
    :
    maximum_register_states{YType::uint32, "maximum-register-states"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-register-states"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::~GlobalRegisterStates()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_register_states.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-register-states";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_register_states.is_set || is_set(maximum_register_states.yfilter)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
        maximum_register_states.value_namespace = name_space;
        maximum_register_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-register-states" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::GlobalRouteInterfaces()
    :
    maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-route-interfaces"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::~GlobalRouteInterfaces()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_route_interfaces.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-route-interfaces";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.yfilter)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
        maximum_route_interfaces.value_namespace = name_space;
        maximum_route_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-route-interfaces" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::GroupMappingsAutoRp()
    :
    maximum_group_ranges_auto_rp{YType::uint32, "maximum-group-ranges-auto-rp"},
    threshold_group_ranges_auto_rp{YType::uint32, "threshold-group-ranges-auto-rp"}
{
    yang_name = "group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::~GroupMappingsAutoRp()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::has_data() const
{
    return maximum_group_ranges_auto_rp.is_set
	|| threshold_group_ranges_auto_rp.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_group_ranges_auto_rp.yfilter)
	|| ydk::is_set(threshold_group_ranges_auto_rp.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-mappings-auto-rp";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_group_ranges_auto_rp.is_set || is_set(maximum_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(maximum_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_group_ranges_auto_rp.is_set || is_set(threshold_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(threshold_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp = value;
        maximum_group_ranges_auto_rp.value_namespace = name_space;
        maximum_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp = value;
        threshold_group_ranges_auto_rp.value_namespace = name_space;
        threshold_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp.yfilter = yfilter;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-group-ranges-auto-rp" || name == "threshold-group-ranges-auto-rp")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::BsrGroupMappings()
    :
    bsr_maximum_group_ranges{YType::uint32, "bsr-maximum-group-ranges"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-group-mappings"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::~BsrGroupMappings()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::has_data() const
{
    return bsr_maximum_group_ranges.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_group_ranges.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-group-mappings";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_group_ranges.is_set || is_set(bsr_maximum_group_ranges.yfilter)) leaf_name_data.push_back(bsr_maximum_group_ranges.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges = value;
        bsr_maximum_group_ranges.value_namespace = name_space;
        bsr_maximum_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-group-ranges" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::RegisterStates::RegisterStates()
    :
    maximum_register_states{YType::uint32, "maximum-register-states"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "register-states"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::RegisterStates::~RegisterStates()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::RegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::RegisterStates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_register_states.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::RegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-states";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::RegisterStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_register_states.is_set || is_set(maximum_register_states.yfilter)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::RegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::RegisterStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::RegisterStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
        maximum_register_states.value_namespace = name_space;
        maximum_register_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::RegisterStates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::RegisterStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-register-states" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::RouteInterfaces()
    :
    maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "route-interfaces"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::~RouteInterfaces()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_route_interfaces.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-interfaces";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.yfilter)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
        maximum_route_interfaces.value_namespace = name_space;
        maximum_route_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-route-interfaces" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::BsrCandidateRpCache()
    :
    bsr_maximum_candidate_rp_cache{YType::uint32, "bsr-maximum-candidate-rp-cache"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::~BsrCandidateRpCache()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::has_data() const
{
    return bsr_maximum_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_candidate_rp_cache.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-candidate-rp-cache";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_candidate_rp_cache.is_set || is_set(bsr_maximum_candidate_rp_cache.yfilter)) leaf_name_data.push_back(bsr_maximum_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache = value;
        bsr_maximum_candidate_rp_cache.value_namespace = name_space;
        bsr_maximum_candidate_rp_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-candidate-rp-cache" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Maximum::Routes::Routes()
    :
    maximum_routes{YType::uint32, "maximum-routes"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "routes"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::Routes::~Routes()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::Routes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::Routes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_routes.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Maximum::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Maximum::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_routes.is_set || is_set(maximum_routes.yfilter)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Maximum::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Maximum::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
        maximum_routes.value_namespace = name_space;
        maximum_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Maximum::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Maximum::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-routes" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Ssm::Ssm()
    :
    disable{YType::boolean, "disable"},
    range{YType::str, "range"}
{
    yang_name = "ssm"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Ssm::~Ssm()
{
}

bool Pim::DefaultContext::Ipv6::Ssm::has_data() const
{
    return disable.is_set
	|| range.is_set;
}

bool Pim::DefaultContext::Ipv6::Ssm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Ssm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Ssm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Ssm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Ssm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "range")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddresses()
{
    yang_name = "bidir-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::BidirRpAddresses::~BidirRpAddresses()
{
}

bool Pim::DefaultContext::Ipv6::BidirRpAddresses::has_data() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv6::BidirRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv6::BidirRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-addresses";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::BidirRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::BidirRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-rp-address")
    {
        for(auto const & c : bidir_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress>();
        c->parent = this;
        bidir_rp_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::BidirRpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bidir_rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv6::BidirRpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv6::BidirRpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv6::BidirRpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir-rp-address")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::BidirRpAddress()
    :
    rp_address{YType::str, "rp-address"},
    access_list_name{YType::str, "access-list-name"},
    auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "bidir-rp-address"; yang_parent_name = "bidir-rp-addresses";
}

Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::~BidirRpAddress()
{
}

bool Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(auto_rp_override.yfilter);
}

std::string Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/bidir-rp-addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.yfilter)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
        auto_rp_override.value_namespace = name_space;
        auto_rp_override.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "access-list-name" || name == "auto-rp-override")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Bsr::Bsr()
    :
    candidate_bsr(nullptr) // presence node
	,candidate_rps(std::make_shared<Pim::DefaultContext::Ipv6::Bsr::CandidateRps>())
{
    candidate_rps->parent = this;

    yang_name = "bsr"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Bsr::~Bsr()
{
}

bool Pim::DefaultContext::Ipv6::Bsr::has_data() const
{
    return (candidate_bsr !=  nullptr && candidate_bsr->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data());
}

bool Pim::DefaultContext::Ipv6::Bsr::has_operation() const
{
    return is_set(yfilter)
	|| (candidate_bsr !=  nullptr && candidate_bsr->has_operation())
	|| (candidate_rps !=  nullptr && candidate_rps->has_operation());
}

std::string Pim::DefaultContext::Ipv6::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Bsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-bsr")
    {
        if(candidate_bsr == nullptr)
        {
            candidate_bsr = std::make_shared<Pim::DefaultContext::Ipv6::Bsr::CandidateBsr>();
        }
        return candidate_bsr;
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps == nullptr)
        {
            candidate_rps = std::make_shared<Pim::DefaultContext::Ipv6::Bsr::CandidateRps>();
        }
        return candidate_rps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_bsr != nullptr)
    {
        children["candidate-bsr"] = candidate_bsr;
    }

    if(candidate_rps != nullptr)
    {
        children["candidate-rps"] = candidate_rps;
    }

    return children;
}

void Pim::DefaultContext::Ipv6::Bsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv6::Bsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv6::Bsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-bsr" || name == "candidate-rps")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::CandidateBsr()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::uint32, "priority"}
{
    yang_name = "candidate-bsr"; yang_parent_name = "bsr";
}

Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::~CandidateBsr()
{
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| priority.is_set;
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/bsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "priority")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv6::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/bsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Bsr::CandidateRps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_rp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv6::Bsr::CandidateRps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv6::Bsr::CandidateRps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    address{YType::str, "address"},
    mode{YType::enumeration, "mode"},
    group_list{YType::str, "group-list"},
    interval{YType::uint32, "interval"},
    priority{YType::uint32, "priority"}
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::has_data() const
{
    return address.is_set
	|| mode.is_set
	|| group_list.is_set
	|| interval.is_set
	|| priority.is_set;
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[address='" <<address <<"']" <<"[mode='" <<mode <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/bsr/candidate-rps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mode" || name == "group-list" || name == "interval" || name == "priority")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::AllowRp::AllowRp()
    :
    group_list_name{YType::str, "group-list-name"},
    rp_list_name{YType::str, "rp-list-name"}
{
    yang_name = "allow-rp"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::AllowRp::~AllowRp()
{
}

bool Pim::DefaultContext::Ipv6::AllowRp::has_data() const
{
    return group_list_name.is_set
	|| rp_list_name.is_set;
}

bool Pim::DefaultContext::Ipv6::AllowRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_list_name.yfilter)
	|| ydk::is_set(rp_list_name.yfilter);
}

std::string Pim::DefaultContext::Ipv6::AllowRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow-rp";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::AllowRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_list_name.is_set || is_set(group_list_name.yfilter)) leaf_name_data.push_back(group_list_name.get_name_leafdata());
    if (rp_list_name.is_set || is_set(rp_list_name.yfilter)) leaf_name_data.push_back(rp_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::AllowRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::AllowRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::AllowRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
        group_list_name.value_namespace = name_space;
        group_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list-name")
    {
        rp_list_name = value;
        rp_list_name.value_namespace = name_space;
        rp_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::AllowRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-list-name")
    {
        group_list_name.yfilter = yfilter;
    }
    if(value_path == "rp-list-name")
    {
        rp_list_name.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::AllowRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-list-name" || name == "rp-list-name")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddresses()
{
    yang_name = "embedded-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::~EmbeddedRpAddresses()
{
}

bool Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::has_data() const
{
    for (std::size_t index=0; index<embedded_rp_address.size(); index++)
    {
        if(embedded_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<embedded_rp_address.size(); index++)
    {
        if(embedded_rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "embedded-rp-addresses";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "embedded-rp-address")
    {
        for(auto const & c : embedded_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress>();
        c->parent = this;
        embedded_rp_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : embedded_rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "embedded-rp-address")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::EmbeddedRpAddress()
    :
    rp_address{YType::str, "rp-address"},
    access_list_name{YType::str, "access-list-name"}
{
    yang_name = "embedded-rp-address"; yang_parent_name = "embedded-rp-addresses";
}

Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::~EmbeddedRpAddress()
{
}

bool Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set;
}

bool Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "embedded-rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/embedded-rp-addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "access-list-name")
        return true;
    return false;
}

Pim::DefaultContext::Ipv6::Convergence::Convergence()
    :
    link_down_prune_delay{YType::uint32, "link-down-prune-delay"},
    rpf_conflict_join_delay{YType::uint32, "rpf-conflict-join-delay"}
{
    yang_name = "convergence"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Convergence::~Convergence()
{
}

bool Pim::DefaultContext::Ipv6::Convergence::has_data() const
{
    return link_down_prune_delay.is_set
	|| rpf_conflict_join_delay.is_set;
}

bool Pim::DefaultContext::Ipv6::Convergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_down_prune_delay.yfilter)
	|| ydk::is_set(rpf_conflict_join_delay.yfilter);
}

std::string Pim::DefaultContext::Ipv6::Convergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv6::Convergence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_down_prune_delay.is_set || is_set(link_down_prune_delay.yfilter)) leaf_name_data.push_back(link_down_prune_delay.get_name_leafdata());
    if (rpf_conflict_join_delay.is_set || is_set(rpf_conflict_join_delay.yfilter)) leaf_name_data.push_back(rpf_conflict_join_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv6::Convergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv6::Convergence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv6::Convergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay = value;
        link_down_prune_delay.value_namespace = name_space;
        link_down_prune_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay = value;
        rpf_conflict_join_delay.value_namespace = name_space;
        rpf_conflict_join_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv6::Convergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay.yfilter = yfilter;
    }
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv6::Convergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-down-prune-delay" || name == "rpf-conflict-join-delay")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Ipv4()
    :
    accept_register{YType::str, "accept-register"},
    auto_rp_disable{YType::empty, "auto-rp-disable"},
    log_neighbor_changes{YType::empty, "log-neighbor-changes"},
    multipath{YType::enumeration, "multipath"},
    neighbor_check_on_receive{YType::empty, "neighbor-check-on-receive"},
    neighbor_check_on_send{YType::empty, "neighbor-check-on-send"},
    neighbor_filter{YType::str, "neighbor-filter"},
    old_register_checksum{YType::empty, "old-register-checksum"},
    register_source{YType::str, "register-source"},
    rp_static_deny{YType::str, "rp-static-deny"},
    spt_threshold_infinity{YType::str, "spt-threshold-infinity"},
    ssm_allow_override{YType::empty, "ssm-allow-override"},
    suppress_data_registers{YType::empty, "suppress-data-registers"},
    suppress_rpf_prunes{YType::empty, "suppress-rpf-prunes"}
    	,
    allow_rp(nullptr) // presence node
	,auto_rp_candidate_rps(std::make_shared<Pim::DefaultContext::Ipv4::AutoRpCandidateRps>())
	,auto_rp_mapping_agent(std::make_shared<Pim::DefaultContext::Ipv4::AutoRpMappingAgent>())
	,bidir_rp_addresses(std::make_shared<Pim::DefaultContext::Ipv4::BidirRpAddresses>())
	,bsr(std::make_shared<Pim::DefaultContext::Ipv4::Bsr>())
	,cj_multicast_only_frrs(std::make_shared<Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs>())
	,convergence(std::make_shared<Pim::DefaultContext::Ipv4::Convergence>())
	,cs_multicast_only_frrs(std::make_shared<Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs>())
	,inheritable_defaults(std::make_shared<Pim::DefaultContext::Ipv4::InheritableDefaults>())
	,injects(std::make_shared<Pim::DefaultContext::Ipv4::Injects>())
	,interfaces(std::make_shared<Pim::DefaultContext::Ipv4::Interfaces>())
	,maximum(std::make_shared<Pim::DefaultContext::Ipv4::Maximum>())
	,multicast_only_frr(std::make_shared<Pim::DefaultContext::Ipv4::MulticastOnlyFrr>())
	,nsf(std::make_shared<Pim::DefaultContext::Ipv4::Nsf>())
	,paths(std::make_shared<Pim::DefaultContext::Ipv4::Paths>())
	,rpf(std::make_shared<Pim::DefaultContext::Ipv4::Rpf>())
	,rpf_redirect(std::make_shared<Pim::DefaultContext::Ipv4::RpfRedirect>())
	,rpf_vector_enable(nullptr) // presence node
	,sg_expiry_timer(std::make_shared<Pim::DefaultContext::Ipv4::SgExpiryTimer>())
	,sparse_mode_rp_addresses(std::make_shared<Pim::DefaultContext::Ipv4::SparseModeRpAddresses>())
	,ssm(std::make_shared<Pim::DefaultContext::Ipv4::Ssm>())
{
    auto_rp_candidate_rps->parent = this;

    auto_rp_mapping_agent->parent = this;

    bidir_rp_addresses->parent = this;

    bsr->parent = this;

    cj_multicast_only_frrs->parent = this;

    convergence->parent = this;

    cs_multicast_only_frrs->parent = this;

    inheritable_defaults->parent = this;

    injects->parent = this;

    interfaces->parent = this;

    maximum->parent = this;

    multicast_only_frr->parent = this;

    nsf->parent = this;

    paths->parent = this;

    rpf->parent = this;

    rpf_redirect->parent = this;

    sg_expiry_timer->parent = this;

    sparse_mode_rp_addresses->parent = this;

    ssm->parent = this;

    yang_name = "ipv4"; yang_parent_name = "default-context";
}

Pim::DefaultContext::Ipv4::~Ipv4()
{
}

bool Pim::DefaultContext::Ipv4::has_data() const
{
    return accept_register.is_set
	|| auto_rp_disable.is_set
	|| log_neighbor_changes.is_set
	|| multipath.is_set
	|| neighbor_check_on_receive.is_set
	|| neighbor_check_on_send.is_set
	|| neighbor_filter.is_set
	|| old_register_checksum.is_set
	|| register_source.is_set
	|| rp_static_deny.is_set
	|| spt_threshold_infinity.is_set
	|| ssm_allow_override.is_set
	|| suppress_data_registers.is_set
	|| suppress_rpf_prunes.is_set
	|| (allow_rp !=  nullptr && allow_rp->has_data())
	|| (auto_rp_candidate_rps !=  nullptr && auto_rp_candidate_rps->has_data())
	|| (auto_rp_mapping_agent !=  nullptr && auto_rp_mapping_agent->has_data())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (cj_multicast_only_frrs !=  nullptr && cj_multicast_only_frrs->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (cs_multicast_only_frrs !=  nullptr && cs_multicast_only_frrs->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (injects !=  nullptr && injects->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (multicast_only_frr !=  nullptr && multicast_only_frr->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (paths !=  nullptr && paths->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_data())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_data())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_data())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Pim::DefaultContext::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_register.yfilter)
	|| ydk::is_set(auto_rp_disable.yfilter)
	|| ydk::is_set(log_neighbor_changes.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(neighbor_check_on_receive.yfilter)
	|| ydk::is_set(neighbor_check_on_send.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(old_register_checksum.yfilter)
	|| ydk::is_set(register_source.yfilter)
	|| ydk::is_set(rp_static_deny.yfilter)
	|| ydk::is_set(spt_threshold_infinity.yfilter)
	|| ydk::is_set(ssm_allow_override.yfilter)
	|| ydk::is_set(suppress_data_registers.yfilter)
	|| ydk::is_set(suppress_rpf_prunes.yfilter)
	|| (allow_rp !=  nullptr && allow_rp->has_operation())
	|| (auto_rp_candidate_rps !=  nullptr && auto_rp_candidate_rps->has_operation())
	|| (auto_rp_mapping_agent !=  nullptr && auto_rp_mapping_agent->has_operation())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_operation())
	|| (bsr !=  nullptr && bsr->has_operation())
	|| (cj_multicast_only_frrs !=  nullptr && cj_multicast_only_frrs->has_operation())
	|| (convergence !=  nullptr && convergence->has_operation())
	|| (cs_multicast_only_frrs !=  nullptr && cs_multicast_only_frrs->has_operation())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_operation())
	|| (injects !=  nullptr && injects->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (multicast_only_frr !=  nullptr && multicast_only_frr->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (paths !=  nullptr && paths->has_operation())
	|| (rpf !=  nullptr && rpf->has_operation())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_operation())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_operation())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_operation())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Pim::DefaultContext::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_register.is_set || is_set(accept_register.yfilter)) leaf_name_data.push_back(accept_register.get_name_leafdata());
    if (auto_rp_disable.is_set || is_set(auto_rp_disable.yfilter)) leaf_name_data.push_back(auto_rp_disable.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.yfilter)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_check_on_receive.is_set || is_set(neighbor_check_on_receive.yfilter)) leaf_name_data.push_back(neighbor_check_on_receive.get_name_leafdata());
    if (neighbor_check_on_send.is_set || is_set(neighbor_check_on_send.yfilter)) leaf_name_data.push_back(neighbor_check_on_send.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (old_register_checksum.is_set || is_set(old_register_checksum.yfilter)) leaf_name_data.push_back(old_register_checksum.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.yfilter)) leaf_name_data.push_back(register_source.get_name_leafdata());
    if (rp_static_deny.is_set || is_set(rp_static_deny.yfilter)) leaf_name_data.push_back(rp_static_deny.get_name_leafdata());
    if (spt_threshold_infinity.is_set || is_set(spt_threshold_infinity.yfilter)) leaf_name_data.push_back(spt_threshold_infinity.get_name_leafdata());
    if (ssm_allow_override.is_set || is_set(ssm_allow_override.yfilter)) leaf_name_data.push_back(ssm_allow_override.get_name_leafdata());
    if (suppress_data_registers.is_set || is_set(suppress_data_registers.yfilter)) leaf_name_data.push_back(suppress_data_registers.get_name_leafdata());
    if (suppress_rpf_prunes.is_set || is_set(suppress_rpf_prunes.yfilter)) leaf_name_data.push_back(suppress_rpf_prunes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow-rp")
    {
        if(allow_rp == nullptr)
        {
            allow_rp = std::make_shared<Pim::DefaultContext::Ipv4::AllowRp>();
        }
        return allow_rp;
    }

    if(child_yang_name == "auto-rp-candidate-rps")
    {
        if(auto_rp_candidate_rps == nullptr)
        {
            auto_rp_candidate_rps = std::make_shared<Pim::DefaultContext::Ipv4::AutoRpCandidateRps>();
        }
        return auto_rp_candidate_rps;
    }

    if(child_yang_name == "auto-rp-mapping-agent")
    {
        if(auto_rp_mapping_agent == nullptr)
        {
            auto_rp_mapping_agent = std::make_shared<Pim::DefaultContext::Ipv4::AutoRpMappingAgent>();
        }
        return auto_rp_mapping_agent;
    }

    if(child_yang_name == "bidir-rp-addresses")
    {
        if(bidir_rp_addresses == nullptr)
        {
            bidir_rp_addresses = std::make_shared<Pim::DefaultContext::Ipv4::BidirRpAddresses>();
        }
        return bidir_rp_addresses;
    }

    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Pim::DefaultContext::Ipv4::Bsr>();
        }
        return bsr;
    }

    if(child_yang_name == "cj-multicast-only-frrs")
    {
        if(cj_multicast_only_frrs == nullptr)
        {
            cj_multicast_only_frrs = std::make_shared<Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs>();
        }
        return cj_multicast_only_frrs;
    }

    if(child_yang_name == "convergence")
    {
        if(convergence == nullptr)
        {
            convergence = std::make_shared<Pim::DefaultContext::Ipv4::Convergence>();
        }
        return convergence;
    }

    if(child_yang_name == "cs-multicast-only-frrs")
    {
        if(cs_multicast_only_frrs == nullptr)
        {
            cs_multicast_only_frrs = std::make_shared<Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs>();
        }
        return cs_multicast_only_frrs;
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults == nullptr)
        {
            inheritable_defaults = std::make_shared<Pim::DefaultContext::Ipv4::InheritableDefaults>();
        }
        return inheritable_defaults;
    }

    if(child_yang_name == "injects")
    {
        if(injects == nullptr)
        {
            injects = std::make_shared<Pim::DefaultContext::Ipv4::Injects>();
        }
        return injects;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Pim::DefaultContext::Ipv4::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Pim::DefaultContext::Ipv4::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "multicast-only-frr")
    {
        if(multicast_only_frr == nullptr)
        {
            multicast_only_frr = std::make_shared<Pim::DefaultContext::Ipv4::MulticastOnlyFrr>();
        }
        return multicast_only_frr;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Pim::DefaultContext::Ipv4::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "paths")
    {
        if(paths == nullptr)
        {
            paths = std::make_shared<Pim::DefaultContext::Ipv4::Paths>();
        }
        return paths;
    }

    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Pim::DefaultContext::Ipv4::Rpf>();
        }
        return rpf;
    }

    if(child_yang_name == "rpf-redirect")
    {
        if(rpf_redirect == nullptr)
        {
            rpf_redirect = std::make_shared<Pim::DefaultContext::Ipv4::RpfRedirect>();
        }
        return rpf_redirect;
    }

    if(child_yang_name == "rpf-vector-enable")
    {
        if(rpf_vector_enable == nullptr)
        {
            rpf_vector_enable = std::make_shared<Pim::DefaultContext::Ipv4::RpfVectorEnable>();
        }
        return rpf_vector_enable;
    }

    if(child_yang_name == "sg-expiry-timer")
    {
        if(sg_expiry_timer == nullptr)
        {
            sg_expiry_timer = std::make_shared<Pim::DefaultContext::Ipv4::SgExpiryTimer>();
        }
        return sg_expiry_timer;
    }

    if(child_yang_name == "sparse-mode-rp-addresses")
    {
        if(sparse_mode_rp_addresses == nullptr)
        {
            sparse_mode_rp_addresses = std::make_shared<Pim::DefaultContext::Ipv4::SparseModeRpAddresses>();
        }
        return sparse_mode_rp_addresses;
    }

    if(child_yang_name == "ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Pim::DefaultContext::Ipv4::Ssm>();
        }
        return ssm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow_rp != nullptr)
    {
        children["allow-rp"] = allow_rp;
    }

    if(auto_rp_candidate_rps != nullptr)
    {
        children["auto-rp-candidate-rps"] = auto_rp_candidate_rps;
    }

    if(auto_rp_mapping_agent != nullptr)
    {
        children["auto-rp-mapping-agent"] = auto_rp_mapping_agent;
    }

    if(bidir_rp_addresses != nullptr)
    {
        children["bidir-rp-addresses"] = bidir_rp_addresses;
    }

    if(bsr != nullptr)
    {
        children["bsr"] = bsr;
    }

    if(cj_multicast_only_frrs != nullptr)
    {
        children["cj-multicast-only-frrs"] = cj_multicast_only_frrs;
    }

    if(convergence != nullptr)
    {
        children["convergence"] = convergence;
    }

    if(cs_multicast_only_frrs != nullptr)
    {
        children["cs-multicast-only-frrs"] = cs_multicast_only_frrs;
    }

    if(inheritable_defaults != nullptr)
    {
        children["inheritable-defaults"] = inheritable_defaults;
    }

    if(injects != nullptr)
    {
        children["injects"] = injects;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(multicast_only_frr != nullptr)
    {
        children["multicast-only-frr"] = multicast_only_frr;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(paths != nullptr)
    {
        children["paths"] = paths;
    }

    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    if(rpf_redirect != nullptr)
    {
        children["rpf-redirect"] = rpf_redirect;
    }

    if(rpf_vector_enable != nullptr)
    {
        children["rpf-vector-enable"] = rpf_vector_enable;
    }

    if(sg_expiry_timer != nullptr)
    {
        children["sg-expiry-timer"] = sg_expiry_timer;
    }

    if(sparse_mode_rp_addresses != nullptr)
    {
        children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses;
    }

    if(ssm != nullptr)
    {
        children["ssm"] = ssm;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-register")
    {
        accept_register = value;
        accept_register.value_namespace = name_space;
        accept_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rp-disable")
    {
        auto_rp_disable = value;
        auto_rp_disable.value_namespace = name_space;
        auto_rp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
        log_neighbor_changes.value_namespace = name_space;
        log_neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive = value;
        neighbor_check_on_receive.value_namespace = name_space;
        neighbor_check_on_receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send = value;
        neighbor_check_on_send.value_namespace = name_space;
        neighbor_check_on_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum = value;
        old_register_checksum.value_namespace = name_space;
        old_register_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-source")
    {
        register_source = value;
        register_source.value_namespace = name_space;
        register_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny = value;
        rp_static_deny.value_namespace = name_space;
        rp_static_deny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity = value;
        spt_threshold_infinity.value_namespace = name_space;
        spt_threshold_infinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override = value;
        ssm_allow_override.value_namespace = name_space;
        ssm_allow_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers = value;
        suppress_data_registers.value_namespace = name_space;
        suppress_data_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes = value;
        suppress_rpf_prunes.value_namespace = name_space;
        suppress_rpf_prunes.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-register")
    {
        accept_register.yfilter = yfilter;
    }
    if(value_path == "auto-rp-disable")
    {
        auto_rp_disable.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive.yfilter = yfilter;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum.yfilter = yfilter;
    }
    if(value_path == "register-source")
    {
        register_source.yfilter = yfilter;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny.yfilter = yfilter;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity.yfilter = yfilter;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override.yfilter = yfilter;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers.yfilter = yfilter;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-rp" || name == "auto-rp-candidate-rps" || name == "auto-rp-mapping-agent" || name == "bidir-rp-addresses" || name == "bsr" || name == "cj-multicast-only-frrs" || name == "convergence" || name == "cs-multicast-only-frrs" || name == "inheritable-defaults" || name == "injects" || name == "interfaces" || name == "maximum" || name == "multicast-only-frr" || name == "nsf" || name == "paths" || name == "rpf" || name == "rpf-redirect" || name == "rpf-vector-enable" || name == "sg-expiry-timer" || name == "sparse-mode-rp-addresses" || name == "ssm" || name == "accept-register" || name == "auto-rp-disable" || name == "log-neighbor-changes" || name == "multipath" || name == "neighbor-check-on-receive" || name == "neighbor-check-on-send" || name == "neighbor-filter" || name == "old-register-checksum" || name == "register-source" || name == "rp-static-deny" || name == "spt-threshold-infinity" || name == "ssm-allow-override" || name == "suppress-data-registers" || name == "suppress-rpf-prunes")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::RpfRedirect::RpfRedirect()
    :
    route_policy{YType::str, "route-policy"}
{
    yang_name = "rpf-redirect"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::RpfRedirect::~RpfRedirect()
{
}

bool Pim::DefaultContext::Ipv4::RpfRedirect::has_data() const
{
    return route_policy.is_set;
}

bool Pim::DefaultContext::Ipv4::RpfRedirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy.yfilter);
}

std::string Pim::DefaultContext::Ipv4::RpfRedirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-redirect";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::RpfRedirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy.is_set || is_set(route_policy.yfilter)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::RpfRedirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::RpfRedirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::RpfRedirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy")
    {
        route_policy = value;
        route_policy.value_namespace = name_space;
        route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::RpfRedirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy")
    {
        route_policy.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::RpfRedirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Interfaces::~Interfaces()
{
}

bool Pim::DefaultContext::Ipv4::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pim::DefaultContext::Ipv4::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv4::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv4::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    bsr_border{YType::boolean, "bsr-border"},
    dr_priority{YType::uint32, "dr-priority"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    interface_enable{YType::boolean, "interface-enable"},
    join_prune_mtu{YType::uint32, "join-prune-mtu"},
    jp_interval{YType::uint32, "jp-interval"},
    neighbor_filter{YType::str, "neighbor-filter"},
    override_interval{YType::uint32, "override-interval"},
    propagation_delay{YType::uint32, "propagation-delay"}
    	,
    bfd(std::make_shared<Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd>())
	,maximum_routes(nullptr) // presence node
	,redirect_bundle(std::make_shared<Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle>())
{
    bfd->parent = this;

    redirect_bundle->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| bsr_border.is_set
	|| dr_priority.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| interface_enable.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| neighbor_filter.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (maximum_routes !=  nullptr && maximum_routes->has_data())
	|| (redirect_bundle !=  nullptr && redirect_bundle->has_data());
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bsr_border.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(interface_enable.yfilter)
	|| ydk::is_set(join_prune_mtu.yfilter)
	|| ydk::is_set(jp_interval.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (maximum_routes !=  nullptr && maximum_routes->has_operation())
	|| (redirect_bundle !=  nullptr && redirect_bundle->has_operation());
}

std::string Pim::DefaultContext::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bsr_border.is_set || is_set(bsr_border.yfilter)) leaf_name_data.push_back(bsr_border.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (interface_enable.is_set || is_set(interface_enable.yfilter)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.yfilter)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.yfilter)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "maximum-routes")
    {
        if(maximum_routes == nullptr)
        {
            maximum_routes = std::make_shared<Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes>();
        }
        return maximum_routes;
    }

    if(child_yang_name == "redirect-bundle")
    {
        if(redirect_bundle == nullptr)
        {
            redirect_bundle = std::make_shared<Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle>();
        }
        return redirect_bundle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(maximum_routes != nullptr)
    {
        children["maximum-routes"] = maximum_routes;
    }

    if(redirect_bundle != nullptr)
    {
        children["redirect-bundle"] = redirect_bundle;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-border")
    {
        bsr_border = value;
        bsr_border.value_namespace = name_space;
        bsr_border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-enable")
    {
        interface_enable = value;
        interface_enable.value_namespace = name_space;
        interface_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
        join_prune_mtu.value_namespace = name_space;
        join_prune_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
        jp_interval.value_namespace = name_space;
        jp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bsr-border")
    {
        bsr_border.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "interface-enable")
    {
        interface_enable.yfilter = yfilter;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu.yfilter = yfilter;
    }
    if(value_path == "jp-interval")
    {
        jp_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "maximum-routes" || name == "redirect-bundle" || name == "interface-name" || name == "bsr-border" || name == "dr-priority" || name == "enable" || name == "hello-interval" || name == "interface-enable" || name == "join-prune-mtu" || name == "jp-interval" || name == "neighbor-filter" || name == "override-interval" || name == "propagation-delay")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::RedirectBundle()
    :
    bundle_name{YType::str, "bundle-name"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    threshold_bandwidth{YType::uint32, "threshold-bandwidth"}
{
    yang_name = "redirect-bundle"; yang_parent_name = "interface";
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::~RedirectBundle()
{
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::has_data() const
{
    return bundle_name.is_set
	|| interface_bandwidth.is_set
	|| threshold_bandwidth.is_set;
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(interface_bandwidth.yfilter)
	|| ydk::is_set(threshold_bandwidth.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-bundle";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedirectBundle' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.yfilter)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (threshold_bandwidth.is_set || is_set(threshold_bandwidth.yfilter)) leaf_name_data.push_back(threshold_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
        interface_bandwidth.value_namespace = name_space;
        interface_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-bandwidth")
    {
        threshold_bandwidth = value;
        threshold_bandwidth.value_namespace = name_space;
        threshold_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth.yfilter = yfilter;
    }
    if(value_path == "threshold-bandwidth")
    {
        threshold_bandwidth.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-name" || name == "interface-bandwidth" || name == "threshold-bandwidth")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes::MaximumRoutes()
    :
    access_list_name{YType::str, "access-list-name"},
    maximum{YType::uint32, "maximum"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "maximum-routes"; yang_parent_name = "interface";
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes::~MaximumRoutes()
{
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes::has_data() const
{
    return access_list_name.is_set
	|| maximum.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-routes";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumRoutes' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::MaximumRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "maximum" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    enable{YType::boolean, "enable"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable.is_set
	|| interval.is_set;
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv4_pim_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "enable" || name == "interval")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRps()
{
    yang_name = "auto-rp-candidate-rps"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::AutoRpCandidateRps::~AutoRpCandidateRps()
{
}

bool Pim::DefaultContext::Ipv4::AutoRpCandidateRps::has_data() const
{
    for (std::size_t index=0; index<auto_rp_candidate_rp.size(); index++)
    {
        if(auto_rp_candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::AutoRpCandidateRps::has_operation() const
{
    for (std::size_t index=0; index<auto_rp_candidate_rp.size(); index++)
    {
        if(auto_rp_candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv4::AutoRpCandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp-candidate-rps";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::AutoRpCandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::AutoRpCandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-rp-candidate-rp")
    {
        for(auto const & c : auto_rp_candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp>();
        c->parent = this;
        auto_rp_candidate_rp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::AutoRpCandidateRps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : auto_rp_candidate_rp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::AutoRpCandidateRps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv4::AutoRpCandidateRps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv4::AutoRpCandidateRps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-rp-candidate-rp")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp::AutoRpCandidateRp()
    :
    interface_name{YType::str, "interface-name"},
    protocol_mode{YType::enumeration, "protocol-mode"},
    access_list_name{YType::str, "access-list-name"},
    announce_period{YType::uint32, "announce-period"},
    ttl{YType::uint32, "ttl"}
{
    yang_name = "auto-rp-candidate-rp"; yang_parent_name = "auto-rp-candidate-rps";
}

Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp::~AutoRpCandidateRp()
{
}

bool Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp::has_data() const
{
    return interface_name.is_set
	|| protocol_mode.is_set
	|| access_list_name.is_set
	|| announce_period.is_set
	|| ttl.is_set;
}

bool Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(protocol_mode.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(announce_period.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp-candidate-rp" <<"[interface-name='" <<interface_name <<"']" <<"[protocol-mode='" <<protocol_mode <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/auto-rp-candidate-rps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.yfilter)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (announce_period.is_set || is_set(announce_period.yfilter)) leaf_name_data.push_back(announce_period.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
        protocol_mode.value_namespace = name_space;
        protocol_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-period")
    {
        announce_period = value;
        announce_period.value_namespace = name_space;
        announce_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "announce-period")
    {
        announce_period.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::AutoRpCandidateRps::AutoRpCandidateRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "protocol-mode" || name == "access-list-name" || name == "announce-period" || name == "ttl")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::AutoRpMappingAgent()
    :
    cache_limit(nullptr) // presence node
	,parameters(nullptr) // presence node
{
    yang_name = "auto-rp-mapping-agent"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::~AutoRpMappingAgent()
{
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::has_data() const
{
    return (cache_limit !=  nullptr && cache_limit->has_data())
	|| (parameters !=  nullptr && parameters->has_data());
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::has_operation() const
{
    return is_set(yfilter)
	|| (cache_limit !=  nullptr && cache_limit->has_operation())
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string Pim::DefaultContext::Ipv4::AutoRpMappingAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp-mapping-agent";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::AutoRpMappingAgent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::AutoRpMappingAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache-limit")
    {
        if(cache_limit == nullptr)
        {
            cache_limit = std::make_shared<Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit>();
        }
        return cache_limit;
    }

    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::AutoRpMappingAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache_limit != nullptr)
    {
        children["cache-limit"] = cache_limit;
    }

    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::AutoRpMappingAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv4::AutoRpMappingAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-limit" || name == "parameters")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::Parameters()
    :
    announce_period{YType::uint32, "announce-period"},
    interface_name{YType::str, "interface-name"},
    ttl{YType::uint32, "ttl"}
{
    yang_name = "parameters"; yang_parent_name = "auto-rp-mapping-agent";
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::~Parameters()
{
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::has_data() const
{
    return announce_period.is_set
	|| interface_name.is_set
	|| ttl.is_set;
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announce_period.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/auto-rp-mapping-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_period.is_set || is_set(announce_period.yfilter)) leaf_name_data.push_back(announce_period.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce-period")
    {
        announce_period = value;
        announce_period.value_namespace = name_space;
        announce_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce-period")
    {
        announce_period.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-period" || name == "interface-name" || name == "ttl")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::CacheLimit()
    :
    maximum_cache_entry{YType::uint32, "maximum-cache-entry"},
    threshold_cache_entry{YType::uint32, "threshold-cache-entry"}
{
    yang_name = "cache-limit"; yang_parent_name = "auto-rp-mapping-agent";
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::~CacheLimit()
{
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::has_data() const
{
    return maximum_cache_entry.is_set
	|| threshold_cache_entry.is_set;
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cache_entry.yfilter)
	|| ydk::is_set(threshold_cache_entry.yfilter);
}

std::string Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache-limit";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/auto-rp-mapping-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cache_entry.is_set || is_set(maximum_cache_entry.yfilter)) leaf_name_data.push_back(maximum_cache_entry.get_name_leafdata());
    if (threshold_cache_entry.is_set || is_set(threshold_cache_entry.yfilter)) leaf_name_data.push_back(threshold_cache_entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-cache-entry")
    {
        maximum_cache_entry = value;
        maximum_cache_entry.value_namespace = name_space;
        maximum_cache_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-cache-entry")
    {
        threshold_cache_entry = value;
        threshold_cache_entry.value_namespace = name_space;
        threshold_cache_entry.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cache-entry")
    {
        maximum_cache_entry.yfilter = yfilter;
    }
    if(value_path == "threshold-cache-entry")
    {
        threshold_cache_entry.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cache-entry" || name == "threshold-cache-entry")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddresses()
{
    yang_name = "sparse-mode-rp-addresses"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::SparseModeRpAddresses::~SparseModeRpAddresses()
{
}

bool Pim::DefaultContext::Ipv4::SparseModeRpAddresses::has_data() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::SparseModeRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv4::SparseModeRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-addresses";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::SparseModeRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::SparseModeRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sparse-mode-rp-address")
    {
        for(auto const & c : sparse_mode_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress>();
        c->parent = this;
        sparse_mode_rp_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::SparseModeRpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sparse_mode_rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::SparseModeRpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv4::SparseModeRpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv4::SparseModeRpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sparse-mode-rp-address")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::SparseModeRpAddress()
    :
    rp_address{YType::str, "rp-address"},
    access_list_name{YType::str, "access-list-name"},
    auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "sparse-mode-rp-address"; yang_parent_name = "sparse-mode-rp-addresses";
}

Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::~SparseModeRpAddress()
{
}

bool Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(auto_rp_override.yfilter);
}

std::string Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/sparse-mode-rp-addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.yfilter)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
        auto_rp_override.value_namespace = name_space;
        auto_rp_override.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "access-list-name" || name == "auto-rp-override")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::MulticastOnlyFrr::MulticastOnlyFrr()
    :
    enable{YType::empty, "enable"},
    flow_multicast_only_frr{YType::str, "flow-multicast-only-frr"},
    non_revertive_multicast_only_frr{YType::empty, "non-revertive-multicast-only-frr"},
    rib_multicast_only_frr{YType::str, "rib-multicast-only-frr"}
{
    yang_name = "multicast-only-frr"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::MulticastOnlyFrr::~MulticastOnlyFrr()
{
}

bool Pim::DefaultContext::Ipv4::MulticastOnlyFrr::has_data() const
{
    return enable.is_set
	|| flow_multicast_only_frr.is_set
	|| non_revertive_multicast_only_frr.is_set
	|| rib_multicast_only_frr.is_set;
}

bool Pim::DefaultContext::Ipv4::MulticastOnlyFrr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(flow_multicast_only_frr.yfilter)
	|| ydk::is_set(non_revertive_multicast_only_frr.yfilter)
	|| ydk::is_set(rib_multicast_only_frr.yfilter);
}

std::string Pim::DefaultContext::Ipv4::MulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-only-frr";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::MulticastOnlyFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flow_multicast_only_frr.is_set || is_set(flow_multicast_only_frr.yfilter)) leaf_name_data.push_back(flow_multicast_only_frr.get_name_leafdata());
    if (non_revertive_multicast_only_frr.is_set || is_set(non_revertive_multicast_only_frr.yfilter)) leaf_name_data.push_back(non_revertive_multicast_only_frr.get_name_leafdata());
    if (rib_multicast_only_frr.is_set || is_set(rib_multicast_only_frr.yfilter)) leaf_name_data.push_back(rib_multicast_only_frr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::MulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::MulticastOnlyFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::MulticastOnlyFrr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-multicast-only-frr")
    {
        flow_multicast_only_frr = value;
        flow_multicast_only_frr.value_namespace = name_space;
        flow_multicast_only_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-revertive-multicast-only-frr")
    {
        non_revertive_multicast_only_frr = value;
        non_revertive_multicast_only_frr.value_namespace = name_space;
        non_revertive_multicast_only_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-multicast-only-frr")
    {
        rib_multicast_only_frr = value;
        rib_multicast_only_frr.value_namespace = name_space;
        rib_multicast_only_frr.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::MulticastOnlyFrr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "flow-multicast-only-frr")
    {
        flow_multicast_only_frr.yfilter = yfilter;
    }
    if(value_path == "non-revertive-multicast-only-frr")
    {
        non_revertive_multicast_only_frr.yfilter = yfilter;
    }
    if(value_path == "rib-multicast-only-frr")
    {
        rib_multicast_only_frr.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::MulticastOnlyFrr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "flow-multicast-only-frr" || name == "non-revertive-multicast-only-frr" || name == "rib-multicast-only-frr")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrrs()
{
    yang_name = "cs-multicast-only-frrs"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::~CsMulticastOnlyFrrs()
{
}

bool Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::has_data() const
{
    for (std::size_t index=0; index<cs_multicast_only_frr.size(); index++)
    {
        if(cs_multicast_only_frr[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::has_operation() const
{
    for (std::size_t index=0; index<cs_multicast_only_frr.size(); index++)
    {
        if(cs_multicast_only_frr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cs-multicast-only-frrs";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cs-multicast-only-frr")
    {
        for(auto const & c : cs_multicast_only_frr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr>();
        c->parent = this;
        cs_multicast_only_frr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cs_multicast_only_frr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cs-multicast-only-frr")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::CsMulticastOnlyFrr()
    :
    source{YType::str, "source"},
    primary{YType::str, "primary"},
    backup{YType::str, "backup"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "cs-multicast-only-frr"; yang_parent_name = "cs-multicast-only-frrs";
}

Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::~CsMulticastOnlyFrr()
{
}

bool Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::has_data() const
{
    return source.is_set
	|| primary.is_set
	|| backup.is_set
	|| prefix_length.is_set;
}

bool Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(backup.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cs-multicast-only-frr" <<"[source='" <<source <<"']" <<"[primary='" <<primary <<"']" <<"[backup='" <<backup <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/cs-multicast-only-frrs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "primary" || name == "backup" || name == "prefix-length")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::InheritableDefaults::InheritableDefaults()
    :
    convergency{YType::uint32, "convergency"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_interval{YType::uint32, "hello-interval"},
    join_prune_mtu{YType::uint32, "join-prune-mtu"},
    jp_interval{YType::uint32, "jp-interval"},
    override_interval{YType::uint32, "override-interval"},
    propagation_delay{YType::uint32, "propagation-delay"}
{
    yang_name = "inheritable-defaults"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::InheritableDefaults::~InheritableDefaults()
{
}

bool Pim::DefaultContext::Ipv4::InheritableDefaults::has_data() const
{
    return convergency.is_set
	|| dr_priority.is_set
	|| hello_interval.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set;
}

bool Pim::DefaultContext::Ipv4::InheritableDefaults::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(convergency.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(join_prune_mtu.yfilter)
	|| ydk::is_set(jp_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter);
}

std::string Pim::DefaultContext::Ipv4::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::InheritableDefaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (convergency.is_set || is_set(convergency.yfilter)) leaf_name_data.push_back(convergency.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.yfilter)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.yfilter)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::InheritableDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::InheritableDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "convergency")
    {
        convergency = value;
        convergency.value_namespace = name_space;
        convergency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
        join_prune_mtu.value_namespace = name_space;
        join_prune_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
        jp_interval.value_namespace = name_space;
        jp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::InheritableDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "convergency")
    {
        convergency.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu.yfilter = yfilter;
    }
    if(value_path == "jp-interval")
    {
        jp_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::InheritableDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergency" || name == "dr-priority" || name == "hello-interval" || name == "join-prune-mtu" || name == "jp-interval" || name == "override-interval" || name == "propagation-delay")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Rpf::Rpf()
    :
    route_policy{YType::str, "route-policy"}
{
    yang_name = "rpf"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Rpf::~Rpf()
{
}

bool Pim::DefaultContext::Ipv4::Rpf::has_data() const
{
    return route_policy.is_set;
}

bool Pim::DefaultContext::Ipv4::Rpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_policy.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy.is_set || is_set(route_policy.yfilter)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-policy")
    {
        route_policy = value;
        route_policy.value_namespace = name_space;
        route_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-policy")
    {
        route_policy.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::SgExpiryTimer::SgExpiryTimer()
    :
    access_list_name{YType::str, "access-list-name"},
    interval{YType::uint32, "interval"}
{
    yang_name = "sg-expiry-timer"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::SgExpiryTimer::~SgExpiryTimer()
{
}

bool Pim::DefaultContext::Ipv4::SgExpiryTimer::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set;
}

bool Pim::DefaultContext::Ipv4::SgExpiryTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Pim::DefaultContext::Ipv4::SgExpiryTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sg-expiry-timer";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::SgExpiryTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::SgExpiryTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::SgExpiryTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::SgExpiryTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::SgExpiryTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::SgExpiryTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-name" || name == "interval")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::RpfVectorEnable::RpfVectorEnable()
    :
    allow_ebgp{YType::empty, "allow-ebgp"},
    disable_ibgp{YType::empty, "disable-ibgp"},
    enable{YType::empty, "enable"}
{
    yang_name = "rpf-vector-enable"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::RpfVectorEnable::~RpfVectorEnable()
{
}

bool Pim::DefaultContext::Ipv4::RpfVectorEnable::has_data() const
{
    return allow_ebgp.is_set
	|| disable_ibgp.is_set
	|| enable.is_set;
}

bool Pim::DefaultContext::Ipv4::RpfVectorEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_ebgp.yfilter)
	|| ydk::is_set(disable_ibgp.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Pim::DefaultContext::Ipv4::RpfVectorEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-vector-enable";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::RpfVectorEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_ebgp.is_set || is_set(allow_ebgp.yfilter)) leaf_name_data.push_back(allow_ebgp.get_name_leafdata());
    if (disable_ibgp.is_set || is_set(disable_ibgp.yfilter)) leaf_name_data.push_back(disable_ibgp.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::RpfVectorEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::RpfVectorEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::RpfVectorEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp = value;
        allow_ebgp.value_namespace = name_space;
        allow_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp = value;
        disable_ibgp.value_namespace = name_space;
        disable_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::RpfVectorEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp.yfilter = yfilter;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::RpfVectorEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-ebgp" || name == "disable-ibgp" || name == "enable")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Nsf::Nsf()
    :
    lifetime{YType::uint32, "lifetime"}
{
    yang_name = "nsf"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Nsf::~Nsf()
{
}

bool Pim::DefaultContext::Ipv4::Nsf::has_data() const
{
    return lifetime.is_set;
}

bool Pim::DefaultContext::Ipv4::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::Maximum()
    :
    global_high_priority_packet_queue{YType::uint32, "global-high-priority-packet-queue"},
    global_low_priority_packet_queue{YType::uint32, "global-low-priority-packet-queue"}
    	,
    bsr_candidate_rp_cache(nullptr) // presence node
	,bsr_global_candidate_rp_cache(nullptr) // presence node
	,bsr_global_group_mappings(nullptr) // presence node
	,bsr_group_mappings(nullptr) // presence node
	,global_group_mappings_auto_rp(nullptr) // presence node
	,global_register_states(nullptr) // presence node
	,global_route_interfaces(nullptr) // presence node
	,global_routes(nullptr) // presence node
	,group_mappings_auto_rp(nullptr) // presence node
	,register_states(nullptr) // presence node
	,route_interfaces(nullptr) // presence node
	,routes(nullptr) // presence node
{
    yang_name = "maximum"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Maximum::~Maximum()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::has_data() const
{
    return global_high_priority_packet_queue.is_set
	|| global_low_priority_packet_queue.is_set
	|| (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_data())
	|| (bsr_global_candidate_rp_cache !=  nullptr && bsr_global_candidate_rp_cache->has_data())
	|| (bsr_global_group_mappings !=  nullptr && bsr_global_group_mappings->has_data())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_data())
	|| (global_group_mappings_auto_rp !=  nullptr && global_group_mappings_auto_rp->has_data())
	|| (global_register_states !=  nullptr && global_register_states->has_data())
	|| (global_route_interfaces !=  nullptr && global_route_interfaces->has_data())
	|| (global_routes !=  nullptr && global_routes->has_data())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_data())
	|| (register_states !=  nullptr && register_states->has_data())
	|| (route_interfaces !=  nullptr && route_interfaces->has_data())
	|| (routes !=  nullptr && routes->has_data());
}

bool Pim::DefaultContext::Ipv4::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_high_priority_packet_queue.yfilter)
	|| ydk::is_set(global_low_priority_packet_queue.yfilter)
	|| (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_operation())
	|| (bsr_global_candidate_rp_cache !=  nullptr && bsr_global_candidate_rp_cache->has_operation())
	|| (bsr_global_group_mappings !=  nullptr && bsr_global_group_mappings->has_operation())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_operation())
	|| (global_group_mappings_auto_rp !=  nullptr && global_group_mappings_auto_rp->has_operation())
	|| (global_register_states !=  nullptr && global_register_states->has_operation())
	|| (global_route_interfaces !=  nullptr && global_route_interfaces->has_operation())
	|| (global_routes !=  nullptr && global_routes->has_operation())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_operation())
	|| (register_states !=  nullptr && register_states->has_operation())
	|| (route_interfaces !=  nullptr && route_interfaces->has_operation())
	|| (routes !=  nullptr && routes->has_operation());
}

std::string Pim::DefaultContext::Ipv4::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_high_priority_packet_queue.is_set || is_set(global_high_priority_packet_queue.yfilter)) leaf_name_data.push_back(global_high_priority_packet_queue.get_name_leafdata());
    if (global_low_priority_packet_queue.is_set || is_set(global_low_priority_packet_queue.yfilter)) leaf_name_data.push_back(global_low_priority_packet_queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-candidate-rp-cache")
    {
        if(bsr_candidate_rp_cache == nullptr)
        {
            bsr_candidate_rp_cache = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache>();
        }
        return bsr_candidate_rp_cache;
    }

    if(child_yang_name == "bsr-global-candidate-rp-cache")
    {
        if(bsr_global_candidate_rp_cache == nullptr)
        {
            bsr_global_candidate_rp_cache = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache>();
        }
        return bsr_global_candidate_rp_cache;
    }

    if(child_yang_name == "bsr-global-group-mappings")
    {
        if(bsr_global_group_mappings == nullptr)
        {
            bsr_global_group_mappings = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings>();
        }
        return bsr_global_group_mappings;
    }

    if(child_yang_name == "bsr-group-mappings")
    {
        if(bsr_group_mappings == nullptr)
        {
            bsr_group_mappings = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings>();
        }
        return bsr_group_mappings;
    }

    if(child_yang_name == "global-group-mappings-auto-rp")
    {
        if(global_group_mappings_auto_rp == nullptr)
        {
            global_group_mappings_auto_rp = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp>();
        }
        return global_group_mappings_auto_rp;
    }

    if(child_yang_name == "global-register-states")
    {
        if(global_register_states == nullptr)
        {
            global_register_states = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates>();
        }
        return global_register_states;
    }

    if(child_yang_name == "global-route-interfaces")
    {
        if(global_route_interfaces == nullptr)
        {
            global_route_interfaces = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces>();
        }
        return global_route_interfaces;
    }

    if(child_yang_name == "global-routes")
    {
        if(global_routes == nullptr)
        {
            global_routes = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes>();
        }
        return global_routes;
    }

    if(child_yang_name == "group-mappings-auto-rp")
    {
        if(group_mappings_auto_rp == nullptr)
        {
            group_mappings_auto_rp = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp>();
        }
        return group_mappings_auto_rp;
    }

    if(child_yang_name == "register-states")
    {
        if(register_states == nullptr)
        {
            register_states = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::RegisterStates>();
        }
        return register_states;
    }

    if(child_yang_name == "route-interfaces")
    {
        if(route_interfaces == nullptr)
        {
            route_interfaces = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces>();
        }
        return route_interfaces;
    }

    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<Pim::DefaultContext::Ipv4::Maximum::Routes>();
        }
        return routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsr_candidate_rp_cache != nullptr)
    {
        children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache;
    }

    if(bsr_global_candidate_rp_cache != nullptr)
    {
        children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache;
    }

    if(bsr_global_group_mappings != nullptr)
    {
        children["bsr-global-group-mappings"] = bsr_global_group_mappings;
    }

    if(bsr_group_mappings != nullptr)
    {
        children["bsr-group-mappings"] = bsr_group_mappings;
    }

    if(global_group_mappings_auto_rp != nullptr)
    {
        children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp;
    }

    if(global_register_states != nullptr)
    {
        children["global-register-states"] = global_register_states;
    }

    if(global_route_interfaces != nullptr)
    {
        children["global-route-interfaces"] = global_route_interfaces;
    }

    if(global_routes != nullptr)
    {
        children["global-routes"] = global_routes;
    }

    if(group_mappings_auto_rp != nullptr)
    {
        children["group-mappings-auto-rp"] = group_mappings_auto_rp;
    }

    if(register_states != nullptr)
    {
        children["register-states"] = register_states;
    }

    if(route_interfaces != nullptr)
    {
        children["route-interfaces"] = route_interfaces;
    }

    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-high-priority-packet-queue")
    {
        global_high_priority_packet_queue = value;
        global_high_priority_packet_queue.value_namespace = name_space;
        global_high_priority_packet_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-low-priority-packet-queue")
    {
        global_low_priority_packet_queue = value;
        global_low_priority_packet_queue.value_namespace = name_space;
        global_low_priority_packet_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-high-priority-packet-queue")
    {
        global_high_priority_packet_queue.yfilter = yfilter;
    }
    if(value_path == "global-low-priority-packet-queue")
    {
        global_low_priority_packet_queue.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-candidate-rp-cache" || name == "bsr-global-candidate-rp-cache" || name == "bsr-global-group-mappings" || name == "bsr-group-mappings" || name == "global-group-mappings-auto-rp" || name == "global-register-states" || name == "global-route-interfaces" || name == "global-routes" || name == "group-mappings-auto-rp" || name == "register-states" || name == "route-interfaces" || name == "routes" || name == "global-high-priority-packet-queue" || name == "global-low-priority-packet-queue")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::BsrGlobalGroupMappings()
    :
    bsr_maximum_global_group_mappings{YType::uint32, "bsr-maximum-global-group-mappings"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-group-mappings"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::~BsrGlobalGroupMappings()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::has_data() const
{
    return bsr_maximum_global_group_mappings.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_global_group_mappings.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-group-mappings";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_global_group_mappings.is_set || is_set(bsr_maximum_global_group_mappings.yfilter)) leaf_name_data.push_back(bsr_maximum_global_group_mappings.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-global-group-mappings")
    {
        bsr_maximum_global_group_mappings = value;
        bsr_maximum_global_group_mappings.value_namespace = name_space;
        bsr_maximum_global_group_mappings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-global-group-mappings")
    {
        bsr_maximum_global_group_mappings.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-global-group-mappings" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::GlobalRoutes()
    :
    maximum_routes{YType::uint32, "maximum-routes"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-routes"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::~GlobalRoutes()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_routes.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-routes";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_routes.is_set || is_set(maximum_routes.yfilter)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
        maximum_routes.value_namespace = name_space;
        maximum_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-routes" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::GlobalGroupMappingsAutoRp()
    :
    maximum_global_group_ranges_auto_rp{YType::uint32, "maximum-global-group-ranges-auto-rp"},
    threshold_global_group_ranges_auto_rp{YType::uint32, "threshold-global-group-ranges-auto-rp"}
{
    yang_name = "global-group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::~GlobalGroupMappingsAutoRp()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::has_data() const
{
    return maximum_global_group_ranges_auto_rp.is_set
	|| threshold_global_group_ranges_auto_rp.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_global_group_ranges_auto_rp.yfilter)
	|| ydk::is_set(threshold_global_group_ranges_auto_rp.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-group-mappings-auto-rp";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_global_group_ranges_auto_rp.is_set || is_set(maximum_global_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(maximum_global_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_global_group_ranges_auto_rp.is_set || is_set(threshold_global_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(threshold_global_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-global-group-ranges-auto-rp")
    {
        maximum_global_group_ranges_auto_rp = value;
        maximum_global_group_ranges_auto_rp.value_namespace = name_space;
        maximum_global_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-global-group-ranges-auto-rp")
    {
        threshold_global_group_ranges_auto_rp = value;
        threshold_global_group_ranges_auto_rp.value_namespace = name_space;
        threshold_global_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-global-group-ranges-auto-rp")
    {
        maximum_global_group_ranges_auto_rp.yfilter = yfilter;
    }
    if(value_path == "threshold-global-group-ranges-auto-rp")
    {
        threshold_global_group_ranges_auto_rp.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-global-group-ranges-auto-rp" || name == "threshold-global-group-ranges-auto-rp")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::BsrGlobalCandidateRpCache()
    :
    bsr_maximum_global_candidate_rp_cache{YType::uint32, "bsr-maximum-global-candidate-rp-cache"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::~BsrGlobalCandidateRpCache()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::has_data() const
{
    return bsr_maximum_global_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_global_candidate_rp_cache.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-candidate-rp-cache";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_global_candidate_rp_cache.is_set || is_set(bsr_maximum_global_candidate_rp_cache.yfilter)) leaf_name_data.push_back(bsr_maximum_global_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-global-candidate-rp-cache")
    {
        bsr_maximum_global_candidate_rp_cache = value;
        bsr_maximum_global_candidate_rp_cache.value_namespace = name_space;
        bsr_maximum_global_candidate_rp_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-global-candidate-rp-cache")
    {
        bsr_maximum_global_candidate_rp_cache.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-global-candidate-rp-cache" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::GlobalRegisterStates()
    :
    maximum_register_states{YType::uint32, "maximum-register-states"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-register-states"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::~GlobalRegisterStates()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_register_states.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-register-states";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_register_states.is_set || is_set(maximum_register_states.yfilter)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
        maximum_register_states.value_namespace = name_space;
        maximum_register_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-register-states" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::GlobalRouteInterfaces()
    :
    maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-route-interfaces"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::~GlobalRouteInterfaces()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_route_interfaces.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-route-interfaces";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.yfilter)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
        maximum_route_interfaces.value_namespace = name_space;
        maximum_route_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-route-interfaces" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::GroupMappingsAutoRp()
    :
    maximum_group_ranges_auto_rp{YType::uint32, "maximum-group-ranges-auto-rp"},
    threshold_group_ranges_auto_rp{YType::uint32, "threshold-group-ranges-auto-rp"}
{
    yang_name = "group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::~GroupMappingsAutoRp()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::has_data() const
{
    return maximum_group_ranges_auto_rp.is_set
	|| threshold_group_ranges_auto_rp.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_group_ranges_auto_rp.yfilter)
	|| ydk::is_set(threshold_group_ranges_auto_rp.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-mappings-auto-rp";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_group_ranges_auto_rp.is_set || is_set(maximum_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(maximum_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_group_ranges_auto_rp.is_set || is_set(threshold_group_ranges_auto_rp.yfilter)) leaf_name_data.push_back(threshold_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp = value;
        maximum_group_ranges_auto_rp.value_namespace = name_space;
        maximum_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp = value;
        threshold_group_ranges_auto_rp.value_namespace = name_space;
        threshold_group_ranges_auto_rp.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp.yfilter = yfilter;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-group-ranges-auto-rp" || name == "threshold-group-ranges-auto-rp")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::BsrGroupMappings()
    :
    bsr_maximum_group_ranges{YType::uint32, "bsr-maximum-group-ranges"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-group-mappings"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::~BsrGroupMappings()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::has_data() const
{
    return bsr_maximum_group_ranges.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_group_ranges.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-group-mappings";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_group_ranges.is_set || is_set(bsr_maximum_group_ranges.yfilter)) leaf_name_data.push_back(bsr_maximum_group_ranges.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges = value;
        bsr_maximum_group_ranges.value_namespace = name_space;
        bsr_maximum_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-group-ranges" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::RegisterStates::RegisterStates()
    :
    maximum_register_states{YType::uint32, "maximum-register-states"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "register-states"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::RegisterStates::~RegisterStates()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::RegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::RegisterStates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_register_states.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::RegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-states";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::RegisterStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_register_states.is_set || is_set(maximum_register_states.yfilter)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::RegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::RegisterStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::RegisterStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
        maximum_register_states.value_namespace = name_space;
        maximum_register_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::RegisterStates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::RegisterStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-register-states" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::RouteInterfaces()
    :
    maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "route-interfaces"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::~RouteInterfaces()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_route_interfaces.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-interfaces";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.yfilter)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
        maximum_route_interfaces.value_namespace = name_space;
        maximum_route_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-route-interfaces" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::BsrCandidateRpCache()
    :
    bsr_maximum_candidate_rp_cache{YType::uint32, "bsr-maximum-candidate-rp-cache"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::~BsrCandidateRpCache()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::has_data() const
{
    return bsr_maximum_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_maximum_candidate_rp_cache.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-candidate-rp-cache";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_candidate_rp_cache.is_set || is_set(bsr_maximum_candidate_rp_cache.yfilter)) leaf_name_data.push_back(bsr_maximum_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache = value;
        bsr_maximum_candidate_rp_cache.value_namespace = name_space;
        bsr_maximum_candidate_rp_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-maximum-candidate-rp-cache" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Maximum::Routes::Routes()
    :
    maximum_routes{YType::uint32, "maximum-routes"},
    warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "routes"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::Routes::~Routes()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::Routes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::Routes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_routes.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Maximum::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Maximum::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_routes.is_set || is_set(maximum_routes.yfilter)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Maximum::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Maximum::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
        maximum_routes.value_namespace = name_space;
        maximum_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Maximum::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Maximum::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-routes" || name == "warning-threshold")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Ssm::Ssm()
    :
    disable{YType::boolean, "disable"},
    range{YType::str, "range"}
{
    yang_name = "ssm"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Ssm::~Ssm()
{
}

bool Pim::DefaultContext::Ipv4::Ssm::has_data() const
{
    return disable.is_set
	|| range.is_set;
}

bool Pim::DefaultContext::Ipv4::Ssm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Ssm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Ssm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Ssm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Ssm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "range")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Injects::Injects()
{
    yang_name = "injects"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Injects::~Injects()
{
}

bool Pim::DefaultContext::Ipv4::Injects::has_data() const
{
    for (std::size_t index=0; index<inject.size(); index++)
    {
        if(inject[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::Injects::has_operation() const
{
    for (std::size_t index=0; index<inject.size(); index++)
    {
        if(inject[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv4::Injects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "injects";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Injects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Injects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inject")
    {
        for(auto const & c : inject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv4::Injects::Inject>();
        c->parent = this;
        inject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Injects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Injects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv4::Injects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv4::Injects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inject")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Injects::Inject::Inject()
    :
    source_address{YType::str, "source-address"},
    prefix_length{YType::uint8, "prefix-length"},
    rpf_proxy_address{YType::str, "rpf-proxy-address"}
{
    yang_name = "inject"; yang_parent_name = "injects";
}

Pim::DefaultContext::Ipv4::Injects::Inject::~Inject()
{
}

bool Pim::DefaultContext::Ipv4::Injects::Inject::has_data() const
{
    for (auto const & leaf : rpf_proxy_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| prefix_length.is_set;
}

bool Pim::DefaultContext::Ipv4::Injects::Inject::has_operation() const
{
    for (auto const & leaf : rpf_proxy_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(rpf_proxy_address.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Injects::Inject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject" <<"[source-address='" <<source_address <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Injects::Inject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/injects/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    auto rpf_proxy_address_name_datas = rpf_proxy_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rpf_proxy_address_name_datas.begin(), rpf_proxy_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Injects::Inject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Injects::Inject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Injects::Inject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.append(value);
    }
}

void Pim::DefaultContext::Ipv4::Injects::Inject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Injects::Inject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "prefix-length" || name == "rpf-proxy-address")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddresses()
{
    yang_name = "bidir-rp-addresses"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::BidirRpAddresses::~BidirRpAddresses()
{
}

bool Pim::DefaultContext::Ipv4::BidirRpAddresses::has_data() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::BidirRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv4::BidirRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-addresses";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::BidirRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::BidirRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-rp-address")
    {
        for(auto const & c : bidir_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress>();
        c->parent = this;
        bidir_rp_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::BidirRpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bidir_rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::BidirRpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv4::BidirRpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv4::BidirRpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir-rp-address")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::BidirRpAddress()
    :
    rp_address{YType::str, "rp-address"},
    access_list_name{YType::str, "access-list-name"},
    auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "bidir-rp-address"; yang_parent_name = "bidir-rp-addresses";
}

Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::~BidirRpAddress()
{
}

bool Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(auto_rp_override.yfilter);
}

std::string Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/bidir-rp-addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.yfilter)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
        auto_rp_override.value_namespace = name_space;
        auto_rp_override.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "access-list-name" || name == "auto-rp-override")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Bsr::Bsr()
    :
    candidate_bsr(nullptr) // presence node
	,candidate_rps(std::make_shared<Pim::DefaultContext::Ipv4::Bsr::CandidateRps>())
{
    candidate_rps->parent = this;

    yang_name = "bsr"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Bsr::~Bsr()
{
}

bool Pim::DefaultContext::Ipv4::Bsr::has_data() const
{
    return (candidate_bsr !=  nullptr && candidate_bsr->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data());
}

bool Pim::DefaultContext::Ipv4::Bsr::has_operation() const
{
    return is_set(yfilter)
	|| (candidate_bsr !=  nullptr && candidate_bsr->has_operation())
	|| (candidate_rps !=  nullptr && candidate_rps->has_operation());
}

std::string Pim::DefaultContext::Ipv4::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Bsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-bsr")
    {
        if(candidate_bsr == nullptr)
        {
            candidate_bsr = std::make_shared<Pim::DefaultContext::Ipv4::Bsr::CandidateBsr>();
        }
        return candidate_bsr;
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps == nullptr)
        {
            candidate_rps = std::make_shared<Pim::DefaultContext::Ipv4::Bsr::CandidateRps>();
        }
        return candidate_rps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_bsr != nullptr)
    {
        children["candidate-bsr"] = candidate_bsr;
    }

    if(candidate_rps != nullptr)
    {
        children["candidate-rps"] = candidate_rps;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Bsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv4::Bsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv4::Bsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-bsr" || name == "candidate-rps")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::CandidateBsr()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::uint32, "priority"}
{
    yang_name = "candidate-bsr"; yang_parent_name = "bsr";
}

Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::~CandidateBsr()
{
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| priority.is_set;
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/bsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "priority")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv4::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/bsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Bsr::CandidateRps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_rp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Bsr::CandidateRps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv4::Bsr::CandidateRps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    address{YType::str, "address"},
    mode{YType::enumeration, "mode"},
    group_list{YType::str, "group-list"},
    interval{YType::uint32, "interval"},
    priority{YType::uint32, "priority"}
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::has_data() const
{
    return address.is_set
	|| mode.is_set
	|| group_list.is_set
	|| interval.is_set
	|| priority.is_set;
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[address='" <<address <<"']" <<"[mode='" <<mode <<"']";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/bsr/candidate-rps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mode" || name == "group-list" || name == "interval" || name == "priority")
        return true;
    return false;
}

Pim::DefaultContext::Ipv4::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Paths::~Paths()
{
}

bool Pim::DefaultContext::Ipv4::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::DefaultContext::Ipv4::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

const EntityPath Pim::DefaultContext::Ipv4::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::DefaultContext::Ipv4::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::DefaultContext::Ipv4::Paths::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::DefaultContext::Ipv4::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::DefaultContext::Ipv4::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::DefaultContext::Ipv4::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

const Enum::YLeaf PimMultipath::enable {0, "enable"};
const Enum::YLeaf PimMultipath::interface_hash {1, "interface-hash"};
const Enum::YLeaf PimMultipath::source_hash {2, "source-hash"};
const Enum::YLeaf PimMultipath::source_next_hop_hash {3, "source-next-hop-hash"};
const Enum::YLeaf PimMultipath::source_group_hash {4, "source-group-hash"};

const Enum::YLeaf PimProtocolMode::sm {0, "sm"};
const Enum::YLeaf PimProtocolMode::bidir {1, "bidir"};


}
}

