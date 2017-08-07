
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2_eth_infra_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2_eth_infra_cfg {

EthernetFeatures::EthernetFeatures()
    :
    cfm(std::make_shared<EthernetFeatures::Cfm>())
	,egress_filtering(std::make_shared<EthernetFeatures::EgressFiltering>())
	,ether_link_oam(std::make_shared<EthernetFeatures::EtherLinkOam>())
{
    cfm->parent = this;

    egress_filtering->parent = this;

    ether_link_oam->parent = this;

    yang_name = "ethernet-features"; yang_parent_name = "Cisco-IOS-XR-l2-eth-infra-cfg";
}

EthernetFeatures::~EthernetFeatures()
{
}

bool EthernetFeatures::has_data() const
{
    return (cfm !=  nullptr && cfm->has_data())
	|| (egress_filtering !=  nullptr && egress_filtering->has_data())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_data());
}

bool EthernetFeatures::has_operation() const
{
    return is_set(yfilter)
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (egress_filtering !=  nullptr && egress_filtering->has_operation())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_operation());
}

std::string EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<EthernetFeatures::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "egress-filtering")
    {
        if(egress_filtering == nullptr)
        {
            egress_filtering = std::make_shared<EthernetFeatures::EgressFiltering>();
        }
        return egress_filtering;
    }

    if(child_yang_name == "ether-link-oam")
    {
        if(ether_link_oam == nullptr)
        {
            ether_link_oam = std::make_shared<EthernetFeatures::EtherLinkOam>();
        }
        return ether_link_oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(egress_filtering != nullptr)
    {
        children["egress-filtering"] = egress_filtering;
    }

    if(ether_link_oam != nullptr)
    {
        children["ether-link-oam"] = ether_link_oam;
    }

    return children;
}

void EthernetFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EthernetFeatures::clone_ptr() const
{
    return std::make_shared<EthernetFeatures>();
}

std::string EthernetFeatures::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EthernetFeatures::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EthernetFeatures::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EthernetFeatures::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EthernetFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm" || name == "egress-filtering" || name == "ether-link-oam")
        return true;
    return false;
}

EthernetFeatures::EgressFiltering::EgressFiltering()
    :
    egress_filtering_default_on{YType::empty, "egress-filtering-default-on"}
{
    yang_name = "egress-filtering"; yang_parent_name = "ethernet-features";
}

EthernetFeatures::EgressFiltering::~EgressFiltering()
{
}

bool EthernetFeatures::EgressFiltering::has_data() const
{
    return egress_filtering_default_on.is_set;
}

bool EthernetFeatures::EgressFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress_filtering_default_on.yfilter);
}

std::string EthernetFeatures::EgressFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-filtering";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EgressFiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_filtering_default_on.is_set || is_set(egress_filtering_default_on.yfilter)) leaf_name_data.push_back(egress_filtering_default_on.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EgressFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EgressFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::EgressFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-filtering-default-on")
    {
        egress_filtering_default_on = value;
        egress_filtering_default_on.value_namespace = name_space;
        egress_filtering_default_on.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EgressFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-filtering-default-on")
    {
        egress_filtering_default_on.yfilter = yfilter;
    }
}

bool EthernetFeatures::EgressFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-filtering-default-on")
        return true;
    return false;
}

EthernetFeatures::Cfm::Cfm()
    :
    nv_satellite_sla_processing_disable{YType::empty, "nv-satellite-sla-processing-disable"}
    	,
    domains(std::make_shared<EthernetFeatures::Cfm::Domains>())
	,traceroute_cache(std::make_shared<EthernetFeatures::Cfm::TracerouteCache>())
{
    domains->parent = this;

    traceroute_cache->parent = this;

    yang_name = "cfm"; yang_parent_name = "ethernet-features";
}

EthernetFeatures::Cfm::~Cfm()
{
}

bool EthernetFeatures::Cfm::has_data() const
{
    return nv_satellite_sla_processing_disable.is_set
	|| (domains !=  nullptr && domains->has_data())
	|| (traceroute_cache !=  nullptr && traceroute_cache->has_data());
}

bool EthernetFeatures::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nv_satellite_sla_processing_disable.yfilter)
	|| (domains !=  nullptr && domains->has_operation())
	|| (traceroute_cache !=  nullptr && traceroute_cache->has_operation());
}

std::string EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:cfm";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nv_satellite_sla_processing_disable.is_set || is_set(nv_satellite_sla_processing_disable.yfilter)) leaf_name_data.push_back(nv_satellite_sla_processing_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domains")
    {
        if(domains == nullptr)
        {
            domains = std::make_shared<EthernetFeatures::Cfm::Domains>();
        }
        return domains;
    }

    if(child_yang_name == "traceroute-cache")
    {
        if(traceroute_cache == nullptr)
        {
            traceroute_cache = std::make_shared<EthernetFeatures::Cfm::TracerouteCache>();
        }
        return traceroute_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(domains != nullptr)
    {
        children["domains"] = domains;
    }

    if(traceroute_cache != nullptr)
    {
        children["traceroute-cache"] = traceroute_cache;
    }

    return children;
}

void EthernetFeatures::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nv-satellite-sla-processing-disable")
    {
        nv_satellite_sla_processing_disable = value;
        nv_satellite_sla_processing_disable.value_namespace = name_space;
        nv_satellite_sla_processing_disable.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nv-satellite-sla-processing-disable")
    {
        nv_satellite_sla_processing_disable.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domains" || name == "traceroute-cache" || name == "nv-satellite-sla-processing-disable")
        return true;
    return false;
}

EthernetFeatures::Cfm::TracerouteCache::TracerouteCache()
    :
    cache_size{YType::uint32, "cache-size"},
    hold_time{YType::uint32, "hold-time"}
{
    yang_name = "traceroute-cache"; yang_parent_name = "cfm";
}

EthernetFeatures::Cfm::TracerouteCache::~TracerouteCache()
{
}

bool EthernetFeatures::Cfm::TracerouteCache::has_data() const
{
    return cache_size.is_set
	|| hold_time.is_set;
}

bool EthernetFeatures::Cfm::TracerouteCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(hold_time.yfilter);
}

std::string EthernetFeatures::Cfm::TracerouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute-cache";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::TracerouteCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-cfm-cfg:cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::TracerouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::TracerouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::Cfm::TracerouteCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::TracerouteCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::TracerouteCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "hold-time")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domains()
{
    yang_name = "domains"; yang_parent_name = "cfm";
}

EthernetFeatures::Cfm::Domains::~Domains()
{
}

bool EthernetFeatures::Cfm::Domains::has_data() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetFeatures::Cfm::Domains::has_operation() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EthernetFeatures::Cfm::Domains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domains";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-cfm-cfg:cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        for(auto const & c : domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EthernetFeatures::Cfm::Domains::Domain>();
        c->parent = this;
        domain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : domain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::Cfm::Domains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetFeatures::Cfm::Domains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Domain()
    :
    domain{YType::str, "domain"}
    	,
    domain_properties(std::make_shared<EthernetFeatures::Cfm::Domains::Domain::DomainProperties>())
	,services(std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services>())
{
    domain_properties->parent = this;

    services->parent = this;

    yang_name = "domain"; yang_parent_name = "domains";
}

EthernetFeatures::Cfm::Domains::Domain::~Domain()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::has_data() const
{
    return domain.is_set
	|| (domain_properties !=  nullptr && domain_properties->has_data())
	|| (services !=  nullptr && services->has_data());
}

bool EthernetFeatures::Cfm::Domains::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| (domain_properties !=  nullptr && domain_properties->has_operation())
	|| (services !=  nullptr && services->has_operation());
}

std::string EthernetFeatures::Cfm::Domains::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[domain='" <<domain <<"']";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-cfm-cfg:cfm/domains/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-properties")
    {
        if(domain_properties == nullptr)
        {
            domain_properties = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::DomainProperties>();
        }
        return domain_properties;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services>();
        }
        return services;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(domain_properties != nullptr)
    {
        children["domain-properties"] = domain_properties;
    }

    if(services != nullptr)
    {
        children["services"] = services;
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-properties" || name == "services" || name == "domain")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Services()
{
    yang_name = "services"; yang_parent_name = "domain";
}

EthernetFeatures::Cfm::Domains::Domain::Services::~Services()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Services' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        for(auto const & c : service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::Cfm::Domains::Domain::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Service()
    :
    service{YType::str, "service"},
    continuity_check_archive_hold_time{YType::uint32, "continuity-check-archive-hold-time"},
    continuity_check_auto_traceroute{YType::empty, "continuity-check-auto-traceroute"},
    log_ais{YType::empty, "log-ais"},
    log_continuity_check_errors{YType::empty, "log-continuity-check-errors"},
    log_continuity_check_state_changes{YType::empty, "log-continuity-check-state-changes"},
    log_cross_check_errors{YType::empty, "log-cross-check-errors"},
    log_efd{YType::empty, "log-efd"},
    maximum_meps{YType::uint32, "maximum-meps"},
    tags{YType::uint32, "tags"}
    	,
    ais(std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais>())
	,continuity_check_interval(nullptr) // presence node
	,cross_check(std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck>())
	,efd2(nullptr) // presence node
	,mip_auto_creation(nullptr) // presence node
	,service_properties(nullptr) // presence node
{
    ais->parent = this;

    cross_check->parent = this;

    yang_name = "service"; yang_parent_name = "services";
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::~Service()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::has_data() const
{
    return service.is_set
	|| continuity_check_archive_hold_time.is_set
	|| continuity_check_auto_traceroute.is_set
	|| log_ais.is_set
	|| log_continuity_check_errors.is_set
	|| log_continuity_check_state_changes.is_set
	|| log_cross_check_errors.is_set
	|| log_efd.is_set
	|| maximum_meps.is_set
	|| tags.is_set
	|| (ais !=  nullptr && ais->has_data())
	|| (continuity_check_interval !=  nullptr && continuity_check_interval->has_data())
	|| (cross_check !=  nullptr && cross_check->has_data())
	|| (efd2 !=  nullptr && efd2->has_data())
	|| (mip_auto_creation !=  nullptr && mip_auto_creation->has_data())
	|| (service_properties !=  nullptr && service_properties->has_data());
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(continuity_check_archive_hold_time.yfilter)
	|| ydk::is_set(continuity_check_auto_traceroute.yfilter)
	|| ydk::is_set(log_ais.yfilter)
	|| ydk::is_set(log_continuity_check_errors.yfilter)
	|| ydk::is_set(log_continuity_check_state_changes.yfilter)
	|| ydk::is_set(log_cross_check_errors.yfilter)
	|| ydk::is_set(log_efd.yfilter)
	|| ydk::is_set(maximum_meps.yfilter)
	|| ydk::is_set(tags.yfilter)
	|| (ais !=  nullptr && ais->has_operation())
	|| (continuity_check_interval !=  nullptr && continuity_check_interval->has_operation())
	|| (cross_check !=  nullptr && cross_check->has_operation())
	|| (efd2 !=  nullptr && efd2->has_operation())
	|| (mip_auto_creation !=  nullptr && mip_auto_creation->has_operation())
	|| (service_properties !=  nullptr && service_properties->has_operation());
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[service='" <<service <<"']";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Service' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (continuity_check_archive_hold_time.is_set || is_set(continuity_check_archive_hold_time.yfilter)) leaf_name_data.push_back(continuity_check_archive_hold_time.get_name_leafdata());
    if (continuity_check_auto_traceroute.is_set || is_set(continuity_check_auto_traceroute.yfilter)) leaf_name_data.push_back(continuity_check_auto_traceroute.get_name_leafdata());
    if (log_ais.is_set || is_set(log_ais.yfilter)) leaf_name_data.push_back(log_ais.get_name_leafdata());
    if (log_continuity_check_errors.is_set || is_set(log_continuity_check_errors.yfilter)) leaf_name_data.push_back(log_continuity_check_errors.get_name_leafdata());
    if (log_continuity_check_state_changes.is_set || is_set(log_continuity_check_state_changes.yfilter)) leaf_name_data.push_back(log_continuity_check_state_changes.get_name_leafdata());
    if (log_cross_check_errors.is_set || is_set(log_cross_check_errors.yfilter)) leaf_name_data.push_back(log_cross_check_errors.get_name_leafdata());
    if (log_efd.is_set || is_set(log_efd.yfilter)) leaf_name_data.push_back(log_efd.get_name_leafdata());
    if (maximum_meps.is_set || is_set(maximum_meps.yfilter)) leaf_name_data.push_back(maximum_meps.get_name_leafdata());
    if (tags.is_set || is_set(tags.yfilter)) leaf_name_data.push_back(tags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ais")
    {
        if(ais == nullptr)
        {
            ais = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais>();
        }
        return ais;
    }

    if(child_yang_name == "continuity-check-interval")
    {
        if(continuity_check_interval == nullptr)
        {
            continuity_check_interval = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval>();
        }
        return continuity_check_interval;
    }

    if(child_yang_name == "cross-check")
    {
        if(cross_check == nullptr)
        {
            cross_check = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck>();
        }
        return cross_check;
    }

    if(child_yang_name == "efd2")
    {
        if(efd2 == nullptr)
        {
            efd2 = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2>();
        }
        return efd2;
    }

    if(child_yang_name == "mip-auto-creation")
    {
        if(mip_auto_creation == nullptr)
        {
            mip_auto_creation = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation>();
        }
        return mip_auto_creation;
    }

    if(child_yang_name == "service-properties")
    {
        if(service_properties == nullptr)
        {
            service_properties = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties>();
        }
        return service_properties;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ais != nullptr)
    {
        children["ais"] = ais;
    }

    if(continuity_check_interval != nullptr)
    {
        children["continuity-check-interval"] = continuity_check_interval;
    }

    if(cross_check != nullptr)
    {
        children["cross-check"] = cross_check;
    }

    if(efd2 != nullptr)
    {
        children["efd2"] = efd2;
    }

    if(mip_auto_creation != nullptr)
    {
        children["mip-auto-creation"] = mip_auto_creation;
    }

    if(service_properties != nullptr)
    {
        children["service-properties"] = service_properties;
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "continuity-check-archive-hold-time")
    {
        continuity_check_archive_hold_time = value;
        continuity_check_archive_hold_time.value_namespace = name_space;
        continuity_check_archive_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "continuity-check-auto-traceroute")
    {
        continuity_check_auto_traceroute = value;
        continuity_check_auto_traceroute.value_namespace = name_space;
        continuity_check_auto_traceroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-ais")
    {
        log_ais = value;
        log_ais.value_namespace = name_space;
        log_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-continuity-check-errors")
    {
        log_continuity_check_errors = value;
        log_continuity_check_errors.value_namespace = name_space;
        log_continuity_check_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-continuity-check-state-changes")
    {
        log_continuity_check_state_changes = value;
        log_continuity_check_state_changes.value_namespace = name_space;
        log_continuity_check_state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-cross-check-errors")
    {
        log_cross_check_errors = value;
        log_cross_check_errors.value_namespace = name_space;
        log_cross_check_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-efd")
    {
        log_efd = value;
        log_efd.value_namespace = name_space;
        log_efd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-meps")
    {
        maximum_meps = value;
        maximum_meps.value_namespace = name_space;
        maximum_meps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tags")
    {
        tags = value;
        tags.value_namespace = name_space;
        tags.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "continuity-check-archive-hold-time")
    {
        continuity_check_archive_hold_time.yfilter = yfilter;
    }
    if(value_path == "continuity-check-auto-traceroute")
    {
        continuity_check_auto_traceroute.yfilter = yfilter;
    }
    if(value_path == "log-ais")
    {
        log_ais.yfilter = yfilter;
    }
    if(value_path == "log-continuity-check-errors")
    {
        log_continuity_check_errors.yfilter = yfilter;
    }
    if(value_path == "log-continuity-check-state-changes")
    {
        log_continuity_check_state_changes.yfilter = yfilter;
    }
    if(value_path == "log-cross-check-errors")
    {
        log_cross_check_errors.yfilter = yfilter;
    }
    if(value_path == "log-efd")
    {
        log_efd.yfilter = yfilter;
    }
    if(value_path == "maximum-meps")
    {
        maximum_meps.yfilter = yfilter;
    }
    if(value_path == "tags")
    {
        tags.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "continuity-check-interval" || name == "cross-check" || name == "efd2" || name == "mip-auto-creation" || name == "service-properties" || name == "service" || name == "continuity-check-archive-hold-time" || name == "continuity-check-auto-traceroute" || name == "log-ais" || name == "log-continuity-check-errors" || name == "log-continuity-check-state-changes" || name == "log-cross-check-errors" || name == "log-efd" || name == "maximum-meps" || name == "tags")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::Efd2()
    :
    enable{YType::empty, "enable"},
    protection_switching_enable{YType::empty, "protection-switching-enable"}
{
    yang_name = "efd2"; yang_parent_name = "service";
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::~Efd2()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::has_data() const
{
    return enable.is_set
	|| protection_switching_enable.is_set;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(protection_switching_enable.yfilter);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "efd2";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Efd2' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (protection_switching_enable.is_set || is_set(protection_switching_enable.yfilter)) leaf_name_data.push_back(protection_switching_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-switching-enable")
    {
        protection_switching_enable = value;
        protection_switching_enable.value_namespace = name_space;
        protection_switching_enable.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "protection-switching-enable")
    {
        protection_switching_enable.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "protection-switching-enable")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::ContinuityCheckInterval()
    :
    ccm_interval{YType::enumeration, "ccm-interval"},
    loss_threshold{YType::uint32, "loss-threshold"}
{
    yang_name = "continuity-check-interval"; yang_parent_name = "service";
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::~ContinuityCheckInterval()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::has_data() const
{
    return ccm_interval.is_set
	|| loss_threshold.is_set;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccm_interval.yfilter)
	|| ydk::is_set(loss_threshold.yfilter);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuity-check-interval";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ContinuityCheckInterval' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccm_interval.is_set || is_set(ccm_interval.yfilter)) leaf_name_data.push_back(ccm_interval.get_name_leafdata());
    if (loss_threshold.is_set || is_set(loss_threshold.yfilter)) leaf_name_data.push_back(loss_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccm-interval")
    {
        ccm_interval = value;
        ccm_interval.value_namespace = name_space;
        ccm_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-threshold")
    {
        loss_threshold = value;
        loss_threshold.value_namespace = name_space;
        loss_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccm-interval")
    {
        ccm_interval.yfilter = yfilter;
    }
    if(value_path == "loss-threshold")
    {
        loss_threshold.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccm-interval" || name == "loss-threshold")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::MipAutoCreation()
    :
    ccm_learning_enable{YType::empty, "ccm-learning-enable"},
    mip_policy{YType::enumeration, "mip-policy"}
{
    yang_name = "mip-auto-creation"; yang_parent_name = "service";
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::~MipAutoCreation()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::has_data() const
{
    return ccm_learning_enable.is_set
	|| mip_policy.is_set;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccm_learning_enable.yfilter)
	|| ydk::is_set(mip_policy.yfilter);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip-auto-creation";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MipAutoCreation' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccm_learning_enable.is_set || is_set(ccm_learning_enable.yfilter)) leaf_name_data.push_back(ccm_learning_enable.get_name_leafdata());
    if (mip_policy.is_set || is_set(mip_policy.yfilter)) leaf_name_data.push_back(mip_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccm-learning-enable")
    {
        ccm_learning_enable = value;
        ccm_learning_enable.value_namespace = name_space;
        ccm_learning_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mip-policy")
    {
        mip_policy = value;
        mip_policy.value_namespace = name_space;
        mip_policy.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccm-learning-enable")
    {
        ccm_learning_enable.yfilter = yfilter;
    }
    if(value_path == "mip-policy")
    {
        mip_policy.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccm-learning-enable" || name == "mip-policy")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Ais()
    :
    transmission(nullptr) // presence node
{
    yang_name = "ais"; yang_parent_name = "service";
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::~Ais()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::has_data() const
{
    return (transmission !=  nullptr && transmission->has_data());
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::has_operation() const
{
    return is_set(yfilter)
	|| (transmission !=  nullptr && transmission->has_operation());
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ais' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transmission")
    {
        if(transmission == nullptr)
        {
            transmission = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission>();
        }
        return transmission;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transmission != nullptr)
    {
        children["transmission"] = transmission;
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmission")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::Transmission()
    :
    ais_interval{YType::enumeration, "ais-interval"},
    cos{YType::uint32, "cos"}
{
    yang_name = "transmission"; yang_parent_name = "ais";
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::~Transmission()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::has_data() const
{
    return ais_interval.is_set
	|| cos.is_set;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais_interval.yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmission";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transmission' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_interval.is_set || is_set(ais_interval.yfilter)) leaf_name_data.push_back(ais_interval.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais-interval")
    {
        ais_interval = value;
        ais_interval.value_namespace = name_space;
        ais_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais-interval")
    {
        ais_interval.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais-interval" || name == "cos")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheck()
    :
    auto_{YType::empty, "auto"}
    	,
    cross_check_meps(std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps>())
{
    cross_check_meps->parent = this;

    yang_name = "cross-check"; yang_parent_name = "service";
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::~CrossCheck()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::has_data() const
{
    return auto_.is_set
	|| (cross_check_meps !=  nullptr && cross_check_meps->has_data());
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| (cross_check_meps !=  nullptr && cross_check_meps->has_operation());
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-check";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrossCheck' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cross-check-meps")
    {
        if(cross_check_meps == nullptr)
        {
            cross_check_meps = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps>();
        }
        return cross_check_meps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cross_check_meps != nullptr)
    {
        children["cross-check-meps"] = cross_check_meps;
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cross-check-meps" || name == "auto")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMeps()
{
    yang_name = "cross-check-meps"; yang_parent_name = "cross-check";
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::~CrossCheckMeps()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::has_data() const
{
    for (std::size_t index=0; index<cross_check_mep.size(); index++)
    {
        if(cross_check_mep[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::has_operation() const
{
    for (std::size_t index=0; index<cross_check_mep.size(); index++)
    {
        if(cross_check_mep[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-check-meps";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrossCheckMeps' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cross-check-mep")
    {
        for(auto const & c : cross_check_mep)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep>();
        c->parent = this;
        cross_check_mep.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cross_check_mep)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cross-check-mep")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::CrossCheckMep()
    :
    mep_id{YType::uint32, "mep-id"},
    enable_mac_address{YType::empty, "enable-mac-address"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "cross-check-mep"; yang_parent_name = "cross-check-meps";
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::~CrossCheckMep()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::has_data() const
{
    return mep_id.is_set
	|| enable_mac_address.is_set
	|| mac_address.is_set;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mep_id.yfilter)
	|| ydk::is_set(enable_mac_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-check-mep" <<"[mep-id='" <<mep_id <<"']";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrossCheckMep' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (enable_mac_address.is_set || is_set(enable_mac_address.yfilter)) leaf_name_data.push_back(enable_mac_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mep-id")
    {
        mep_id = value;
        mep_id.value_namespace = name_space;
        mep_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-mac-address")
    {
        enable_mac_address = value;
        enable_mac_address.value_namespace = name_space;
        enable_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mep-id")
    {
        mep_id.yfilter = yfilter;
    }
    if(value_path == "enable-mac-address")
    {
        enable_mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mep-id" || name == "enable-mac-address" || name == "mac-address")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::ServiceProperties()
    :
    ce_id{YType::uint32, "ce-id"},
    group_name{YType::str, "group-name"},
    remote_ce_id{YType::uint32, "remote-ce-id"},
    service_type{YType::enumeration, "service-type"},
    short_ma_name_format{YType::enumeration, "short-ma-name-format"},
    short_ma_name_icc{YType::str, "short-ma-name-icc"},
    short_ma_name_number{YType::uint32, "short-ma-name-number"},
    short_ma_name_oui{YType::uint32, "short-ma-name-oui"},
    short_ma_name_string{YType::str, "short-ma-name-string"},
    short_ma_name_umc{YType::str, "short-ma-name-umc"},
    short_ma_name_vpn_index{YType::int32, "short-ma-name-vpn-index"},
    switching_name{YType::str, "switching-name"}
{
    yang_name = "service-properties"; yang_parent_name = "service";
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::~ServiceProperties()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::has_data() const
{
    return ce_id.is_set
	|| group_name.is_set
	|| remote_ce_id.is_set
	|| service_type.is_set
	|| short_ma_name_format.is_set
	|| short_ma_name_icc.is_set
	|| short_ma_name_number.is_set
	|| short_ma_name_oui.is_set
	|| short_ma_name_string.is_set
	|| short_ma_name_umc.is_set
	|| short_ma_name_vpn_index.is_set
	|| switching_name.is_set;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ce_id.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(remote_ce_id.yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| ydk::is_set(short_ma_name_format.yfilter)
	|| ydk::is_set(short_ma_name_icc.yfilter)
	|| ydk::is_set(short_ma_name_number.yfilter)
	|| ydk::is_set(short_ma_name_oui.yfilter)
	|| ydk::is_set(short_ma_name_string.yfilter)
	|| ydk::is_set(short_ma_name_umc.yfilter)
	|| ydk::is_set(short_ma_name_vpn_index.yfilter)
	|| ydk::is_set(switching_name.yfilter);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-properties";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceProperties' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce_id.is_set || is_set(ce_id.yfilter)) leaf_name_data.push_back(ce_id.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (remote_ce_id.is_set || is_set(remote_ce_id.yfilter)) leaf_name_data.push_back(remote_ce_id.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());
    if (short_ma_name_format.is_set || is_set(short_ma_name_format.yfilter)) leaf_name_data.push_back(short_ma_name_format.get_name_leafdata());
    if (short_ma_name_icc.is_set || is_set(short_ma_name_icc.yfilter)) leaf_name_data.push_back(short_ma_name_icc.get_name_leafdata());
    if (short_ma_name_number.is_set || is_set(short_ma_name_number.yfilter)) leaf_name_data.push_back(short_ma_name_number.get_name_leafdata());
    if (short_ma_name_oui.is_set || is_set(short_ma_name_oui.yfilter)) leaf_name_data.push_back(short_ma_name_oui.get_name_leafdata());
    if (short_ma_name_string.is_set || is_set(short_ma_name_string.yfilter)) leaf_name_data.push_back(short_ma_name_string.get_name_leafdata());
    if (short_ma_name_umc.is_set || is_set(short_ma_name_umc.yfilter)) leaf_name_data.push_back(short_ma_name_umc.get_name_leafdata());
    if (short_ma_name_vpn_index.is_set || is_set(short_ma_name_vpn_index.yfilter)) leaf_name_data.push_back(short_ma_name_vpn_index.get_name_leafdata());
    if (switching_name.is_set || is_set(switching_name.yfilter)) leaf_name_data.push_back(switching_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ce-id")
    {
        ce_id = value;
        ce_id.value_namespace = name_space;
        ce_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id = value;
        remote_ce_id.value_namespace = name_space;
        remote_ce_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-ma-name-format")
    {
        short_ma_name_format = value;
        short_ma_name_format.value_namespace = name_space;
        short_ma_name_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-ma-name-icc")
    {
        short_ma_name_icc = value;
        short_ma_name_icc.value_namespace = name_space;
        short_ma_name_icc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-ma-name-number")
    {
        short_ma_name_number = value;
        short_ma_name_number.value_namespace = name_space;
        short_ma_name_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-ma-name-oui")
    {
        short_ma_name_oui = value;
        short_ma_name_oui.value_namespace = name_space;
        short_ma_name_oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-ma-name-string")
    {
        short_ma_name_string = value;
        short_ma_name_string.value_namespace = name_space;
        short_ma_name_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-ma-name-umc")
    {
        short_ma_name_umc = value;
        short_ma_name_umc.value_namespace = name_space;
        short_ma_name_umc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-ma-name-vpn-index")
    {
        short_ma_name_vpn_index = value;
        short_ma_name_vpn_index.value_namespace = name_space;
        short_ma_name_vpn_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-name")
    {
        switching_name = value;
        switching_name.value_namespace = name_space;
        switching_name.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ce-id")
    {
        ce_id.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id.yfilter = yfilter;
    }
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-format")
    {
        short_ma_name_format.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-icc")
    {
        short_ma_name_icc.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-number")
    {
        short_ma_name_number.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-oui")
    {
        short_ma_name_oui.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-string")
    {
        short_ma_name_string.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-umc")
    {
        short_ma_name_umc.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-vpn-index")
    {
        short_ma_name_vpn_index.yfilter = yfilter;
    }
    if(value_path == "switching-name")
    {
        switching_name.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce-id" || name == "group-name" || name == "remote-ce-id" || name == "service-type" || name == "short-ma-name-format" || name == "short-ma-name-icc" || name == "short-ma-name-number" || name == "short-ma-name-oui" || name == "short-ma-name-string" || name == "short-ma-name-umc" || name == "short-ma-name-vpn-index" || name == "switching-name")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::DomainProperties::DomainProperties()
    :
    level{YType::uint32, "level"},
    mdid_format{YType::enumeration, "mdid-format"},
    mdid_mac_address{YType::str, "mdid-mac-address"},
    mdid_number{YType::uint32, "mdid-number"},
    mdid_string{YType::str, "mdid-string"}
{
    yang_name = "domain-properties"; yang_parent_name = "domain";
}

EthernetFeatures::Cfm::Domains::Domain::DomainProperties::~DomainProperties()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::DomainProperties::has_data() const
{
    return level.is_set
	|| mdid_format.is_set
	|| mdid_mac_address.is_set
	|| mdid_number.is_set
	|| mdid_string.is_set;
}

bool EthernetFeatures::Cfm::Domains::Domain::DomainProperties::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(mdid_format.yfilter)
	|| ydk::is_set(mdid_mac_address.yfilter)
	|| ydk::is_set(mdid_number.yfilter)
	|| ydk::is_set(mdid_string.yfilter);
}

std::string EthernetFeatures::Cfm::Domains::Domain::DomainProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-properties";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::Cfm::Domains::Domain::DomainProperties::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainProperties' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mdid_format.is_set || is_set(mdid_format.yfilter)) leaf_name_data.push_back(mdid_format.get_name_leafdata());
    if (mdid_mac_address.is_set || is_set(mdid_mac_address.yfilter)) leaf_name_data.push_back(mdid_mac_address.get_name_leafdata());
    if (mdid_number.is_set || is_set(mdid_number.yfilter)) leaf_name_data.push_back(mdid_number.get_name_leafdata());
    if (mdid_string.is_set || is_set(mdid_string.yfilter)) leaf_name_data.push_back(mdid_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::Cfm::Domains::Domain::DomainProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::Cfm::Domains::Domain::DomainProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::DomainProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdid-format")
    {
        mdid_format = value;
        mdid_format.value_namespace = name_space;
        mdid_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdid-mac-address")
    {
        mdid_mac_address = value;
        mdid_mac_address.value_namespace = name_space;
        mdid_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdid-number")
    {
        mdid_number = value;
        mdid_number.value_namespace = name_space;
        mdid_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdid-string")
    {
        mdid_string = value;
        mdid_string.value_namespace = name_space;
        mdid_string.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::DomainProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "mdid-format")
    {
        mdid_format.yfilter = yfilter;
    }
    if(value_path == "mdid-mac-address")
    {
        mdid_mac_address.yfilter = yfilter;
    }
    if(value_path == "mdid-number")
    {
        mdid_number.yfilter = yfilter;
    }
    if(value_path == "mdid-string")
    {
        mdid_string.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::DomainProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "mdid-format" || name == "mdid-mac-address" || name == "mdid-number" || name == "mdid-string")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::EtherLinkOam()
    :
    profiles(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles>())
{
    profiles->parent = this;

    yang_name = "ether-link-oam"; yang_parent_name = "ethernet-features";
}

EthernetFeatures::EtherLinkOam::~EtherLinkOam()
{
}

bool EthernetFeatures::EtherLinkOam::has_data() const
{
    return (profiles !=  nullptr && profiles->has_data());
}

bool EthernetFeatures::EtherLinkOam::has_operation() const
{
    return is_set(yfilter)
	|| (profiles !=  nullptr && profiles->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profiles")
    {
        if(profiles == nullptr)
        {
            profiles = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles>();
        }
        return profiles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profiles != nullptr)
    {
        children["profiles"] = profiles;
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::EtherLinkOam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetFeatures::EtherLinkOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profiles")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "ether-link-oam";
}

EthernetFeatures::EtherLinkOam::Profiles::~Profiles()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetFeatures::EtherLinkOam::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::EtherLinkOam::Profiles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::Profile()
    :
    profile{YType::str, "profile"},
    hello_interval{YType::enumeration, "hello-interval"},
    mib_retrieval{YType::boolean, "mib-retrieval"},
    mode{YType::enumeration, "mode"},
    remote_loopback{YType::boolean, "remote-loopback"},
    timeout{YType::uint32, "timeout"},
    udlf{YType::boolean, "udlf"}
    	,
    action(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::Action>())
	,link_monitoring(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring>())
	,require_remote(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote>())
{
    action->parent = this;

    link_monitoring->parent = this;

    require_remote->parent = this;

    yang_name = "profile"; yang_parent_name = "profiles";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::~Profile()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::has_data() const
{
    return profile.is_set
	|| hello_interval.is_set
	|| mib_retrieval.is_set
	|| mode.is_set
	|| remote_loopback.is_set
	|| timeout.is_set
	|| udlf.is_set
	|| (action !=  nullptr && action->has_data())
	|| (link_monitoring !=  nullptr && link_monitoring->has_data())
	|| (require_remote !=  nullptr && require_remote->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mib_retrieval.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(remote_loopback.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(udlf.yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (link_monitoring !=  nullptr && link_monitoring->has_operation())
	|| (require_remote !=  nullptr && require_remote->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile='" <<profile <<"']";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam/profiles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.yfilter)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (udlf.is_set || is_set(udlf.yfilter)) leaf_name_data.push_back(udlf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::Action>();
        }
        return action;
    }

    if(child_yang_name == "link-monitoring")
    {
        if(link_monitoring == nullptr)
        {
            link_monitoring = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring>();
        }
        return link_monitoring;
    }

    if(child_yang_name == "require-remote")
    {
        if(require_remote == nullptr)
        {
            require_remote = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote>();
        }
        return require_remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(link_monitoring != nullptr)
    {
        children["link-monitoring"] = link_monitoring;
    }

    if(require_remote != nullptr)
    {
        children["require-remote"] = require_remote;
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
        mib_retrieval.value_namespace = name_space;
        mib_retrieval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
        remote_loopback.value_namespace = name_space;
        remote_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udlf")
    {
        udlf = value;
        udlf.value_namespace = name_space;
        udlf.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "udlf")
    {
        udlf.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "link-monitoring" || name == "require-remote" || name == "profile" || name == "hello-interval" || name == "mib-retrieval" || name == "mode" || name == "remote-loopback" || name == "timeout" || name == "udlf")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::Action()
    :
    capabilities_conflict{YType::enumeration, "capabilities-conflict"},
    critical_event{YType::enumeration, "critical-event"},
    discovery_timeout{YType::enumeration, "discovery-timeout"},
    dying_gasp{YType::enumeration, "dying-gasp"},
    high_threshold{YType::enumeration, "high-threshold"},
    link_fault{YType::enumeration, "link-fault"},
    remote_loopback{YType::enumeration, "remote-loopback"},
    session_down{YType::enumeration, "session-down"},
    session_up{YType::enumeration, "session-up"},
    wiring_conflict{YType::enumeration, "wiring-conflict"}
{
    yang_name = "action"; yang_parent_name = "profile";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::~Action()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::has_data() const
{
    return capabilities_conflict.is_set
	|| critical_event.is_set
	|| discovery_timeout.is_set
	|| dying_gasp.is_set
	|| high_threshold.is_set
	|| link_fault.is_set
	|| remote_loopback.is_set
	|| session_down.is_set
	|| session_up.is_set
	|| wiring_conflict.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capabilities_conflict.yfilter)
	|| ydk::is_set(critical_event.yfilter)
	|| ydk::is_set(discovery_timeout.yfilter)
	|| ydk::is_set(dying_gasp.yfilter)
	|| ydk::is_set(high_threshold.yfilter)
	|| ydk::is_set(link_fault.yfilter)
	|| ydk::is_set(remote_loopback.yfilter)
	|| ydk::is_set(session_down.yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| ydk::is_set(wiring_conflict.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capabilities_conflict.is_set || is_set(capabilities_conflict.yfilter)) leaf_name_data.push_back(capabilities_conflict.get_name_leafdata());
    if (critical_event.is_set || is_set(critical_event.yfilter)) leaf_name_data.push_back(critical_event.get_name_leafdata());
    if (discovery_timeout.is_set || is_set(discovery_timeout.yfilter)) leaf_name_data.push_back(discovery_timeout.get_name_leafdata());
    if (dying_gasp.is_set || is_set(dying_gasp.yfilter)) leaf_name_data.push_back(dying_gasp.get_name_leafdata());
    if (high_threshold.is_set || is_set(high_threshold.yfilter)) leaf_name_data.push_back(high_threshold.get_name_leafdata());
    if (link_fault.is_set || is_set(link_fault.yfilter)) leaf_name_data.push_back(link_fault.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.yfilter)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (wiring_conflict.is_set || is_set(wiring_conflict.yfilter)) leaf_name_data.push_back(wiring_conflict.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict = value;
        capabilities_conflict.value_namespace = name_space;
        capabilities_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-event")
    {
        critical_event = value;
        critical_event.value_namespace = name_space;
        critical_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-timeout")
    {
        discovery_timeout = value;
        discovery_timeout.value_namespace = name_space;
        discovery_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp = value;
        dying_gasp.value_namespace = name_space;
        dying_gasp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-threshold")
    {
        high_threshold = value;
        high_threshold.value_namespace = name_space;
        high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fault")
    {
        link_fault = value;
        link_fault.value_namespace = name_space;
        link_fault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
        remote_loopback.value_namespace = name_space;
        remote_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down")
    {
        session_down = value;
        session_down.value_namespace = name_space;
        session_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict = value;
        wiring_conflict.value_namespace = name_space;
        wiring_conflict.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict.yfilter = yfilter;
    }
    if(value_path == "critical-event")
    {
        critical_event.yfilter = yfilter;
    }
    if(value_path == "discovery-timeout")
    {
        discovery_timeout.yfilter = yfilter;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp.yfilter = yfilter;
    }
    if(value_path == "high-threshold")
    {
        high_threshold.yfilter = yfilter;
    }
    if(value_path == "link-fault")
    {
        link_fault.yfilter = yfilter;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback.yfilter = yfilter;
    }
    if(value_path == "session-down")
    {
        session_down.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capabilities-conflict" || name == "critical-event" || name == "discovery-timeout" || name == "dying-gasp" || name == "high-threshold" || name == "link-fault" || name == "remote-loopback" || name == "session-down" || name == "session-up" || name == "wiring-conflict")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::RequireRemote()
    :
    link_monitoring{YType::boolean, "link-monitoring"},
    mib_retrieval{YType::boolean, "mib-retrieval"},
    mode{YType::enumeration, "mode"},
    remote_loopback{YType::boolean, "remote-loopback"}
{
    yang_name = "require-remote"; yang_parent_name = "profile";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::~RequireRemote()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::has_data() const
{
    return link_monitoring.is_set
	|| mib_retrieval.is_set
	|| mode.is_set
	|| remote_loopback.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_monitoring.yfilter)
	|| ydk::is_set(mib_retrieval.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(remote_loopback.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "require-remote";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RequireRemote' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_monitoring.is_set || is_set(link_monitoring.yfilter)) leaf_name_data.push_back(link_monitoring.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.yfilter)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-monitoring")
    {
        link_monitoring = value;
        link_monitoring.value_namespace = name_space;
        link_monitoring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
        mib_retrieval.value_namespace = name_space;
        mib_retrieval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
        remote_loopback.value_namespace = name_space;
        remote_loopback.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-monitoring")
    {
        link_monitoring.yfilter = yfilter;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-monitoring" || name == "mib-retrieval" || name == "mode" || name == "remote-loopback")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::LinkMonitoring()
    :
    monitoring{YType::boolean, "monitoring"}
    	,
    frame(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame>())
	,frame_period(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod>())
	,frame_seconds(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds>())
	,symbol_period(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod>())
{
    frame->parent = this;

    frame_period->parent = this;

    frame_seconds->parent = this;

    symbol_period->parent = this;

    yang_name = "link-monitoring"; yang_parent_name = "profile";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::~LinkMonitoring()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::has_data() const
{
    return monitoring.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitoring.yfilter)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitoring";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkMonitoring' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitoring.is_set || is_set(monitoring.yfilter)) leaf_name_data.push_back(monitoring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod>();
        }
        return symbol_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frame != nullptr)
    {
        children["frame"] = frame;
    }

    if(frame_period != nullptr)
    {
        children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        children["frame-seconds"] = frame_seconds;
    }

    if(symbol_period != nullptr)
    {
        children["symbol-period"] = symbol_period;
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitoring")
    {
        monitoring = value;
        monitoring.value_namespace = name_space;
        monitoring.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitoring")
    {
        monitoring.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame" || name == "frame-period" || name == "frame-seconds" || name == "symbol-period" || name == "monitoring")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::SymbolPeriod()
    :
    threshold(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold>())
	,window(nullptr) // presence node
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitoring";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::~SymbolPeriod()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data())
	|| (window !=  nullptr && window->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (window !=  nullptr && window->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SymbolPeriod' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(window != nullptr)
    {
        children["window"] = window;
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::Window()
    :
    multiplier{YType::enumeration, "multiplier"},
    units{YType::enumeration, "units"},
    window{YType::uint32, "window"}
{
    yang_name = "window"; yang_parent_name = "symbol-period";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::~Window()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::has_data() const
{
    return multiplier.is_set
	|| units.is_set
	|| window.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(window.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Window' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiplier" || name == "units" || name == "window")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"},
    units{YType::enumeration, "units"}
{
    yang_name = "threshold"; yang_parent_name = "symbol-period";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::has_data() const
{
    return multiplier_high.is_set
	|| multiplier_low.is_set
	|| threshold_high.is_set
	|| threshold_low.is_set
	|| units.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multiplier_high.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiplier-high" || name == "multiplier-low" || name == "threshold-high" || name == "threshold-low" || name == "units")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::FramePeriod()
    :
    threshold(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold>())
	,window(nullptr) // presence node
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitoring";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::~FramePeriod()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data())
	|| (window !=  nullptr && window->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (window !=  nullptr && window->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FramePeriod' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(window != nullptr)
    {
        children["window"] = window;
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::Window()
    :
    multiplier{YType::enumeration, "multiplier"},
    units{YType::enumeration, "units"},
    window{YType::uint32, "window"}
{
    yang_name = "window"; yang_parent_name = "frame-period";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::~Window()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::has_data() const
{
    return multiplier.is_set
	|| units.is_set
	|| window.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(window.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Window' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiplier" || name == "units" || name == "window")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"},
    units{YType::enumeration, "units"}
{
    yang_name = "threshold"; yang_parent_name = "frame-period";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::has_data() const
{
    return multiplier_high.is_set
	|| multiplier_low.is_set
	|| threshold_high.is_set
	|| threshold_low.is_set
	|| units.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multiplier_high.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(units.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiplier-high" || name == "multiplier-low" || name == "threshold-high" || name == "threshold-low" || name == "units")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::FrameSeconds()
    :
    window{YType::uint32, "window"}
    	,
    threshold(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitoring";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::~FrameSeconds()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrameSeconds' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::Threshold()
    :
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"}
{
    yang_name = "threshold"; yang_parent_name = "frame-seconds";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::has_data() const
{
    return threshold_high.is_set
	|| threshold_low.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(threshold_low.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-high" || name == "threshold-low")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Frame()
    :
    window{YType::uint32, "window"}
    	,
    threshold(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitoring";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::~Frame()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Frame' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::Threshold()
    :
    multiplier_high{YType::enumeration, "multiplier-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    threshold_high{YType::uint32, "threshold-high"},
    threshold_low{YType::uint32, "threshold-low"}
{
    yang_name = "threshold"; yang_parent_name = "frame";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::has_data() const
{
    return multiplier_high.is_set
	|| multiplier_low.is_set
	|| threshold_high.is_set
	|| threshold_low.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multiplier_high.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(threshold_low.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XR_l2_eth_infra_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiplier-high" || name == "multiplier-low" || name == "threshold-high" || name == "threshold-low")
        return true;
    return false;
}

const Enum::YLeaf L2ProtocolMode::forward {0, "forward"};
const Enum::YLeaf L2ProtocolMode::drop {1, "drop"};
const Enum::YLeaf L2ProtocolMode::tunnel {2, "tunnel"};
const Enum::YLeaf L2ProtocolMode::reverse_tunnel {3, "reverse-tunnel"};

const Enum::YLeaf EgressFiltering::egress_filtering_type_strict {1, "egress-filtering-type-strict"};
const Enum::YLeaf EgressFiltering::egress_filtering_type_disable {2, "egress-filtering-type-disable"};
const Enum::YLeaf EgressFiltering::egress_filtering_type_default {3, "egress-filtering-type-default"};

const Enum::YLeaf L2ProtocolName::cdp {0, "cdp"};
const Enum::YLeaf L2ProtocolName::stp {1, "stp"};
const Enum::YLeaf L2ProtocolName::vtp {2, "vtp"};
const Enum::YLeaf L2ProtocolName::pvst {3, "pvst"};
const Enum::YLeaf L2ProtocolName::cpsv {4, "cpsv"};

const Enum::YLeaf Filtering::filtering_type_dot1q {0, "filtering-type-dot1q"};
const Enum::YLeaf Filtering::filtering_type_dot1ad {1, "filtering-type-dot1ad"};


}
}

