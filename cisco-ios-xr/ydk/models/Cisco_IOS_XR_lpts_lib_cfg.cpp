
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_lpts_lib_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lpts_lib_cfg {

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
    path_buffer << "ipv4vrf-name" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (acl_rate.is_set || is_set(acl_rate.operation)) leaf_name_data.push_back(acl_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::get_children()
{
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

EntityPath Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4vrf-name")
    {
        for(auto const & c : ipv4vrf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName>();
        c->parent = this;
        ipv4vrf_name.push_back(std::move(c));
        children[segment_path] = ipv4vrf_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::get_children()
{
    for (auto const & c : ipv4vrf_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4Acl()
    :
    	acl_name{YType::str, "acl-name"}
    	,
    ipv4vrf_names(std::make_unique<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames>())
{
    ipv4vrf_names->parent = this;
    children["ipv4vrf-names"] = ipv4vrf_names.get();

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
	|| (ipv4vrf_names !=  nullptr && is_set(ipv4vrf_names->operation));
}

std::string Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4acl" <<"[acl-name='" <<acl_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/ipv4acls/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4vrf-names")
    {
        if(ipv4vrf_names != nullptr)
        {
            children["ipv4vrf-names"] = ipv4vrf_names.get();
        }
        else
        {
            ipv4vrf_names = std::make_unique<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames>();
            ipv4vrf_names->parent = this;
            children["ipv4vrf-names"] = ipv4vrf_names.get();
        }
        return children.at("ipv4vrf-names");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_children()
{
    if(children.find("ipv4vrf-names") == children.end())
    {
        if(ipv4vrf_names != nullptr)
        {
            children["ipv4vrf-names"] = ipv4vrf_names.get();
        }
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

EntityPath Lpts::Ipolicer::Ipv4Acls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Ipolicer::Ipv4Acls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4acl")
    {
        for(auto const & c : ipv4acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl>();
        c->parent = this;
        ipv4acl.push_back(std::move(c));
        children[segment_path] = ipv4acl.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Ipolicer::Ipv4Acls::get_children()
{
    for (auto const & c : ipv4acl)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Lpts::Ipolicer::Ipv4Acls::set_value(const std::string & value_path, std::string value)
{
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
    for (auto const & leaf : precedence.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Lpts::Ipolicer::Flows::Flow::Precedences::has_operation() const
{
    for (auto const & leaf : precedence.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Lpts::Ipolicer::Flows::Flow::Precedences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedences";

    return path_buffer.str();

}

EntityPath Lpts::Ipolicer::Flows::Flow::Precedences::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Ipolicer::Flows::Flow::Precedences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Lpts::Ipolicer::Flows::Flow::Precedences::get_children()
{
    return children;
}

void Lpts::Ipolicer::Flows::Flow::Precedences::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

Lpts::Ipolicer::Flows::Flow::Flow()
    :
    	flow_type{YType::enumeration, "flow-type"},
	 rate{YType::int32, "rate"}
    	,
    precedences(std::make_unique<Lpts::Ipolicer::Flows::Flow::Precedences>())
{
    precedences->parent = this;
    children["precedences"] = precedences.get();

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
	|| (precedences !=  nullptr && is_set(precedences->operation));
}

std::string Lpts::Ipolicer::Flows::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow" <<"[flow-type='" <<flow_type.get() <<"']";

    return path_buffer.str();

}

EntityPath Lpts::Ipolicer::Flows::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/flows/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_type.is_set || is_set(flow_type.operation)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Ipolicer::Flows::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "precedences")
    {
        if(precedences != nullptr)
        {
            children["precedences"] = precedences.get();
        }
        else
        {
            precedences = std::make_unique<Lpts::Ipolicer::Flows::Flow::Precedences>();
            precedences->parent = this;
            children["precedences"] = precedences.get();
        }
        return children.at("precedences");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Ipolicer::Flows::Flow::get_children()
{
    if(children.find("precedences") == children.end())
    {
        if(precedences != nullptr)
        {
            children["precedences"] = precedences.get();
        }
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

EntityPath Lpts::Ipolicer::Flows::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Ipolicer::Flows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow")
    {
        for(auto const & c : flow)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Lpts::Ipolicer::Flows::Flow>();
        c->parent = this;
        flow.push_back(std::move(c));
        children[segment_path] = flow.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Ipolicer::Flows::get_children()
{
    for (auto const & c : flow)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Lpts::Ipolicer::Flows::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Ipolicer::Ipolicer()
    :
    	enable{YType::empty, "enable"}
    	,
    flows(std::make_unique<Lpts::Ipolicer::Flows>())
	,ipv4acls(std::make_unique<Lpts::Ipolicer::Ipv4Acls>())
{
    flows->parent = this;
    children["flows"] = flows.get();

    ipv4acls->parent = this;
    children["ipv4acls"] = ipv4acls.get();

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
	|| (flows !=  nullptr && is_set(flows->operation))
	|| (ipv4acls !=  nullptr && is_set(ipv4acls->operation));
}

std::string Lpts::Ipolicer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer";

    return path_buffer.str();

}

EntityPath Lpts::Ipolicer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Ipolicer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flows")
    {
        if(flows != nullptr)
        {
            children["flows"] = flows.get();
        }
        else
        {
            flows = std::make_unique<Lpts::Ipolicer::Flows>();
            flows->parent = this;
            children["flows"] = flows.get();
        }
        return children.at("flows");
    }

    if(child_yang_name == "ipv4acls")
    {
        if(ipv4acls != nullptr)
        {
            children["ipv4acls"] = ipv4acls.get();
        }
        else
        {
            ipv4acls = std::make_unique<Lpts::Ipolicer::Ipv4Acls>();
            ipv4acls->parent = this;
            children["ipv4acls"] = ipv4acls.get();
        }
        return children.at("ipv4acls");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Ipolicer::get_children()
{
    if(children.find("flows") == children.end())
    {
        if(flows != nullptr)
        {
            children["flows"] = flows.get();
        }
    }

    if(children.find("ipv4acls") == children.end())
    {
        if(ipv4acls != nullptr)
        {
            children["ipv4acls"] = ipv4acls.get();
        }
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
    path_buffer << "penalty-rate" <<"[protocol-name='" <<protocol_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/penalty-rates/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_children()
{
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

EntityPath Lpts::Punt::Flowtrap::PenaltyRates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Punt::Flowtrap::PenaltyRates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "penalty-rate")
    {
        for(auto const & c : penalty_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate>();
        c->parent = this;
        penalty_rate.push_back(std::move(c));
        children[segment_path] = penalty_rate.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Punt::Flowtrap::PenaltyRates::get_children()
{
    for (auto const & c : penalty_rate)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Lpts::Punt::Flowtrap::PenaltyRates::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "penalty-timeout" <<"[protocol-name='" <<protocol_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/penalty-timeouts/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_children()
{
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

EntityPath Lpts::Punt::Flowtrap::PenaltyTimeouts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Punt::Flowtrap::PenaltyTimeouts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "penalty-timeout")
    {
        for(auto const & c : penalty_timeout)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout>();
        c->parent = this;
        penalty_timeout.push_back(std::move(c));
        children[segment_path] = penalty_timeout.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Punt::Flowtrap::PenaltyTimeouts::get_children()
{
    for (auto const & c : penalty_timeout)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Lpts::Punt::Flowtrap::PenaltyTimeouts::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "interface-name" <<"[ifname='" <<ifname.get() <<"']";

    return path_buffer.str();

}

EntityPath Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/exclude/interface-names/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.operation)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (id1.is_set || is_set(id1.operation)) leaf_name_data.push_back(id1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_children()
{
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

EntityPath Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/exclude/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-name")
    {
        for(auto const & c : interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName>();
        c->parent = this;
        interface_name.push_back(std::move(c));
        children[segment_path] = interface_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_children()
{
    for (auto const & c : interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Lpts::Punt::Flowtrap::Exclude::InterfaceNames::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Punt::Flowtrap::Exclude::Exclude()
    :
    interface_names(std::make_unique<Lpts::Punt::Flowtrap::Exclude::InterfaceNames>())
{
    interface_names->parent = this;
    children["interface-names"] = interface_names.get();

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
	|| (interface_names !=  nullptr && is_set(interface_names->operation));
}

std::string Lpts::Punt::Flowtrap::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";

    return path_buffer.str();

}

EntityPath Lpts::Punt::Flowtrap::Exclude::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Punt::Flowtrap::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-names")
    {
        if(interface_names != nullptr)
        {
            children["interface-names"] = interface_names.get();
        }
        else
        {
            interface_names = std::make_unique<Lpts::Punt::Flowtrap::Exclude::InterfaceNames>();
            interface_names->parent = this;
            children["interface-names"] = interface_names.get();
        }
        return children.at("interface-names");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Punt::Flowtrap::Exclude::get_children()
{
    if(children.find("interface-names") == children.end())
    {
        if(interface_names != nullptr)
        {
            children["interface-names"] = interface_names.get();
        }
    }

    return children;
}

void Lpts::Punt::Flowtrap::Exclude::set_value(const std::string & value_path, std::string value)
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
    exclude(std::make_unique<Lpts::Punt::Flowtrap::Exclude>())
	,penalty_rates(std::make_unique<Lpts::Punt::Flowtrap::PenaltyRates>())
	,penalty_timeouts(std::make_unique<Lpts::Punt::Flowtrap::PenaltyTimeouts>())
{
    exclude->parent = this;
    children["exclude"] = exclude.get();

    penalty_rates->parent = this;
    children["penalty-rates"] = penalty_rates.get();

    penalty_timeouts->parent = this;
    children["penalty-timeouts"] = penalty_timeouts.get();

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
	|| (exclude !=  nullptr && is_set(exclude->operation))
	|| (penalty_rates !=  nullptr && is_set(penalty_rates->operation))
	|| (penalty_timeouts !=  nullptr && is_set(penalty_timeouts->operation));
}

std::string Lpts::Punt::Flowtrap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowtrap";

    return path_buffer.str();

}

EntityPath Lpts::Punt::Flowtrap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* Lpts::Punt::Flowtrap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude")
    {
        if(exclude != nullptr)
        {
            children["exclude"] = exclude.get();
        }
        else
        {
            exclude = std::make_unique<Lpts::Punt::Flowtrap::Exclude>();
            exclude->parent = this;
            children["exclude"] = exclude.get();
        }
        return children.at("exclude");
    }

    if(child_yang_name == "penalty-rates")
    {
        if(penalty_rates != nullptr)
        {
            children["penalty-rates"] = penalty_rates.get();
        }
        else
        {
            penalty_rates = std::make_unique<Lpts::Punt::Flowtrap::PenaltyRates>();
            penalty_rates->parent = this;
            children["penalty-rates"] = penalty_rates.get();
        }
        return children.at("penalty-rates");
    }

    if(child_yang_name == "penalty-timeouts")
    {
        if(penalty_timeouts != nullptr)
        {
            children["penalty-timeouts"] = penalty_timeouts.get();
        }
        else
        {
            penalty_timeouts = std::make_unique<Lpts::Punt::Flowtrap::PenaltyTimeouts>();
            penalty_timeouts->parent = this;
            children["penalty-timeouts"] = penalty_timeouts.get();
        }
        return children.at("penalty-timeouts");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Punt::Flowtrap::get_children()
{
    if(children.find("exclude") == children.end())
    {
        if(exclude != nullptr)
        {
            children["exclude"] = exclude.get();
        }
    }

    if(children.find("penalty-rates") == children.end())
    {
        if(penalty_rates != nullptr)
        {
            children["penalty-rates"] = penalty_rates.get();
        }
    }

    if(children.find("penalty-timeouts") == children.end())
    {
        if(penalty_timeouts != nullptr)
        {
            children["penalty-timeouts"] = penalty_timeouts.get();
        }
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

Lpts::Punt::Punt()
    :
    flowtrap(std::make_unique<Lpts::Punt::Flowtrap>())
{
    flowtrap->parent = this;
    children["flowtrap"] = flowtrap.get();

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
	|| (flowtrap !=  nullptr && is_set(flowtrap->operation));
}

std::string Lpts::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt";

    return path_buffer.str();

}

EntityPath Lpts::Punt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flowtrap")
    {
        if(flowtrap != nullptr)
        {
            children["flowtrap"] = flowtrap.get();
        }
        else
        {
            flowtrap = std::make_unique<Lpts::Punt::Flowtrap>();
            flowtrap->parent = this;
            children["flowtrap"] = flowtrap.get();
        }
        return children.at("flowtrap");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::Punt::get_children()
{
    if(children.find("flowtrap") == children.end())
    {
        if(flowtrap != nullptr)
        {
            children["flowtrap"] = flowtrap.get();
        }
    }

    return children;
}

void Lpts::Punt::set_value(const std::string & value_path, std::string value)
{
}

Lpts::Lpts()
    :
    ipolicer(nullptr) // presence node
	,punt(std::make_unique<Lpts::Punt>())
{
    punt->parent = this;
    children["punt"] = punt.get();

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
	|| (ipolicer !=  nullptr && is_set(ipolicer->operation))
	|| (punt !=  nullptr && is_set(punt->operation));
}

std::string Lpts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts";

    return path_buffer.str();

}

EntityPath Lpts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lpts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipolicer")
    {
        if(ipolicer != nullptr)
        {
            children["ipolicer"] = ipolicer.get();
        }
        else
        {
            ipolicer = std::make_unique<Lpts::Ipolicer>();
            ipolicer->parent = this;
            children["ipolicer"] = ipolicer.get();
        }
        return children.at("ipolicer");
    }

    if(child_yang_name == "punt")
    {
        if(punt != nullptr)
        {
            children["punt"] = punt.get();
        }
        else
        {
            punt = std::make_unique<Lpts::Punt>();
            punt->parent = this;
            children["punt"] = punt.get();
        }
        return children.at("punt");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Lpts::get_children()
{
    if(children.find("ipolicer") == children.end())
    {
        if(ipolicer != nullptr)
        {
            children["ipolicer"] = ipolicer.get();
        }
    }

    if(children.find("punt") == children.end())
    {
        if(punt != nullptr)
        {
            children["punt"] = punt.get();
        }
    }

    return children;
}

void Lpts::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Lpts::clone_ptr()
{
    return std::make_unique<Lpts>();
}


}
}

