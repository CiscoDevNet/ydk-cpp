
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_l2_eth_infra_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2_eth_infra_cfg {

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
    return is_set(operation)
	|| is_set(egress_filtering_default_on.operation);
}

std::string EthernetFeatures::EgressFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-filtering";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EgressFiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_filtering_default_on.is_set || is_set(egress_filtering_default_on.operation)) leaf_name_data.push_back(egress_filtering_default_on.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EgressFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EgressFiltering::get_children()
{
    return children;
}

void EthernetFeatures::EgressFiltering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-filtering-default-on")
    {
        egress_filtering_default_on = value;
    }
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
    return is_set(operation)
	|| is_set(cache_size.operation)
	|| is_set(hold_time.operation);
}

std::string EthernetFeatures::Cfm::TracerouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute-cache";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::TracerouteCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-cfm-cfg:cfm/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.operation)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::TracerouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::TracerouteCache::get_children()
{
    return children;
}

void EthernetFeatures::Cfm::TracerouteCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(protection_switching_enable.operation);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "efd2";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (protection_switching_enable.is_set || is_set(protection_switching_enable.operation)) leaf_name_data.push_back(protection_switching_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::get_children()
{
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "protection-switching-enable")
    {
        protection_switching_enable = value;
    }
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
    return is_set(operation)
	|| is_set(ccm_interval.operation)
	|| is_set(loss_threshold.operation);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuity-check-interval";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccm_interval.is_set || is_set(ccm_interval.operation)) leaf_name_data.push_back(ccm_interval.get_name_leafdata());
    if (loss_threshold.is_set || is_set(loss_threshold.operation)) leaf_name_data.push_back(loss_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::get_children()
{
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccm-interval")
    {
        ccm_interval = value;
    }
    if(value_path == "loss-threshold")
    {
        loss_threshold = value;
    }
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
    return is_set(operation)
	|| is_set(ccm_learning_enable.operation)
	|| is_set(mip_policy.operation);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip-auto-creation";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccm_learning_enable.is_set || is_set(ccm_learning_enable.operation)) leaf_name_data.push_back(ccm_learning_enable.get_name_leafdata());
    if (mip_policy.is_set || is_set(mip_policy.operation)) leaf_name_data.push_back(mip_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::get_children()
{
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccm-learning-enable")
    {
        ccm_learning_enable = value;
    }
    if(value_path == "mip-policy")
    {
        mip_policy = value;
    }
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
    return is_set(operation)
	|| is_set(ais_interval.operation)
	|| is_set(cos.operation);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmission";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais_interval.is_set || is_set(ais_interval.operation)) leaf_name_data.push_back(ais_interval.get_name_leafdata());
    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::get_children()
{
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais-interval")
    {
        ais_interval = value;
    }
    if(value_path == "cos")
    {
        cos = value;
    }
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
    return is_set(operation)
	|| (transmission !=  nullptr && transmission->has_operation());
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transmission")
    {
        if(transmission != nullptr)
        {
            children["transmission"] = transmission.get();
        }
        else
        {
            transmission = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::Transmission>();
            transmission->parent = this;
            children["transmission"] = transmission.get();
        }
        return children.at("transmission");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::get_children()
{
    if(children.find("transmission") == children.end())
    {
        if(transmission != nullptr)
        {
            children["transmission"] = transmission.get();
        }
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(mep_id.operation)
	|| is_set(enable_mac_address.operation)
	|| is_set(mac_address.operation);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-check-mep" <<"[mep-id='" <<mep_id.get() <<"']";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mep_id.is_set || is_set(mep_id.operation)) leaf_name_data.push_back(mep_id.get_name_leafdata());
    if (enable_mac_address.is_set || is_set(enable_mac_address.operation)) leaf_name_data.push_back(enable_mac_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::get_children()
{
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mep-id")
    {
        mep_id = value;
    }
    if(value_path == "enable-mac-address")
    {
        enable_mac_address = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
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
    return is_set(operation);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-check-meps";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cross-check-mep")
    {
        for(auto const & c : cross_check_mep)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::CrossCheckMep>();
        c->parent = this;
        cross_check_mep.push_back(std::move(c));
        children[segment_path] = cross_check_mep.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::get_children()
{
    for (auto const & c : cross_check_mep)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps::set_value(const std::string & value_path, std::string value)
{
}

EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheck()
    :
    	auto_{YType::empty, "auto"}
    	,
    cross_check_meps(std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps>())
{
    cross_check_meps->parent = this;
    children["cross-check-meps"] = cross_check_meps.get();

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
    return is_set(operation)
	|| is_set(auto_.operation)
	|| (cross_check_meps !=  nullptr && cross_check_meps->has_operation());
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-check";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cross-check-meps")
    {
        if(cross_check_meps != nullptr)
        {
            children["cross-check-meps"] = cross_check_meps.get();
        }
        else
        {
            cross_check_meps = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::CrossCheckMeps>();
            cross_check_meps->parent = this;
            children["cross-check-meps"] = cross_check_meps.get();
        }
        return children.at("cross-check-meps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::get_children()
{
    if(children.find("cross-check-meps") == children.end())
    {
        if(cross_check_meps != nullptr)
        {
            children["cross-check-meps"] = cross_check_meps.get();
        }
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
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
    return is_set(operation)
	|| is_set(ce_id.operation)
	|| is_set(group_name.operation)
	|| is_set(remote_ce_id.operation)
	|| is_set(service_type.operation)
	|| is_set(short_ma_name_format.operation)
	|| is_set(short_ma_name_icc.operation)
	|| is_set(short_ma_name_number.operation)
	|| is_set(short_ma_name_oui.operation)
	|| is_set(short_ma_name_string.operation)
	|| is_set(short_ma_name_umc.operation)
	|| is_set(short_ma_name_vpn_index.operation)
	|| is_set(switching_name.operation);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-properties";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce_id.is_set || is_set(ce_id.operation)) leaf_name_data.push_back(ce_id.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (remote_ce_id.is_set || is_set(remote_ce_id.operation)) leaf_name_data.push_back(remote_ce_id.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.operation)) leaf_name_data.push_back(service_type.get_name_leafdata());
    if (short_ma_name_format.is_set || is_set(short_ma_name_format.operation)) leaf_name_data.push_back(short_ma_name_format.get_name_leafdata());
    if (short_ma_name_icc.is_set || is_set(short_ma_name_icc.operation)) leaf_name_data.push_back(short_ma_name_icc.get_name_leafdata());
    if (short_ma_name_number.is_set || is_set(short_ma_name_number.operation)) leaf_name_data.push_back(short_ma_name_number.get_name_leafdata());
    if (short_ma_name_oui.is_set || is_set(short_ma_name_oui.operation)) leaf_name_data.push_back(short_ma_name_oui.get_name_leafdata());
    if (short_ma_name_string.is_set || is_set(short_ma_name_string.operation)) leaf_name_data.push_back(short_ma_name_string.get_name_leafdata());
    if (short_ma_name_umc.is_set || is_set(short_ma_name_umc.operation)) leaf_name_data.push_back(short_ma_name_umc.get_name_leafdata());
    if (short_ma_name_vpn_index.is_set || is_set(short_ma_name_vpn_index.operation)) leaf_name_data.push_back(short_ma_name_vpn_index.get_name_leafdata());
    if (switching_name.is_set || is_set(switching_name.operation)) leaf_name_data.push_back(switching_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::get_children()
{
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ce-id")
    {
        ce_id = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id = value;
    }
    if(value_path == "service-type")
    {
        service_type = value;
    }
    if(value_path == "short-ma-name-format")
    {
        short_ma_name_format = value;
    }
    if(value_path == "short-ma-name-icc")
    {
        short_ma_name_icc = value;
    }
    if(value_path == "short-ma-name-number")
    {
        short_ma_name_number = value;
    }
    if(value_path == "short-ma-name-oui")
    {
        short_ma_name_oui = value;
    }
    if(value_path == "short-ma-name-string")
    {
        short_ma_name_string = value;
    }
    if(value_path == "short-ma-name-umc")
    {
        short_ma_name_umc = value;
    }
    if(value_path == "short-ma-name-vpn-index")
    {
        short_ma_name_vpn_index = value;
    }
    if(value_path == "switching-name")
    {
        switching_name = value;
    }
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
    ais(std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais>())
	,continuity_check_interval(nullptr) // presence node
	,cross_check(std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck>())
	,efd2(nullptr) // presence node
	,mip_auto_creation(nullptr) // presence node
	,service_properties(nullptr) // presence node
{
    ais->parent = this;
    children["ais"] = ais.get();

    cross_check->parent = this;
    children["cross-check"] = cross_check.get();

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
    return is_set(operation)
	|| is_set(service.operation)
	|| is_set(continuity_check_archive_hold_time.operation)
	|| is_set(continuity_check_auto_traceroute.operation)
	|| is_set(log_ais.operation)
	|| is_set(log_continuity_check_errors.operation)
	|| is_set(log_continuity_check_state_changes.operation)
	|| is_set(log_cross_check_errors.operation)
	|| is_set(log_efd.operation)
	|| is_set(maximum_meps.operation)
	|| is_set(tags.operation)
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
    path_buffer << "service" <<"[service='" <<service.get() <<"']";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (continuity_check_archive_hold_time.is_set || is_set(continuity_check_archive_hold_time.operation)) leaf_name_data.push_back(continuity_check_archive_hold_time.get_name_leafdata());
    if (continuity_check_auto_traceroute.is_set || is_set(continuity_check_auto_traceroute.operation)) leaf_name_data.push_back(continuity_check_auto_traceroute.get_name_leafdata());
    if (log_ais.is_set || is_set(log_ais.operation)) leaf_name_data.push_back(log_ais.get_name_leafdata());
    if (log_continuity_check_errors.is_set || is_set(log_continuity_check_errors.operation)) leaf_name_data.push_back(log_continuity_check_errors.get_name_leafdata());
    if (log_continuity_check_state_changes.is_set || is_set(log_continuity_check_state_changes.operation)) leaf_name_data.push_back(log_continuity_check_state_changes.get_name_leafdata());
    if (log_cross_check_errors.is_set || is_set(log_cross_check_errors.operation)) leaf_name_data.push_back(log_cross_check_errors.get_name_leafdata());
    if (log_efd.is_set || is_set(log_efd.operation)) leaf_name_data.push_back(log_efd.get_name_leafdata());
    if (maximum_meps.is_set || is_set(maximum_meps.operation)) leaf_name_data.push_back(maximum_meps.get_name_leafdata());
    if (tags.is_set || is_set(tags.operation)) leaf_name_data.push_back(tags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::Services::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ais")
    {
        if(ais != nullptr)
        {
            children["ais"] = ais.get();
        }
        else
        {
            ais = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::Ais>();
            ais->parent = this;
            children["ais"] = ais.get();
        }
        return children.at("ais");
    }

    if(child_yang_name == "continuity-check-interval")
    {
        if(continuity_check_interval != nullptr)
        {
            children["continuity-check-interval"] = continuity_check_interval.get();
        }
        else
        {
            continuity_check_interval = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::ContinuityCheckInterval>();
            continuity_check_interval->parent = this;
            children["continuity-check-interval"] = continuity_check_interval.get();
        }
        return children.at("continuity-check-interval");
    }

    if(child_yang_name == "cross-check")
    {
        if(cross_check != nullptr)
        {
            children["cross-check"] = cross_check.get();
        }
        else
        {
            cross_check = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::CrossCheck>();
            cross_check->parent = this;
            children["cross-check"] = cross_check.get();
        }
        return children.at("cross-check");
    }

    if(child_yang_name == "efd2")
    {
        if(efd2 != nullptr)
        {
            children["efd2"] = efd2.get();
        }
        else
        {
            efd2 = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::Efd2>();
            efd2->parent = this;
            children["efd2"] = efd2.get();
        }
        return children.at("efd2");
    }

    if(child_yang_name == "mip-auto-creation")
    {
        if(mip_auto_creation != nullptr)
        {
            children["mip-auto-creation"] = mip_auto_creation.get();
        }
        else
        {
            mip_auto_creation = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::MipAutoCreation>();
            mip_auto_creation->parent = this;
            children["mip-auto-creation"] = mip_auto_creation.get();
        }
        return children.at("mip-auto-creation");
    }

    if(child_yang_name == "service-properties")
    {
        if(service_properties != nullptr)
        {
            children["service-properties"] = service_properties.get();
        }
        else
        {
            service_properties = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service::ServiceProperties>();
            service_properties->parent = this;
            children["service-properties"] = service_properties.get();
        }
        return children.at("service-properties");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::Services::Service::get_children()
{
    if(children.find("ais") == children.end())
    {
        if(ais != nullptr)
        {
            children["ais"] = ais.get();
        }
    }

    if(children.find("continuity-check-interval") == children.end())
    {
        if(continuity_check_interval != nullptr)
        {
            children["continuity-check-interval"] = continuity_check_interval.get();
        }
    }

    if(children.find("cross-check") == children.end())
    {
        if(cross_check != nullptr)
        {
            children["cross-check"] = cross_check.get();
        }
    }

    if(children.find("efd2") == children.end())
    {
        if(efd2 != nullptr)
        {
            children["efd2"] = efd2.get();
        }
    }

    if(children.find("mip-auto-creation") == children.end())
    {
        if(mip_auto_creation != nullptr)
        {
            children["mip-auto-creation"] = mip_auto_creation.get();
        }
    }

    if(children.find("service-properties") == children.end())
    {
        if(service_properties != nullptr)
        {
            children["service-properties"] = service_properties.get();
        }
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::Service::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "continuity-check-archive-hold-time")
    {
        continuity_check_archive_hold_time = value;
    }
    if(value_path == "continuity-check-auto-traceroute")
    {
        continuity_check_auto_traceroute = value;
    }
    if(value_path == "log-ais")
    {
        log_ais = value;
    }
    if(value_path == "log-continuity-check-errors")
    {
        log_continuity_check_errors = value;
    }
    if(value_path == "log-continuity-check-state-changes")
    {
        log_continuity_check_state_changes = value;
    }
    if(value_path == "log-cross-check-errors")
    {
        log_cross_check_errors = value;
    }
    if(value_path == "log-efd")
    {
        log_efd = value;
    }
    if(value_path == "maximum-meps")
    {
        maximum_meps = value;
    }
    if(value_path == "tags")
    {
        tags = value;
    }
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
    return is_set(operation);
}

std::string EthernetFeatures::Cfm::Domains::Domain::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::Services::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service")
    {
        for(auto const & c : service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services::Service>();
        c->parent = this;
        service.push_back(std::move(c));
        children[segment_path] = service.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::Services::get_children()
{
    for (auto const & c : service)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::Services::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(mdid_format.operation)
	|| is_set(mdid_mac_address.operation)
	|| is_set(mdid_number.operation)
	|| is_set(mdid_string.operation);
}

std::string EthernetFeatures::Cfm::Domains::Domain::DomainProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-properties";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::DomainProperties::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mdid_format.is_set || is_set(mdid_format.operation)) leaf_name_data.push_back(mdid_format.get_name_leafdata());
    if (mdid_mac_address.is_set || is_set(mdid_mac_address.operation)) leaf_name_data.push_back(mdid_mac_address.get_name_leafdata());
    if (mdid_number.is_set || is_set(mdid_number.operation)) leaf_name_data.push_back(mdid_number.get_name_leafdata());
    if (mdid_string.is_set || is_set(mdid_string.operation)) leaf_name_data.push_back(mdid_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::DomainProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::DomainProperties::get_children()
{
    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::DomainProperties::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "mdid-format")
    {
        mdid_format = value;
    }
    if(value_path == "mdid-mac-address")
    {
        mdid_mac_address = value;
    }
    if(value_path == "mdid-number")
    {
        mdid_number = value;
    }
    if(value_path == "mdid-string")
    {
        mdid_string = value;
    }
}

EthernetFeatures::Cfm::Domains::Domain::Domain()
    :
    	domain{YType::str, "domain"}
    	,
    domain_properties(std::make_unique<EthernetFeatures::Cfm::Domains::Domain::DomainProperties>())
	,services(std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services>())
{
    domain_properties->parent = this;
    children["domain-properties"] = domain_properties.get();

    services->parent = this;
    children["services"] = services.get();

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
    return is_set(operation)
	|| is_set(domain.operation)
	|| (domain_properties !=  nullptr && domain_properties->has_operation())
	|| (services !=  nullptr && services->has_operation());
}

std::string EthernetFeatures::Cfm::Domains::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[domain='" <<domain.get() <<"']";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-cfm-cfg:cfm/domains/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-properties")
    {
        if(domain_properties != nullptr)
        {
            children["domain-properties"] = domain_properties.get();
        }
        else
        {
            domain_properties = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::DomainProperties>();
            domain_properties->parent = this;
            children["domain-properties"] = domain_properties.get();
        }
        return children.at("domain-properties");
    }

    if(child_yang_name == "services")
    {
        if(services != nullptr)
        {
            children["services"] = services.get();
        }
        else
        {
            services = std::make_unique<EthernetFeatures::Cfm::Domains::Domain::Services>();
            services->parent = this;
            children["services"] = services.get();
        }
        return children.at("services");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::Domain::get_children()
{
    if(children.find("domain-properties") == children.end())
    {
        if(domain_properties != nullptr)
        {
            children["domain-properties"] = domain_properties.get();
        }
    }

    if(children.find("services") == children.end())
    {
        if(services != nullptr)
        {
            children["services"] = services.get();
        }
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::Domain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
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
    return is_set(operation);
}

std::string EthernetFeatures::Cfm::Domains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domains";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::Domains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-cfm-cfg:cfm/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domain")
    {
        for(auto const & c : domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetFeatures::Cfm::Domains::Domain>();
        c->parent = this;
        domain.push_back(std::move(c));
        children[segment_path] = domain.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::Domains::get_children()
{
    for (auto const & c : domain)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EthernetFeatures::Cfm::Domains::set_value(const std::string & value_path, std::string value)
{
}

EthernetFeatures::Cfm::Cfm()
    :
    	nv_satellite_sla_processing_disable{YType::empty, "nv-satellite-sla-processing-disable"}
    	,
    domains(std::make_unique<EthernetFeatures::Cfm::Domains>())
	,traceroute_cache(std::make_unique<EthernetFeatures::Cfm::TracerouteCache>())
{
    domains->parent = this;
    children["domains"] = domains.get();

    traceroute_cache->parent = this;
    children["traceroute-cache"] = traceroute_cache.get();

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
    return is_set(operation)
	|| is_set(nv_satellite_sla_processing_disable.operation)
	|| (domains !=  nullptr && domains->has_operation())
	|| (traceroute_cache !=  nullptr && traceroute_cache->has_operation());
}

std::string EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-cfg:cfm";

    return path_buffer.str();

}

EntityPath EthernetFeatures::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nv_satellite_sla_processing_disable.is_set || is_set(nv_satellite_sla_processing_disable.operation)) leaf_name_data.push_back(nv_satellite_sla_processing_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domains")
    {
        if(domains != nullptr)
        {
            children["domains"] = domains.get();
        }
        else
        {
            domains = std::make_unique<EthernetFeatures::Cfm::Domains>();
            domains->parent = this;
            children["domains"] = domains.get();
        }
        return children.at("domains");
    }

    if(child_yang_name == "traceroute-cache")
    {
        if(traceroute_cache != nullptr)
        {
            children["traceroute-cache"] = traceroute_cache.get();
        }
        else
        {
            traceroute_cache = std::make_unique<EthernetFeatures::Cfm::TracerouteCache>();
            traceroute_cache->parent = this;
            children["traceroute-cache"] = traceroute_cache.get();
        }
        return children.at("traceroute-cache");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::Cfm::get_children()
{
    if(children.find("domains") == children.end())
    {
        if(domains != nullptr)
        {
            children["domains"] = domains.get();
        }
    }

    if(children.find("traceroute-cache") == children.end())
    {
        if(traceroute_cache != nullptr)
        {
            children["traceroute-cache"] = traceroute_cache.get();
        }
    }

    return children;
}

void EthernetFeatures::Cfm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nv-satellite-sla-processing-disable")
    {
        nv_satellite_sla_processing_disable = value;
    }
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold::Threshold()
    :
    	threshold_high{YType::uint32, "threshold-high"},
	 threshold_low{YType::uint32, "threshold-low"}
{
    yang_name = "threshold"; yang_parent_name = "frame-period";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold::has_data() const
{
    return threshold_high.is_set
	|| threshold_low.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold::get_children()
{
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::FramePeriod()
    :
    	window{YType::uint32, "window"}
    	,
    threshold(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold>())
{
    threshold->parent = this;
    children["threshold"] = threshold.get();

    yang_name = "frame-period"; yang_parent_name = "link-monitor";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::~FramePeriod()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold")
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold.get();
        }
        else
        {
            threshold = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::Threshold>();
            threshold->parent = this;
            children["threshold"] = threshold.get();
        }
        return children.at("threshold");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::get_children()
{
    if(children.find("threshold") == children.end())
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold.get();
        }
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold::Threshold()
    :
    	threshold_high{YType::uint32, "threshold-high"},
	 threshold_low{YType::uint32, "threshold-low"}
{
    yang_name = "threshold"; yang_parent_name = "frame-seconds";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold::has_data() const
{
    return threshold_high.is_set
	|| threshold_low.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold::get_children()
{
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::FrameSeconds()
    :
    	window{YType::uint32, "window"}
    	,
    threshold(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold>())
{
    threshold->parent = this;
    children["threshold"] = threshold.get();

    yang_name = "frame-seconds"; yang_parent_name = "link-monitor";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::~FrameSeconds()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold")
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold.get();
        }
        else
        {
            threshold = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::Threshold>();
            threshold->parent = this;
            children["threshold"] = threshold.get();
        }
        return children.at("threshold");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::get_children()
{
    if(children.find("threshold") == children.end())
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold.get();
        }
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold::Threshold()
    :
    	threshold_high{YType::uint32, "threshold-high"},
	 threshold_low{YType::uint32, "threshold-low"}
{
    yang_name = "threshold"; yang_parent_name = "frame";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold::has_data() const
{
    return threshold_high.is_set
	|| threshold_low.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold::get_children()
{
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Frame()
    :
    	window{YType::uint32, "window"}
    	,
    threshold(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold>())
{
    threshold->parent = this;
    children["threshold"] = threshold.get();

    yang_name = "frame"; yang_parent_name = "link-monitor";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::~Frame()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold")
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold.get();
        }
        else
        {
            threshold = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::Threshold>();
            threshold->parent = this;
            children["threshold"] = threshold.get();
        }
        return children.at("threshold");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::get_children()
{
    if(children.find("threshold") == children.end())
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold.get();
        }
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold::Threshold()
    :
    	threshold_high{YType::uint32, "threshold-high"},
	 threshold_low{YType::uint32, "threshold-low"}
{
    yang_name = "threshold"; yang_parent_name = "symbol-period";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold::~Threshold()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold::has_data() const
{
    return threshold_high.is_set
	|| threshold_low.is_set;
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold_high.operation)
	|| is_set(threshold_low.operation);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_high.is_set || is_set(threshold_high.operation)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (threshold_low.is_set || is_set(threshold_low.operation)) leaf_name_data.push_back(threshold_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold::get_children()
{
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-high")
    {
        threshold_high = value;
    }
    if(value_path == "threshold-low")
    {
        threshold_low = value;
    }
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::SymbolPeriod()
    :
    	window{YType::uint32, "window"}
    	,
    threshold(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold>())
{
    threshold->parent = this;
    children["threshold"] = threshold.get();

    yang_name = "symbol-period"; yang_parent_name = "link-monitor";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::~SymbolPeriod()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold")
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold.get();
        }
        else
        {
            threshold = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::Threshold>();
            threshold->parent = this;
            children["threshold"] = threshold.get();
        }
        return children.at("threshold");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::get_children()
{
    if(children.find("threshold") == children.end())
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold.get();
        }
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::LinkMonitor()
    :
    	monitoring{YType::empty, "monitoring"}
    	,
    frame(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame>())
	,frame_period(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod>())
	,frame_seconds(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds>())
	,symbol_period(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod>())
{
    frame->parent = this;
    children["frame"] = frame.get();

    frame_period->parent = this;
    children["frame-period"] = frame_period.get();

    frame_seconds->parent = this;
    children["frame-seconds"] = frame_seconds.get();

    symbol_period->parent = this;
    children["symbol-period"] = symbol_period.get();

    yang_name = "link-monitor"; yang_parent_name = "profile";
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::~LinkMonitor()
{
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::has_data() const
{
    return monitoring.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::has_operation() const
{
    return is_set(operation)
	|| is_set(monitoring.operation)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitor";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitoring.is_set || is_set(monitoring.operation)) leaf_name_data.push_back(monitoring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frame")
    {
        if(frame != nullptr)
        {
            children["frame"] = frame.get();
        }
        else
        {
            frame = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::Frame>();
            frame->parent = this;
            children["frame"] = frame.get();
        }
        return children.at("frame");
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period != nullptr)
        {
            children["frame-period"] = frame_period.get();
        }
        else
        {
            frame_period = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FramePeriod>();
            frame_period->parent = this;
            children["frame-period"] = frame_period.get();
        }
        return children.at("frame-period");
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds != nullptr)
        {
            children["frame-seconds"] = frame_seconds.get();
        }
        else
        {
            frame_seconds = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::FrameSeconds>();
            frame_seconds->parent = this;
            children["frame-seconds"] = frame_seconds.get();
        }
        return children.at("frame-seconds");
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period != nullptr)
        {
            children["symbol-period"] = symbol_period.get();
        }
        else
        {
            symbol_period = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::SymbolPeriod>();
            symbol_period->parent = this;
            children["symbol-period"] = symbol_period.get();
        }
        return children.at("symbol-period");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::get_children()
{
    if(children.find("frame") == children.end())
    {
        if(frame != nullptr)
        {
            children["frame"] = frame.get();
        }
    }

    if(children.find("frame-period") == children.end())
    {
        if(frame_period != nullptr)
        {
            children["frame-period"] = frame_period.get();
        }
    }

    if(children.find("frame-seconds") == children.end())
    {
        if(frame_seconds != nullptr)
        {
            children["frame-seconds"] = frame_seconds.get();
        }
    }

    if(children.find("symbol-period") == children.end())
    {
        if(symbol_period != nullptr)
        {
            children["symbol-period"] = symbol_period.get();
        }
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitoring")
    {
        monitoring = value;
    }
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
    return is_set(operation)
	|| is_set(capabilities_conflict.operation)
	|| is_set(critical_event.operation)
	|| is_set(discovery_timeout.operation)
	|| is_set(dying_gasp.operation)
	|| is_set(high_threshold.operation)
	|| is_set(link_fault.operation)
	|| is_set(remote_loopback.operation)
	|| is_set(session_down.operation)
	|| is_set(session_up.operation)
	|| is_set(wiring_conflict.operation);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capabilities_conflict.is_set || is_set(capabilities_conflict.operation)) leaf_name_data.push_back(capabilities_conflict.get_name_leafdata());
    if (critical_event.is_set || is_set(critical_event.operation)) leaf_name_data.push_back(critical_event.get_name_leafdata());
    if (discovery_timeout.is_set || is_set(discovery_timeout.operation)) leaf_name_data.push_back(discovery_timeout.get_name_leafdata());
    if (dying_gasp.is_set || is_set(dying_gasp.operation)) leaf_name_data.push_back(dying_gasp.get_name_leafdata());
    if (high_threshold.is_set || is_set(high_threshold.operation)) leaf_name_data.push_back(high_threshold.get_name_leafdata());
    if (link_fault.is_set || is_set(link_fault.operation)) leaf_name_data.push_back(link_fault.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.operation)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.operation)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (wiring_conflict.is_set || is_set(wiring_conflict.operation)) leaf_name_data.push_back(wiring_conflict.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::get_children()
{
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict = value;
    }
    if(value_path == "critical-event")
    {
        critical_event = value;
    }
    if(value_path == "discovery-timeout")
    {
        discovery_timeout = value;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp = value;
    }
    if(value_path == "high-threshold")
    {
        high_threshold = value;
    }
    if(value_path == "link-fault")
    {
        link_fault = value;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
    }
    if(value_path == "session-down")
    {
        session_down = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict = value;
    }
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::RequireRemote()
    :
    	link_monitoring{YType::empty, "link-monitoring"},
	 mib_retrieval{YType::empty, "mib-retrieval"},
	 mode{YType::enumeration, "mode"},
	 remote_loopback{YType::empty, "remote-loopback"}
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
    return is_set(operation)
	|| is_set(link_monitoring.operation)
	|| is_set(mib_retrieval.operation)
	|| is_set(mode.operation)
	|| is_set(remote_loopback.operation);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "require-remote";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_monitoring.is_set || is_set(link_monitoring.operation)) leaf_name_data.push_back(link_monitoring.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.operation)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.operation)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::get_children()
{
    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-monitoring")
    {
        link_monitoring = value;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
    }
}

EthernetFeatures::EtherLinkOam::Profiles::Profile::Profile()
    :
    	profile{YType::str, "profile"},
	 hello_interval{YType::enumeration, "hello-interval"},
	 mib_retrieval{YType::empty, "mib-retrieval"},
	 mode{YType::enumeration, "mode"},
	 remote_loopback{YType::empty, "remote-loopback"},
	 timeout{YType::uint32, "timeout"},
	 udlf{YType::empty, "udlf"}
    	,
    action(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::Action>())
	,link_monitor(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor>())
	,require_remote(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote>())
{
    action->parent = this;
    children["action"] = action.get();

    link_monitor->parent = this;
    children["link-monitor"] = link_monitor.get();

    require_remote->parent = this;
    children["require-remote"] = require_remote.get();

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
	|| (link_monitor !=  nullptr && link_monitor->has_data())
	|| (require_remote !=  nullptr && require_remote->has_data());
}

bool EthernetFeatures::EtherLinkOam::Profiles::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation)
	|| is_set(hello_interval.operation)
	|| is_set(mib_retrieval.operation)
	|| is_set(mode.operation)
	|| is_set(remote_loopback.operation)
	|| is_set(timeout.operation)
	|| is_set(udlf.operation)
	|| (action !=  nullptr && action->has_operation())
	|| (link_monitor !=  nullptr && link_monitor->has_operation())
	|| (require_remote !=  nullptr && require_remote->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile='" <<profile.get() <<"']";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam/profiles/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mib_retrieval.is_set || is_set(mib_retrieval.operation)) leaf_name_data.push_back(mib_retrieval.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.operation)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (udlf.is_set || is_set(udlf.operation)) leaf_name_data.push_back(udlf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action")
    {
        if(action != nullptr)
        {
            children["action"] = action.get();
        }
        else
        {
            action = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::Action>();
            action->parent = this;
            children["action"] = action.get();
        }
        return children.at("action");
    }

    if(child_yang_name == "link-monitor")
    {
        if(link_monitor != nullptr)
        {
            children["link-monitor"] = link_monitor.get();
        }
        else
        {
            link_monitor = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::LinkMonitor>();
            link_monitor->parent = this;
            children["link-monitor"] = link_monitor.get();
        }
        return children.at("link-monitor");
    }

    if(child_yang_name == "require-remote")
    {
        if(require_remote != nullptr)
        {
            children["require-remote"] = require_remote.get();
        }
        else
        {
            require_remote = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile::RequireRemote>();
            require_remote->parent = this;
            children["require-remote"] = require_remote.get();
        }
        return children.at("require-remote");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::Profile::get_children()
{
    if(children.find("action") == children.end())
    {
        if(action != nullptr)
        {
            children["action"] = action.get();
        }
    }

    if(children.find("link-monitor") == children.end())
    {
        if(link_monitor != nullptr)
        {
            children["link-monitor"] = link_monitor.get();
        }
    }

    if(children.find("require-remote") == children.end())
    {
        if(require_remote != nullptr)
        {
            children["require-remote"] = require_remote.get();
        }
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "mib-retrieval")
    {
        mib_retrieval = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "udlf")
    {
        udlf = value;
    }
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
    return is_set(operation);
}

std::string EthernetFeatures::EtherLinkOam::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles::Profile>();
        c->parent = this;
        profile.push_back(std::move(c));
        children[segment_path] = profile.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::Profiles::get_children()
{
    for (auto const & c : profile)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::Profiles::set_value(const std::string & value_path, std::string value)
{
}

EthernetFeatures::EtherLinkOam::EtherLinkOam()
    :
    profiles(std::make_unique<EthernetFeatures::EtherLinkOam::Profiles>())
{
    profiles->parent = this;
    children["profiles"] = profiles.get();

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
    return is_set(operation)
	|| (profiles !=  nullptr && profiles->has_operation());
}

std::string EthernetFeatures::EtherLinkOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam";

    return path_buffer.str();

}

EntityPath EthernetFeatures::EtherLinkOam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::EtherLinkOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "profiles")
    {
        if(profiles != nullptr)
        {
            children["profiles"] = profiles.get();
        }
        else
        {
            profiles = std::make_unique<EthernetFeatures::EtherLinkOam::Profiles>();
            profiles->parent = this;
            children["profiles"] = profiles.get();
        }
        return children.at("profiles");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::EtherLinkOam::get_children()
{
    if(children.find("profiles") == children.end())
    {
        if(profiles != nullptr)
        {
            children["profiles"] = profiles.get();
        }
    }

    return children;
}

void EthernetFeatures::EtherLinkOam::set_value(const std::string & value_path, std::string value)
{
}

EthernetFeatures::EthernetFeatures()
    :
    cfm(std::make_unique<EthernetFeatures::Cfm>())
	,egress_filtering(std::make_unique<EthernetFeatures::EgressFiltering>())
	,ether_link_oam(std::make_unique<EthernetFeatures::EtherLinkOam>())
{
    cfm->parent = this;
    children["cfm"] = cfm.get();

    egress_filtering->parent = this;
    children["egress-filtering"] = egress_filtering.get();

    ether_link_oam->parent = this;
    children["ether-link-oam"] = ether_link_oam.get();

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
    return is_set(operation)
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

EntityPath EthernetFeatures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cfm")
    {
        if(cfm != nullptr)
        {
            children["cfm"] = cfm.get();
        }
        else
        {
            cfm = std::make_unique<EthernetFeatures::Cfm>();
            cfm->parent = this;
            children["cfm"] = cfm.get();
        }
        return children.at("cfm");
    }

    if(child_yang_name == "egress-filtering")
    {
        if(egress_filtering != nullptr)
        {
            children["egress-filtering"] = egress_filtering.get();
        }
        else
        {
            egress_filtering = std::make_unique<EthernetFeatures::EgressFiltering>();
            egress_filtering->parent = this;
            children["egress-filtering"] = egress_filtering.get();
        }
        return children.at("egress-filtering");
    }

    if(child_yang_name == "ether-link-oam")
    {
        if(ether_link_oam != nullptr)
        {
            children["ether-link-oam"] = ether_link_oam.get();
        }
        else
        {
            ether_link_oam = std::make_unique<EthernetFeatures::EtherLinkOam>();
            ether_link_oam->parent = this;
            children["ether-link-oam"] = ether_link_oam.get();
        }
        return children.at("ether-link-oam");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetFeatures::get_children()
{
    if(children.find("cfm") == children.end())
    {
        if(cfm != nullptr)
        {
            children["cfm"] = cfm.get();
        }
    }

    if(children.find("egress-filtering") == children.end())
    {
        if(egress_filtering != nullptr)
        {
            children["egress-filtering"] = egress_filtering.get();
        }
    }

    if(children.find("ether-link-oam") == children.end())
    {
        if(ether_link_oam != nullptr)
        {
            children["ether-link-oam"] = ether_link_oam.get();
        }
    }

    return children;
}

void EthernetFeatures::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> EthernetFeatures::clone_ptr()
{
    return std::make_unique<EthernetFeatures>();
}

const Enum::YLeaf EgressFilteringEnum::egress_filtering_type_strict {1, "egress-filtering-type-strict"};
const Enum::YLeaf EgressFilteringEnum::egress_filtering_type_disable {2, "egress-filtering-type-disable"};
const Enum::YLeaf EgressFilteringEnum::egress_filtering_type_default {3, "egress-filtering-type-default"};

const Enum::YLeaf L2ProtocolNameEnum::cdp {0, "cdp"};
const Enum::YLeaf L2ProtocolNameEnum::stp {1, "stp"};
const Enum::YLeaf L2ProtocolNameEnum::vtp {2, "vtp"};
const Enum::YLeaf L2ProtocolNameEnum::pvst {3, "pvst"};
const Enum::YLeaf L2ProtocolNameEnum::cpsv {4, "cpsv"};

const Enum::YLeaf FilteringEnum::filtering_type_dot1q {0, "filtering-type-dot1q"};
const Enum::YLeaf FilteringEnum::filtering_type_dot1ad {1, "filtering-type-dot1ad"};

const Enum::YLeaf L2ProtocolModeEnum::forward {0, "forward"};
const Enum::YLeaf L2ProtocolModeEnum::drop {1, "drop"};
const Enum::YLeaf L2ProtocolModeEnum::tunnel {2, "tunnel"};
const Enum::YLeaf L2ProtocolModeEnum::reverse_tunnel {3, "reverse-tunnel"};


}
}

