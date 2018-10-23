
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
    egress_filtering(std::make_shared<EthernetFeatures::EgressFiltering>())
    , cfm(std::make_shared<EthernetFeatures::Cfm>())
    , ether_link_oam(std::make_shared<EthernetFeatures::EtherLinkOam>())
{
    egress_filtering->parent = this;
    cfm->parent = this;
    ether_link_oam->parent = this;

    yang_name = "ethernet-features"; yang_parent_name = "Cisco-IOS-XR-l2-eth-infra-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

EthernetFeatures::~EthernetFeatures()
{
}

bool EthernetFeatures::has_data() const
{
    if (is_presence_container) return true;
    return (egress_filtering !=  nullptr && egress_filtering->has_data())
	|| (cfm !=  nullptr && cfm->has_data())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_data());
}

bool EthernetFeatures::has_operation() const
{
    return is_set(yfilter)
	|| (egress_filtering !=  nullptr && egress_filtering->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (ether_link_oam !=  nullptr && ether_link_oam->has_operation());
}

std::string EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-filtering")
    {
        if(egress_filtering == nullptr)
        {
            egress_filtering = std::make_shared<EthernetFeatures::EgressFiltering>();
        }
        return egress_filtering;
    }

    if(child_yang_name == "Cisco-IOS-XR-ethernet-cfm-cfg:cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<EthernetFeatures::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam")
    {
        if(ether_link_oam == nullptr)
        {
            ether_link_oam = std::make_shared<EthernetFeatures::EtherLinkOam>();
        }
        return ether_link_oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(egress_filtering != nullptr)
    {
        _children["egress-filtering"] = egress_filtering;
    }

    if(cfm != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-cfm-cfg:cfm"] = cfm;
    }

    if(ether_link_oam != nullptr)
    {
        _children["Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam"] = ether_link_oam;
    }

    return _children;
}

void EthernetFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> EthernetFeatures::clone_ptr() const
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
    if(name == "egress-filtering" || name == "cfm" || name == "ether-link-oam")
        return true;
    return false;
}

EthernetFeatures::EgressFiltering::EgressFiltering()
    :
    egress_filtering_default_on{YType::empty, "egress-filtering-default-on"}
{

    yang_name = "egress-filtering"; yang_parent_name = "ethernet-features"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetFeatures::EgressFiltering::~EgressFiltering()
{
}

bool EthernetFeatures::EgressFiltering::has_data() const
{
    if (is_presence_container) return true;
    return egress_filtering_default_on.is_set;
}

bool EthernetFeatures::EgressFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress_filtering_default_on.yfilter);
}

std::string EthernetFeatures::EgressFiltering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetFeatures::EgressFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EgressFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_filtering_default_on.is_set || is_set(egress_filtering_default_on.yfilter)) leaf_name_data.push_back(egress_filtering_default_on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EgressFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EgressFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    traceroute_cache(std::make_shared<EthernetFeatures::Cfm::TracerouteCache>())
    , domains(std::make_shared<EthernetFeatures::Cfm::Domains>())
{
    traceroute_cache->parent = this;
    domains->parent = this;

    yang_name = "cfm"; yang_parent_name = "ethernet-features"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetFeatures::Cfm::~Cfm()
{
}

bool EthernetFeatures::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return nv_satellite_sla_processing_disable.is_set
	|| (traceroute_cache !=  nullptr && traceroute_cache->has_data())
	|| (domains !=  nullptr && domains->has_data());
}

bool EthernetFeatures::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nv_satellite_sla_processing_disable.yfilter)
	|| (traceroute_cache !=  nullptr && traceroute_cache->has_operation())
	|| (domains !=  nullptr && domains->has_operation());
}

std::string EthernetFeatures::Cfm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nv_satellite_sla_processing_disable.is_set || is_set(nv_satellite_sla_processing_disable.yfilter)) leaf_name_data.push_back(nv_satellite_sla_processing_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traceroute-cache")
    {
        if(traceroute_cache == nullptr)
        {
            traceroute_cache = std::make_shared<EthernetFeatures::Cfm::TracerouteCache>();
        }
        return traceroute_cache;
    }

    if(child_yang_name == "domains")
    {
        if(domains == nullptr)
        {
            domains = std::make_shared<EthernetFeatures::Cfm::Domains>();
        }
        return domains;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traceroute_cache != nullptr)
    {
        _children["traceroute-cache"] = traceroute_cache;
    }

    if(domains != nullptr)
    {
        _children["domains"] = domains;
    }

    return _children;
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
    if(name == "traceroute-cache" || name == "domains" || name == "nv-satellite-sla-processing-disable")
        return true;
    return false;
}

EthernetFeatures::Cfm::TracerouteCache::TracerouteCache()
    :
    hold_time{YType::uint32, "hold-time"},
    cache_size{YType::uint32, "cache-size"}
{

    yang_name = "traceroute-cache"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetFeatures::Cfm::TracerouteCache::~TracerouteCache()
{
}

bool EthernetFeatures::Cfm::TracerouteCache::has_data() const
{
    if (is_presence_container) return true;
    return hold_time.is_set
	|| cache_size.is_set;
}

bool EthernetFeatures::Cfm::TracerouteCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(cache_size.yfilter);
}

std::string EthernetFeatures::Cfm::TracerouteCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-cfm-cfg:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetFeatures::Cfm::TracerouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::TracerouteCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::TracerouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::TracerouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EthernetFeatures::Cfm::TracerouteCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::TracerouteCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::TracerouteCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "cache-size")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domains()
    :
    domain(this, {"domain"})
{

    yang_name = "domains"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetFeatures::Cfm::Domains::~Domains()
{
}

bool EthernetFeatures::Cfm::Domains::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetFeatures::Cfm::Domains::has_operation() const
{
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EthernetFeatures::Cfm::Domains::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-cfm-cfg:cfm/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetFeatures::Cfm::Domains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        auto ent_ = std::make_shared<EthernetFeatures::Cfm::Domains::Domain>();
        ent_->parent = this;
        domain.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    services(std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services>())
    , domain_properties(std::make_shared<EthernetFeatures::Cfm::Domains::Domain::DomainProperties>())
{
    services->parent = this;
    domain_properties->parent = this;

    yang_name = "domain"; yang_parent_name = "domains"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetFeatures::Cfm::Domains::Domain::~Domain()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| (services !=  nullptr && services->has_data())
	|| (domain_properties !=  nullptr && domain_properties->has_data());
}

bool EthernetFeatures::Cfm::Domains::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| (services !=  nullptr && services->has_operation())
	|| (domain_properties !=  nullptr && domain_properties->has_operation());
}

std::string EthernetFeatures::Cfm::Domains::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-cfm-cfg:cfm/domains/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetFeatures::Cfm::Domains::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    ADD_KEY_TOKEN(domain, "domain");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services>();
        }
        return services;
    }

    if(child_yang_name == "domain-properties")
    {
        if(domain_properties == nullptr)
        {
            domain_properties = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::DomainProperties>();
        }
        return domain_properties;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(services != nullptr)
    {
        _children["services"] = services;
    }

    if(domain_properties != nullptr)
    {
        _children["domain-properties"] = domain_properties;
    }

    return _children;
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
    if(name == "services" || name == "domain-properties" || name == "domain")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Services()
    :
    service(this, {"service"})
{

    yang_name = "services"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::Cfm::Domains::Domain::Services::~Services()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::has_operation() const
{
    for (std::size_t index=0; index<service.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        auto ent_ = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service>();
        ent_->parent = this;
        service.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    maximum_meps{YType::uint32, "maximum-meps"},
    log_cross_check_errors{YType::empty, "log-cross-check-errors"},
    continuity_check_archive_hold_time{YType::uint32, "continuity-check-archive-hold-time"},
    tags{YType::uint32, "tags"},
    log_continuity_check_state_changes{YType::empty, "log-continuity-check-state-changes"},
    log_efd{YType::empty, "log-efd"},
    continuity_check_auto_traceroute{YType::empty, "continuity-check-auto-traceroute"},
    log_continuity_check_errors{YType::empty, "log-continuity-check-errors"},
    log_ais{YType::empty, "log-ais"}
        ,
    efd2(nullptr) // presence node
    , continuity_check_interval(nullptr) // presence node
    , mip_auto_creation(nullptr) // presence node
    , ais(std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais>())
    , cross_check(std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck>())
    , service_properties(nullptr) // presence node
{
    ais->parent = this;
    cross_check->parent = this;

    yang_name = "service"; yang_parent_name = "services"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::~Service()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::has_data() const
{
    if (is_presence_container) return true;
    return service.is_set
	|| maximum_meps.is_set
	|| log_cross_check_errors.is_set
	|| continuity_check_archive_hold_time.is_set
	|| tags.is_set
	|| log_continuity_check_state_changes.is_set
	|| log_efd.is_set
	|| continuity_check_auto_traceroute.is_set
	|| log_continuity_check_errors.is_set
	|| log_ais.is_set
	|| (efd2 !=  nullptr && efd2->has_data())
	|| (continuity_check_interval !=  nullptr && continuity_check_interval->has_data())
	|| (mip_auto_creation !=  nullptr && mip_auto_creation->has_data())
	|| (ais !=  nullptr && ais->has_data())
	|| (cross_check !=  nullptr && cross_check->has_data())
	|| (service_properties !=  nullptr && service_properties->has_data());
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter)
	|| ydk::is_set(maximum_meps.yfilter)
	|| ydk::is_set(log_cross_check_errors.yfilter)
	|| ydk::is_set(continuity_check_archive_hold_time.yfilter)
	|| ydk::is_set(tags.yfilter)
	|| ydk::is_set(log_continuity_check_state_changes.yfilter)
	|| ydk::is_set(log_efd.yfilter)
	|| ydk::is_set(continuity_check_auto_traceroute.yfilter)
	|| ydk::is_set(log_continuity_check_errors.yfilter)
	|| ydk::is_set(log_ais.yfilter)
	|| (efd2 !=  nullptr && efd2->has_operation())
	|| (continuity_check_interval !=  nullptr && continuity_check_interval->has_operation())
	|| (mip_auto_creation !=  nullptr && mip_auto_creation->has_operation())
	|| (ais !=  nullptr && ais->has_operation())
	|| (cross_check !=  nullptr && cross_check->has_operation())
	|| (service_properties !=  nullptr && service_properties->has_operation());
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    ADD_KEY_TOKEN(service, "service");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::Services::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());
    if (maximum_meps.is_set || is_set(maximum_meps.yfilter)) leaf_name_data.push_back(maximum_meps.get_name_leafdata());
    if (log_cross_check_errors.is_set || is_set(log_cross_check_errors.yfilter)) leaf_name_data.push_back(log_cross_check_errors.get_name_leafdata());
    if (continuity_check_archive_hold_time.is_set || is_set(continuity_check_archive_hold_time.yfilter)) leaf_name_data.push_back(continuity_check_archive_hold_time.get_name_leafdata());
    if (tags.is_set || is_set(tags.yfilter)) leaf_name_data.push_back(tags.get_name_leafdata());
    if (log_continuity_check_state_changes.is_set || is_set(log_continuity_check_state_changes.yfilter)) leaf_name_data.push_back(log_continuity_check_state_changes.get_name_leafdata());
    if (log_efd.is_set || is_set(log_efd.yfilter)) leaf_name_data.push_back(log_efd.get_name_leafdata());
    if (continuity_check_auto_traceroute.is_set || is_set(continuity_check_auto_traceroute.yfilter)) leaf_name_data.push_back(continuity_check_auto_traceroute.get_name_leafdata());
    if (log_continuity_check_errors.is_set || is_set(log_continuity_check_errors.yfilter)) leaf_name_data.push_back(log_continuity_check_errors.get_name_leafdata());
    if (log_ais.is_set || is_set(log_ais.yfilter)) leaf_name_data.push_back(log_ais.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "efd2")
    {
        if(efd2 == nullptr)
        {
            efd2 = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2>();
        }
        return efd2;
    }

    if(child_yang_name == "continuity-check-interval")
    {
        if(continuity_check_interval == nullptr)
        {
            continuity_check_interval = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval>();
        }
        return continuity_check_interval;
    }

    if(child_yang_name == "mip-auto-creation")
    {
        if(mip_auto_creation == nullptr)
        {
            mip_auto_creation = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation>();
        }
        return mip_auto_creation;
    }

    if(child_yang_name == "ais")
    {
        if(ais == nullptr)
        {
            ais = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais>();
        }
        return ais;
    }

    if(child_yang_name == "cross-check")
    {
        if(cross_check == nullptr)
        {
            cross_check = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck>();
        }
        return cross_check;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(efd2 != nullptr)
    {
        _children["efd2"] = efd2;
    }

    if(continuity_check_interval != nullptr)
    {
        _children["continuity-check-interval"] = continuity_check_interval;
    }

    if(mip_auto_creation != nullptr)
    {
        _children["mip-auto-creation"] = mip_auto_creation;
    }

    if(ais != nullptr)
    {
        _children["ais"] = ais;
    }

    if(cross_check != nullptr)
    {
        _children["cross-check"] = cross_check;
    }

    if(service_properties != nullptr)
    {
        _children["service-properties"] = service_properties;
    }

    return _children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-meps")
    {
        maximum_meps = value;
        maximum_meps.value_namespace = name_space;
        maximum_meps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-cross-check-errors")
    {
        log_cross_check_errors = value;
        log_cross_check_errors.value_namespace = name_space;
        log_cross_check_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "continuity-check-archive-hold-time")
    {
        continuity_check_archive_hold_time = value;
        continuity_check_archive_hold_time.value_namespace = name_space;
        continuity_check_archive_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tags")
    {
        tags = value;
        tags.value_namespace = name_space;
        tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-continuity-check-state-changes")
    {
        log_continuity_check_state_changes = value;
        log_continuity_check_state_changes.value_namespace = name_space;
        log_continuity_check_state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-efd")
    {
        log_efd = value;
        log_efd.value_namespace = name_space;
        log_efd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "continuity-check-auto-traceroute")
    {
        continuity_check_auto_traceroute = value;
        continuity_check_auto_traceroute.value_namespace = name_space;
        continuity_check_auto_traceroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-continuity-check-errors")
    {
        log_continuity_check_errors = value;
        log_continuity_check_errors.value_namespace = name_space;
        log_continuity_check_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-ais")
    {
        log_ais = value;
        log_ais.value_namespace = name_space;
        log_ais.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
    if(value_path == "maximum-meps")
    {
        maximum_meps.yfilter = yfilter;
    }
    if(value_path == "log-cross-check-errors")
    {
        log_cross_check_errors.yfilter = yfilter;
    }
    if(value_path == "continuity-check-archive-hold-time")
    {
        continuity_check_archive_hold_time.yfilter = yfilter;
    }
    if(value_path == "tags")
    {
        tags.yfilter = yfilter;
    }
    if(value_path == "log-continuity-check-state-changes")
    {
        log_continuity_check_state_changes.yfilter = yfilter;
    }
    if(value_path == "log-efd")
    {
        log_efd.yfilter = yfilter;
    }
    if(value_path == "continuity-check-auto-traceroute")
    {
        continuity_check_auto_traceroute.yfilter = yfilter;
    }
    if(value_path == "log-continuity-check-errors")
    {
        log_continuity_check_errors.yfilter = yfilter;
    }
    if(value_path == "log-ais")
    {
        log_ais.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "efd2" || name == "continuity-check-interval" || name == "mip-auto-creation" || name == "ais" || name == "cross-check" || name == "service-properties" || name == "service" || name == "maximum-meps" || name == "log-cross-check-errors" || name == "continuity-check-archive-hold-time" || name == "tags" || name == "log-continuity-check-state-changes" || name == "log-efd" || name == "continuity-check-auto-traceroute" || name == "log-continuity-check-errors" || name == "log-ais")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::Efd2()
    :
    enable{YType::empty, "enable"},
    protection_switching_enable{YType::empty, "protection-switching-enable"}
{

    yang_name = "efd2"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::~Efd2()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (protection_switching_enable.is_set || is_set(protection_switching_enable.yfilter)) leaf_name_data.push_back(protection_switching_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "continuity-check-interval"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::~ContinuityCheckInterval()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccm_interval.is_set || is_set(ccm_interval.yfilter)) leaf_name_data.push_back(ccm_interval.get_name_leafdata());
    if (loss_threshold.is_set || is_set(loss_threshold.yfilter)) leaf_name_data.push_back(loss_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    mip_policy{YType::enumeration, "mip-policy"},
    ccm_learning_enable{YType::empty, "ccm-learning-enable"}
{

    yang_name = "mip-auto-creation"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::~MipAutoCreation()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::has_data() const
{
    if (is_presence_container) return true;
    return mip_policy.is_set
	|| ccm_learning_enable.is_set;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mip_policy.yfilter)
	|| ydk::is_set(ccm_learning_enable.yfilter);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip-auto-creation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mip_policy.is_set || is_set(mip_policy.yfilter)) leaf_name_data.push_back(mip_policy.get_name_leafdata());
    if (ccm_learning_enable.is_set || is_set(ccm_learning_enable.yfilter)) leaf_name_data.push_back(ccm_learning_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mip-policy")
    {
        mip_policy = value;
        mip_policy.value_namespace = name_space;
        mip_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccm-learning-enable")
    {
        ccm_learning_enable = value;
        ccm_learning_enable.value_namespace = name_space;
        ccm_learning_enable.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mip-policy")
    {
        mip_policy.yfilter = yfilter;
    }
    if(value_path == "ccm-learning-enable")
    {
        ccm_learning_enable.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mip-policy" || name == "ccm-learning-enable")
        return true;
    return false;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Ais()
    :
    transmission(nullptr) // presence node
{

    yang_name = "ais"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::~Ais()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transmission != nullptr)
    {
        _children["transmission"] = transmission;
    }

    return _children;
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

    yang_name = "transmission"; yang_parent_name = "ais"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::~Transmission()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_interval.is_set || is_set(ais_interval.yfilter)) leaf_name_data.push_back(ais_interval.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "cross-check"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::~CrossCheck()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cross_check_meps != nullptr)
    {
        _children["cross-check-meps"] = cross_check_meps;
    }

    return _children;
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
    :
    cross_check_mep(this, {"mep_id"})
{

    yang_name = "cross-check-meps"; yang_parent_name = "cross-check"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::~CrossCheckMeps()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cross_check_mep.len(); index++)
    {
        if(cross_check_mep[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::has_operation() const
{
    for (std::size_t index=0; index<cross_check_mep.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cross-check-mep")
    {
        auto ent_ = std::make_shared<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep>();
        ent_->parent = this;
        cross_check_mep.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cross_check_mep.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

    yang_name = "cross-check-mep"; yang_parent_name = "cross-check-meps"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::~CrossCheckMep()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "cross-check-mep";
    ADD_KEY_TOKEN(mep_id, "mep-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mep_id.is_set || is_set(mep_id.yfilter)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (enable_mac_address.is_set || is_set(enable_mac_address.yfilter)) leaf_name_data.push_back(enable_mac_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    service_type{YType::enumeration, "service-type"},
    group_name{YType::str, "group-name"},
    switching_name{YType::str, "switching-name"},
    ce_id{YType::uint32, "ce-id"},
    remote_ce_id{YType::uint32, "remote-ce-id"},
    evi{YType::uint32, "evi"},
    short_ma_name_format{YType::enumeration, "short-ma-name-format"},
    short_ma_name_string{YType::str, "short-ma-name-string"},
    short_ma_name_number{YType::uint32, "short-ma-name-number"},
    short_ma_name_oui{YType::uint32, "short-ma-name-oui"},
    short_ma_name_vpn_index{YType::uint32, "short-ma-name-vpn-index"},
    short_ma_name_icc{YType::str, "short-ma-name-icc"},
    short_ma_name_umc{YType::str, "short-ma-name-umc"}
{

    yang_name = "service-properties"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::~ServiceProperties()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::has_data() const
{
    if (is_presence_container) return true;
    return service_type.is_set
	|| group_name.is_set
	|| switching_name.is_set
	|| ce_id.is_set
	|| remote_ce_id.is_set
	|| evi.is_set
	|| short_ma_name_format.is_set
	|| short_ma_name_string.is_set
	|| short_ma_name_number.is_set
	|| short_ma_name_oui.is_set
	|| short_ma_name_vpn_index.is_set
	|| short_ma_name_icc.is_set
	|| short_ma_name_umc.is_set;
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(switching_name.yfilter)
	|| ydk::is_set(ce_id.yfilter)
	|| ydk::is_set(remote_ce_id.yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(short_ma_name_format.yfilter)
	|| ydk::is_set(short_ma_name_string.yfilter)
	|| ydk::is_set(short_ma_name_number.yfilter)
	|| ydk::is_set(short_ma_name_oui.yfilter)
	|| ydk::is_set(short_ma_name_vpn_index.yfilter)
	|| ydk::is_set(short_ma_name_icc.yfilter)
	|| ydk::is_set(short_ma_name_umc.yfilter);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-properties";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (switching_name.is_set || is_set(switching_name.yfilter)) leaf_name_data.push_back(switching_name.get_name_leafdata());
    if (ce_id.is_set || is_set(ce_id.yfilter)) leaf_name_data.push_back(ce_id.get_name_leafdata());
    if (remote_ce_id.is_set || is_set(remote_ce_id.yfilter)) leaf_name_data.push_back(remote_ce_id.get_name_leafdata());
    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (short_ma_name_format.is_set || is_set(short_ma_name_format.yfilter)) leaf_name_data.push_back(short_ma_name_format.get_name_leafdata());
    if (short_ma_name_string.is_set || is_set(short_ma_name_string.yfilter)) leaf_name_data.push_back(short_ma_name_string.get_name_leafdata());
    if (short_ma_name_number.is_set || is_set(short_ma_name_number.yfilter)) leaf_name_data.push_back(short_ma_name_number.get_name_leafdata());
    if (short_ma_name_oui.is_set || is_set(short_ma_name_oui.yfilter)) leaf_name_data.push_back(short_ma_name_oui.get_name_leafdata());
    if (short_ma_name_vpn_index.is_set || is_set(short_ma_name_vpn_index.yfilter)) leaf_name_data.push_back(short_ma_name_vpn_index.get_name_leafdata());
    if (short_ma_name_icc.is_set || is_set(short_ma_name_icc.yfilter)) leaf_name_data.push_back(short_ma_name_icc.get_name_leafdata());
    if (short_ma_name_umc.is_set || is_set(short_ma_name_umc.yfilter)) leaf_name_data.push_back(short_ma_name_umc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-name")
    {
        switching_name = value;
        switching_name.value_namespace = name_space;
        switching_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ce-id")
    {
        ce_id = value;
        ce_id.value_namespace = name_space;
        ce_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id = value;
        remote_ce_id.value_namespace = name_space;
        remote_ce_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-ma-name-format")
    {
        short_ma_name_format = value;
        short_ma_name_format.value_namespace = name_space;
        short_ma_name_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-ma-name-string")
    {
        short_ma_name_string = value;
        short_ma_name_string.value_namespace = name_space;
        short_ma_name_string.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "short-ma-name-vpn-index")
    {
        short_ma_name_vpn_index = value;
        short_ma_name_vpn_index.value_namespace = name_space;
        short_ma_name_vpn_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-ma-name-icc")
    {
        short_ma_name_icc = value;
        short_ma_name_icc.value_namespace = name_space;
        short_ma_name_icc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-ma-name-umc")
    {
        short_ma_name_umc = value;
        short_ma_name_umc.value_namespace = name_space;
        short_ma_name_umc.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "switching-name")
    {
        switching_name.yfilter = yfilter;
    }
    if(value_path == "ce-id")
    {
        ce_id.yfilter = yfilter;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id.yfilter = yfilter;
    }
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-format")
    {
        short_ma_name_format.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-string")
    {
        short_ma_name_string.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-number")
    {
        short_ma_name_number.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-oui")
    {
        short_ma_name_oui.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-vpn-index")
    {
        short_ma_name_vpn_index.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-icc")
    {
        short_ma_name_icc.yfilter = yfilter;
    }
    if(value_path == "short-ma-name-umc")
    {
        short_ma_name_umc.yfilter = yfilter;
    }
}

bool EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-type" || name == "group-name" || name == "switching-name" || name == "ce-id" || name == "remote-ce-id" || name == "evi" || name == "short-ma-name-format" || name == "short-ma-name-string" || name == "short-ma-name-number" || name == "short-ma-name-oui" || name == "short-ma-name-vpn-index" || name == "short-ma-name-icc" || name == "short-ma-name-umc")
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

    yang_name = "domain-properties"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::Cfm::Domains::Domain::DomainProperties::~DomainProperties()
{
}

bool EthernetFeatures::Cfm::Domains::Domain::DomainProperties::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::Cfm::Domains::Domain::DomainProperties::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mdid_format.is_set || is_set(mdid_format.yfilter)) leaf_name_data.push_back(mdid_format.get_name_leafdata());
    if (mdid_mac_address.is_set || is_set(mdid_mac_address.yfilter)) leaf_name_data.push_back(mdid_mac_address.get_name_leafdata());
    if (mdid_number.is_set || is_set(mdid_number.yfilter)) leaf_name_data.push_back(mdid_number.get_name_leafdata());
    if (mdid_string.is_set || is_set(mdid_string.yfilter)) leaf_name_data.push_back(mdid_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::Cfm::Domains::Domain::DomainProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::Cfm::Domains::Domain::DomainProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "ether-link-oam"; yang_parent_name = "ethernet-features"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetFeatures::EtherLinkOam::~EtherLinkOam()
{
}

bool EthernetFeatures::EtherLinkOam::has_data() const
{
    if (is_presence_container) return true;
    return (profiles !=  nullptr && profiles->has_data());
}

bool EthernetFeatures::EtherLinkOam::has_operation() const
{
    return is_set(yfilter)
	|| (profiles !=  nullptr && profiles->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetFeatures::EtherLinkOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(profiles != nullptr)
    {
        _children["profiles"] = profiles;
    }

    return _children;
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
    :
    profile(this, {"profile"})
{

    yang_name = "profiles"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetFeatures::EtherLinkOam::Profiles::~Profiles()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetFeatures::EtherLinkOam::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetFeatures::EtherLinkOam::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        auto ent_ = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    mib_retrieval{YType::boolean, "mib-retrieval"},
    udlf{YType::boolean, "udlf"},
    hello_interval{YType::enumeration, "hello-interval"},
    mode{YType::enumeration, "mode"},
    remote_loopback{YType::boolean, "remote-loopback"},
    timeout{YType::uint32, "timeout"}
        ,
    action(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::Action>())
    , require_remote(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote>())
    , link_monitoring(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring>())
{
    action->parent = this;
    require_remote->parent = this;
    link_monitoring->parent = this;

    yang_name = "profile"; yang_parent_name = "profiles"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::~Profile()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set
	|| mib_retrieval.is_set
	|| udlf.is_set
	|| hello_interval.is_set
	|| mode.is_set
	|| remote_loopback.is_set
	|| timeout.is_set
	|| (action !=  nullptr && action->has_data())
	|| (require_remote !=  nullptr && require_remote->has_data())
	|| (link_monitoring !=  nullptr && link_monitoring->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(mib_retrieval.yfilter)
	|| ydk::is_set(udlf.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(remote_loopback.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (require_remote !=  nullptr && require_remote->has_operation())
	|| (link_monitoring !=  nullptr && link_monitoring->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam/profiles/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    ADD_KEY_TOKEN(profile, "profile");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.yfilter)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (udlf.is_set || is_set(udlf.yfilter)) leaf_name_data.push_back(udlf.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::Action>();
        }
        return action;
    }

    if(child_yang_name == "require-remote")
    {
        if(require_remote == nullptr)
        {
            require_remote = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote>();
        }
        return require_remote;
    }

    if(child_yang_name == "link-monitoring")
    {
        if(link_monitoring == nullptr)
        {
            link_monitoring = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring>();
        }
        return link_monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    if(require_remote != nullptr)
    {
        _children["require-remote"] = require_remote;
    }

    if(link_monitoring != nullptr)
    {
        _children["link-monitoring"] = link_monitoring;
    }

    return _children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
        mib_retrieval.value_namespace = name_space;
        mib_retrieval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udlf")
    {
        udlf = value;
        udlf.value_namespace = name_space;
        udlf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
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
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval.yfilter = yfilter;
    }
    if(value_path == "udlf")
    {
        udlf.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
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
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "require-remote" || name == "link-monitoring" || name == "profile" || name == "mib-retrieval" || name == "udlf" || name == "hello-interval" || name == "mode" || name == "remote-loopback" || name == "timeout")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::Action()
    :
    dying_gasp{YType::enumeration, "dying-gasp"},
    session_up{YType::enumeration, "session-up"},
    critical_event{YType::enumeration, "critical-event"},
    session_down{YType::enumeration, "session-down"},
    discovery_timeout{YType::enumeration, "discovery-timeout"},
    high_threshold{YType::enumeration, "high-threshold"},
    capabilities_conflict{YType::enumeration, "capabilities-conflict"},
    remote_loopback{YType::enumeration, "remote-loopback"},
    link_fault{YType::enumeration, "link-fault"},
    wiring_conflict{YType::enumeration, "wiring-conflict"}
{

    yang_name = "action"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::~Action()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::has_data() const
{
    if (is_presence_container) return true;
    return dying_gasp.is_set
	|| session_up.is_set
	|| critical_event.is_set
	|| session_down.is_set
	|| discovery_timeout.is_set
	|| high_threshold.is_set
	|| capabilities_conflict.is_set
	|| remote_loopback.is_set
	|| link_fault.is_set
	|| wiring_conflict.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dying_gasp.yfilter)
	|| ydk::is_set(session_up.yfilter)
	|| ydk::is_set(critical_event.yfilter)
	|| ydk::is_set(session_down.yfilter)
	|| ydk::is_set(discovery_timeout.yfilter)
	|| ydk::is_set(high_threshold.yfilter)
	|| ydk::is_set(capabilities_conflict.yfilter)
	|| ydk::is_set(remote_loopback.yfilter)
	|| ydk::is_set(link_fault.yfilter)
	|| ydk::is_set(wiring_conflict.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dying_gasp.is_set || is_set(dying_gasp.yfilter)) leaf_name_data.push_back(dying_gasp.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.yfilter)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (critical_event.is_set || is_set(critical_event.yfilter)) leaf_name_data.push_back(critical_event.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.yfilter)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (discovery_timeout.is_set || is_set(discovery_timeout.yfilter)) leaf_name_data.push_back(discovery_timeout.get_name_leafdata());
    if (high_threshold.is_set || is_set(high_threshold.yfilter)) leaf_name_data.push_back(high_threshold.get_name_leafdata());
    if (capabilities_conflict.is_set || is_set(capabilities_conflict.yfilter)) leaf_name_data.push_back(capabilities_conflict.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (link_fault.is_set || is_set(link_fault.yfilter)) leaf_name_data.push_back(link_fault.get_name_leafdata());
    if (wiring_conflict.is_set || is_set(wiring_conflict.yfilter)) leaf_name_data.push_back(wiring_conflict.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dying-gasp")
    {
        dying_gasp = value;
        dying_gasp.value_namespace = name_space;
        dying_gasp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up")
    {
        session_up = value;
        session_up.value_namespace = name_space;
        session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-event")
    {
        critical_event = value;
        critical_event.value_namespace = name_space;
        critical_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down")
    {
        session_down = value;
        session_down.value_namespace = name_space;
        session_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-timeout")
    {
        discovery_timeout = value;
        discovery_timeout.value_namespace = name_space;
        discovery_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-threshold")
    {
        high_threshold = value;
        high_threshold.value_namespace = name_space;
        high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict = value;
        capabilities_conflict.value_namespace = name_space;
        capabilities_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
        remote_loopback.value_namespace = name_space;
        remote_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fault")
    {
        link_fault = value;
        link_fault.value_namespace = name_space;
        link_fault.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dying-gasp")
    {
        dying_gasp.yfilter = yfilter;
    }
    if(value_path == "session-up")
    {
        session_up.yfilter = yfilter;
    }
    if(value_path == "critical-event")
    {
        critical_event.yfilter = yfilter;
    }
    if(value_path == "session-down")
    {
        session_down.yfilter = yfilter;
    }
    if(value_path == "discovery-timeout")
    {
        discovery_timeout.yfilter = yfilter;
    }
    if(value_path == "high-threshold")
    {
        high_threshold.yfilter = yfilter;
    }
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict.yfilter = yfilter;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback.yfilter = yfilter;
    }
    if(value_path == "link-fault")
    {
        link_fault.yfilter = yfilter;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dying-gasp" || name == "session-up" || name == "critical-event" || name == "session-down" || name == "discovery-timeout" || name == "high-threshold" || name == "capabilities-conflict" || name == "remote-loopback" || name == "link-fault" || name == "wiring-conflict")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::RequireRemote()
    :
    mib_retrieval{YType::boolean, "mib-retrieval"},
    mode{YType::enumeration, "mode"},
    remote_loopback{YType::boolean, "remote-loopback"},
    link_monitoring{YType::boolean, "link-monitoring"}
{

    yang_name = "require-remote"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::~RequireRemote()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::has_data() const
{
    if (is_presence_container) return true;
    return mib_retrieval.is_set
	|| mode.is_set
	|| remote_loopback.is_set
	|| link_monitoring.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mib_retrieval.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(remote_loopback.yfilter)
	|| ydk::is_set(link_monitoring.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "require-remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mib_retrieval.is_set || is_set(mib_retrieval.yfilter)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (link_monitoring.is_set || is_set(link_monitoring.yfilter)) leaf_name_data.push_back(link_monitoring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "link-monitoring")
    {
        link_monitoring = value;
        link_monitoring.value_namespace = name_space;
        link_monitoring.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "link-monitoring")
    {
        link_monitoring.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-retrieval" || name == "mode" || name == "remote-loopback" || name == "link-monitoring")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::LinkMonitoring()
    :
    monitoring{YType::boolean, "monitoring"}
        ,
    symbol_period(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod>())
    , frame_period(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod>())
    , frame_seconds(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds>())
    , frame(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame>())
{
    symbol_period->parent = this;
    frame_period->parent = this;
    frame_seconds->parent = this;
    frame->parent = this;

    yang_name = "link-monitoring"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::~LinkMonitoring()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::has_data() const
{
    if (is_presence_container) return true;
    return monitoring.is_set
	|| (symbol_period !=  nullptr && symbol_period->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (frame !=  nullptr && frame->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitoring.yfilter)
	|| (symbol_period !=  nullptr && symbol_period->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (frame !=  nullptr && frame->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitoring.is_set || is_set(monitoring.yfilter)) leaf_name_data.push_back(monitoring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod>();
        }
        return symbol_period;
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

    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame>();
        }
        return frame;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(symbol_period != nullptr)
    {
        _children["symbol-period"] = symbol_period;
    }

    if(frame_period != nullptr)
    {
        _children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        _children["frame-seconds"] = frame_seconds;
    }

    if(frame != nullptr)
    {
        _children["frame"] = frame;
    }

    return _children;
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
    if(name == "symbol-period" || name == "frame-period" || name == "frame-seconds" || name == "frame" || name == "monitoring")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::SymbolPeriod()
    :
    window(nullptr) // presence node
    , threshold(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::~SymbolPeriod()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::has_data() const
{
    if (is_presence_container) return true;
    return (window !=  nullptr && window->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::has_operation() const
{
    return is_set(yfilter)
	|| (window !=  nullptr && window->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window>();
        }
        return window;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(window != nullptr)
    {
        _children["window"] = window;
    }

    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "threshold")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::Window()
    :
    window{YType::uint32, "window"},
    units{YType::enumeration, "units"},
    multiplier{YType::enumeration, "multiplier"}
{

    yang_name = "window"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::~Window()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| units.is_set
	|| multiplier.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "units" || name == "multiplier")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::Threshold()
    :
    threshold_low{YType::uint32, "threshold-low"},
    threshold_high{YType::uint32, "threshold-high"},
    units{YType::enumeration, "units"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    multiplier_high{YType::enumeration, "multiplier-high"}
{

    yang_name = "threshold"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_low.is_set
	|| threshold_high.is_set
	|| units.is_set
	|| multiplier_low.is_set
	|| multiplier_high.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(multiplier_high.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::SymbolPeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-low" || name == "threshold-high" || name == "units" || name == "multiplier-low" || name == "multiplier-high")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::FramePeriod()
    :
    window(nullptr) // presence node
    , threshold(std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::~FramePeriod()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::has_data() const
{
    if (is_presence_container) return true;
    return (window !=  nullptr && window->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::has_operation() const
{
    return is_set(yfilter)
	|| (window !=  nullptr && window->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window>();
        }
        return window;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(window != nullptr)
    {
        _children["window"] = window;
    }

    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "threshold")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::Window()
    :
    window{YType::uint32, "window"},
    units{YType::enumeration, "units"},
    multiplier{YType::enumeration, "multiplier"}
{

    yang_name = "window"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::~Window()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| units.is_set
	|| multiplier.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "units" || name == "multiplier")
        return true;
    return false;
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::Threshold()
    :
    threshold_low{YType::uint32, "threshold-low"},
    threshold_high{YType::uint32, "threshold-high"},
    units{YType::enumeration, "units"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    multiplier_high{YType::enumeration, "multiplier-high"}
{

    yang_name = "threshold"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_low.is_set
	|| threshold_high.is_set
	|| units.is_set
	|| multiplier_low.is_set
	|| multiplier_high.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(units.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(multiplier_high.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (units.is_set || is_set(units.yfilter)) leaf_name_data.push_back(units.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "units")
    {
        units = value;
        units.value_namespace = name_space;
        units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "units")
    {
        units.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FramePeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-low" || name == "threshold-high" || name == "units" || name == "multiplier-low" || name == "multiplier-high")
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

    yang_name = "frame-seconds"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::~FrameSeconds()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
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
    threshold_low{YType::uint32, "threshold-low"},
    threshold_high{YType::uint32, "threshold-high"}
{

    yang_name = "threshold"; yang_parent_name = "frame-seconds"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_low.is_set
	|| threshold_high.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::FrameSeconds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-low" || name == "threshold-high")
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

    yang_name = "frame"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::~Frame()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
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
    threshold_low{YType::uint32, "threshold-low"},
    threshold_high{YType::uint32, "threshold-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    multiplier_high{YType::enumeration, "multiplier-high"}
{

    yang_name = "threshold"; yang_parent_name = "frame"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_low.is_set
	|| threshold_high.is_set
	|| multiplier_low.is_set
	|| multiplier_high.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(multiplier_high.yfilter);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitoring::Frame::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-low" || name == "threshold-high" || name == "multiplier-low" || name == "multiplier-high")
        return true;
    return false;
}

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

const Enum::YLeaf L2ProtocolMode::forward {0, "forward"};
const Enum::YLeaf L2ProtocolMode::drop {1, "drop"};
const Enum::YLeaf L2ProtocolMode::tunnel {2, "tunnel"};
const Enum::YLeaf L2ProtocolMode::reverse_tunnel {3, "reverse-tunnel"};


}
}

