
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lpts_lib_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lpts_lib_cfg {

Lpts::Lpts()
    :
    ipolicer(nullptr) // presence node
	,punt(std::make_shared<Lpts::Punt>())
{
    punt->parent = this;

    yang_name = "lpts"; yang_parent_name = "Cisco-IOS-XR-lpts-lib-cfg";
}

Lpts::~Lpts()
{
}

bool Lpts::has_data() const
{
    return (ipolicer !=  nullptr && ipolicer->has_data())
	|| (punt !=  nullptr && punt->has_data());
}

bool Lpts::has_operation() const
{
    return is_set(operation)
	|| (ipolicer !=  nullptr && ipolicer->has_operation())
	|| (punt !=  nullptr && punt->has_operation());
}

std::string Lpts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts";

    return path_buffer.str();

}

const EntityPath Lpts::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Lpts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipolicer")
    {
        if(ipolicer == nullptr)
        {
            ipolicer = std::make_shared<Lpts::Ipolicer>();
        }
        return ipolicer;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<Lpts::Punt>();
        }
        return punt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipolicer != nullptr)
    {
        children["ipolicer"] = ipolicer;
    }

    if(punt != nullptr)
    {
        children["punt"] = punt;
    }

    return children;
}

void Lpts::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Lpts::clone_ptr() const
{
    return std::make_shared<Lpts>();
}

std::string Lpts::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Lpts::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Lpts::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Lpts::Ipolicer::Ipolicer()
    :
    enable{YType::empty, "enable"}
    	,
    flows(std::make_shared<Lpts::Ipolicer::Flows>())
	,ipv4acls(std::make_shared<Lpts::Ipolicer::Ipv4Acls>())
{
    flows->parent = this;

    ipv4acls->parent = this;

    yang_name = "ipolicer"; yang_parent_name = "lpts";
}

Lpts::Ipolicer::~Ipolicer()
{
}

bool Lpts::Ipolicer::has_data() const
{
    return enable.is_set
	|| (flows !=  nullptr && flows->has_data())
	|| (ipv4acls !=  nullptr && ipv4acls->has_data());
}

bool Lpts::Ipolicer::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (flows !=  nullptr && flows->has_operation())
	|| (ipv4acls !=  nullptr && ipv4acls->has_operation());
}

std::string Lpts::Ipolicer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer";

    return path_buffer.str();

}

const EntityPath Lpts::Ipolicer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Ipolicer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flows")
    {
        if(flows == nullptr)
        {
            flows = std::make_shared<Lpts::Ipolicer::Flows>();
        }
        return flows;
    }

    if(child_yang_name == "ipv4acls")
    {
        if(ipv4acls == nullptr)
        {
            ipv4acls = std::make_shared<Lpts::Ipolicer::Ipv4Acls>();
        }
        return ipv4acls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flows != nullptr)
    {
        children["flows"] = flows;
    }

    if(ipv4acls != nullptr)
    {
        children["ipv4acls"] = ipv4acls;
    }

    return children;
}

void Lpts::Ipolicer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acls()
{
    yang_name = "ipv4acls"; yang_parent_name = "ipolicer";
}

Lpts::Ipolicer::Ipv4Acls::~Ipv4Acls()
{
}

bool Lpts::Ipolicer::Ipv4Acls::has_data() const
{
    for (std::size_t index=0; index<ipv4acl.size(); index++)
    {
        if(ipv4acl[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Ipolicer::Ipv4Acls::has_operation() const
{
    for (std::size_t index=0; index<ipv4acl.size(); index++)
    {
        if(ipv4acl[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Lpts::Ipolicer::Ipv4Acls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4acls";

    return path_buffer.str();

}

const EntityPath Lpts::Ipolicer::Ipv4Acls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Ipv4Acls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4acl")
    {
        for(auto const & c : ipv4acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl>();
        c->parent = this;
        ipv4acl.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Ipv4Acls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4acl)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Ipolicer::Ipv4Acls::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4Acl()
    :
    acl_name{YType::str, "acl-name"}
    	,
    ipv4vrf_names(std::make_shared<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames>())
{
    ipv4vrf_names->parent = this;

    yang_name = "ipv4acl"; yang_parent_name = "ipv4acls";
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::~Ipv4Acl()
{
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::has_data() const
{
    return acl_name.is_set
	|| (ipv4vrf_names !=  nullptr && ipv4vrf_names->has_data());
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| (ipv4vrf_names !=  nullptr && ipv4vrf_names->has_operation());
}

std::string Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4acl" <<"[acl-name='" <<acl_name <<"']";

    return path_buffer.str();

}

const EntityPath Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/ipv4acls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4vrf-names")
    {
        if(ipv4vrf_names == nullptr)
        {
            ipv4vrf_names = std::make_shared<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames>();
        }
        return ipv4vrf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4vrf_names != nullptr)
    {
        children["ipv4vrf-names"] = ipv4vrf_names;
    }

    return children;
}

void Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfNames()
{
    yang_name = "ipv4vrf-names"; yang_parent_name = "ipv4acl";
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::~Ipv4VrfNames()
{
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::has_data() const
{
    for (std::size_t index=0; index<ipv4vrf_name.size(); index++)
    {
        if(ipv4vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::has_operation() const
{
    for (std::size_t index=0; index<ipv4vrf_name.size(); index++)
    {
        if(ipv4vrf_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4vrf-names";

    return path_buffer.str();

}

const EntityPath Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4VrfNames' in Cisco_IOS_XR_lpts_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4vrf-name")
    {
        for(auto const & c : ipv4vrf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName>();
        c->parent = this;
        ipv4vrf_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4vrf_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::Ipv4VrfName()
    :
    vrf_name{YType::str, "vrf-name"},
    acl_rate{YType::uint32, "acl-rate"}
{
    yang_name = "ipv4vrf-name"; yang_parent_name = "ipv4vrf-names";
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::~Ipv4VrfName()
{
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::has_data() const
{
    return vrf_name.is_set
	|| acl_rate.is_set;
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(acl_rate.operation);
}

std::string Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4vrf-name" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4VrfName' in Cisco_IOS_XR_lpts_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (acl_rate.is_set || is_set(acl_rate.operation)) leaf_name_data.push_back(acl_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "acl-rate")
    {
        acl_rate = value;
    }
}

Lpts::Ipolicer::Flows::Flows()
{
    yang_name = "flows"; yang_parent_name = "ipolicer";
}

Lpts::Ipolicer::Flows::~Flows()
{
}

bool Lpts::Ipolicer::Flows::has_data() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Ipolicer::Flows::has_operation() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Lpts::Ipolicer::Flows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flows";

    return path_buffer.str();

}

const EntityPath Lpts::Ipolicer::Flows::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Flows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        for(auto const & c : flow)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Ipolicer::Flows::Flow>();
        c->parent = this;
        flow.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Flows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Ipolicer::Flows::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Ipolicer::Flows::Flow::Flow()
    :
    flow_type{YType::enumeration, "flow-type"},
    rate{YType::int32, "rate"}
    	,
    precedences(std::make_shared<Lpts::Ipolicer::Flows::Flow::Precedences>())
{
    precedences->parent = this;

    yang_name = "flow"; yang_parent_name = "flows";
}

Lpts::Ipolicer::Flows::Flow::~Flow()
{
}

bool Lpts::Ipolicer::Flows::Flow::has_data() const
{
    return flow_type.is_set
	|| rate.is_set
	|| (precedences !=  nullptr && precedences->has_data());
}

bool Lpts::Ipolicer::Flows::Flow::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_type.operation)
	|| is_set(rate.operation)
	|| (precedences !=  nullptr && precedences->has_operation());
}

std::string Lpts::Ipolicer::Flows::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow" <<"[flow-type='" <<flow_type <<"']";

    return path_buffer.str();

}

const EntityPath Lpts::Ipolicer::Flows::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/flows/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_type.is_set || is_set(flow_type.operation)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Flows::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "precedences")
    {
        if(precedences == nullptr)
        {
            precedences = std::make_shared<Lpts::Ipolicer::Flows::Flow::Precedences>();
        }
        return precedences;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Flows::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(precedences != nullptr)
    {
        children["precedences"] = precedences;
    }

    return children;
}

void Lpts::Ipolicer::Flows::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-type")
    {
        flow_type = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

Lpts::Ipolicer::Flows::Flow::Precedences::Precedences()
    :
    precedence{YType::str, "precedence"}
{
    yang_name = "precedences"; yang_parent_name = "flow";
}

Lpts::Ipolicer::Flows::Flow::Precedences::~Precedences()
{
}

bool Lpts::Ipolicer::Flows::Flow::Precedences::has_data() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Lpts::Ipolicer::Flows::Flow::Precedences::has_operation() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(precedence.operation);
}

std::string Lpts::Ipolicer::Flows::Flow::Precedences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedences";

    return path_buffer.str();

}

const EntityPath Lpts::Ipolicer::Flows::Flow::Precedences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Precedences' in Cisco_IOS_XR_lpts_lib_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Flows::Flow::Precedences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Flows::Flow::Precedences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lpts::Ipolicer::Flows::Flow::Precedences::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

Lpts::Punt::Punt()
    :
    flowtrap(std::make_shared<Lpts::Punt::Flowtrap>())
{
    flowtrap->parent = this;

    yang_name = "punt"; yang_parent_name = "lpts";
}

Lpts::Punt::~Punt()
{
}

bool Lpts::Punt::has_data() const
{
    return (flowtrap !=  nullptr && flowtrap->has_data());
}

bool Lpts::Punt::has_operation() const
{
    return is_set(operation)
	|| (flowtrap !=  nullptr && flowtrap->has_operation());
}

std::string Lpts::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt";

    return path_buffer.str();

}

const EntityPath Lpts::Punt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flowtrap")
    {
        if(flowtrap == nullptr)
        {
            flowtrap = std::make_shared<Lpts::Punt::Flowtrap>();
        }
        return flowtrap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flowtrap != nullptr)
    {
        children["flowtrap"] = flowtrap;
    }

    return children;
}

void Lpts::Punt::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Punt::Flowtrap::Flowtrap()
    :
    dampening{YType::uint32, "dampening"},
    et_size{YType::uint32, "et-size"},
    eviction_search_limit{YType::uint32, "eviction-search-limit"},
    eviction_threshold{YType::uint32, "eviction-threshold"},
    interface_based_flow{YType::boolean, "interface-based-flow"},
    max_flow_gap{YType::uint32, "max-flow-gap"},
    non_subscriber_interfaces{YType::int32, "non-subscriber-interfaces"},
    report_threshold{YType::uint16, "report-threshold"},
    routing_protocols_enable{YType::boolean, "routing-protocols-enable"},
    sample_prob{YType::str, "sample-prob"},
    subscriber_interfaces{YType::boolean, "subscriber-interfaces"}
    	,
    exclude(std::make_shared<Lpts::Punt::Flowtrap::Exclude>())
	,penalty_rates(std::make_shared<Lpts::Punt::Flowtrap::PenaltyRates>())
	,penalty_timeouts(std::make_shared<Lpts::Punt::Flowtrap::PenaltyTimeouts>())
{
    exclude->parent = this;

    penalty_rates->parent = this;

    penalty_timeouts->parent = this;

    yang_name = "flowtrap"; yang_parent_name = "punt";
}

Lpts::Punt::Flowtrap::~Flowtrap()
{
}

bool Lpts::Punt::Flowtrap::has_data() const
{
    return dampening.is_set
	|| et_size.is_set
	|| eviction_search_limit.is_set
	|| eviction_threshold.is_set
	|| interface_based_flow.is_set
	|| max_flow_gap.is_set
	|| non_subscriber_interfaces.is_set
	|| report_threshold.is_set
	|| routing_protocols_enable.is_set
	|| sample_prob.is_set
	|| subscriber_interfaces.is_set
	|| (exclude !=  nullptr && exclude->has_data())
	|| (penalty_rates !=  nullptr && penalty_rates->has_data())
	|| (penalty_timeouts !=  nullptr && penalty_timeouts->has_data());
}

bool Lpts::Punt::Flowtrap::has_operation() const
{
    return is_set(operation)
	|| is_set(dampening.operation)
	|| is_set(et_size.operation)
	|| is_set(eviction_search_limit.operation)
	|| is_set(eviction_threshold.operation)
	|| is_set(interface_based_flow.operation)
	|| is_set(max_flow_gap.operation)
	|| is_set(non_subscriber_interfaces.operation)
	|| is_set(report_threshold.operation)
	|| is_set(routing_protocols_enable.operation)
	|| is_set(sample_prob.operation)
	|| is_set(subscriber_interfaces.operation)
	|| (exclude !=  nullptr && exclude->has_operation())
	|| (penalty_rates !=  nullptr && penalty_rates->has_operation())
	|| (penalty_timeouts !=  nullptr && penalty_timeouts->has_operation());
}

std::string Lpts::Punt::Flowtrap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowtrap";

    return path_buffer.str();

}

const EntityPath Lpts::Punt::Flowtrap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening.is_set || is_set(dampening.operation)) leaf_name_data.push_back(dampening.get_name_leafdata());
    if (et_size.is_set || is_set(et_size.operation)) leaf_name_data.push_back(et_size.get_name_leafdata());
    if (eviction_search_limit.is_set || is_set(eviction_search_limit.operation)) leaf_name_data.push_back(eviction_search_limit.get_name_leafdata());
    if (eviction_threshold.is_set || is_set(eviction_threshold.operation)) leaf_name_data.push_back(eviction_threshold.get_name_leafdata());
    if (interface_based_flow.is_set || is_set(interface_based_flow.operation)) leaf_name_data.push_back(interface_based_flow.get_name_leafdata());
    if (max_flow_gap.is_set || is_set(max_flow_gap.operation)) leaf_name_data.push_back(max_flow_gap.get_name_leafdata());
    if (non_subscriber_interfaces.is_set || is_set(non_subscriber_interfaces.operation)) leaf_name_data.push_back(non_subscriber_interfaces.get_name_leafdata());
    if (report_threshold.is_set || is_set(report_threshold.operation)) leaf_name_data.push_back(report_threshold.get_name_leafdata());
    if (routing_protocols_enable.is_set || is_set(routing_protocols_enable.operation)) leaf_name_data.push_back(routing_protocols_enable.get_name_leafdata());
    if (sample_prob.is_set || is_set(sample_prob.operation)) leaf_name_data.push_back(sample_prob.get_name_leafdata());
    if (subscriber_interfaces.is_set || is_set(subscriber_interfaces.operation)) leaf_name_data.push_back(subscriber_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<Lpts::Punt::Flowtrap::Exclude>();
        }
        return exclude;
    }

    if(child_yang_name == "penalty-rates")
    {
        if(penalty_rates == nullptr)
        {
            penalty_rates = std::make_shared<Lpts::Punt::Flowtrap::PenaltyRates>();
        }
        return penalty_rates;
    }

    if(child_yang_name == "penalty-timeouts")
    {
        if(penalty_timeouts == nullptr)
        {
            penalty_timeouts = std::make_shared<Lpts::Punt::Flowtrap::PenaltyTimeouts>();
        }
        return penalty_timeouts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exclude != nullptr)
    {
        children["exclude"] = exclude;
    }

    if(penalty_rates != nullptr)
    {
        children["penalty-rates"] = penalty_rates;
    }

    if(penalty_timeouts != nullptr)
    {
        children["penalty-timeouts"] = penalty_timeouts;
    }

    return children;
}

void Lpts::Punt::Flowtrap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dampening")
    {
        dampening = value;
    }
    if(value_path == "et-size")
    {
        et_size = value;
    }
    if(value_path == "eviction-search-limit")
    {
        eviction_search_limit = value;
    }
    if(value_path == "eviction-threshold")
    {
        eviction_threshold = value;
    }
    if(value_path == "interface-based-flow")
    {
        interface_based_flow = value;
    }
    if(value_path == "max-flow-gap")
    {
        max_flow_gap = value;
    }
    if(value_path == "non-subscriber-interfaces")
    {
        non_subscriber_interfaces = value;
    }
    if(value_path == "report-threshold")
    {
        report_threshold = value;
    }
    if(value_path == "routing-protocols-enable")
    {
        routing_protocols_enable = value;
    }
    if(value_path == "sample-prob")
    {
        sample_prob = value;
    }
    if(value_path == "subscriber-interfaces")
    {
        subscriber_interfaces = value;
    }
}

Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRates()
{
    yang_name = "penalty-rates"; yang_parent_name = "flowtrap";
}

Lpts::Punt::Flowtrap::PenaltyRates::~PenaltyRates()
{
}

bool Lpts::Punt::Flowtrap::PenaltyRates::has_data() const
{
    for (std::size_t index=0; index<penalty_rate.size(); index++)
    {
        if(penalty_rate[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Punt::Flowtrap::PenaltyRates::has_operation() const
{
    for (std::size_t index=0; index<penalty_rate.size(); index++)
    {
        if(penalty_rate[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Lpts::Punt::Flowtrap::PenaltyRates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "penalty-rates";

    return path_buffer.str();

}

const EntityPath Lpts::Punt::Flowtrap::PenaltyRates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::PenaltyRates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "penalty-rate")
    {
        for(auto const & c : penalty_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate>();
        c->parent = this;
        penalty_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::PenaltyRates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : penalty_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Punt::Flowtrap::PenaltyRates::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::PenaltyRate()
    :
    protocol_name{YType::enumeration, "protocol-name"},
    rate{YType::uint32, "rate"}
{
    yang_name = "penalty-rate"; yang_parent_name = "penalty-rates";
}

Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::~PenaltyRate()
{
}

bool Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::has_data() const
{
    return protocol_name.is_set
	|| rate.is_set;
}

bool Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| is_set(rate.operation);
}

std::string Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "penalty-rate" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

const EntityPath Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/penalty-rates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeouts()
{
    yang_name = "penalty-timeouts"; yang_parent_name = "flowtrap";
}

Lpts::Punt::Flowtrap::PenaltyTimeouts::~PenaltyTimeouts()
{
}

bool Lpts::Punt::Flowtrap::PenaltyTimeouts::has_data() const
{
    for (std::size_t index=0; index<penalty_timeout.size(); index++)
    {
        if(penalty_timeout[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Punt::Flowtrap::PenaltyTimeouts::has_operation() const
{
    for (std::size_t index=0; index<penalty_timeout.size(); index++)
    {
        if(penalty_timeout[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Lpts::Punt::Flowtrap::PenaltyTimeouts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "penalty-timeouts";

    return path_buffer.str();

}

const EntityPath Lpts::Punt::Flowtrap::PenaltyTimeouts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::PenaltyTimeouts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "penalty-timeout")
    {
        for(auto const & c : penalty_timeout)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout>();
        c->parent = this;
        penalty_timeout.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::PenaltyTimeouts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : penalty_timeout)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Punt::Flowtrap::PenaltyTimeouts::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::PenaltyTimeout()
    :
    protocol_name{YType::enumeration, "protocol-name"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "penalty-timeout"; yang_parent_name = "penalty-timeouts";
}

Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::~PenaltyTimeout()
{
}

bool Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::has_data() const
{
    return protocol_name.is_set
	|| timeout.is_set;
}

bool Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| is_set(timeout.operation);
}

std::string Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "penalty-timeout" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

const EntityPath Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/penalty-timeouts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Lpts::Punt::Flowtrap::Exclude::Exclude()
    :
    interface_names(std::make_shared<Lpts::Punt::Flowtrap::Exclude::InterfaceNames>())
{
    interface_names->parent = this;

    yang_name = "exclude"; yang_parent_name = "flowtrap";
}

Lpts::Punt::Flowtrap::Exclude::~Exclude()
{
}

bool Lpts::Punt::Flowtrap::Exclude::has_data() const
{
    return (interface_names !=  nullptr && interface_names->has_data());
}

bool Lpts::Punt::Flowtrap::Exclude::has_operation() const
{
    return is_set(operation)
	|| (interface_names !=  nullptr && interface_names->has_operation());
}

std::string Lpts::Punt::Flowtrap::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";

    return path_buffer.str();

}

const EntityPath Lpts::Punt::Flowtrap::Exclude::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-names")
    {
        if(interface_names == nullptr)
        {
            interface_names = std::make_shared<Lpts::Punt::Flowtrap::Exclude::InterfaceNames>();
        }
        return interface_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_names != nullptr)
    {
        children["interface-names"] = interface_names;
    }

    return children;
}

void Lpts::Punt::Flowtrap::Exclude::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceNames()
{
    yang_name = "interface-names"; yang_parent_name = "exclude";
}

Lpts::Punt::Flowtrap::Exclude::InterfaceNames::~InterfaceNames()
{
}

bool Lpts::Punt::Flowtrap::Exclude::InterfaceNames::has_data() const
{
    for (std::size_t index=0; index<interface_name.size(); index++)
    {
        if(interface_name[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Punt::Flowtrap::Exclude::InterfaceNames::has_operation() const
{
    for (std::size_t index=0; index<interface_name.size(); index++)
    {
        if(interface_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-names";

    return path_buffer.str();

}

const EntityPath Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/exclude/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-name")
    {
        for(auto const & c : interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName>();
        c->parent = this;
        interface_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Punt::Flowtrap::Exclude::InterfaceNames::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::InterfaceName()
    :
    ifname{YType::str, "ifname"},
    id1{YType::boolean, "id1"}
{
    yang_name = "interface-name"; yang_parent_name = "interface-names";
}

Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::~InterfaceName()
{
}

bool Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::has_data() const
{
    return ifname.is_set
	|| id1.is_set;
}

bool Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(ifname.operation)
	|| is_set(id1.operation);
}

std::string Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-name" <<"[ifname='" <<ifname <<"']";

    return path_buffer.str();

}

const EntityPath Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/exclude/interface-names/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.operation)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (id1.is_set || is_set(id1.operation)) leaf_name_data.push_back(id1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifname")
    {
        ifname = value;
    }
    if(value_path == "id1")
    {
        id1 = value;
    }
}


}
}

