
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_kim_tpa_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_kim_tpa_cfg {

Tpa::Tpa()
    :
    statistics(std::make_shared<Tpa::Statistics>())
	,vrf_names(std::make_shared<Tpa::VrfNames>())
{
    statistics->parent = this;

    vrf_names->parent = this;

    yang_name = "tpa"; yang_parent_name = "Cisco-IOS-XR-kim-tpa-cfg";
}

Tpa::~Tpa()
{
}

bool Tpa::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data())
	|| (vrf_names !=  nullptr && vrf_names->has_data());
}

bool Tpa::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (vrf_names !=  nullptr && vrf_names->has_operation());
}

std::string Tpa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa";

    return path_buffer.str();

}

const EntityPath Tpa::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Tpa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Tpa::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "vrf-names")
    {
        if(vrf_names == nullptr)
        {
            vrf_names = std::make_shared<Tpa::VrfNames>();
        }
        return vrf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(vrf_names != nullptr)
    {
        children["vrf-names"] = vrf_names;
    }

    return children;
}

void Tpa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Tpa::clone_ptr() const
{
    return std::make_shared<Tpa>();
}

std::string Tpa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Tpa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Tpa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Tpa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Tpa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "vrf-names")
        return true;
    return false;
}

Tpa::VrfNames::VrfNames()
{
    yang_name = "vrf-names"; yang_parent_name = "tpa";
}

Tpa::VrfNames::~VrfNames()
{
}

bool Tpa::VrfNames::has_data() const
{
    for (std::size_t index=0; index<vrf_name.size(); index++)
    {
        if(vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Tpa::VrfNames::has_operation() const
{
    for (std::size_t index=0; index<vrf_name.size(); index++)
    {
        if(vrf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tpa::VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-names";

    return path_buffer.str();

}

const EntityPath Tpa::VrfNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tpa::VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-name")
    {
        for(auto const & c : vrf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tpa::VrfNames::VrfName>();
        c->parent = this;
        vrf_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tpa::VrfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::VrfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::VrfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::VrfName()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    address_family(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily>())
	,east_west_names(std::make_shared<Tpa::VrfNames::VrfName::EastWestNames>())
{
    address_family->parent = this;

    east_west_names->parent = this;

    yang_name = "vrf-name"; yang_parent_name = "vrf-names";
}

Tpa::VrfNames::VrfName::~VrfName()
{
}

bool Tpa::VrfNames::VrfName::has_data() const
{
    return vrf_name.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (east_west_names !=  nullptr && east_west_names->has_data());
}

bool Tpa::VrfNames::VrfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (east_west_names !=  nullptr && east_west_names->has_operation());
}

std::string Tpa::VrfNames::VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-name" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Tpa::VrfNames::VrfName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/vrf-names/" << get_segment_path();
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

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "east-west-names")
    {
        if(east_west_names == nullptr)
        {
            east_west_names = std::make_shared<Tpa::VrfNames::VrfName::EastWestNames>();
        }
        return east_west_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(east_west_names != nullptr)
    {
        children["east-west-names"] = east_west_names;
    }

    return children;
}

void Tpa::VrfNames::VrfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "east-west-names" || name == "vrf-name")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::EastWestNames::EastWestNames()
{
    yang_name = "east-west-names"; yang_parent_name = "vrf-name";
}

Tpa::VrfNames::VrfName::EastWestNames::~EastWestNames()
{
}

bool Tpa::VrfNames::VrfName::EastWestNames::has_data() const
{
    for (std::size_t index=0; index<east_west_name.size(); index++)
    {
        if(east_west_name[index]->has_data())
            return true;
    }
    return false;
}

bool Tpa::VrfNames::VrfName::EastWestNames::has_operation() const
{
    for (std::size_t index=0; index<east_west_name.size(); index++)
    {
        if(east_west_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tpa::VrfNames::VrfName::EastWestNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "east-west-names";

    return path_buffer.str();

}

const EntityPath Tpa::VrfNames::VrfName::EastWestNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EastWestNames' in Cisco_IOS_XR_kim_tpa_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::EastWestNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "east-west-name")
    {
        for(auto const & c : east_west_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tpa::VrfNames::VrfName::EastWestNames::EastWestName>();
        c->parent = this;
        east_west_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::EastWestNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : east_west_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tpa::VrfNames::VrfName::EastWestNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::VrfNames::VrfName::EastWestNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::VrfNames::VrfName::EastWestNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "east-west-name")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::EastWestNames::EastWestName::EastWestName()
    :
    east_west_name{YType::str, "east-west-name"},
    interface{YType::str, "interface"},
    vrf{YType::str, "vrf"}
{
    yang_name = "east-west-name"; yang_parent_name = "east-west-names";
}

Tpa::VrfNames::VrfName::EastWestNames::EastWestName::~EastWestName()
{
}

bool Tpa::VrfNames::VrfName::EastWestNames::EastWestName::has_data() const
{
    return east_west_name.is_set
	|| interface.is_set
	|| vrf.is_set;
}

bool Tpa::VrfNames::VrfName::EastWestNames::EastWestName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(east_west_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "east-west-name" <<"[east-west-name='" <<east_west_name <<"']";

    return path_buffer.str();

}

const EntityPath Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EastWestName' in Cisco_IOS_XR_kim_tpa_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (east_west_name.is_set || is_set(east_west_name.yfilter)) leaf_name_data.push_back(east_west_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tpa::VrfNames::VrfName::EastWestNames::EastWestName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "east-west-name")
    {
        east_west_name = value;
        east_west_name.value_namespace = name_space;
        east_west_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::EastWestNames::EastWestName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "east-west-name")
    {
        east_west_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::EastWestNames::EastWestName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "east-west-name" || name == "interface" || name == "vrf")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::AddressFamily()
    :
    ipv4(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4>())
	,ipv6(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "address-family"; yang_parent_name = "vrf-name";
}

Tpa::VrfNames::VrfName::AddressFamily::~AddressFamily()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Tpa::VrfNames::VrfName::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Tpa::VrfNames::VrfName::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath Tpa::VrfNames::VrfName::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamily' in Cisco_IOS_XR_kim_tpa_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::get_children() const
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

void Tpa::VrfNames::VrfName::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::VrfNames::VrfName::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::Ipv6()
    :
    default_route{YType::str, "default-route"},
    update_source{YType::str, "update-source"}
{
    yang_name = "ipv6"; yang_parent_name = "address-family";
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::~Ipv6()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::has_data() const
{
    return default_route.is_set
	|| update_source.is_set;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| ydk::is_set(update_source.yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_kim_tpa_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (update_source.is_set || is_set(update_source.yfilter)) leaf_name_data.push_back(update_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source")
    {
        update_source = value;
        update_source.value_namespace = name_space;
        update_source.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
    if(value_path == "update-source")
    {
        update_source.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-route" || name == "update-source")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::Ipv4()
    :
    default_route{YType::str, "default-route"},
    update_source{YType::str, "update-source"}
{
    yang_name = "ipv4"; yang_parent_name = "address-family";
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::~Ipv4()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::has_data() const
{
    return default_route.is_set
	|| update_source.is_set;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| ydk::is_set(update_source.yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_kim_tpa_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (update_source.is_set || is_set(update_source.yfilter)) leaf_name_data.push_back(update_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source")
    {
        update_source = value;
        update_source.value_namespace = name_space;
        update_source.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
    if(value_path == "update-source")
    {
        update_source.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-route" || name == "update-source")
        return true;
    return false;
}

Tpa::Statistics::Statistics()
    :
    statistics_update_frequency{YType::int32, "statistics-update-frequency"}
{
    yang_name = "statistics"; yang_parent_name = "tpa";
}

Tpa::Statistics::~Statistics()
{
}

bool Tpa::Statistics::has_data() const
{
    return statistics_update_frequency.is_set;
}

bool Tpa::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistics_update_frequency.yfilter);
}

std::string Tpa::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Tpa::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics_update_frequency.is_set || is_set(statistics_update_frequency.yfilter)) leaf_name_data.push_back(statistics_update_frequency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Tpa::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tpa::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistics-update-frequency")
    {
        statistics_update_frequency = value;
        statistics_update_frequency.value_namespace = name_space;
        statistics_update_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistics-update-frequency")
    {
        statistics_update_frequency.yfilter = yfilter;
    }
}

bool Tpa::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics-update-frequency")
        return true;
    return false;
}


}
}

