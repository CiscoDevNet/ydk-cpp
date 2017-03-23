
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_cfg {

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::Tiebreaker()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{
    yang_name = "tiebreaker"; yang_parent_name = "tiebreakers";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::~Tiebreaker()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(tiebreaker_type.operation)
	|| is_set(tiebreaker_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreaker" <<"[tiebreaker-type='" <<tiebreaker_type <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreaker' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.operation)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.operation)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Distance()
    :
    administrative{YType::uint32, "administrative"}
    	,
    ospfv3(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_>())
{
    ospfv3->parent = this;
    children["ospfv3"] = ospfv3;

    yang_name = "distance"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Distance::~Distance()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Distance::has_data() const
{
    return administrative.is_set
	|| (ospfv3 !=  nullptr && ospfv3->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(administrative.operation)
	|| (ospfv3 !=  nullptr && ospfv3->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative.is_set || is_set(administrative.operation)) leaf_name_data.push_back(administrative.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 != nullptr)
        {
            children["ospfv3"] = ospfv3;
        }
        else
        {
            ospfv3 = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_>();
            ospfv3->parent = this;
            children["ospfv3"] = ospfv3;
        }
        return children.at("ospfv3");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Distance::get_children()
{
    if(children.find("ospfv3") == children.end())
    {
        if(ospfv3 != nullptr)
        {
            children["ospfv3"] = ospfv3;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative")
    {
        administrative = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::Ospfv3_()
    :
    external{YType::uint32, "external"},
    inter_area{YType::uint32, "inter-area"},
    intra_area{YType::uint32, "intra-area"}
{
    yang_name = "ospfv3"; yang_parent_name = "distance";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::~Ospfv3_()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::has_data() const
{
    return external.is_set
	|| inter_area.is_set
	|| intra_area.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(inter_area.operation)
	|| is_set(intra_area.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3_' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (inter_area.is_set || is_set(inter_area.operation)) leaf_name_data.push_back(inter_area.get_name_leafdata());
    if (intra_area.is_set || is_set(intra_area.operation)) leaf_name_data.push_back(intra_area.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "inter-area")
    {
        inter_area = value;
    }
    if(value_path == "intra-area")
    {
        intra_area = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::Maximum()
    :
    interfaces{YType::uint32, "interfaces"},
    paths{YType::uint32, "paths"}
    	,
    redistributed_prefixes(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes>())
{
    redistributed_prefixes->parent = this;
    children["redistributed-prefixes"] = redistributed_prefixes;

    yang_name = "maximum"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::~Maximum()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::has_data() const
{
    return interfaces.is_set
	|| paths.is_set
	|| (redistributed_prefixes !=  nullptr && redistributed_prefixes->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(interfaces.operation)
	|| is_set(paths.operation)
	|| (redistributed_prefixes !=  nullptr && redistributed_prefixes->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.operation)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (paths.is_set || is_set(paths.operation)) leaf_name_data.push_back(paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redistributed-prefixes")
    {
        if(redistributed_prefixes != nullptr)
        {
            children["redistributed-prefixes"] = redistributed_prefixes;
        }
        else
        {
            redistributed_prefixes = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes>();
            redistributed_prefixes->parent = this;
            children["redistributed-prefixes"] = redistributed_prefixes;
        }
        return children.at("redistributed-prefixes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::get_children()
{
    if(children.find("redistributed-prefixes") == children.end())
    {
        if(redistributed_prefixes != nullptr)
        {
            children["redistributed-prefixes"] = redistributed_prefixes;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interfaces")
    {
        interfaces = value;
    }
    if(value_path == "paths")
    {
        paths = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::RedistributedPrefixes()
    :
    prefixes{YType::uint32, "prefixes"},
    threshold{YType::uint32, "threshold"},
    warning_only{YType::empty, "warning-only"}
{
    yang_name = "redistributed-prefixes"; yang_parent_name = "maximum";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::~RedistributedPrefixes()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::has_data() const
{
    return prefixes.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(prefixes.operation)
	|| is_set(threshold.operation)
	|| is_set(warning_only.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributed-prefixes";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistributedPrefixes' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefixes.is_set || is_set(prefixes.operation)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefixes")
    {
        prefixes = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistributes()
{
    yang_name = "redistributes"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::~Redistributes()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::has_data() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::has_operation() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributes";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistributes' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redistribute")
    {
        for(auto const & c : redistribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute>();
        c->parent = this;
        redistribute.push_back(std::move(c));
        children[segment_path] = redistribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::get_children()
{
    for (auto const & c : redistribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Redistribute()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    connected_or_static_or_subscriber_or_mobile(nullptr) // presence node
{
    yang_name = "redistribute"; yang_parent_name = "redistributes";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::~Redistribute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospfv3_or_isis_or_application[index]->has_data())
            return true;
    }
    return protocol_name.is_set
	|| (connected_or_static_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_subscriber_or_mobile->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospfv3_or_isis_or_application[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| (connected_or_static_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_subscriber_or_mobile->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(std::move(c));
        children[segment_path] = bgp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "connected-or-static-or-subscriber-or-mobile")
    {
        if(connected_or_static_or_subscriber_or_mobile != nullptr)
        {
            children["connected-or-static-or-subscriber-or-mobile"] = connected_or_static_or_subscriber_or_mobile;
        }
        else
        {
            connected_or_static_or_subscriber_or_mobile = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile>();
            connected_or_static_or_subscriber_or_mobile->parent = this;
            children["connected-or-static-or-subscriber-or-mobile"] = connected_or_static_or_subscriber_or_mobile;
        }
        return children.at("connected-or-static-or-subscriber-or-mobile");
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(std::move(c));
        children[segment_path] = eigrp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ospfv3-or-isis-or-application")
    {
        for(auto const & c : ospfv3_or_isis_or_application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication>();
        c->parent = this;
        ospfv3_or_isis_or_application.push_back(std::move(c));
        children[segment_path] = ospfv3_or_isis_or_application.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::get_children()
{
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("connected-or-static-or-subscriber-or-mobile") == children.end())
    {
        if(connected_or_static_or_subscriber_or_mobile != nullptr)
        {
            children["connected-or-static-or-subscriber-or-mobile"] = connected_or_static_or_subscriber_or_mobile;
        }
    }

    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ospfv3_or_isis_or_application)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::ConnectedOrStaticOrSubscriberOrMobile()
    :
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::int32, "tag"}
{
    yang_name = "connected-or-static-or-subscriber-or-mobile"; yang_parent_name = "redistribute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::~ConnectedOrStaticOrSubscriberOrMobile()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::has_data() const
{
    return default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::has_operation() const
{
    return is_set(operation)
	|| is_set(default_metric.operation)
	|| is_set(eigrp_route_type.operation)
	|| is_set(external_route_type.operation)
	|| is_set(internal_route_type.operation)
	|| is_set(isis_route_type.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_route_type.operation)
	|| is_set(preserve_med.operation)
	|| is_set(preserve_med_info.operation)
	|| is_set(redistribute_route.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(tag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-or-static-or-subscriber-or-mobile";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedOrStaticOrSubscriberOrMobile' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.operation)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.operation)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.operation)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.operation)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.operation)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.operation)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.operation)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.operation)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::Bgp()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::int32, "tag"}
{
    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::~Bgp()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(default_metric.operation)
	|| is_set(eigrp_route_type.operation)
	|| is_set(external_route_type.operation)
	|| is_set(internal_route_type.operation)
	|| is_set(isis_route_type.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_route_type.operation)
	|| is_set(preserve_med.operation)
	|| is_set(preserve_med_info.operation)
	|| is_set(redistribute_route.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(tag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.operation)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.operation)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.operation)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.operation)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.operation)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.operation)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.operation)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.operation)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::Ospfv3OrIsisOrApplication()
    :
    process_name{YType::str, "process-name"},
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::int32, "tag"}
{
    yang_name = "ospfv3-or-isis-or-application"; yang_parent_name = "redistribute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::~Ospfv3OrIsisOrApplication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::has_data() const
{
    return process_name.is_set
	|| default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::has_operation() const
{
    return is_set(operation)
	|| is_set(process_name.operation)
	|| is_set(default_metric.operation)
	|| is_set(eigrp_route_type.operation)
	|| is_set(external_route_type.operation)
	|| is_set(internal_route_type.operation)
	|| is_set(isis_route_type.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_route_type.operation)
	|| is_set(preserve_med.operation)
	|| is_set(preserve_med_info.operation)
	|| is_set(redistribute_route.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(tag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-or-isis-or-application" <<"[process-name='" <<process_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3OrIsisOrApplication' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.operation)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.operation)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.operation)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.operation)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.operation)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.operation)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.operation)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.operation)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-name")
    {
        process_name = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::Eigrp()
    :
    as_xx{YType::uint32, "as-xx"},
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::int32, "tag"}
{
    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::~Eigrp()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::has_data() const
{
    return as_xx.is_set
	|| default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(default_metric.operation)
	|| is_set(eigrp_route_type.operation)
	|| is_set(external_route_type.operation)
	|| is_set(internal_route_type.operation)
	|| is_set(isis_route_type.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_route_type.operation)
	|| is_set(preserve_med.operation)
	|| is_set(preserve_med_info.operation)
	|| is_set(redistribute_route.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(tag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-xx='" <<as_xx <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.operation)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.operation)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.operation)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.operation)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.operation)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.operation)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.operation)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.operation)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Ignore()
    :
    lsa(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa>())
{
    lsa->parent = this;
    children["lsa"] = lsa;

    yang_name = "ignore"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::~Ignore()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::has_operation() const
{
    return is_set(operation)
	|| (lsa !=  nullptr && lsa->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ignore' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa")
    {
        if(lsa != nullptr)
        {
            children["lsa"] = lsa;
        }
        else
        {
            lsa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa>();
            lsa->parent = this;
            children["lsa"] = lsa;
        }
        return children.at("lsa");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::get_children()
{
    if(children.find("lsa") == children.end())
    {
        if(lsa != nullptr)
        {
            children["lsa"] = lsa;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::Lsa()
    :
    mospf{YType::empty, "mospf"}
{
    yang_name = "lsa"; yang_parent_name = "ignore";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::has_data() const
{
    return mospf.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(mospf.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsa' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mospf.is_set || is_set(mospf.operation)) leaf_name_data.push_back(mospf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mospf")
    {
        mospf = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeListOut()
    :
    distribute_outs(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts>())
{
    distribute_outs->parent = this;
    children["distribute-outs"] = distribute_outs;

    yang_name = "distribute-list-out"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::~DistributeListOut()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::has_data() const
{
    return (distribute_outs !=  nullptr && distribute_outs->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::has_operation() const
{
    return is_set(operation)
	|| (distribute_outs !=  nullptr && distribute_outs->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list-out";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeListOut' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "distribute-outs")
    {
        if(distribute_outs != nullptr)
        {
            children["distribute-outs"] = distribute_outs;
        }
        else
        {
            distribute_outs = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts>();
            distribute_outs->parent = this;
            children["distribute-outs"] = distribute_outs;
        }
        return children.at("distribute-outs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::get_children()
{
    if(children.find("distribute-outs") == children.end())
    {
        if(distribute_outs != nullptr)
        {
            children["distribute-outs"] = distribute_outs;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOuts()
{
    yang_name = "distribute-outs"; yang_parent_name = "distribute-list-out";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::~DistributeOuts()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::has_data() const
{
    for (std::size_t index=0; index<distribute_out.size(); index++)
    {
        if(distribute_out[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::has_operation() const
{
    for (std::size_t index=0; index<distribute_out.size(); index++)
    {
        if(distribute_out[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-outs";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeOuts' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "distribute-out")
    {
        for(auto const & c : distribute_out)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut>();
        c->parent = this;
        distribute_out.push_back(std::move(c));
        children[segment_path] = distribute_out.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::get_children()
{
    for (auto const & c : distribute_out)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::DistributeOut()
    :
    protocol_name{YType::enumeration, "protocol-name"}
{
    yang_name = "distribute-out"; yang_parent_name = "distribute-outs";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::~DistributeOut()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::has_data() const
{
    for (std::size_t index=0; index<as_yy_and_as_xx_and_process_name.size(); index++)
    {
        if(as_yy_and_as_xx_and_process_name[index]->has_data())
            return true;
    }
    return protocol_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::has_operation() const
{
    for (std::size_t index=0; index<as_yy_and_as_xx_and_process_name.size(); index++)
    {
        if(as_yy_and_as_xx_and_process_name[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(protocol_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-out" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeOut' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-yy-and-as-xx-and-process-name")
    {
        for(auto const & c : as_yy_and_as_xx_and_process_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName>();
        c->parent = this;
        as_yy_and_as_xx_and_process_name.push_back(std::move(c));
        children[segment_path] = as_yy_and_as_xx_and_process_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::get_children()
{
    for (auto const & c : as_yy_and_as_xx_and_process_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::AsYyAndAsXxAndProcessName()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    process_name{YType::str, "process-name"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "as-yy-and-as-xx-and-process-name"; yang_parent_name = "distribute-out";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::~AsYyAndAsXxAndProcessName()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| process_name.is_set
	|| prefix_list.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(process_name.operation)
	|| is_set(prefix_list.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-yy-and-as-xx-and-process-name" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']" <<"[process-name='" <<process_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsYyAndAsXxAndProcessName' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "process-name")
    {
        process_name = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In>())
{
    in->parent = this;
    children["in"] = in;

    yang_name = "distribute-list"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::~DistributeList()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::has_data() const
{
    return (in !=  nullptr && in->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "in")
    {
        if(in != nullptr)
        {
            children["in"] = in;
        }
        else
        {
            in = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In>();
            in->parent = this;
            children["in"] = in;
        }
        return children.at("in");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::get_children()
{
    if(children.find("in") == children.end())
    {
        if(in != nullptr)
        {
            children["in"] = in;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "in"; yang_parent_name = "distribute-list";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::~In()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::has_data() const
{
    return prefix_list.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::StubRouter()
    :
    max_metric(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric>())
	,rbit(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit>())
	,v6bit(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit>())
{
    max_metric->parent = this;
    children["max-metric"] = max_metric;

    rbit->parent = this;
    children["rbit"] = rbit;

    v6bit->parent = this;
    children["v6bit"] = v6bit;

    yang_name = "stub-router"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::~StubRouter()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::has_data() const
{
    return (max_metric !=  nullptr && max_metric->has_data())
	|| (rbit !=  nullptr && rbit->has_data())
	|| (v6bit !=  nullptr && v6bit->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::has_operation() const
{
    return is_set(operation)
	|| (max_metric !=  nullptr && max_metric->has_operation())
	|| (rbit !=  nullptr && rbit->has_operation())
	|| (v6bit !=  nullptr && v6bit->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-router";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StubRouter' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "max-metric")
    {
        if(max_metric != nullptr)
        {
            children["max-metric"] = max_metric;
        }
        else
        {
            max_metric = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric>();
            max_metric->parent = this;
            children["max-metric"] = max_metric;
        }
        return children.at("max-metric");
    }

    if(child_yang_name == "rbit")
    {
        if(rbit != nullptr)
        {
            children["rbit"] = rbit;
        }
        else
        {
            rbit = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit>();
            rbit->parent = this;
            children["rbit"] = rbit;
        }
        return children.at("rbit");
    }

    if(child_yang_name == "v6bit")
    {
        if(v6bit != nullptr)
        {
            children["v6bit"] = v6bit;
        }
        else
        {
            v6bit = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit>();
            v6bit->parent = this;
            children["v6bit"] = v6bit;
        }
        return children.at("v6bit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::get_children()
{
    if(children.find("max-metric") == children.end())
    {
        if(max_metric != nullptr)
        {
            children["max-metric"] = max_metric;
        }
    }

    if(children.find("rbit") == children.end())
    {
        if(rbit != nullptr)
        {
            children["rbit"] = rbit;
        }
    }

    if(children.find("v6bit") == children.end())
    {
        if(v6bit != nullptr)
        {
            children["v6bit"] = v6bit;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::Rbit()
    :
    always{YType::empty, "always"},
    enable{YType::empty, "enable"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    on_switchover{YType::uint32, "on-switchover"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup>())
{
    on_startup->parent = this;
    children["on-startup"] = on_startup;

    yang_name = "rbit"; yang_parent_name = "stub-router";
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::~Rbit()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::has_data() const
{
    return always.is_set
	|| enable.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| on_switchover.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation)
	|| is_set(enable.operation)
	|| is_set(external_lsa.operation)
	|| is_set(include_stub.operation)
	|| is_set(on_proc_migration.operation)
	|| is_set(on_proc_restart.operation)
	|| is_set(on_switchover.operation)
	|| is_set(summary_lsa.operation)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rbit";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rbit' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.operation)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.operation)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (on_switchover.is_set || is_set(on_switchover.operation)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "on-startup")
    {
        if(on_startup != nullptr)
        {
            children["on-startup"] = on_startup;
        }
        else
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup>();
            on_startup->parent = this;
            children["on-startup"] = on_startup;
        }
        return children.at("on-startup");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::get_children()
{
    if(children.find("on-startup") == children.end())
    {
        if(on_startup != nullptr)
        {
            children["on-startup"] = on_startup;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
    }
    if(value_path == "on-switchover")
    {
        on_switchover = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "on-startup"; yang_parent_name = "rbit";
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::~OnStartup()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::has_data() const
{
    return wait_for_bgp.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::has_operation() const
{
    return is_set(operation)
	|| is_set(wait_for_bgp.operation)
	|| is_set(wait_time.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OnStartup' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.operation)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::V6Bit()
    :
    always{YType::empty, "always"},
    enable{YType::empty, "enable"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    on_switchover{YType::uint32, "on-switchover"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup>())
{
    on_startup->parent = this;
    children["on-startup"] = on_startup;

    yang_name = "v6bit"; yang_parent_name = "stub-router";
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::~V6Bit()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::has_data() const
{
    return always.is_set
	|| enable.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| on_switchover.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation)
	|| is_set(enable.operation)
	|| is_set(external_lsa.operation)
	|| is_set(include_stub.operation)
	|| is_set(on_proc_migration.operation)
	|| is_set(on_proc_restart.operation)
	|| is_set(on_switchover.operation)
	|| is_set(summary_lsa.operation)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6bit";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V6Bit' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.operation)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.operation)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (on_switchover.is_set || is_set(on_switchover.operation)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "on-startup")
    {
        if(on_startup != nullptr)
        {
            children["on-startup"] = on_startup;
        }
        else
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup>();
            on_startup->parent = this;
            children["on-startup"] = on_startup;
        }
        return children.at("on-startup");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::get_children()
{
    if(children.find("on-startup") == children.end())
    {
        if(on_startup != nullptr)
        {
            children["on-startup"] = on_startup;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
    }
    if(value_path == "on-switchover")
    {
        on_switchover = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "on-startup"; yang_parent_name = "v6bit";
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::~OnStartup()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::has_data() const
{
    return wait_for_bgp.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::has_operation() const
{
    return is_set(operation)
	|| is_set(wait_for_bgp.operation)
	|| is_set(wait_time.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OnStartup' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.operation)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::MaxMetric()
    :
    always{YType::empty, "always"},
    enable{YType::empty, "enable"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    on_switchover{YType::uint32, "on-switchover"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup>())
{
    on_startup->parent = this;
    children["on-startup"] = on_startup;

    yang_name = "max-metric"; yang_parent_name = "stub-router";
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::~MaxMetric()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::has_data() const
{
    return always.is_set
	|| enable.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| on_switchover.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation)
	|| is_set(enable.operation)
	|| is_set(external_lsa.operation)
	|| is_set(include_stub.operation)
	|| is_set(on_proc_migration.operation)
	|| is_set(on_proc_restart.operation)
	|| is_set(on_switchover.operation)
	|| is_set(summary_lsa.operation)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxMetric' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.operation)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.operation)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.operation)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.operation)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (on_switchover.is_set || is_set(on_switchover.operation)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.operation)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "on-startup")
    {
        if(on_startup != nullptr)
        {
            children["on-startup"] = on_startup;
        }
        else
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup>();
            on_startup->parent = this;
            children["on-startup"] = on_startup;
        }
        return children.at("on-startup");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::get_children()
{
    if(children.find("on-startup") == children.end())
    {
        if(on_startup != nullptr)
        {
            children["on-startup"] = on_startup;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
    }
    if(value_path == "on-switchover")
    {
        on_switchover = value;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "on-startup"; yang_parent_name = "max-metric";
}

Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::~OnStartup()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::has_data() const
{
    return wait_for_bgp.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::has_operation() const
{
    return is_set(operation)
	|| is_set(wait_for_bgp.operation)
	|| is_set(wait_time.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OnStartup' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.operation)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::~Bfd()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect_mode.operation)
	|| is_set(interval.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.operation)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All>())
{
    all->parent = this;
    children["all"] = all;

    yang_name = "database-filter"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::~DatabaseFilter()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all")
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
        else
        {
            all = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All>();
            all->parent = this;
            children["all"] = all;
        }
        return children.at("all");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::get_children()
{
    if(children.find("all") == children.end())
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::All()
    :
    out{YType::empty, "out"}
{
    yang_name = "all"; yang_parent_name = "database-filter";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::~All()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::has_operation() const
{
    return is_set(operation)
	|| is_set(out.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "authentication"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::has_data() const
{
    return algorithm.is_set
	|| enable.is_set
	|| password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::GracefulRestart()
    :
    enable{YType::empty, "enable"},
    helper{YType::empty, "helper"},
    interval{YType::uint32, "interval"},
    lifetime{YType::uint32, "lifetime"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{
    yang_name = "graceful-restart"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::~GracefulRestart()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::has_data() const
{
    return enable.is_set
	|| helper.is_set
	|| interval.is_set
	|| lifetime.is_set
	|| strict_lsa_checking.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(helper.operation)
	|| is_set(interval.operation)
	|| is_set(lifetime.operation)
	|| is_set(strict_lsa_checking.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (helper.is_set || is_set(helper.operation)) leaf_name_data.push_back(helper.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.operation)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "helper")
    {
        helper = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{
    yang_name = "default-information"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::~DefaultInformation()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "originate")
    {
        if(originate != nullptr)
        {
            children["originate"] = originate;
        }
        else
        {
            originate = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate>();
            originate->parent = this;
            children["originate"] = originate;
        }
        return children.at("originate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::get_children()
{
    if(children.find("originate") == children.end())
    {
        if(originate != nullptr)
        {
            children["originate"] = originate;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::Originate()
    :
    always{YType::boolean, "always"},
    metric{YType::uint32, "metric"},
    metric_type{YType::uint32, "metric-type"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::int32, "tag"}
{
    yang_name = "originate"; yang_parent_name = "default-information";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::~Originate()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::has_data() const
{
    return always.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(tag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Originate' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::ProcessScope()
    :
    fast_reroute(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute>())
{
    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    yang_name = "process-scope"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::~ProcessScope()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::has_data() const
{
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::has_operation() const
{
    return is_set(operation)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-scope";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessScope' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::get_children()
{
    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "process-scope";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::Encryption()
    :
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"},
    enable{YType::boolean, "enable"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "encryption"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::has_data() const
{
    return authentication_algorithm.is_set
	|| authentication_password.is_set
	|| enable.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_algorithm.operation)
	|| is_set(authentication_password.operation)
	|| is_set(enable.operation)
	|| is_set(encryption_algorithm.operation)
	|| is_set(encryption_password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.operation)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.operation)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.operation)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.operation)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::AutoCost()
    :
    disable{YType::empty, "disable"},
    reference_bandwidth{YType::uint32, "reference-bandwidth"}
{
    yang_name = "auto-cost"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::~AutoCost()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::has_data() const
{
    return disable.is_set
	|| reference_bandwidth.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(reference_bandwidth.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-cost";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoCost' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (reference_bandwidth.is_set || is_set(reference_bandwidth.operation)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
    }
}

Ospfv3::Processes::Process::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{
    yang_name = "af"; yang_parent_name = "process";
}

Ospfv3::Processes::Process::Af::~Af()
{
}

bool Ospfv3::Processes::Process::Af::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set;
}

bool Ospfv3::Processes::Process::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation);
}

std::string Ospfv3::Processes::Process::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Af::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

Ospfv3::Processes::Process::TraceBufs::TraceBufs()
{
    yang_name = "trace-bufs"; yang_parent_name = "process";
}

Ospfv3::Processes::Process::TraceBufs::~TraceBufs()
{
}

bool Ospfv3::Processes::Process::TraceBufs::has_data() const
{
    for (std::size_t index=0; index<trace_buf.size(); index++)
    {
        if(trace_buf[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::TraceBufs::has_operation() const
{
    for (std::size_t index=0; index<trace_buf.size(); index++)
    {
        if(trace_buf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::TraceBufs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-bufs";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::TraceBufs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TraceBufs' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::TraceBufs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trace-buf")
    {
        for(auto const & c : trace_buf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::TraceBufs::TraceBuf>();
        c->parent = this;
        trace_buf.push_back(std::move(c));
        children[segment_path] = trace_buf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::TraceBufs::get_children()
{
    for (auto const & c : trace_buf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::TraceBufs::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::TraceBufs::TraceBuf::TraceBuf()
    :
    trace_buf_name{YType::str, "trace-buf-name"},
    bufsize{YType::enumeration, "bufsize"}
{
    yang_name = "trace-buf"; yang_parent_name = "trace-bufs";
}

Ospfv3::Processes::Process::TraceBufs::TraceBuf::~TraceBuf()
{
}

bool Ospfv3::Processes::Process::TraceBufs::TraceBuf::has_data() const
{
    return trace_buf_name.is_set
	|| bufsize.is_set;
}

bool Ospfv3::Processes::Process::TraceBufs::TraceBuf::has_operation() const
{
    return is_set(operation)
	|| is_set(trace_buf_name.operation)
	|| is_set(bufsize.operation);
}

std::string Ospfv3::Processes::Process::TraceBufs::TraceBuf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-buf" <<"[trace-buf-name='" <<trace_buf_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::TraceBufs::TraceBuf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TraceBuf' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trace_buf_name.is_set || is_set(trace_buf_name.operation)) leaf_name_data.push_back(trace_buf_name.get_name_leafdata());
    if (bufsize.is_set || is_set(bufsize.operation)) leaf_name_data.push_back(bufsize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::TraceBufs::TraceBuf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::TraceBufs::TraceBuf::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::TraceBufs::TraceBuf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trace-buf-name")
    {
        trace_buf_name = value;
    }
    if(value_path == "bufsize")
    {
        bufsize = value;
    }
}


}
}

