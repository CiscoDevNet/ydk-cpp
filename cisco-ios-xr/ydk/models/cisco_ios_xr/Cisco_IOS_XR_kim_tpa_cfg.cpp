
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
    vrf_names(std::make_shared<Tpa::VrfNames>())
    , logging(std::make_shared<Tpa::Logging>())
    , statistics(std::make_shared<Tpa::Statistics>())
{
    vrf_names->parent = this;
    logging->parent = this;
    statistics->parent = this;

    yang_name = "tpa"; yang_parent_name = "Cisco-IOS-XR-kim-tpa-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Tpa::~Tpa()
{
}

bool Tpa::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_names !=  nullptr && vrf_names->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Tpa::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_names !=  nullptr && vrf_names->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Tpa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-names")
    {
        if(vrf_names == nullptr)
        {
            vrf_names = std::make_shared<Tpa::VrfNames>();
        }
        return vrf_names;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Tpa::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Tpa::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf_names != nullptr)
    {
        children["vrf-names"] = vrf_names;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
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
    if(name == "vrf-names" || name == "logging" || name == "statistics")
        return true;
    return false;
}

Tpa::VrfNames::VrfNames()
    :
    vrf_name(this, {"vrf_name"})
{

    yang_name = "vrf-names"; yang_parent_name = "tpa"; is_top_level_class = false; has_list_ancestor = false; 
}

Tpa::VrfNames::~VrfNames()
{
}

bool Tpa::VrfNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Tpa::VrfNames::has_operation() const
{
    for (std::size_t index=0; index<vrf_name.len(); index++)
    {
        if(vrf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tpa::VrfNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/" << get_segment_path();
    return path_buffer.str();
}

std::string Tpa::VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-name")
    {
        auto c = std::make_shared<Tpa::VrfNames::VrfName>();
        c->parent = this;
        vrf_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    vrf_name{YType::str, "vrf-name"},
    disable{YType::empty, "disable"}
        ,
    east_west_names(std::make_shared<Tpa::VrfNames::VrfName::EastWestNames>())
    , address_family(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily>())
{
    east_west_names->parent = this;
    address_family->parent = this;

    yang_name = "vrf-name"; yang_parent_name = "vrf-names"; is_top_level_class = false; has_list_ancestor = false; 
}

Tpa::VrfNames::VrfName::~VrfName()
{
}

bool Tpa::VrfNames::VrfName::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| disable.is_set
	|| (east_west_names !=  nullptr && east_west_names->has_data())
	|| (address_family !=  nullptr && address_family->has_data());
}

bool Tpa::VrfNames::VrfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (east_west_names !=  nullptr && east_west_names->has_operation())
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Tpa::VrfNames::VrfName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/vrf-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Tpa::VrfNames::VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-name";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "east-west-names")
    {
        if(east_west_names == nullptr)
        {
            east_west_names = std::make_shared<Tpa::VrfNames::VrfName::EastWestNames>();
        }
        return east_west_names;
    }

    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(east_west_names != nullptr)
    {
        children["east-west-names"] = east_west_names;
    }

    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
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
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "east-west-names" || name == "address-family" || name == "vrf-name" || name == "disable")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::EastWestNames::EastWestNames()
    :
    east_west_name(this, {"east_west_name"})
{

    yang_name = "east-west-names"; yang_parent_name = "vrf-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Tpa::VrfNames::VrfName::EastWestNames::~EastWestNames()
{
}

bool Tpa::VrfNames::VrfName::EastWestNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<east_west_name.len(); index++)
    {
        if(east_west_name[index]->has_data())
            return true;
    }
    return false;
}

bool Tpa::VrfNames::VrfName::EastWestNames::has_operation() const
{
    for (std::size_t index=0; index<east_west_name.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::EastWestNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::EastWestNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "east-west-name")
    {
        auto c = std::make_shared<Tpa::VrfNames::VrfName::EastWestNames::EastWestName>();
        c->parent = this;
        east_west_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::EastWestNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : east_west_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    vrf{YType::str, "vrf"},
    interface{YType::str, "interface"}
{

    yang_name = "east-west-name"; yang_parent_name = "east-west-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Tpa::VrfNames::VrfName::EastWestNames::EastWestName::~EastWestName()
{
}

bool Tpa::VrfNames::VrfName::EastWestNames::EastWestName::has_data() const
{
    if (is_presence_container) return true;
    return east_west_name.is_set
	|| vrf.is_set
	|| interface.is_set;
}

bool Tpa::VrfNames::VrfName::EastWestNames::EastWestName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(east_west_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "east-west-name";
    ADD_KEY_TOKEN(east_west_name, "east-west-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (east_west_name.is_set || is_set(east_west_name.yfilter)) leaf_name_data.push_back(east_west_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::EastWestNames::EastWestName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "east-west-name")
    {
        east_west_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::EastWestNames::EastWestName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "east-west-name" || name == "vrf" || name == "interface")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::AddressFamily()
    :
    ipv6(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6>())
    , ipv4(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4>())
{
    ipv6->parent = this;
    ipv4->parent = this;

    yang_name = "address-family"; yang_parent_name = "vrf-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Tpa::VrfNames::VrfName::AddressFamily::~AddressFamily()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Tpa::VrfNames::VrfName::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Tpa::VrfNames::VrfName::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
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
    if(name == "ipv6" || name == "ipv4")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::Ipv6()
    :
    default_route{YType::str, "default-route"}
        ,
    interface_names(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames>())
    , update_source(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource>())
{
    interface_names->parent = this;
    update_source->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::~Ipv6()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return default_route.is_set
	|| (interface_names !=  nullptr && interface_names->has_data())
	|| (update_source !=  nullptr && update_source->has_data());
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| (interface_names !=  nullptr && interface_names->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation());
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-names")
    {
        if(interface_names == nullptr)
        {
            interface_names = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames>();
        }
        return interface_names;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource>();
        }
        return update_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_names != nullptr)
    {
        children["interface-names"] = interface_names;
    }

    if(update_source != nullptr)
    {
        children["update-source"] = update_source;
    }

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
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-names" || name == "update-source" || name == "default-route")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceNames()
    :
    interface_name(this, {"interface_name"})
{

    yang_name = "interface-names"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::~InterfaceNames()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_name.len(); index++)
    {
        if(interface_name[index]->has_data())
            return true;
    }
    return false;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::has_operation() const
{
    for (std::size_t index=0; index<interface_name.len(); index++)
    {
        if(interface_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-name")
    {
        auto c = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName>();
        c->parent = this;
        interface_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName::InterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    egress_interface_source{YType::str, "egress-interface-source"}
{

    yang_name = "interface-name"; yang_parent_name = "interface-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName::~InterfaceName()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| egress_interface_source.is_set;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(egress_interface_source.yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (egress_interface_source.is_set || is_set(egress_interface_source.yfilter)) leaf_name_data.push_back(egress_interface_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface-source")
    {
        egress_interface_source = value;
        egress_interface_source.value_namespace = name_space;
        egress_interface_source.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "egress-interface-source")
    {
        egress_interface_source.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "egress-interface-source")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource::UpdateSource()
    :
    interface_name{YType::str, "interface-name"},
    active_management{YType::empty, "active-management"}
{

    yang_name = "update-source"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource::~UpdateSource()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| active_management.is_set;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(active_management.yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active_management.is_set || is_set(active_management.yfilter)) leaf_name_data.push_back(active_management.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-management")
    {
        active_management = value;
        active_management.value_namespace = name_space;
        active_management.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "active-management")
    {
        active_management.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "active-management")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::Ipv4()
    :
    default_route{YType::str, "default-route"}
        ,
    interface_names(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames>())
    , update_source(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource>())
{
    interface_names->parent = this;
    update_source->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::~Ipv4()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return default_route.is_set
	|| (interface_names !=  nullptr && interface_names->has_data())
	|| (update_source !=  nullptr && update_source->has_data());
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| (interface_names !=  nullptr && interface_names->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation());
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-names")
    {
        if(interface_names == nullptr)
        {
            interface_names = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames>();
        }
        return interface_names;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource>();
        }
        return update_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_names != nullptr)
    {
        children["interface-names"] = interface_names;
    }

    if(update_source != nullptr)
    {
        children["update-source"] = update_source;
    }

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
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-names" || name == "update-source" || name == "default-route")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceNames()
    :
    interface_name(this, {"interface_name"})
{

    yang_name = "interface-names"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::~InterfaceNames()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_name.len(); index++)
    {
        if(interface_name[index]->has_data())
            return true;
    }
    return false;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::has_operation() const
{
    for (std::size_t index=0; index<interface_name.len(); index++)
    {
        if(interface_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-name")
    {
        auto c = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName>();
        c->parent = this;
        interface_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName::InterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    egress_interface_source{YType::str, "egress-interface-source"}
{

    yang_name = "interface-name"; yang_parent_name = "interface-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName::~InterfaceName()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| egress_interface_source.is_set;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(egress_interface_source.yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (egress_interface_source.is_set || is_set(egress_interface_source.yfilter)) leaf_name_data.push_back(egress_interface_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface-source")
    {
        egress_interface_source = value;
        egress_interface_source.value_namespace = name_space;
        egress_interface_source.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "egress-interface-source")
    {
        egress_interface_source.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "egress-interface-source")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource::UpdateSource()
    :
    interface_name{YType::str, "interface-name"},
    active_management{YType::empty, "active-management"}
{

    yang_name = "update-source"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource::~UpdateSource()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| active_management.is_set;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(active_management.yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active_management.is_set || is_set(active_management.yfilter)) leaf_name_data.push_back(active_management.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-management")
    {
        active_management = value;
        active_management.value_namespace = name_space;
        active_management.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "active-management")
    {
        active_management.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "active-management")
        return true;
    return false;
}

Tpa::Logging::Logging()
    :
    kim(std::make_shared<Tpa::Logging::Kim>())
{
    kim->parent = this;

    yang_name = "logging"; yang_parent_name = "tpa"; is_top_level_class = false; has_list_ancestor = false; 
}

Tpa::Logging::~Logging()
{
}

bool Tpa::Logging::has_data() const
{
    if (is_presence_container) return true;
    return (kim !=  nullptr && kim->has_data());
}

bool Tpa::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (kim !=  nullptr && kim->has_operation());
}

std::string Tpa::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/" << get_segment_path();
    return path_buffer.str();
}

std::string Tpa::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "kim")
    {
        if(kim == nullptr)
        {
            kim = std::make_shared<Tpa::Logging::Kim>();
        }
        return kim;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(kim != nullptr)
    {
        children["kim"] = kim;
    }

    return children;
}

void Tpa::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kim")
        return true;
    return false;
}

Tpa::Logging::Kim::Kim()
    :
    rotation_max{YType::uint32, "rotation-max"},
    file_size_max_kb{YType::uint32, "file-size-max-kb"}
{

    yang_name = "kim"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Tpa::Logging::Kim::~Kim()
{
}

bool Tpa::Logging::Kim::has_data() const
{
    if (is_presence_container) return true;
    return rotation_max.is_set
	|| file_size_max_kb.is_set;
}

bool Tpa::Logging::Kim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rotation_max.yfilter)
	|| ydk::is_set(file_size_max_kb.yfilter);
}

std::string Tpa::Logging::Kim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Tpa::Logging::Kim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::Logging::Kim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rotation_max.is_set || is_set(rotation_max.yfilter)) leaf_name_data.push_back(rotation_max.get_name_leafdata());
    if (file_size_max_kb.is_set || is_set(file_size_max_kb.yfilter)) leaf_name_data.push_back(file_size_max_kb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::Logging::Kim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::Logging::Kim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tpa::Logging::Kim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rotation-max")
    {
        rotation_max = value;
        rotation_max.value_namespace = name_space;
        rotation_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file-size-max-kb")
    {
        file_size_max_kb = value;
        file_size_max_kb.value_namespace = name_space;
        file_size_max_kb.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::Logging::Kim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rotation-max")
    {
        rotation_max.yfilter = yfilter;
    }
    if(value_path == "file-size-max-kb")
    {
        file_size_max_kb.yfilter = yfilter;
    }
}

bool Tpa::Logging::Kim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rotation-max" || name == "file-size-max-kb")
        return true;
    return false;
}

Tpa::Statistics::Statistics()
    :
    max_intf_events{YType::uint32, "max-intf-events"},
    max_lpts_events{YType::uint32, "max-lpts-events"},
    statistics_update_frequency{YType::uint32, "statistics-update-frequency"}
{

    yang_name = "statistics"; yang_parent_name = "tpa"; is_top_level_class = false; has_list_ancestor = false; 
}

Tpa::Statistics::~Statistics()
{
}

bool Tpa::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return max_intf_events.is_set
	|| max_lpts_events.is_set
	|| statistics_update_frequency.is_set;
}

bool Tpa::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_intf_events.yfilter)
	|| ydk::is_set(max_lpts_events.yfilter)
	|| ydk::is_set(statistics_update_frequency.yfilter);
}

std::string Tpa::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/" << get_segment_path();
    return path_buffer.str();
}

std::string Tpa::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_intf_events.is_set || is_set(max_intf_events.yfilter)) leaf_name_data.push_back(max_intf_events.get_name_leafdata());
    if (max_lpts_events.is_set || is_set(max_lpts_events.yfilter)) leaf_name_data.push_back(max_lpts_events.get_name_leafdata());
    if (statistics_update_frequency.is_set || is_set(statistics_update_frequency.yfilter)) leaf_name_data.push_back(statistics_update_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Tpa::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-intf-events")
    {
        max_intf_events = value;
        max_intf_events.value_namespace = name_space;
        max_intf_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lpts-events")
    {
        max_lpts_events = value;
        max_lpts_events.value_namespace = name_space;
        max_lpts_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-update-frequency")
    {
        statistics_update_frequency = value;
        statistics_update_frequency.value_namespace = name_space;
        statistics_update_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-intf-events")
    {
        max_intf_events.yfilter = yfilter;
    }
    if(value_path == "max-lpts-events")
    {
        max_lpts_events.yfilter = yfilter;
    }
    if(value_path == "statistics-update-frequency")
    {
        statistics_update_frequency.yfilter = yfilter;
    }
}

bool Tpa::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-intf-events" || name == "max-lpts-events" || name == "statistics-update-frequency")
        return true;
    return false;
}


}
}

